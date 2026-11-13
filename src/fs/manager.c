#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ArcResourceAccessor_573580(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 GameRoutine_6313f0(__int64, __int64, _BYTE*, __int64*, __int64, int*);
__int64 GameRoutine_631820(__int64);
__int64 GameRoutine_632cd0(_QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD);
__int64 GameRoutine_636000(_QWORD);
__int64 GameRoutine_66b770(_QWORD*, __int64, _BYTE*, __int64*, __int64);
__int64 GameRoutine_a535e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a53bc0(_QWORD, _QWORD);
__int64 LayoutArchive_5725c0(_QWORD, _QWORD);
__int64 LayoutArchive_573340(_QWORD, _QWORD, _QWORD);
__int64 MultiArcResourceAccessor_574050(_QWORD, _QWORD);
__int64 Registration_17d5020(_QWORD, _QWORD);
__int64 Registration_17d5210(_QWORD, _QWORD);
__int64 RenderTask_13697d0(_QWORD*);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_GetSizeOf(_QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_AcquireWriteLock(_QWORD);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 nn_os_GetSystemTick(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 nn_os_ReleaseWriteLock(_QWORD);
__int64 nn_os_SignalTimerEvent(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_1f8f4e0[])();
extern __int64 (*GameData_1fd01c0[])();
extern __int64 (*GameData_2032be0[])();
extern __int64 (*GameData_20da560[])();
extern __int64 (*font_FontContentLoader_FsFile_vtable[])();
extern __int64 (*fs_BntxFile_vtable[])();
extern __int64 (*fs_GfxFile_vtable[])();
extern __int64 (*fs_PropertyFile_vtable[])();
extern __int64 (*fs_ResFile_vtable[])();
extern __int64 (*fs_ShaderFile_vtable[])();
extern __int64 (*msg_ProjectFile_vtable[])();
extern __int64 (*ui_IconManager_Ui2dIconArcFile_vtable[])();
extern __int64 (*ui_Ui2dArcFile_vtable[])();
extern __int64 GameData_212c3b8;
extern __int64 GameData_21323e0[5];
extern __int64 GameData_21667a8;
extern __int64 GameData_21a60c8;
extern __int64 GameData_21c6790;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c000[5];
extern __int64* GameData_212c008[4];
extern __int64* GameData_212c030[4];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_21c6798;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_637ae0(_QWORD);
void __attribute__((noreturn)) GameRoutine_64aa00(void);
void __attribute__((noreturn)) String_60a1d0();
unsigned __int64 Manager_6326c0(__int64* a1, __int64 a2);
unsigned __int64 Manager_632780(__int64 a1);
__int64 Manager_6328c0(__int64 a1, int a2);
__int64 Manager_632a80(__int64 a1);
__int64 Manager_ThreadExecutor_Unknown4(__int64 a1);
__int64 Manager_ThreadExecutor_Unknown3(_QWORD* a1);
_QWORD* fs_Manager_createFileAsync_fs_File_closure_CloneInto(_QWORD* result,
                                                             _QWORD* a2);
__int64 fs_Manager_createFileAsync_fs_File_closure_Invoke(__int64 a1,
                                                          _BYTE** a2);
__int64 fs_Manager_createFileSync_fs_File_closure_Invoke(__int64 a1,
                                                         _BYTE** a2);
_QWORD* Manager_66cc20(__int64* a1, _QWORD* a2);
_QWORD* fs_Manager_createFileSync_game_ArchiveFile_closure_Invoke(__int64 a1,
                                                                  _BYTE** a2);
_QWORD* fs_Manager_createFileSync_font_FontContentLoader_FsFile_closure_Invoke(
    __int64 a1, __int64* a2);
__int64 fs_Manager_createFileSync_msg_ProjectFile(__int64 a1);
__int64 fs_Manager_createFileSync_fs_ElfFile_closure_Invoke(__int64 a1,
                                                            __int64* a2);
_QWORD* fs_Manager_createFileSync_msg_ProjectFile_closure_Invoke(__int64 a1,
                                                                 __int64* a2);
__int64 fs_Manager_createFileAsync_msg_MessageFile_closure_Invoke(__int64 a1,
                                                                  __int64* a2);
__int64 fs_Manager_createFileSync_msg_MessageFile_closure_Invoke(__int64 a1,
                                                                 __int64* a2);
_QWORD* fs_Manager_createFileAsync_fs_ElfFile_closure_CloneInto(_QWORD* result,
                                                                _QWORD* a2);
__int64 fs_Manager_createFileAsync_fs_ElfFile_closure_Invoke(__int64 a1,
                                                             __int64* a2);
_QWORD* fs_Manager_createFileAsync_fs_GfxFile_closure_Invoke(__int64 a1,
                                                             __int64* a2);
_QWORD* fs_Manager_createFileSync_fs_GfxFile_closure_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 fs_Manager_createFileSync_fs_PropertyFile_closure_Invoke_alt1(
    __int64 a1,
    __int64*
        a2) __asm__("fs_Manager_createFileSync_fs_PropertyFile_closure_Invoke");
_QWORD* fs_Manager_createFileSync_fs_ResFile_closure_Invoke(__int64 a1,
                                                            __int64* a2);
_QWORD* fs_Manager_createFileSync_ui_Ui2dArcFile_closure_Invoke(__int64 a1,
                                                                __int64* a2);
_QWORD* fs_Manager_createFileAsync_ui_Ui2dArcFile_closure_Invoke(__int64 a1,
                                                                 __int64* a2);
__int64 Manager_136a710(__int64 result, unsigned int a2);
_QWORD* Manager_136b340(_QWORD* result, __int64 a2);
_QWORD* fs_Manager_createFileSync_ui_IconManager_Ui2dIconArcFile_closure_Invoke(
    __int64 a1, __int64* a2);
_QWORD* fs_Manager_createFileAsync_fs_BntxFile_closure_CloneInto(_QWORD* result,
                                                                 _QWORD* a2);
_QWORD* fs_Manager_createFileAsync_fs_BntxFile_closure_Invoke(__int64 a1,
                                                              __int64* a2);
_QWORD* fs_Manager_createFileAsync_fs_ShaderFile_closure_Invoke(__int64 a1,
                                                                __int64* a2);
_QWORD* fs_Manager_createFileAsync_fs_ResFile_closure_Invoke(__int64 a1,
                                                             __int64* a2);
_QWORD* fs_Manager_createFileSync_fs_ShaderFile_closure_Invoke(__int64 a1,
                                                               __int64* a2);
_QWORD* fs_Manager_createFileSync_fs_BntxFile_closure_Clone(__int64 a1);
_QWORD* fs_Manager_createFileSync_fs_BntxFile_closure_Invoke(__int64 a1,
                                                             __int64* a2);
__int64 fs_Manager_createFileAsync_fs_PropertyFile_closure_Invoke(__int64 a1,
                                                                  __int64* a2);
__attribute__((swiftcall)) void GameRoutine_632da0(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_573330(_QWORD);
__int64 GameRoutine_59e700(_QWORD, _QWORD);
__int64 GameRoutine_6313f0_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_6313f0");
__int64 GameRoutine_631820_alt1(_QWORD) __asm__("GameRoutine_631820");
__int64 GameRoutine_633980(_QWORD, _QWORD);
__int64 GameRoutine_635a60(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7a8220(_QWORD, _QWORD);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snprintf(_QWORD, _QWORD, const char*, ...);
extern __int64 (*GameData_1fd07d8[])();
extern __int64 GameData_2203100;
extern __int64 eft_g_effectSystem;
extern __int64* snd_g_fileIndex_ptr[2];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                   _QWORD) __asm__("String_60a1d0");
void __attribute__((noreturn))
String_60a1d0_alt2(void) __asm__("String_60a1d0");
__int64 Manager_a527c0(__int64 result, __int64 a2);
__int64 fs_Manager_createFileSync_fs_GfxFile(__int64 a1);
unsigned __int64 Manager_136aaf0_alt2(__int64* a1, unsigned int a2,
                                      __int64 a3) __asm__("Manager_136aaf0");
__int64 Manager_136afb0_alt1(__int64 a1, unsigned int a2,
                             _BYTE* a3) __asm__("Manager_136afb0");
_QWORD*
fs_Manager_createFileAsync_ui_IconManager_Ui2dIconArcFile_closure_Invoke(
    __int64 a1, __int64* a2);
__int64
fs_Manager_createFileSync_fs_BntxFile_closure_DeletingDestructor(__int64 a1);
__int64* GameRoutine_6380e0(__int64, __int64**);
__int64* GameRoutine_644300(__int64* result, __int64*, __int64*);
__int64* GameRoutine_644480(__int64*, __int64*, __int64*, __int64*, __int64*);
__int64* GameRoutine_645610(__int64* result, __int64*, __int64*);
__int64* GameRoutine_645770(__int64*, __int64*, __int64*, __int64*, __int64*);
__int64 GameRoutine_112cc60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17d4db0_alt1(__int64,
                                 __int64) __asm__("GameRoutine_17d4db0");
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_59e700_alt1(__int64, __int64) __asm__("GameRoutine_59e700");
__int64 GameRoutine_631500(__int64 result, _QWORD*);
__int64 GameRoutine_634d80_alt1(_QWORD, _QWORD) __asm__("GameRoutine_634d80");
__int64 GameRoutine_635a60_alt1(__int64, char**, char, char, __int64,
                                __int64) __asm__("GameRoutine_635a60");
unsigned __int128
GameRoutine_635a60_alt1_pair(__int64, char**, char, char, __int64,
                             __int64) __asm__("GameRoutine_635a60");
__int64 GameRoutine_64be60();
__int64 GameRoutine_8319e0(__int64 result, char*, __int64, __int64, char);
__int64 GameRoutine_a4a400(_QWORD, _QWORD);
__int64 GameRoutine_a4c1e0_alt1(_QWORD*, const char*,
                                char) __asm__("GameRoutine_a4c1e0");
__int64 GameRoutine_a542c0(_QWORD, _QWORD);
__int64 Manager_136ac50(__int64, __int64, __int64);
__int64 Manager_66cc20_alt1(_QWORD, _QWORD) __asm__("Manager_66cc20");
__int64 Manager_a4c820(__int64 result, long double);
__int64 Pane_58f8a0(__int64);
__int64 Registration_a4ac60(_QWORD, _QWORD);
__int64 Registration_a4b4a0(__int64*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_CloseDirectory(_QWORD);
__int64 nn_fs_GetDirectoryEntryCount(_QWORD, _QWORD);
__int64 nn_fs_OpenDirectory(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_ReadDirectory(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt2(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1_locale_Destroy_locale(_QWORD);
__n128 GameRoutine_17d4db0(__int64, __int64);
__n128 nn_mem_StandardAllocator_Free_alt3(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
bool GameRoutine_644700(__int64*, __int64*);
bool GameRoutine_645980(__int64*, __int64*);
const char* GameRoutine_a4aea0(__int64);
extern _UNKNOWN GameData_1ac690d;
extern _UNKNOWN GameData_1f90270;
extern __int64 (***GameData_212c3c8)();
extern __int64 (*fs_Memory_vtable_ptr)();
extern __int64 GameData_21759e0;
extern __int64 GameData_21fdd20;
extern __int64 snd_g_fileIndex;
extern char* msg_MessageManager_empty_text_;
extern char** msg_MessageManager_empty_text__ptr;
unsigned __int64 GameRoutine_6360e0(__int64, __int64, unsigned __int64, char,
                                    int);
unsigned __int64 GameRoutine_a4c1e0(_QWORD*, const char*, char);
unsigned __int8* ProcHubSeqEnter_919600(unsigned __int8*, unsigned __int8*);
void GameRoutine_a51920();
void Manager_136aaf0_alt1(__int64*, unsigned int,
                          __int64) __asm__("Manager_136aaf0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_64aa00_alt1() __asm__("GameRoutine_64aa00");
void __attribute__((noreturn)) GameRoutine_a52f60(_QWORD);
void __attribute__((noreturn))
String_60a1d0_alt3(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                   _QWORD) __asm__("String_60a1d0");
void __attribute__((noreturn))
String_60a1d0_alt4(_QWORD) __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a230(_QWORD);
void fs_Manager_setCacheType_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 Manager_643620(__int64 result, __int64* a2, __int64 a3, char a4);
__int64 Manager_644a20(__int64 result, __int64* a2, __int64 a3, char a4);
__int64 fs_Manager_createFileAsync_fs_File(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void Manager_66c4e0(PSEUDO_X8 x8_,
                                               unsigned __int8* a1);
char* Manager_a4a540(__int64 a1, unsigned __int8* a2);
__int64 Manager_a4b3c0(__int64 a1);
__int64 Manager_a4b6c0(_QWORD* a1, char a2);
__int64 Manager_a4cfa0_alt1(__int64 a1,
                            long double a2) __asm__("Manager_a4cfa0");
__attribute__((swiftcall)) void
Manager_a4fd20_alt1(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3,
                    char a4) __asm__("Manager_a4fd20");
__attribute__((swiftcall)) void
Manager_a50570_alt1(PSEUDO_X8 x8_, __int64 a1,
                    __int64 a2) __asm__("Manager_a50570");
__attribute__((swiftcall)) void
Manager_a50e90_alt1(PSEUDO_X8 x8_, __int64 a1,
                    __int64 a2) __asm__("Manager_a50e90");
__int64 fs_Manager_createFileAsync_fs_ElfFile(__int64 a1, __int64 a2);
__int64 Manager_136a920_alt1(__int64 a1, __int64 a2, int a3, unsigned int a4,
                             _BYTE* a5) __asm__("Manager_136a920");
__int64 Manager_136ad70(__int64 a1, __int64 a2, int a3, unsigned int a4,
                        char* a5);
__int64 Manager_136b110(__int64 a1, unsigned int a2, char* a3);
bool GameRoutine_91bb50(unsigned __int8*, unsigned __int8*);
const char* Manager_a4aea0(__int64 a1);
_QWORD* GameRoutine_633980_alt1(_QWORD* result,
                                __int64*) __asm__("GameRoutine_633980");
__attribute__((swiftcall)) void
GameRoutine_632da0_alt1(PSEUDO_X8, __int64,
                        unsigned int) __asm__("GameRoutine_632da0");
__int64* GameRoutine_a542c0_alt1(_QWORD*,
                                 const char**) __asm__("GameRoutine_a542c0");
__int64 GameHr_636000(__int64, unsigned __int64);
__int64
GameRoutine_112cc60_alt1(__int64 result, unsigned __int8*,
                         unsigned __int8*) __asm__("GameRoutine_112cc60");
__int64
GameRoutine_1a0a680_alt1(__int64, unsigned __int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a0a680");
__int64 GameRoutine_6313f0_alt2(__int64, __int64, const char*, __int64*,
                                __int64, int*) __asm__("GameRoutine_6313f0");
__int64 GameRoutine_632cd0_alt1(__int64, __int64) __asm__("GameRoutine_632cd0");
__int64 GameRoutine_634d80_alt2(__int64, __int64) __asm__("GameRoutine_634d80");
__int64 GameRoutine_635a60_alt2(__int64, __int64*, char, char, __int64,
                                __int64) __asm__("GameRoutine_635a60");
unsigned __int128
GameRoutine_635a60_alt2_pair(__int64, __int64*, char, char, __int64,
                             __int64) __asm__("GameRoutine_635a60");
__int64 GameRoutine_a4a400_alt1(__int64,
                                const char*) __asm__("GameRoutine_a4a400");
__int64 Registration_a4ac60_alt1(__int64,
                                 const char*) __asm__("Registration_a4ac60");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_os_AcquireReadLock_alt1(__int64) __asm__("nn_os_AcquireReadLock");
__int64 nn_os_AcquireWriteLock_alt1(__int64) __asm__("nn_os_AcquireWriteLock");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_ReleaseReadLock_alt1(__int64) __asm__("nn_os_ReleaseReadLock");
__int64 nn_os_ReleaseWriteLock_alt1(__int64) __asm__("nn_os_ReleaseWriteLock");
__int64 nn_os_UnlockMutex_alt2(__int64) __asm__("nn_os_UnlockMutex");
int snprintf_alt1(__int64, unsigned __int64, const char*,
                  ...) __asm__("snprintf");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_a4c1e0_alt2(_QWORD*, const char*,
                             char) __asm__("GameRoutine_a4c1e0");
void Manager_a4c820_alt1(_QWORD*) __asm__("Manager_a4c820");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_a52f60_alt1() __asm__("GameRoutine_a52f60");
void nn_mem_StandardAllocator_Free_alt4(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Manager_a4cfa0(__int64* a1);
__attribute__((swiftcall)) void Manager_a4fd20(PSEUDO_X8 x8_, __int64 a1,
                                               const char* a2, const char* a3,
                                               char a4);
__attribute__((swiftcall)) void Manager_a50570(PSEUDO_X8 x8_, __int64 a1,
                                               const char* a2);
__attribute__((swiftcall)) void Manager_a50e90(PSEUDO_X8 x8_, __int64 a1,
                                               const char* a2);
__int64
fs_Manager_createFileSync_fs_PropertyFile_closure_Invoke(__int64 a1,
                                                         const char** a2);
void Manager_136aaf0(__int64* a1, unsigned int a2, const char* a3);
__int64 Manager_136afb0(__int64 a1, unsigned int a2, const char* a3);
__int64 GameRoutine_17db7e0(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_20da378[])();
extern __int64 (*GameData_20da460[])();
extern __int64 (*GameData_211ed10[])();
__int64 fs_Manager_createFileAsync_fs_ShaderFile(__int64 a1, __int64 a2,
                                                 __int64 a3, __int64* a4);
__int64 fs_Manager_createFileAsync_fs_ResFile(__int64 a1, __int64 a2,
                                              unsigned __int64 a3, __int64* a4);
__int64 fs_Manager_createFileAsync_fs_PropertyFile(__int64 a1, __int64 a2);
__int64 GameHr_631820(__int64);
__int64 Registration_17d5020_alt1(__int64,
                                  _QWORD*) __asm__("Registration_17d5020");
__int64 Registration_17d5210_alt1(__int64,
                                  _QWORD*) __asm__("Registration_17d5210");
__int64 nn_os_GetSystemTick_alt1() __asm__("nn_os_GetSystemTick");
__int64 nn_os_SignalTimerEvent_alt1(__int64) __asm__("nn_os_SignalTimerEvent");
unsigned __int64 nn_mem_StandardAllocator_GetSizeOf_alt1(
    __int64, __int64) __asm__("nn_mem_StandardAllocator_GetSizeOf");
__int64 Manager_136a920(__int64 a1, __int64 a2, int a3, unsigned int a4,
                        const char* a5);
__int64 GameHr_631500(__int64 result, _QWORD*);
extern __int64 (*GameData_202f580[])();
__int64 fs_Manager_createFileAsync_ui_IconManager_Ui2dIconArcFile(__int64 a1,
                                                                  __int64 a2);
__int64 fs_Manager_createFileAsync_fs_BntxFile(__int64 a1, __int64 a2);
__int64 llvm_libcxx_21_libcxx_include___functional_a53bc0(__int64, __int64);
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");

unsigned __int64 Manager_6326c0(__int64* a1, __int64 a2)
{
  unsigned __int64 result;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;

  result = strlen(a2);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v5 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (result | 7) + 1;
    }
    v8 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16, 0);
    a1[1] = v5;
    a1[2] = v8;
    *a1 = v7 | 1;
    v6 = (char*)v8;
  }
  else {
    *(_BYTE*)a1 = 2 * result;
    v6 = (char*)a1 + 1;
    if (result == 0) {
      goto LABEL_10;
    }
  }
  result = memmove(v6, a2, v5);
LABEL_10:
  v6[v5] = 0;
  return result;
}

unsigned __int64 Manager_632780(__int64 a1)
{
  __int64 v2;
  __int64 i;
  int v4;
  int v5;
  unsigned __int64 result;
  int v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;

  nn_os_LockMutex_alt1(a1 + 4456);
  v2 = *(_QWORD*)(a1 + 4328);
  for (i = *(_QWORD*)(a1 + 4336); v2 != i; v2 += 8) {
    v4 = atomic_load((unsigned int*)(*(_QWORD*)v2 + 764LL));
    if (v4 >= 1) {
      atomic_fetch_add((atomic_uint* volatile)(*(_QWORD*)v2 + 764LL),
                       0xFFFFFFFF);
    }
  }
  v5 = *(_DWORD*)(a1 + 4716);
  if (v5 <= 0) {
    *(_DWORD*)(a1 + 4720) = 0;
  }
  else {
    *(_DWORD*)(a1 + 4716) = v5 - 1;
    ++*(_DWORD*)(a1 + 4720);
  }
  nn_os_UnlockMutex_alt2(a1 + 4456);
  result = Manager_6328c0(a1, 0);
  v7 = atomic_load((unsigned __int8*)&GameData_21c6798);
  if (v7 == 1) {
    atomic_store(0, (unsigned __int8*)&GameData_21c6798);
    v8 = *(_QWORD*)(a1 + 4608);
    v9 = *(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 280LL);
    if (v9 != 0) {
      result = nn_mem_StandardAllocator_GetSizeOf_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + 56LL, v9);
    }
    else {
      result = GameData_21667a8;
    }
    v10 = atomic_load((unsigned __int64*)&GameData_21c6790);
    v11 = result >= v10;
    v12 = result - v10;
    if (!v11) {
      v12 = 0;
    }
    if (v8 > v12) {
      return nn_os_SignalTimerEvent_alt1(a1 + 4256);
    }
  }
  return result;
}

__int64 Manager_6328c0(__int64 a1, int a2)
{
  __int64 SystemTickEv;
  int v5;
  int v6;
  __int64 v7;
  _DWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  _DWORD* v14;

  SystemTickEv = nn_os_GetSystemTick_alt1();
  v5 = 0;
  v6 = 0;
  while ((Registration_17d5020_alt1(a1 + 3944, &v14) & 1) != 0) {
    v7 = (__int64)v14;
    if (v14 == nullptr) {
      return (unsigned int)(v6 + v5);
    }
    nn_os_LockMutex_alt1(a1 + 4456);
    GameRoutine_632cd0_alt1(a1, v7);
    GameHr_631820(v7);
    nn_os_AcquireWriteLock_alt1(v7 + 696);
    *(_DWORD*)(v7 + 656) |= 0x40u;
    nn_os_ReleaseWriteLock_alt1(v7 + 696);
    ++v5;
  LABEL_8:
    nn_os_UnlockMutex_alt2(a1 + 4456);
    if (*(_DWORD*)(a1 + 4736) == 1) {
      v9 = nn_os_GetSystemTick_alt1();
      if (nn_os_ConvertToTimeSpan(v9 - SystemTickEv) / 1000000 >=
          *(int*)(a1 + 4728)) {
        return (unsigned int)(v6 + v5);
      }
    }
    else {
      nn_os_LockMutex_alt1(a1 + 3792);
      v10 = *(_QWORD*)(a1 + 3784);
      nn_os_UnlockMutex_alt2(a1 + 3792);
      v11 = *(int*)(a1 + 4732);
      v12 = nn_os_GetSystemTick_alt1();
      if (nn_os_ConvertToTimeSpan(v12 - SystemTickEv) / 1000000 >=
              *(int*)(a1 + 4724) &&
          v10 < v11) {
        return (unsigned int)(v6 + v5);
      }
    }
    if (a2 >= 1 && v6 + v5 >= a2) {
      return (unsigned int)(v6 + v5);
    }
  }
  if ((Registration_17d5210_alt1(a1 + 3744, &v14) & 1) != 0) {
    v8 = v14;
    if (v14 != nullptr) {
      nn_os_LockMutex_alt1(a1 + 4456);
      (*(void (**)(_DWORD*))(*(_QWORD*)v8 + 16LL))(v8);
      GameRoutine_632cd0_alt1(a1, (__int64)v8);
      GameHr_631820((__int64)v8);
      nn_os_AcquireWriteLock_alt1((__int64)(v8 + 174));
      v8[164] |= 0x40u;
      nn_os_ReleaseWriteLock_alt1((__int64)(v8 + 174));
      ++v6;
      goto LABEL_8;
    }
  }
  return (unsigned int)(v6 + v5);
}

__int64 Manager_632a80(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  int v8;
  char* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;

  v2 = nn_os_LockMutex(a1 + 4456);
  v3 = *(_QWORD*)(a1 + 4328);
  v4 = *(_QWORD*)(a1 + 4336);
  if (v3 == v4) {
    v6 = nullptr;
    v5 = nullptr;
  }
  else {
    v5 = nullptr;
    v6 = nullptr;
    v7 = 0;
    do {
      v8 = atomic_load((unsigned int*)(*(_QWORD*)v3 + 760LL));
      if (v8 <= 0) {
        if ((unsigned __int64)v6 < v7) {
          *(_QWORD*)v6 = *(_QWORD*)v3;
          v6 += 8;
        }
        else {
          v9 = (char*)(v6 - v5);
          v10 = (v6 - v5) >> 3;
          v11 = v10 + 1;
          if ((unsigned __int64)(v10 + 1) >> 61 != 0) {
            GameRoutine_637ae0(v2);
          }
          if ((__int64)(v7 - (_QWORD)v5) >> 2 > v11) {
            v11 = (__int64)(v7 - (_QWORD)v5) >> 2;
          }
          if (v7 - (unsigned __int64)v5 >= 0x7FFFFFFFFFFFFFF8LL) {
            v12 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v12 = v11;
          }
          if (v12 != 0) {
            if (v12 >> 61 != 0) {
              GameRoutine_60a210(v2);
            }
            v13 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
          }
          else {
            v13 = 0;
          }
          v7 = v13 + 8 * v12;
          v14 = (__int64)&v9[v13 + -8 * v10];
          *(_QWORD*)&v9[v13] = *(_QWORD*)v3;
          v6 = &v9[v13 + 8];
          v2 = memcpy(v14, v5, v9);
          if (v5 != nullptr) {
            v15 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v15 = 56;
            }
            v2 = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v5);
          }
          v5 = (char*)v14;
        }
      }
      v3 += 8;
    } while (v3 != v4);
  }
  nn_os_LockMutex(a1 + 4456);
  v16 = *(__int64**)(a1 + 4328);
  v17 = *(__int64**)(a1 + 4336);
  while (v16 != v17) {
    v18 = *v16++;
    v19 = *(_QWORD*)(v18 + 8);
    nn_os_LockMutex(v19 + 4456);
    nn_os_AcquireWriteLock(v18 + 696);
    *(_DWORD*)(v18 + 656) &= ~2u;
    nn_os_ReleaseWriteLock(v18 + 696);
    *(_QWORD*)(v18 + 792) = GameData_21a60c8;
    nn_os_UnlockMutex(v19 + 4456);
  }
  nn_os_UnlockMutex(a1 + 4456);
  if (v5 != v6) {
    v20 = v5;
    do {
      v21 = *(_QWORD*)v20;
      v20 += 8;
      GameRoutine_634d80(*(_QWORD*)(v21 + 8));
    } while (v20 != v6);
  }
  if (v5 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  v5);
  }
  return nn_os_UnlockMutex(a1 + 4456);
}

__int64 Manager_ThreadExecutor_Unknown4(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(a1 + 488))(*(_QWORD*)(a1 + 496));
}

__int64 Manager_ThreadExecutor_Unknown3(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = GameData_21323e0[0];
  v3 = a1[3];
  a1[3] = 0;
  *a1 = v2 + 16;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                  v3);
  }
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6, a1);
}

void fs_Manager_setCacheType_lambda0_Invoke(__int64 a1, __int64* a2)
{
  (*(void (**)(__int64, __int64))((char*)((__int128*)0x10LL) +
                                  (_QWORD)fs_Memory_vtable_ptr +
                                  8))((__int64)&fs_Memory_vtable_ptr, *a2);
}

__int64 Manager_643620(__int64 result, __int64* a2, __int64 a3, char a4)
{
  __int64* v7;
  __int64* v8;
  __int64* k;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  __int64 v19;
  __int64 i;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64* j;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  bool v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* m;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  _QWORD* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  _QWORD* v64;
  _QWORD* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
  bool v72;
  __int64 v73;
  __int64* v74;
  __int64* v75;
  __int64* v76;
  _QWORD* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  _QWORD* v84;
  __int64 v85;
  _QWORD* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  signed __int64 v90;
  signed __int64 v91;
  __int64* v92;
  signed __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  _QWORD* v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  _QWORD* v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64* v108;
  __int64 v109;
  __int64 v110;
  _QWORD* v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64* v117;
  __int64 v118;
  __int64 v119;
  __int64* v120;
  __int64* v121;
  __int64 v122;
  __int64* v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  __int64* v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64* v141;
  _QWORD* v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64* v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  _QWORD* v154;
  _QWORD* v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;

  v7 = (__int64*)result;
LABEL_2:
  v8 = a2 - 1;
  k = v7;
  while (1) {
    v7 = k;
    v10 = a2 - k;
    if (v10 > 2) {
      switch (v10) {
      case 3LL:
        return (__int64)GameRoutine_644300(k, k + 1, a2 - 1);
      case 4LL:
        result = (__int64)GameRoutine_644300(k, k + 1, k + 2);
        v64 = (_QWORD*)*(a2 - 1);
        v65 = (_QWORD*)k[2];
        v66 = v64[72];
        v67 = v65[72];
        if (v66 == v67) {
          v68 = v64[94];
          v69 = v65[94];
          if (v68 == v69) {
            if ((signed __int64)v64[93] >= (signed __int64)v65[93]) {
              return result;
            }
          }
          else if (v68 >= v69) {
            return result;
          }
        }
        else if (v66 <= v67) {
          return result;
        }
        k[2] = (__int64)v64;
        *(a2 - 1) = (__int64)v65;
        v155 = (_QWORD*)k[1];
        v154 = (_QWORD*)k[2];
        v156 = v154[72];
        v157 = v155[72];
        if (v156 == v157) {
          v158 = v154[94];
          v159 = v155[94];
          if (v158 == v159) {
            if ((signed __int64)v154[93] >= (signed __int64)v155[93]) {
              return result;
            }
          }
          else if (v158 >= v159) {
            return result;
          }
        }
        else if (v156 <= v157) {
          return result;
        }
        k[1] = (__int64)v154;
        k[2] = (__int64)v155;
        v160 = *k;
        v161 = v154[72];
        v162 = *(_QWORD*)(*k + 576);
        if (v161 == v162) {
          v163 = v154[94];
          v164 = *(_QWORD*)(v160 + 752);
          if (v163 == v164) {
            if ((signed __int64)v154[93] >=
                (signed __int64)*(_QWORD*)(v160 + 744)) {
              return result;
            }
          }
          else if (v163 >= v164) {
            return result;
          }
        }
        else if (v161 <= v162) {
          return result;
        }
        *k = (__int64)v154;
        k[1] = v160;
        return result;
      case 5LL:
        return (__int64)GameRoutine_644480(k, k + 1, k + 2, k + 3, a2 - 1);
      default:
        break;
      }
      goto LABEL_10;
    }
    if ((unsigned __int64)v10 < 2) {
      return result;
    }
    if (v10 == 2) {
      break;
    }
  LABEL_10:
    if (v10 <= 23) {
      v70 = k + 1;
      v72 = k == a2 || v70 == a2;
      if ((a4 & 1) == 0) {
        if (v72) {
          return result;
        }
        while (1) {
          v141 = v7;
          v7 = v70;
          v143 = *v141;
          v142 = (_QWORD*)v141[1];
          v144 = v142[72];
          v145 = *(_QWORD*)(*v141 + 576);
          if (v144 == v145) {
            v146 = v142[94];
            v147 = *(_QWORD*)(v143 + 752);
            if (v146 == v147) {
              if ((signed __int64)v142[93] <
                  (signed __int64)*(_QWORD*)(v143 + 744)) {
                goto LABEL_238;
              }
            }
            else if (v146 < v147) {
              do {
                while (1) {
                LABEL_238:
                  while (1) {
                    v148 = v141;
                    v149 = *--v141;
                    v141[2] = v143;
                    v150 = v142[72];
                    v143 = v149;
                    v151 = *(_QWORD*)(v149 + 576);
                    if (v150 == v151) {
                      break;
                    }
                    if (v150 <= v151) {
                      goto LABEL_227;
                    }
                  }
                  v152 = v142[94];
                  v153 = *(_QWORD*)(v143 + 752);
                  if (v152 != v153) {
                    break;
                  }
                  if ((signed __int64)v142[93] >=
                      (signed __int64)*(_QWORD*)(v143 + 744)) {
                    goto LABEL_227;
                  }
                }
              } while (v152 < v153);
            LABEL_227:
              *v148 = (__int64)v142;
            }
          }
          else if (v144 > v145) {
            goto LABEL_238;
          }
          v70 = v7 + 1;
          if (v7 + 1 == a2) {
            return result;
          }
        }
      }
      if (v72) {
        return result;
      }
      v73 = 0;
      v74 = k;
    LABEL_137:
      v76 = v74;
      v74 = v70;
      v78 = *v76;
      v77 = (_QWORD*)v76[1];
      v79 = v77[72];
      v80 = *(_QWORD*)(*v76 + 576);
      if (v79 == v80) {
        v81 = v77[94];
        v82 = *(_QWORD*)(v78 + 752);
        if (v81 == v82) {
          if ((signed __int64)v77[93] >=
              (signed __int64)*(_QWORD*)(v78 + 744)) {
            goto LABEL_136;
          }
        }
        else if (v81 >= v82) {
          goto LABEL_136;
        }
      }
      else if (v79 <= v80) {
        goto LABEL_136;
      }
      v76[1] = v78;
      v75 = k;
      if (v76 == k) {
        goto LABEL_135;
      }
      v83 = v73;
      while (1) {
        v84 = (__int64*)((char*)k + v83);
        v85 = v77[72];
        v86 = *(_QWORD**)((char*)k + v83 - 8);
        v87 = v86[72];
        if (v85 == v87) {
          v88 = v77[94];
          v89 = v86[94];
          if (v88 == v89) {
            if ((signed __int64)v77[93] >= (signed __int64)v86[93]) {
              v75 = (__int64*)((char*)k + v83);
              goto LABEL_135;
            }
          }
          else if (v88 >= v89) {
          LABEL_153:
            v75 = v76;
          LABEL_135:
            *v75 = (__int64)v77;
          LABEL_136:
            v70 = v74 + 1;
            v73 += 8;
            if (v74 + 1 == a2) {
              return result;
            }
            goto LABEL_137;
          }
        }
        else if (v85 <= v87) {
          goto LABEL_153;
        }
        --v76;
        v83 -= 8;
        *v84 = v86;
        if (v83 == 0) {
          v75 = k;
          goto LABEL_135;
        }
      }
    }
    if (a3 == 0) {
      if (k == a2) {
        return result;
      }
      v90 = (unsigned __int64)(v10 - 2) >> 1;
      v91 = v90;
      while (1) {
        v93 = v91;
        if (v90 < v91) {
          goto LABEL_158;
        }
        v94 = (2 * (v91 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
        v95 = 2 * v91 + 2;
        v92 = &k[v94];
        if (v95 < v10) {
          v96 = *v92;
          v97 = (_QWORD*)v92[1];
          v98 = *(_QWORD*)(*v92 + 576);
          v99 = v97[72];
          if (v98 == v99) {
            break;
          }
          if (v98 > v99) {
            goto LABEL_166;
          }
        }
      LABEL_167:
        v102 = *v92;
        v103 = (_QWORD*)k[v93];
        v104 = *(_QWORD*)(*v92 + 576);
        v105 = v103[72];
        if (v104 == v105) {
          v106 = *(_QWORD*)(v102 + 752);
          v107 = v103[94];
          if (v106 == v107) {
            if ((signed __int64)*(_QWORD*)(v102 + 744) <
                (signed __int64)v103[93]) {
              goto LABEL_158;
            }
          }
          else if (v106 < v107) {
            goto LABEL_158;
          }
        }
        else if (v104 > v105) {
          goto LABEL_158;
        }
        k[v93] = v102;
        while (1) {
          if (v90 < v94) {
            goto LABEL_157;
          }
          v108 = v92;
          v109 = 2 * v94 + 2;
          v94 = (2 * v94) | 1;
          v92 = &k[v94];
          if (v109 < v10) {
            v110 = *v92;
            v111 = (_QWORD*)v92[1];
            result = *(_QWORD*)(*v92 + 576);
            v112 = v111[72];
            if (result != v112) {
              if (result <= v112) {
                goto LABEL_185;
              }
            LABEL_184:
              ++v92;
              v94 = v109;
              goto LABEL_185;
            }
            result = *(_QWORD*)(v110 + 752);
            v113 = v111[94];
            if (result == v113) {
              if ((signed __int64)*(_QWORD*)(v110 + 744) <
                  (signed __int64)v111[93]) {
                goto LABEL_184;
              }
            }
            else if (result < v113) {
              goto LABEL_184;
            }
          }
        LABEL_185:
          v114 = *v92;
          v115 = v103[72];
          v116 = *(_QWORD*)(*v92 + 576);
          if (v116 != v115) {
            break;
          }
          if (*(_OWORD*)(v114 + 744) < *(_OWORD*)(v103 + 93)) {
            goto LABEL_156;
          }
        LABEL_176:
          *v108 = v114;
        }
        if (v116 <= v115) {
          goto LABEL_176;
        }
      LABEL_156:
        v92 = v108;
      LABEL_157:
        *v92 = (__int64)v103;
      LABEL_158:
        v91 = v93 - 1;
        if (v93 == 0) {
        LABEL_196:
          v118 = *k;
          v119 = 0;
          v117 = k;
          while (1) {
            v120 = &v117[v119];
            v121 = v117;
            v117 = v120 + 1;
            v122 = 2 * v119 + 2;
            v119 = (2 * v119) | 1;
            if (v122 < v10) {
              v125 = v120[2];
              v123 = v120 + 2;
              v124 = v125;
              v126 = *(v123 - 1);
              result = *(_QWORD*)(v125 + 576);
              v127 = *(_QWORD*)(v126 + 576);
              if (v127 == result) {
                result = *(_QWORD*)(v124 + 752);
                if (*(_OWORD*)(v126 + 744) >= *(_OWORD*)(v124 + 744)) {
                  goto LABEL_198;
                }
              }
              else if (v127 <= result) {
                goto LABEL_198;
              }
              v117 = v123;
              v119 = v122;
            }
          LABEL_198:
            *v121 = *v117;
            if (v119 > (__int64)((unsigned __int64)(v10 - 2) >> 1)) {
              if (v117 == --a2) {
                goto LABEL_193;
              }
              *v117 = *a2;
              *a2 = v118;
              v128 = ((char*)v117 - (char*)k + 8) >> 3;
              v129 = v128 - 2;
              if (v128 < 2) {
                goto LABEL_194;
              }
              v130 = v129 >> 1;
              v118 = *v117;
              v131 = &k[v129 >> 1];
              v132 = *v131;
              v133 = *(_QWORD*)(*v117 + 576);
              v134 = *(_QWORD*)(*v131 + 576);
              if (v134 != v133) {
                if (v134 <= v133) {
                  goto LABEL_194;
                }
              LABEL_214:
                *v117 = v132;
                if (v129 >= 2) {
                  while (1) {
                    v137 = v130 - 1;
                    v138 = *(_QWORD*)(v118 + 576);
                    v130 = (v130 - 1) >> 1;
                    v117 = &k[v130];
                    v139 = *v117;
                    v140 = *(_QWORD*)(*v117 + 576);
                    if (v140 == v138) {
                      if (*(_OWORD*)(v139 + 744) >= *(_OWORD*)(v118 + 744)) {
                        break;
                      }
                    }
                    else if (v140 <= v138) {
                      break;
                    }
                    *v131 = v139;
                    v131 = &k[v130];
                    if (v137 <= 1) {
                      goto LABEL_193;
                    }
                  }
                }
                v117 = v131;
              LABEL_193:
                *v117 = v118;
                goto LABEL_194;
              }
              v135 = *(_QWORD*)(v132 + 752);
              v136 = *(_QWORD*)(v118 + 752);
              if (v135 == v136) {
                if ((signed __int64)*(_QWORD*)(v132 + 744) <
                    (signed __int64)*(_QWORD*)(v118 + 744)) {
                  goto LABEL_214;
                }
              }
              else if (v135 < v136) {
                goto LABEL_214;
              }
            LABEL_194:
              v17 = (unsigned __int64)v10-- > 2;
              if (!v17) {
                return result;
              }
              goto LABEL_196;
            }
          }
        }
      }
      v100 = *(_QWORD*)(v96 + 752);
      v101 = v97[94];
      if (v100 == v101) {
        if ((signed __int64)*(_QWORD*)(v96 + 744) >= (signed __int64)v97[93]) {
          goto LABEL_167;
        }
      }
      else if (v100 >= v101) {
        goto LABEL_167;
      }
    LABEL_166:
      ++v92;
      v94 = 2 * v93 + 2;
      goto LABEL_167;
    }
    v11 = &k[(unsigned __int64)v10 >> 1];
    if ((unsigned __int64)v10 < 0x81) {
      result = (__int64)GameRoutine_644300(&v7[(unsigned __int64)v10 >> 1], v7,
                                           a2 - 1);
    }
    else {
      GameRoutine_644300(v7, &v7[(unsigned __int64)v10 >> 1], a2 - 1);
      GameRoutine_644300(v7 + 1, v11 - 1, a2 - 2);
      GameRoutine_644300(v7 + 2, v11 + 1, a2 - 3);
      result = (__int64)GameRoutine_644300(v11 - 1, v11, v11 + 1);
      v12 = *v7;
      *v7 = *v11;
      *v11 = v12;
    }
    v13 = *v7;
    --a3;
    if ((a4 & 1) != 0) {
      v14 = *(_QWORD*)(v13 + 576);
    LABEL_22:
      for (i = 0;; ++i) {
        v21 = v7[i + 1];
        v22 = *(_QWORD*)(v21 + 576);
        if (v22 == v14) {
          break;
        }
        if (v22 <= v14) {
          goto LABEL_27;
        }
      LABEL_24:;
      }
      if (*(_OWORD*)(v21 + 744) < *(_OWORD*)(v13 + 744)) {
        goto LABEL_24;
      }
    LABEL_27:
      v23 = &v7[i];
      j = a2 - 1;
      v25 = (unsigned __int64)&v7[i + 1];
      if (i != 0) {
        while (1) {
          v26 = *(_QWORD*)(*j + 576);
          if (v26 == v14) {
            if (*(_OWORD*)(*j + 744) < *(_OWORD*)(v13 + 744)) {
              goto LABEL_34;
            }
          }
          else if (v26 > v14) {
            goto LABEL_34;
          }
          --j;
        }
      }
      j = a2;
      if (v25 < (unsigned __int64)a2) {
        for (j = a2 - 1;; --j) {
          v36 = *j;
          v37 = *(_QWORD*)(*j + 576);
          if (v37 == v14) {
            v38 = *(_QWORD*)(v36 + 752);
            v39 = *(_QWORD*)(v13 + 752);
            if (v38 == v39) {
              if (v25 >= (unsigned __int64)j ||
                  (signed __int64)*(_QWORD*)(v36 + 744) <
                      (signed __int64)*(_QWORD*)(v13 + 744)) {
                break;
              }
            }
            else if (v25 >= (unsigned __int64)j || v38 < v39) {
              break;
            }
          }
          else if (v25 >= (unsigned __int64)j || v37 > v14) {
            break;
          }
        }
      }
    LABEL_34:
      if (v25 >= (unsigned __int64)j) {
        goto LABEL_63;
      }
      v27 = *j;
      v28 = v25;
      v29 = j;
      while (2) {
        *(_QWORD*)v28 = v27;
        v28 += 8LL;
        *v29 = v21;
        v30 = *(_QWORD*)(v13 + 576);
        while (2) {
          v21 = *(_QWORD*)v28;
          v31 = *(_QWORD*)(*(_QWORD*)v28 + 576LL);
          if (v31 != v30) {
            if (v31 <= v30) {
              goto LABEL_44;
            }
          LABEL_39:
            v28 += 8LL;
            continue;
          }
          break;
        }
        if (*(_OWORD*)(v21 + 744) < *(_OWORD*)(v13 + 744)) {
          goto LABEL_39;
        }
        do {
          while (1) {
          LABEL_44:
            while (1) {
              v32 = *--v29;
              v27 = v32;
              v33 = *(_QWORD*)(v32 + 576);
              if (v33 == v30) {
                break;
              }
              if (v33 > v30) {
                goto LABEL_36;
              }
            }
            v34 = *(_QWORD*)(v27 + 752);
            v35 = *(_QWORD*)(v13 + 752);
            if (v34 != v35) {
              break;
            }
            if ((signed __int64)*(_QWORD*)(v27 + 744) <
                (signed __int64)*(_QWORD*)(v13 + 744)) {
              goto LABEL_36;
            }
          }
        } while (v34 >= v35);
      LABEL_36:
        if (v28 < (unsigned __int64)v29) {
          continue;
        }
        break;
      }
      v23 = (__int64*)(v28 - 8);
    LABEL_63:
      if (v7 != v23) {
        *v7 = *v23;
      }
      *v23 = v13;
      if (v25 < (unsigned __int64)j) {
      LABEL_68:
        result = Manager_643620((__int64)v7, v23, a3, a4 & 1);
        a4 = 0;
        k = v23 + 1;
      }
      else {
        k = v23 + 1;
        v40 = GameRoutine_644700(v7, v23);
        result = GameRoutine_644700(v23 + 1, a2);
        if ((result & 1) != 0) {
          a2 = v23;
          if (v40) {
            return result;
          }
          goto LABEL_2;
        }
        if (!v40) {
          goto LABEL_68;
        }
      }
    }
    else {
      v15 = (_QWORD*)*(v7 - 1);
      v16 = *(_QWORD*)(v13 + 576);
      v14 = v15[72];
      v17 = v14 <= v16;
      if (v14 == v16) {
        v18 = v15[94];
        v19 = *(_QWORD*)(v13 + 752);
        if (v18 == v19) {
          if ((signed __int64)v15[93] < (signed __int64)*(_QWORD*)(v13 + 744)) {
            goto LABEL_22;
          }
        }
        else if (v18 < v19) {
          goto LABEL_22;
        }
      }
      else {
        v14 = *(_QWORD*)(v13 + 576);
        if (!v17) {
          goto LABEL_22;
        }
      }
      v41 = *v8;
      v42 = *(_QWORD*)(*v8 + 576);
      if (v16 == v42) {
        v43 = *(_QWORD*)(v13 + 752);
        v44 = *(_QWORD*)(v41 + 752);
        if (v43 == v44) {
          if ((signed __int64)*(_QWORD*)(v13 + 744) <
              (signed __int64)*(_QWORD*)(v41 + 744)) {
            goto LABEL_75;
          }
        }
        else if (v43 < v44) {
        LABEL_75:
          for (k = v7 + 1;; ++k) {
            v45 = *(_QWORD*)(*k + 576);
            if (v16 == v45) {
              if (*(_OWORD*)(v13 + 744) < *(_OWORD*)(*k + 744)) {
                goto LABEL_88;
              }
            }
            else if (v16 > v45) {
              goto LABEL_88;
            }
          }
        }
      }
      else if (v16 > v42) {
        goto LABEL_75;
      }
      for (k = v7 + 1; k < a2; ++k) {
        v46 = *(_QWORD*)(*k + 576);
        if (v16 == v46) {
          if (*(_OWORD*)(v13 + 744) < *(_OWORD*)(*k + 744)) {
            break;
          }
        }
        else if (v16 > v46) {
          break;
        }
      }
    LABEL_88:
      m = a2;
      if (k < a2) {
        for (m = a2 - 1;; --m) {
          if (v16 == v42) {
            if (*(_OWORD*)(v13 + 744) >= *(_OWORD*)(v41 + 744)) {
              break;
            }
          }
          else if (v16 <= v42) {
            break;
          }
          v48 = *(m - 1);
          v41 = v48;
          v42 = *(_QWORD*)(v48 + 576);
        }
      }
      if (k < m) {
        v49 = *k;
        v50 = *m;
        do {
          *k++ = v50;
          *m = v49;
          v51 = *(_QWORD*)(v13 + 576);
          while (1) {
            v49 = *k;
            v52 = *(_QWORD*)(*k + 576);
            if (v51 == v52) {
              break;
            }
            if (v51 > v52) {
              goto LABEL_104;
            }
          LABEL_99:
            ++k;
          }
          if (*(_OWORD*)(v13 + 744) >= *(_OWORD*)(v49 + 744)) {
            goto LABEL_99;
          }
          do {
            while (1) {
            LABEL_104:
              while (1) {
                v53 = *--m;
                v50 = v53;
                v54 = *(_QWORD*)(v53 + 576);
                if (v51 == v54) {
                  break;
                }
                if (v51 <= v54) {
                  goto LABEL_96;
                }
              }
              v55 = *(_QWORD*)(v13 + 752);
              v56 = *(_QWORD*)(v50 + 752);
              if (v55 != v56) {
                break;
              }
              if ((signed __int64)*(_QWORD*)(v13 + 744) >=
                  (signed __int64)*(_QWORD*)(v50 + 744)) {
                goto LABEL_96;
              }
            }
          } while (v55 < v56);
        LABEL_96:;
        } while (k < m);
      }
      v57 = k - 1;
      if (v7 != k - 1) {
        *v7 = *v57;
      }
      a4 = 0;
      *v57 = v13;
    }
  }
  v58 = (_QWORD*)*(a2 - 1);
  v59 = *k;
  v60 = v58[72];
  v61 = *(_QWORD*)(*k + 576);
  if (v60 == v61) {
    v62 = v58[94];
    v63 = *(_QWORD*)(v59 + 752);
    if (v62 == v63) {
      if ((signed __int64)v58[93] >= (signed __int64)*(_QWORD*)(v59 + 744)) {
        return result;
      }
    }
    else if (v62 >= v63) {
      return result;
    }
  }
  else if (v60 <= v61) {
    return result;
  }
  *k = (__int64)v58;
  *(a2 - 1) = v59;
  return result;
}

__int64 Manager_644a20(__int64 result, __int64* a2, __int64 a3, char a4)
{
  __int64* v7;
  __int64* v8;
  __int64* k;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  __int64 v19;
  __int64 i;
  __int64* v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64* j;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  bool v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  bool v50;
  __int64 v51;
  __int64 v52;
  bool v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  bool v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  bool v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  bool v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  bool v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64* v83;
  __int64* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  bool v88;
  __int64 v89;
  __int64 v90;
  __int64* v91;
  __int64* v92;
  __int64 v93;
  __int64 v94;
  bool v95;
  __int64 v96;
  __int64 v97;
  __int64* v98;
  bool v100;
  __int64 v101;
  __int64* v102;
  __int64* v103;
  __int64* v104;
  __int64* v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  bool v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64* v113;
  __int64 v114;
  __int64* v115;
  __int64 v116;
  bool v117;
  __int64 v118;
  __int64 v119;
  signed __int64 v120;
  signed __int64 v121;
  __int64* v122;
  signed __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64* v127;
  __int64 v128;
  __int64 v129;
  bool v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64* v134;
  __int64 v135;
  __int64 v136;
  bool v137;
  __int64 v138;
  __int64 v139;
  __int64* v140;
  __int64 v141;
  __int64 v142;
  __int64* v143;
  __int64 v144;
  bool v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  bool v150;
  __int64 v151;
  __int64 v152;
  __int64* v153;
  __int64* v154;
  __int64 v155;
  __int64* v156;
  __int64* v157;
  __int64 v158;
  __int64* v159;
  __int64 v160;
  __int64 v161;
  __int64* v162;
  __int64 v163;
  bool v164;
  __int64 v165;
  __int64 v166;
  unsigned __int64 v167;
  unsigned __int64 v168;
  __int64* v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  bool v173;
  __int64 v174;
  __int64 v175;
  unsigned __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  bool v180;
  __int64 v181;
  __int64 v182;
  __int64* v183;
  __int64* v184;
  __int64 v185;
  __int64 v186;
  bool v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  bool v193;
  __int64 v194;
  __int64 v195;
  __int64* v196;
  __int64* v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  bool v201;
  __int64 v202;
  __int64 v203;
  __int64* v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;

  v7 = (__int64*)result;
LABEL_2:
  v8 = a2 - 1;
  k = v7;
  while (1) {
    v7 = k;
    v10 = ((__int64)a2 - (__int64)k) >> 3;
    if (v10 <= 2) {
      if ((unsigned __int64)v10 < 2) {
        return result;
      }
      if (v10 == 2) {
        v84 = (__int64*)*(a2 - 1);
        v85 = *k;
        v86 = v84[94];
        v87 = *(__int64*)(*k + 752);
        v88 = v86 < v87;
        if (v86 == v87 && (v89 = v84[72], v90 = *(__int64*)(v85 + 576),
                           v88 = v89 < v90, v89 == v90)) {
          if (v84[93] >= *(__int64*)(v85 + 744)) {
            return result;
          }
        }
        else if (!v88) {
          return result;
        }
        *k = (__int64)v84;
        *(a2 - 1) = v85;
        return result;
      }
      goto LABEL_10;
    }
    if (v10 == 3) {
      return (__int64)GameRoutine_645610(k, k + 1, a2 - 1);
    }
    if (v10 == 4) {
      break;
    }
    if (v10 == 5) {
      return (__int64)GameRoutine_645770(k, k + 1, k + 2, k + 3, a2 - 1);
    }
  LABEL_10:
    if (v10 <= 23) {
      v98 = k + 1;
      v100 = k == a2 || v98 == a2;
      if ((a4 & 1) != 0) {
        if (v100) {
          return result;
        }
        v101 = 0;
        v102 = k;
      LABEL_142:
        v104 = v102;
        v102 = v98;
        v106 = *v104;
        v105 = (__int64*)v104[1];
        v107 = v105[94];
        v108 = *(__int64*)(*v104 + 752);
        v109 = v107 < v108;
        if (v107 == v108) {
          v110 = v105[72];
          v111 = *(__int64*)(v106 + 576);
          v109 = v110 < v111;
          if (v110 == v111) {
            v109 = v105[93] < *(__int64*)(v106 + 744);
          }
        }
        if (!v109) {
          goto LABEL_141;
        }
        v104[1] = v106;
        v103 = k;
        if (v104 == k) {
          goto LABEL_140;
        }
        v112 = v101;
        while (1) {
          v113 = (__int64*)((char*)k + v112);
          v114 = v105[94];
          v115 = *(__int64**)((char*)k + v112 - 8);
          v116 = v115[94];
          v117 = v114 < v116;
          if (v114 == v116 && (v118 = v105[72], v119 = v115[72],
                               v117 = v118 < v119, v118 == v119)) {
            if (v105[93] >= v115[93]) {
              v103 = (__int64*)((char*)k + v112);
            LABEL_140:
              *v103 = (__int64)v105;
            LABEL_141:
              v98 = v102 + 1;
              v101 += 8;
              if (v102 + 1 != a2) {
                goto LABEL_142;
              }
              return result;
            }
          }
          else if (!v117) {
            v103 = v104;
            goto LABEL_140;
          }
          --v104;
          v112 -= 8;
          *v113 = v115;
          if (v112 == 0) {
            v103 = k;
            goto LABEL_140;
          }
        }
      }
      if (v100) {
        return result;
      }
      while (1) {
        v196 = v7;
        v7 = v98;
        v198 = *v196;
        v197 = (__int64*)v196[1];
        v199 = v197[94];
        v200 = *(__int64*)(*v196 + 752);
        v201 = v199 < v200;
        if (v199 == v200) {
          v202 = v197[72];
          v203 = *(__int64*)(v198 + 576);
          v201 = v202 < v203;
          if (v202 == v203) {
            v201 = v197[93] < *(__int64*)(v198 + 744);
          }
        }
        if (v201) {
          do {
            while (1) {
              while (1) {
                v204 = v196;
                v205 = *--v196;
                v196[2] = v198;
                v206 = v197[94];
                v198 = v205;
                v207 = *(__int64*)(v205 + 752);
                if (v206 == v207) {
                  break;
                }
                if (v206 >= v207) {
                  goto LABEL_233;
                }
              }
              v208 = v197[72];
              v209 = *(__int64*)(v198 + 576);
              if (v208 != v209) {
                break;
              }
              if (v197[93] >= *(__int64*)(v198 + 744)) {
                goto LABEL_233;
              }
            }
          } while (v208 < v209);
        LABEL_233:
          *v204 = (__int64)v197;
        }
        v98 = v7 + 1;
        if (v7 + 1 == a2) {
          return result;
        }
      }
    }
    if (a3 == 0) {
      if (k == a2) {
        return result;
      }
      v120 = (unsigned __int64)(v10 - 2) >> 1;
      v121 = v120;
      do {
        v123 = v121;
        if (v120 >= v121) {
          v124 = (2 * (v121 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
          v125 = 2 * v121 + 2;
          v122 = &k[v124];
          if (v125 < v10) {
            v126 = *v122;
            v127 = (__int64*)v122[1];
            v128 = *(__int64*)(*v122 + 752);
            v129 = v127[94];
            v130 = v128 < v129;
            if (v128 == v129) {
              v131 = *(__int64*)(v126 + 576);
              v132 = v127[72];
              v130 = v131 < v132;
              if (v131 == v132) {
                v130 = *(__int64*)(v126 + 744) < v127[93];
              }
            }
            if (v130) {
              ++v122;
              v124 = 2 * v123 + 2;
            }
          }
          v133 = *v122;
          v134 = (__int64*)k[v123];
          v135 = *(__int64*)(*v122 + 752);
          v136 = v134[94];
          v137 = v135 < v136;
          if (v135 == v136) {
            v138 = *(__int64*)(v133 + 576);
            v139 = v134[72];
            v137 = v138 < v139;
            if (v138 == v139) {
              v137 = *(__int64*)(v133 + 744) < v134[93];
            }
          }
          if (!v137) {
            k[v123] = v133;
            if (v120 >= v124) {
              while (1) {
                v140 = v122;
                v141 = 2 * v124 + 2;
                v124 = (2 * v124) | 1;
                v122 = &k[v124];
                if (v141 < v10) {
                  v142 = *v122;
                  v143 = (__int64*)v122[1];
                  result = *(__int64*)(*v122 + 752);
                  v144 = v143[94];
                  v145 = result < v144;
                  if (result == v144) {
                    result = *(__int64*)(v142 + 576);
                    v146 = v143[72];
                    v145 = result < v146;
                    if (result == v146) {
                      v145 = *(__int64*)(v142 + 744) < v143[93];
                    }
                  }
                  if (v145) {
                    ++v122;
                    v124 = v141;
                  }
                }
                v147 = *v122;
                v148 = v134[94];
                v149 = *(__int64*)(*v122 + 752);
                v150 = v149 < v148;
                if (v149 == v148) {
                  v151 = *(__int64*)(v147 + 576);
                  v152 = v134[72];
                  v150 = v151 < v152;
                  if (v151 == v152) {
                    v150 = *(__int64*)(v147 + 744) < v134[93];
                  }
                }
                if (v150) {
                  break;
                }
                *v140 = v147;
                if (v120 < v124) {
                  goto LABEL_159;
                }
              }
              v122 = v140;
            }
          LABEL_159:
            *v122 = (__int64)v134;
          }
        }
        v121 = v123 - 1;
      } while (v123 != 0);
      while (2) {
        v154 = (__int64*)*k;
        v155 = 0;
        v153 = k;
        do {
          v156 = &v153[v155];
          v157 = v153;
          v153 = v156 + 1;
          v158 = 2 * v155 + 2;
          v155 = (2 * v155) | 1;
          if (v158 < v10) {
            v161 = v156[2];
            v159 = v156 + 2;
            v160 = v161;
            v162 = (__int64*)*(v159 - 1);
            result = *(__int64*)(v161 + 752);
            v163 = v162[94];
            v164 = v163 < result;
            if (v163 == result) {
              v165 = v162[72];
              result = *(__int64*)(v160 + 576);
              v164 = v165 < result;
              if (v165 == result) {
                v164 = v162[93] < *(__int64*)(v160 + 744);
              }
            }
            if (v164) {
              v153 = v159;
              v155 = v158;
            }
          }
          *v157 = *v153;
        } while (v155 <= (__int64)((unsigned __int64)(v10 - 2) >> 1));
        if (v153 != --a2) {
          *v153 = *a2;
          *a2 = (__int64)v154;
          v166 = ((char*)v153 - (char*)k + 8) >> 3;
          v167 = v166 - 2;
          if (v166 < 2) {
            goto LABEL_189;
          }
          v168 = v167 >> 1;
          v154 = (__int64*)*v153;
          v169 = &k[v167 >> 1];
          v170 = *v169;
          v171 = *(__int64*)(*v153 + 752);
          v172 = *(__int64*)(*v169 + 752);
          v173 = v172 < v171;
          if (v172 == v171) {
            v174 = *(__int64*)(v170 + 576);
            v175 = v154[72];
            v173 = v174 < v175;
            if (v174 == v175) {
              v173 = *(__int64*)(v170 + 744) < v154[93];
            }
          }
          if (!v173) {
          LABEL_189:
            v17 = (unsigned __int64)v10-- > 2;
            if (!v17) {
              return result;
            }
            continue;
          }
          *v153 = v170;
          if (v167 >= 2) {
            while (1) {
              v176 = v168 - 1;
              v177 = v154[94];
              v168 = (v168 - 1) >> 1;
              v153 = &k[v168];
              v178 = *v153;
              v179 = *(__int64*)(*v153 + 752);
              v180 = v179 < v177;
              if (v179 == v177) {
                v181 = *(__int64*)(v178 + 576);
                v182 = v154[72];
                v180 = v181 < v182;
                if (v181 == v182) {
                  v180 = *(__int64*)(v178 + 744) < v154[93];
                }
              }
              if (!v180) {
                break;
              }
              *v169 = v178;
              v169 = &k[v168];
              if (v176 <= 1) {
                goto LABEL_188;
              }
            }
          }
          v153 = v169;
        }
        break;
      }
    LABEL_188:
      *v153 = (__int64)v154;
      goto LABEL_189;
    }
    v11 = &k[(unsigned __int64)v10 >> 1];
    if ((unsigned __int64)v10 < 0x81) {
      result = (__int64)GameRoutine_645610(&v7[(unsigned __int64)v10 >> 1], v7,
                                           a2 - 1);
    }
    else {
      GameRoutine_645610(v7, &v7[(unsigned __int64)v10 >> 1], a2 - 1);
      GameRoutine_645610(v7 + 1, v11 - 1, a2 - 2);
      GameRoutine_645610(v7 + 2, v11 + 1, a2 - 3);
      result = (__int64)GameRoutine_645610(v11 - 1, v11, v11 + 1);
      v12 = *v7;
      *v7 = *v11;
      *v11 = v12;
    }
    v13 = (__int64*)*v7;
    --a3;
    if ((a4 & 1) != 0) {
      v14 = v13[94];
    LABEL_23:
      for (i = 0;; ++i) {
        v21 = (__int64*)v7[i + 1];
        v22 = v21[94];
        v23 = v22 < v14;
        if (v22 == v14) {
          v24 = v21[72];
          v25 = v13[72];
          v23 = v24 < v25;
          if (v24 == v25) {
            v23 = v21[93] < v13[93];
          }
        }
        if (!v23) {
          break;
        }
      }
      v26 = &v7[i];
      j = a2 - 1;
      v28 = (unsigned __int64)&v7[i + 1];
      if (i != 0) {
        while (1) {
          v29 = *j;
          v30 = *(__int64*)(*j + 752);
          v31 = v30 < v14;
          if (v30 == v14) {
            v32 = *(__int64*)(v29 + 576);
            v33 = v13[72];
            v31 = v32 < v33;
            if (v32 == v33) {
              v31 = *(__int64*)(v29 + 744) < v13[93];
            }
          }
          if (v31) {
            break;
          }
          --j;
        }
      }
      else {
        j = a2;
        if (v28 < (unsigned __int64)a2) {
          for (j = a2 - 1;; --j) {
            v34 = *j;
            v35 = *(__int64*)(*j + 752);
            if (v35 == v14) {
              v36 = *(__int64*)(v34 + 576);
              v37 = v13[72];
              if (v36 == v37) {
                if (v28 >= (unsigned __int64)j ||
                    *(__int64*)(v34 + 744) < v13[93]) {
                  break;
                }
              }
              else if (v28 >= (unsigned __int64)j || v36 < v37) {
                break;
              }
            }
            else if (v28 >= (unsigned __int64)j || v35 < v14) {
              break;
            }
          }
        }
      }
      if (v28 < (unsigned __int64)j) {
        v38 = *j;
        v39 = v28;
        v40 = j;
        do {
          *(__int64*)v39 = v38;
          v39 += 8LL;
          *v40 = (__int64)v21;
          v41 = v13[94];
          while (1) {
            v21 = *(__int64**)v39;
            v42 = *(__int64*)(*(__int64*)v39 + 752LL);
            v43 = v42 < v41;
            if (v42 == v41) {
              v44 = v21[72];
              v45 = v13[72];
              v43 = v44 < v45;
              if (v44 == v45) {
                v43 = v21[93] < v13[93];
              }
            }
            if (!v43) {
              break;
            }
            v39 += 8LL;
          }
          do {
            while (1) {
              while (1) {
                v46 = *--v40;
                v38 = v46;
                v47 = *(__int64*)(v46 + 752);
                if (v47 == v41) {
                  break;
                }
                if (v47 < v41) {
                  goto LABEL_51;
                }
              }
              v48 = *(__int64*)(v38 + 576);
              v49 = v13[72];
              if (v48 != v49) {
                break;
              }
              if (*(__int64*)(v38 + 744) < v13[93]) {
                goto LABEL_51;
              }
            }
          } while (v48 >= v49);
        LABEL_51:;
        } while (v39 < (unsigned __int64)v40);
        v26 = (__int64*)(v39 - 8);
      }
      if (v7 != v26) {
        *v7 = *v26;
      }
      *v26 = (__int64)v13;
      if (v28 < (unsigned __int64)j) {
        goto LABEL_72;
      }
      k = v26 + 1;
      v50 = GameRoutine_645980(v7, v26);
      result = GameRoutine_645980(v26 + 1, a2);
      if ((result & 1) != 0) {
        a2 = v26;
        if (v50) {
          return result;
        }
        goto LABEL_2;
      }
      if (!v50) {
      LABEL_72:
        result = Manager_644a20((__int64)v7, v26, a3, a4 & 1);
        a4 = 0;
        k = v26 + 1;
      }
    }
    else {
      v15 = (__int64*)*(v7 - 1);
      v16 = v13[94];
      v14 = v15[94];
      v17 = v14 < v16;
      if (v14 == v16) {
        v18 = v15[72];
        v19 = v13[72];
        if (v18 == v19) {
          if (v15[93] < v13[93]) {
            goto LABEL_23;
          }
        }
        else if (v18 < v19) {
          goto LABEL_23;
        }
      }
      else {
        v14 = v13[94];
        if (v17) {
          goto LABEL_23;
        }
      }
      v51 = *v8;
      v52 = *(__int64*)(*v8 + 752);
      v53 = v16 < v52;
      if (v16 == v52) {
        v54 = v13[72];
        v55 = *(__int64*)(v51 + 576);
        v53 = v54 < v55;
        if (v54 == v55) {
          v53 = v13[93] < *(__int64*)(v51 + 744);
        }
      }
      if (v53) {
        for (k = v7 + 1;; ++k) {
          v56 = *k;
          v57 = *(__int64*)(*k + 752);
          v58 = v16 < v57;
          if (v16 == v57) {
            v59 = v13[72];
            v60 = *(__int64*)(v56 + 576);
            v58 = v59 < v60;
            if (v59 == v60) {
              v58 = v13[93] < *(__int64*)(v56 + 744);
            }
          }
          if (v58) {
            break;
          }
        }
      }
      else {
        for (k = v7 + 1; k < a2; ++k) {
          v61 = *k;
          v62 = *(__int64*)(*k + 752);
          v63 = v16 < v62;
          if (v16 == v62) {
            v64 = v13[72];
            v65 = *(__int64*)(v61 + 576);
            v63 = v64 < v65;
            if (v64 == v65) {
              v63 = v13[93] < *(__int64*)(v61 + 744);
            }
          }
          if (v63) {
            break;
          }
        }
      }
      v66 = a2;
      if (k < a2) {
        v66 = a2 - 1;
        v67 = v16 < v52;
        if (v16 == v52) {
        LABEL_93:
          v68 = v13[72];
          v69 = *(__int64*)(v51 + 576);
          v67 = v68 < v69;
          if (v68 == v69) {
            v67 = v13[93] < *(__int64*)(v51 + 744);
          }
        }
        while (v67) {
          v70 = *--v66;
          v51 = v70;
          v71 = *(__int64*)(v70 + 752);
          v67 = v16 < v71;
          if (v16 == v71) {
            goto LABEL_93;
          }
        }
      }
      if (k < v66) {
        v72 = *k;
        v73 = *v66;
        do {
          *k++ = v73;
          *v66 = v72;
          v74 = v13[94];
          while (1) {
            v72 = *k;
            v75 = *(__int64*)(*k + 752);
            v76 = v74 < v75;
            if (v74 == v75) {
              v77 = v13[72];
              v78 = *(__int64*)(v72 + 576);
              v76 = v77 < v78;
              if (v77 == v78) {
                v76 = v13[93] < *(__int64*)(v72 + 744);
              }
            }
            if (v76) {
              break;
            }
            ++k;
          }
          do {
            while (1) {
              while (1) {
                v79 = *--v66;
                v73 = v79;
                v80 = *(__int64*)(v79 + 752);
                if (v74 == v80) {
                  break;
                }
                if (v74 >= v80) {
                  goto LABEL_101;
                }
              }
              v81 = v13[72];
              v82 = *(__int64*)(v73 + 576);
              if (v81 != v82) {
                break;
              }
              if (v13[93] >= *(__int64*)(v73 + 744)) {
                goto LABEL_101;
              }
            }
          } while (v81 < v82);
        LABEL_101:;
        } while (k < v66);
      }
      v83 = k - 1;
      if (v7 != k - 1) {
        *v7 = *v83;
      }
      a4 = 0;
      *v83 = (__int64)v13;
    }
  }
  result = (__int64)GameRoutine_645610(k, k + 1, k + 2);
  v91 = (__int64*)*(a2 - 1);
  v92 = (__int64*)k[2];
  v93 = v91[94];
  v94 = v92[94];
  v95 = v93 < v94;
  if (v93 == v94 &&
      (v96 = v91[72], v97 = v92[72], v95 = v96 < v97, v96 == v97)) {
    if (v91[93] >= v92[93]) {
      return result;
    }
  }
  else if (!v95) {
    return result;
  }
  k[2] = (__int64)v91;
  *(a2 - 1) = (__int64)v92;
  v184 = (__int64*)k[1];
  v183 = (__int64*)k[2];
  v185 = v183[94];
  v186 = v184[94];
  v187 = v185 < v186;
  if (v185 == v186) {
    v188 = v183[72];
    v189 = v184[72];
    v187 = v188 < v189;
    if (v188 == v189) {
      v187 = v183[93] < v184[93];
    }
  }
  if (v187) {
    k[1] = (__int64)v183;
    k[2] = (__int64)v184;
    v190 = *k;
    v191 = v183[94];
    v192 = *(__int64*)(*k + 752);
    v193 = v191 < v192;
    if (v191 == v192) {
      v194 = v183[72];
      v195 = *(__int64*)(v190 + 576);
      v193 = v194 < v195;
      if (v194 == v195) {
        v193 = v183[93] < *(__int64*)(v190 + 744);
      }
    }
    if (v193) {
      *k = (__int64)v183;
      k[1] = v190;
    }
  }
  return result;
}

__int64 fs_Manager_createFileAsync_fs_File(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  int v11;
  __int64 v12;
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;
  __int64 v20;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex(a1 + 4456),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *(_QWORD*)(a2 + 24);
  v5 = *(_QWORD*)(a2 + 32);
  v6 = *(_QWORD*)(a2 + 16);
  v18_.v19 = v4;
  v20 = v5;
  v18_.v18 = v6;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
  }
  v16_.v16[0] = GameData_1f8f4e0;
  v16_.v16[1] = &v20;
  v16_.v17 = v16_.v16;
  v16_.v16[2] = a1;
  v16_.v16[3] = &v18_.v18;
  v7 = ({
    unsigned __int128 r_ = GameRoutine_635a60_alt1_pair(a1, (char**)a2, 0, 0, 0,
                                                        (__int64)v16_.v16);
    v8 = COERCE_AS(__typeof__(v8), (unsigned long long)(r_ >> 64));
    (__int64)(unsigned long long)r_;
  });
  v9 = v8;
  if (v16_.v17 == v16_.v16) {
    v10 = 32;
  }
  else {
    if (v16_.v17 == nullptr) {
      goto LABEL_8;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v16_.v17 + v10))((__int64)v16_.v17),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_8:
  if ((v9 & 1) != 0) {
    v11 = *(_DWORD*)(a2 + 40);
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)v12 = v7;
    *(_DWORD*)(v12 + 8) = v11;
    GameRoutine_17d4db0(a1 + 3536, v12),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    if (v18_.v19 == 0) {
      goto LABEL_16;
    }
    if (*(_QWORD*)(v18_.v19 + 8) != -1) {
      v14_.v14 = v18_.v18;
      v14_.v15 = v18_.v19;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18_.v19 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_631500(v7, &v14_.v14),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v14_.v15 != 0) {
        std___1___shared_weak_count___release_weak(v14_.v15),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  if (v18_.v19 != 0) {
    std___1___shared_weak_count___release_weak(v18_.v19),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_16:
  nn_os_UnlockMutex_alt1(a1 + 4456),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return v7;
}

_QWORD* fs_Manager_createFileAsync_fs_File_closure_CloneInto(_QWORD* result,
                                                             _QWORD* a2)
{
  __int64 v2;
  __int64 v3;

  *a2 = GameData_1f8f4e0;
  v2 = result[1];
  v3 = result[3];
  a2[2] = result[2];
  a2[3] = v3;
  a2[1] = v2;
  return result;
}

__int64 fs_Manager_createFileAsync_fs_File_closure_Invoke(__int64 a1,
                                                          _BYTE** a2)
{
  __int64 v2;
  _BYTE* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v11[2];
  int v12;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(__int64**)(a1 + 24);
  v7 = v5;
  v8 = v6[1];
  v11[0] = *v6;
  v11[1] = v8;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
    v12 = 0;
    GameRoutine_6313f0(v5, v2, v4, v11, **(_QWORD**)(a1 + 8), &v12);
    std___1___shared_weak_count___release_weak(v8);
  }
  else {
    v9 = *(__int64**)(a1 + 8);
    v12 = 0;
    GameRoutine_6313f0(v5, v2, v4, v11, *v9, &v12);
  }
  return v7;
}

__int64 fs_Manager_createFileSync_fs_File_closure_Invoke(__int64 a1, _BYTE** a2)
{
  __int64 v2;
  _BYTE* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  int v9;
  __int64 v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(__int64**)(a1 + 8);
  v7 = v5;
  v10[0] = 0;
  v10[1] = 0;
  v9 = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  return v7;
}

__attribute__((swiftcall)) void Manager_66c4e0(PSEUDO_X8 x8_,
                                               unsigned __int8* a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int8* v13;
  unsigned __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int8* v17;
  __int64 v18;
  unsigned __int64 v19;
  int v20;
  unsigned __int64 v21;
  _QWORD* v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int8* v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  char* v34;
  unsigned __int64 v35;
  __int64 v36;
  char* v37;
  unsigned __int64 v38;
  char* v39;
  __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  unsigned __int64 v53;
  char* v54;
  __int64 v55;
  unsigned __int64 v56;
  char* v57;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  result = Manager_66cc20_alt1(a2, a1);
  v12 = *a1;
  v14 = *((_QWORD*)a1 + 1);
  v13 = *((unsigned __int8**)a1 + 2);
  v15 = (v12 & 1) == 0;
  v16 = v12 >> 1;
  a2[1] = result;
  if (v15) {
    v17 = a1 + 1;
  }
  else {
    v17 = v13;
  }
  if (!v15) {
    v16 = v14;
  }
  if (v16 != 0) {
    v18 = -(__int64)v16;
    v19 = v16;
    do {
      if (v19 == 0) {
        result;
        return;
      }
      v20 = v17[--v19];
      ++v18;
    } while (v20 != 46);
    if (v19 != -1) {
      if (v16 >= v19) {
        v21 = v19;
      }
      else {
        v21 = v16;
      }
      if (v21 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_80;
      }
      v22 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      if (v21 >= 0x17) {
        if ((v21 | 7) == 0x17) {
          v24 = 26;
        }
        else {
          v24 = (v21 | 7) + 1;
        }
        v23 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v24, 16, 0);
        v56 = v21;
        v57 = v23;
        v55 = v24 | 1;
      }
      else {
        LOBYTE(v55) = 2 * v21;
        v23 = (char*)&v55 + 1;
        if (v19 == 0) {
        LABEL_23:
          v23[v21] = 0;
          v25 = *a1;
          if ((v25 & 1) != 0) {
            v26 = *((_QWORD*)a1 + 1);
          }
          else {
            v26 = v25 >> 1;
          }
          v27 = v26 - v19;
          if (v26 < v19) {
            String_60a230(result);
          }
          if ((v25 & 1) != 0) {
            v28 = *((unsigned __int8**)a1 + 2);
          }
          else {
            v28 = a1 + 1;
          }
          if (v27 < 0xFFFFFFFFFFFFFFF7LL) {
            if (v27 >= 0x17) {
              if ((v27 | 7) == 0x17) {
                v30 = 26;
              }
              else {
                v30 = (v27 | 7) + 1;
              }
              v29 = (char*)fw_memory_HeapManager_Allocate(*v22, v30, 16, 0);
              v53 = v26 - v19;
              v54 = v29;
              v52 = v30 | 1;
            }
            else {
              LOBYTE(v52) = 2 * v27;
              v29 = (char*)&v52 + 1;
              if (v26 == v19) {
              LABEL_39:
                v31 = 0;
                v29[v26 + v18] = 0;
                v32 = snd_g_fileIndex_ptr[0];
                do {
                  v50 = 0;
                  v51 = nullptr;
                  v49 = 0;
                  v33 = *(_QWORD*)((char*)&GameData_1f90270 + v31 + 8);
                  if ((v55 & 1) != 0) {
                    v34 = v57;
                  }
                  else {
                    v34 = (char*)&v55 + 1;
                  }
                  if ((v55 & 1) != 0) {
                    v35 = v56;
                  }
                  else {
                    v35 = (unsigned __int64)(unsigned __int8)v55 >> 1;
                  }
                  GameRoutine_1a09ce0(&v49, v34, v35);
                  GameRoutine_1a09ce0(&v49, &GameData_1ac690d, 1);
                  v36 = strlen(v33);
                  GameRoutine_1a09ce0(&v49, v33, v36);
                  if ((v52 & 1) != 0) {
                    v37 = v54;
                  }
                  else {
                    v37 = (char*)&v52 + 1;
                  }
                  if ((v52 & 1) != 0) {
                    v38 = v53;
                  }
                  else {
                    v38 = (unsigned __int64)(unsigned __int8)v52 >> 1;
                  }
                  result = GameRoutine_1a09ce0(&v49, v37, v38);
                  if ((v49 & 1) != 0) {
                    v39 = v51;
                  }
                  else {
                    v39 = (char*)&v49 + 1;
                  }
                  if (v39 != nullptr) {
                    v40 = *v32;
                    v41 = strlen(v39);
                    result = GameRoutine_6360e0(v40, (__int64)v39, v41, 1, 2);
                    if ((result & 1) != 0) {
                      v42 = (_QWORD*)a2[1];
                      if ((unsigned __int64)v42 >= a2[2]) {
                        result = Manager_66cc20_alt1(a2, &v49);
                      }
                      else if ((v49 & 1) != 0) {
                        fw_text_String_CopyTerminated(a2[1], v51, v50);
                        result = (unsigned __int64)(v42 + 3);
                      }
                      else {
                        v43 = v49;
                        v44 = v51;
                        result = (unsigned __int64)(v42 + 3);
                        v42[1] = v50;
                        v42[2] = v44;
                        *v42 = v43;
                      }
                      a2[1] = result;
                    }
                  }
                  if ((v49 & 1) != 0 && v51 != nullptr) {
                    v45 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v45 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v51);
                  }
                  v31 += 16;
                } while (v31 != 64);
                v46 = fw_memory_g_heap_manager_ptr;
                if ((v52 & 1) != 0 && v54 != nullptr) {
                  v47 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v47 = 56;
                  }
                  result = nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, v54);
                }
                if ((v55 & 1) != 0 && v57 != nullptr) {
                  v48 = 128;
                  if (*(_QWORD*)(*(_QWORD*)v46 + 200LL) == 0) {
                    v48 = 56;
                  }
                  {
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v46 + v48, v57);
                    return;
                  }
                }
                {
                  result;
                  return;
                }
              }
            }
            memmove(v29, &v28[v19], v26 - v19);
            goto LABEL_39;
          }
        LABEL_80:
          String_60a1d0_alt3(result, v5, v6, v7, v8, v9, v10, v11);
        }
      }
      result = memmove(v23, v17, v21);
      goto LABEL_23;
    }
  }
  {
    result;
    return;
  }
}

_QWORD* Manager_66cc20(__int64* a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  char* v14;
  __int64 v15;

  v2 = *a1;
  v3 = a1[1] - *a1;
  v4 = 1 - 0x5555555555555555LL * (v3 >> 3);
  if (v4 > 0xAAAAAAAAAAAAAAALL) {
    GameRoutine_64aa00();
  }
  v7 = fw_memory_g_heap_manager_ptr;
  if (0x5555555555555556LL * ((a1[2] - v2) >> 3) > v4) {
    v4 = 0x5555555555555556LL * ((a1[2] - v2) >> 3);
  }
  if (0xAAAAAAAAAAAAAAABLL * ((a1[2] - v2) >> 3) >= 0x555555555555555LL) {
    v8 = 0xAAAAAAAAAAAAAAALL;
  }
  else {
    v8 = v4;
  }
  if (v8 != 0) {
    if (v8 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_60a210(a1);
    }
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        24 * v8, 16, 0);
  }
  else {
    v9 = 0;
  }
  v10 = (_QWORD*)(v9 + v3);
  v11 = v9 + 24 * v8;
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(v9 + v3, a2[2], a2[1]);
    v2 = *a1;
    v3 = a1[1] - *a1;
  }
  else {
    v12 = a2[1];
    *v10 = *a2;
    v10[1] = v12;
    v10[2] = a2[2];
  }
  v13 = v10 + 3;
  v14 = (char*)v10 - v3;
  memcpy(v14, v2, v3);
  *a1 = (__int64)v14;
  a1[1] = (__int64)v13;
  a1[2] = v11;
  if (v2 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v15, v2);
  }
  return v13;
}

_QWORD* fs_Manager_createFileSync_game_ArchiveFile_closure_Invoke(__int64 a1,
                                                                  _BYTE** a2)
{
  __int64 v2;
  _BYTE* v4;
  _QWORD* v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v9[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 816, 16);
  v6 = *(__int64**)(a1 + 8);
  v7 = v5;
  v9[0] = 0;
  v9[1] = 0;
  GameRoutine_66b770(v5, v2, v4, v9, *v6);
  return v7;
}

_QWORD* fs_Manager_createFileSync_font_FontContentLoader_FsFile_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  int v9;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = (_QWORD*)v5;
  v10[0] = 0;
  v10[1] = 0;
  v9 = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  *v7 = font_FontContentLoader_FsFile_vtable;
  return v7;
}

char* Manager_a4a540(__int64 a1, unsigned __int8* a2)
{
  int v2;
  unsigned int v5;
  __int64 v6;
  int v7;
  _DWORD* v8;
  unsigned int v9;
  unsigned __int8* v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  char* v17;
  __int64 v18;
  unsigned int v19;
  unsigned __int8* v20;
  __int64 v21;
  char* v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  _DWORD* v28;

  v2 = *(_DWORD*)(a1 + 32);
  if (v2 == -1) {
    return nullptr;
  }
  v5 = strlen(a2);
  v6 = *(_QWORD*)(a1 + 24);
  v7 = *a2;
  v8 = *(_DWORD**)(v6 + 24LL * v2);
  v9 = *v8;
  if (*a2 != 0) {
    v10 = a2 + 1;
    v11 = 0;
    do {
      v11 = v7 + 1170 * v11;
      v12 = *v10++;
      v7 = v12;
    } while (v12 != 0);
  }
  else {
    v11 = 0;
  }
  v13 = v11 % v9;
  v14 = v8[(2 * (v11 % v9)) | 1];
  if (v14 == 0) {
    return nullptr;
  }
  v15 = 0;
  v16 = v8[2 * v13 + 2];
  v17 = (char*)v8 + 1;
  while (1) {
    v18 = v16;
    v19 = *((unsigned __int8*)v8 + v16);
    if (v5 == v19) {
      break;
    }
  LABEL_9:
    ++v15;
    v16 = v18 + v19 + 5;
    if (v15 == v14) {
      return nullptr;
    }
  }
  v20 = a2;
  v21 = v5;
  v22 = &v17[v18];
  if (v5 != 0) {
    do {
      v24 = *v20++;
      v23 = v24;
      v25 = (unsigned __int8)*v22++;
      if (v23 != v25) {
        goto LABEL_9;
      }
    } while (--v21 != 0);
  }
  v26 = *(unsigned int*)&v17[v18 + v19];
  if ((v26 & 0x80000000) == 0) {
    v27 = *(_DWORD*)(a1 + 36);
    if (v27 != -1) {
      v28 = *(_DWORD**)(v6 + 24LL * v27);
      if (*v28 > (int)v26) {
        return (char*)v28 + (unsigned int)v28[v26 + 1];
      }
    }
  }
  return nullptr;
}

const char* Manager_a4aea0(__int64 a1)
{
  unsigned int v1;
  bool v4;
  bool v6;
  __int64 v7;
  __int64 v8;

  v1 = BYTE3(a1);
  v8 = a1;
  if ((unsigned __int8)a1 <= 0x68u) {
    switch ((unsigned __int8)a1) {
    case 'd':
      if (BYTE1(a1) == 101 && BYTE2(a1) == 0) {
        return "EUde";
      }
      break;
    case 'e':
      v4 = BYTE1(a1) == 110 && BYTE2(a1) == 45;
      if (BYTE5(a1) == 0 && v1 == 85 && BYTE4(a1) == 83 && v4) {
        return "USen";
      }
      if (BYTE2(a1) == 45 && (a1 & 0xFF000000000000LL) == 0 &&
          BYTE5(a1) == 57 && BYTE4(a1) == 49 && BYTE1(a1) == 115 && v1 == 52) {
        return "USes";
      }
      v6 = v1 == 71 && BYTE4(a1) == 66 && v4;
      if (BYTE5(a1) == 0 && v6) {
        return "EUen";
      }
      if (BYTE1(a1) == 115 && BYTE2(a1) == 0) {
        return "EUes";
      }
      break;
    case 'f':
      if (BYTE5(a1) == 0 && BYTE4(a1) == 65 && v1 == 67 && BYTE1(a1) == 114 &&
          BYTE2(a1) == 45) {
        return "USfr";
      }
      if (BYTE1(a1) == 114 && BYTE2(a1) == 0) {
        return "EUfr";
      }
      break;
    default:
      break;
    }
  }
  else if ((unsigned __int8)a1 > 0x6Du) {
    if ((unsigned __int8)a1 == 110) {
      if (BYTE1(a1) == 108 && BYTE2(a1) == 0) {
        return "EUnl";
      }
    }
    else if ((unsigned __int8)a1 == 112 && BYTE5(a1) == 0 && BYTE4(a1) == 82 &&
             v1 == 66 && BYTE1(a1) == 116 && BYTE2(a1) == 45) {
      return "USpt";
    }
  }
  else if ((unsigned __int8)a1 == 105) {
    if (BYTE1(a1) == 116 && BYTE2(a1) == 0) {
      return "EUit";
    }
  }
  else if ((unsigned __int8)a1 == 106 && BYTE1(a1) == 97 && BYTE2(a1) == 0) {
    return "JPja";
  }
  v7 = 29808;
  if (GameRoutine_91bb50((unsigned __int8*)&v8, (unsigned __int8*)&v7)) {
    return "EUpt";
  }
  v7 = 30066;
  if (GameRoutine_91bb50((unsigned __int8*)&v8, (unsigned __int8*)&v7)) {
    return "EUru";
  }
  v7 = 0x736E61482D687ALL;
  if (GameRoutine_91bb50((unsigned __int8*)&v8, (unsigned __int8*)&v7)) {
    return "CNzh";
  }
  v7 = 0x746E61482D687ALL;
  if (GameRoutine_91bb50((unsigned __int8*)&v8, (unsigned __int8*)&v7)) {
    return "TWzh";
  }
  v7 = 28523;
  if (GameRoutine_91bb50((unsigned __int8*)&v8, (unsigned __int8*)&v7)) {
    return "KRko";
  }
  else {
    return "USen";
  }
}

__int64 Manager_a4b3c0(__int64 a1)
{
  const char* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v8[3];
    int v9;
  } v8_;
  _BYTE v10[256];

  v2 = GameRoutine_a4aea0(GameData_21759e0);
  snprintf(v10, 256, "Msg/%s/Msg.msbp", v2);
  v8_.v8[0] = v10;
  v3 = *snd_g_fileIndex_ptr[0];
  v8_.v8[1] = strlen(v10);
  v8_.v8[2] = GameData_212c3c8;
  v8_.v9 = 2;
  v4 = ((__int64 (*)(__int64, _QWORD*))GameRoutine_a51920)(v3, v8_.v8);
  *(_QWORD*)(a1 + 14600) = v4;
  v5 = v4;
  v6 = *(_QWORD*)(v4 + 8);
  nn_os_LockMutex(v6 + 4456);
  nn_os_AcquireWriteLock(v5 + 696);
  *(_DWORD*)(v5 + 656) |= 4u;
  nn_os_ReleaseWriteLock(v5 + 696);
  nn_os_UnlockMutex(v6 + 4456);
  return Registration_a4b4a0(&GameData_21fdd20);
}

__int64 Manager_a4b6c0(_QWORD* a1, char a2)
{
  __int64* v2;
  __int64 result;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  unsigned __int8* v24;
  unsigned __int64 v25;
  const char* v26;
  unsigned __int64 v27;
  unsigned __int8* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  _BYTE* v32;
  char* v33;
  __int64 v34;
  _BYTE* v35;
  __int64 v36;
  char* v37;
  _QWORD* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  char* v49;
  __int64 v50;
  int v51;
  char* v52;
  unsigned __int64 v53;
  char* v54;
  unsigned __int64 v55;
  char* v56;
  __int64 v57;
  char* v59;
  __int64 v60;
  __int64* v61;
  _QWORD* v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64* v67;
  __int64 v68;
  _QWORD* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int8* v75;
  char v76;
  __int64 v77;
  unsigned __int64 v78;
  char v79;
  __int64 v80;
  __int64 v81;
  const char* v82;
  unsigned __int64 v83;
  char v84;
  __int64 v85;
  __int64 v86;
  __int64* v87;
  char v88;
  __int64 v89;
  __int64 v90;
  unsigned __int8* v92;
  unsigned __int64 v93;
  __int64 v94;
  __int64* v95;
  __int64 v97;
  struct {
    _QWORD v98[2];
    char* v99;
  } v98_;
  _QWORD v100[6];
  struct {
    __int64 v101;
    __int64 v102;
    unsigned __int64 v103;
    __int64 (*v104)();
    __int64 v105;
  } v101_;
  struct {
    _BYTE v106[256];
    _BYTE* v107;
  } v106_;
  struct {
    __int64* v108;
    __int64 v109;
    _QWORD* v110;
    __int64 v111;
  } v108_;
  struct {
    char v112[8];
    char v113;
  } v112_;
  struct {
    unsigned __int64 v114[2];
    int v115;
    char gap532_[4];
    __int64 v116;
    __int64 v117;
  } v114_;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  *(_BYTE*)result = 16;
  *(_BYTE*)(result + 9) = 0;
  v4 = (__int64*)(result + 24);
  v5 = (__int64*)result;
  *(_QWORD*)(result + 1) = 0x73746E65746E6F43LL;
  v6 = *(_QWORD*)(snd_g_fileIndex + 4752);
  if (v6 != 0) {
    v7 = *(_QWORD**)(v6 + 64);
    v8 = *(_QWORD**)(v6 + 72);
    if (v7 != v8) {
      v9 = result + 24;
      do {
        v12 = (_QWORD*)*v7;
        if (*(_BYTE*)*v7 == 1) {
          if ((unsigned __int64)v4 >= v9) {
            v13 = (char*)((char*)v4 - (char*)v5);
            v14 = 0xAAAAAAAAAAAAAAABLL * (v4 - v5) + 1;
            if (v14 > 0xAAAAAAAAAAAAAAALL) {
            LABEL_193:
              GameRoutine_64aa00_alt1();
            }
            if (0x5555555555555556LL * ((__int64)(v9 - (_QWORD)v5) >> 3) >
                v14) {
              v14 = 0x5555555555555556LL * ((__int64)(v9 - (_QWORD)v5) >> 3);
            }
            if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v9 - (_QWORD)v5) >> 3) >=
                0x555555555555555LL) {
              v15 = 0xAAAAAAAAAAAAAAALL;
            }
            else {
              v15 = v14;
            }
            if (v15 != 0) {
              if (v15 > 0xAAAAAAAAAAAAAAALL) {
              LABEL_194:
                GameRoutine_60a210_alt1();
              }
              v16 = v5;
              v17 = fw_memory_HeapManager_Allocate_alt1(
                  fw_memory_g_heap_manager, 24 * v15, 16, 0);
            }
            else {
              v16 = v5;
              v17 = 0;
            }
            v18 = &v13[v17];
            if ((v12[2] & 1) != 0) {
              fw_text_String_CopyTerminated_alt1((__int64*)&v13[v17], v12[4],
                                                 v12[3]);
              v13 = (char*)((char*)v4 - (char*)v16);
              v22 = v16;
            }
            else {
              v19 = v12[2];
              v20 = v12[3];
              v21 = v12[4];
              v22 = v16;
              *((_QWORD*)v18 + 1) = v20;
              *((_QWORD*)v18 + 2) = v21;
              *(_QWORD*)v18 = v19;
            }
            v4 = (__int64*)(v18 + 24);
            v9 = v17 + 24 * v15;
            v5 = (__int64*)(v18 - v13);
            result = memcpy(v18 - v13, v22, v13);
            v2 = &fw_memory_g_heap_manager;
            if (v22 != nullptr) {
              v23 = 128;
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                v23 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  fw_memory_g_heap_manager + v23, v22);
            }
          }
          else {
            if ((v12[2] & 1) != 0) {
              result = fw_text_String_CopyTerminated_alt1(v4, v12[4], v12[3]);
            }
            else {
              v10 = v12[2];
              v11 = v12[4];
              v4[1] = v12[3];
              v4[2] = v11;
              *v4 = v10;
            }
            v4 += 3;
          }
        }
        ++v7;
      } while (v7 != v8);
      if (v5 == v4) {
      LABEL_178:
        if (v5 != nullptr) {
          if (v5 != v4) {
            v87 = v4;
            do {
              v88 = *((_BYTE*)v87 - 24);
              v87 -= 3;
              if ((v88 & 1) != 0 && *(v4 - 1) != 0) {
                if (*(_QWORD*)(*v2 + 200) != 0) {
                  v89 = 128;
                }
                else {
                  v89 = 56;
                }
                nn_mem_StandardAllocator_Free(*v2 + v89, *(v4 - 1));
              }
              v4 = v87;
            } while (v87 != v5);
          }
          v90 = 128;
          if (*(_QWORD*)(*v2 + 200) == 0) {
            v90 = 56;
          }
          return nn_mem_StandardAllocator_Free(*v2 + v90, (_QWORD)v5);
        }
        return result;
      }
    }
  }
  v94 = 0;
  v95 = v4;
  v24 = (unsigned __int8*)v5;
  v25 = 0;
  v92 = v24;
  v93 = 0;
  while (1) {
    v26 = GameRoutine_a4aea0(GameData_21759e0);
    v27 = *v24;
    v29 = *((_QWORD*)v24 + 1);
    v28 = *((unsigned __int8**)v24 + 2);
    v101_.v101 = (__int64)v106_.v106;
    v101_.v102 = 256;
    v106_.v107 = v106_.v106;
    v101_.v105 = 0;
    v114_.v115 = 0;
    v112_.v112[0] = 0;
    v112_.v113 = 0;
    v101_.v103 = 0;
    v101_.v104 = GameRoutine_64be60;
    if ((v27 & 1) == 0) {
      v28 = v24 + 1;
    }
    v100[4] = 397;
    if ((v27 & 1) != 0) {
      v30 = v29;
    }
    else {
      v30 = v27 >> 1;
    }
    v100[0] = v28;
    v100[1] = v30;
    v100[2] = v26;
    v114_.v114[0] = (unsigned __int64)"{}:/Msg/{}";
    v114_.v114[1] = (unsigned __int64)"";
    v114_.v116 = 0;
    v114_.v117 = 2;
    v108_.v109 = 2;
    v108_.v110 = v100;
    v108_.v111 = 397;
    v108_.v108 = &v101_.v101;
    GameRoutine_6380e0((__int64)v114_.v114, &v108_.v108);
    if (v112_.v113 == 1) {
      std___1_locale_Destroy_locale(v112_.v112);
    }
    v31 = v101_.v103;
    if (v101_.v103 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_192:
      String_60a1d0();
    }
    v32 = v106_.v107;
    if (v101_.v103 >= 0x17) {
      if ((v101_.v103 | 7) == 0x17) {
        v34 = 26;
      }
      else {
        v34 = (v101_.v103 | 7) + 1;
      }
      v33 = (char*)fw_memory_HeapManager_Allocate_alt1(*v2, v34, 16, 0);
      v98_.v98[1] = v31;
      v98_.v99 = v33;
      v98_.v98[0] = v34 | 1;
    }
    else {
      v33 = (char*)v98_.v98 + 1;
      LOBYTE(v98_.v98[0]) = 2 * v101_.v103;
      if (v101_.v103 == 0) {
        goto LABEL_48;
      }
    }
    memmove(v33, v32, v31);
  LABEL_48:
    v35 = v106_.v107;
    v33[v31] = 0;
    if (v35 != v106_.v106 && v35 != nullptr) {
      v36 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v36, (_QWORD)v35);
    }
    if ((v98_.v98[0] & 1) != 0) {
      v37 = v98_.v99;
    }
    else {
      v37 = (char*)v98_.v98 + 1;
    }
    result = nn_fs_OpenDirectory(v100, v37, 3);
    v38 = a1;
    if ((_DWORD)result != 0) {
      if ((v98_.v98[0] & 1) != 0) {
        goto LABEL_137;
      }
      goto LABEL_31;
    }
    v114_.v114[0] = 0;
    if ((unsigned int)nn_fs_GetDirectoryEntryCount(v114_.v114, v100[0]) == 0) {
      v39 = v114_.v114[0];
      if ((__int64)v114_.v114[0] >= 1) {
        if ((unsigned __int128)v114_.v114[0] * 0x310u >> 64 == 0) {
          v40 = 784 * v114_.v114[0];
        }
        else {
          v40 = -1;
        }
        v41 = fw_memory_HeapManager_Allocate_alt1(*v2, v40, 16, 0);
        memset(v41, 0, v40);
        v97 = 0;
        if ((unsigned int)nn_fs_ReadDirectory(&v97, v41, v100[0], v39) == 0) {
          v45 = v97;
          if (v97 >= 1) {
            v46 = 0;
            while (*(_BYTE*)(v41 + 784 * v46 + 772) != 1) {
            LABEL_68:
              if (v45 <= ++v46) {
                goto LABEL_133;
              }
            }
            v47 = strlen(v41 + 784 * v46);
            if (v47 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_192;
            }
            v48 = v47;
            if (v47 >= 0x17) {
              if ((v47 | 7) == 0x17) {
                v50 = 26;
              }
              else {
                v50 = (v47 | 7) + 1;
              }
              v49 = (char*)fw_memory_HeapManager_Allocate_alt1(
                  fw_memory_g_heap_manager, v50, 16, 0);
              v101_.v102 = v48;
              v101_.v103 = (unsigned __int64)v49;
              v101_.v101 = v50 | 1;
            }
            else {
              v49 = (char*)&v101_.v101 + 1;
              LOBYTE(v101_.v101) = 2 * v47;
              if (v47 == 0) {
                goto LABEL_79;
              }
            }
            memcpy(v49, v41 + 784 * v46, v48);
          LABEL_79:
            v49[v48] = 0;
            v51 = v101_.v101 & 1;
            if (v51 != 0) {
              v52 = (char*)v101_.v103;
            }
            else {
              v52 = (char*)&v101_.v101 + 1;
            }
            if ((v101_.v101 & 1) != 0) {
              v53 = v101_.v102;
            }
            else {
              v53 = (unsigned __int64)(unsigned __int8)v101_.v101 >> 1;
            }
            if ((__int64)v53 >= 5) {
              v54 = &v52[v53];
              v55 = v53;
              v56 = v52;
              while (1) {
                v57 = memchr(v56, 46, v55 - 4);
                if (v57 == 0) {
                  goto LABEL_128;
                }
                if (*(_DWORD*)v57 == 1651731758 && *(_BYTE*)(v57 + 4) == 116) {
                  break;
                }
                v56 = (char*)(v57 + 1);
                v55 = v54 - v56;
                if (v54 - v56 < 5) {
                  goto LABEL_128;
                }
              }
              if ((char*)v57 != v54 && v57 - (_QWORD)v52 != -1) {
                if (v53 >= v57 - (__int64)v52) {
                  v53 = v57 - (_QWORD)v52;
                }
                if (v53 >= 0xFFFFFFFFFFFFFFF7LL) {
                  goto LABEL_192;
                }
                if (v53 >= 0x17) {
                  if ((v53 | 7) == 0x17) {
                    v60 = 26;
                  }
                  else {
                    v60 = (v53 | 7) + 1;
                  }
                  v59 = (char*)fw_memory_HeapManager_Allocate_alt1(
                      fw_memory_g_heap_manager, v60, 16, 0);
                  v108_.v109 = v53;
                  v108_.v110 = v59;
                  v108_.v108 = (__int64*)(v60 | 1);
                }
                else {
                  v59 = (char*)&v108_.v108 + 1;
                  LOBYTE(v108_.v108) = 2 * v53;
                  if ((char*)v57 == v52) {
                  LABEL_107:
                    v59[v53] = 0;
                    if (v25 >= v93) {
                      v64 = v25 - v94;
                      v65 = 1 -
                            0x5555555555555555LL * ((__int64)(v25 - v94) >> 3);
                      if (v65 > 0xAAAAAAAAAAAAAAALL) {
                        goto LABEL_193;
                      }
                      if (0x5555555555555556LL * ((__int64)(v93 - v94) >> 3) >
                          v65) {
                        v65 =
                            0x5555555555555556LL * ((__int64)(v93 - v94) >> 3);
                      }
                      if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v93 - v94) >> 3) >=
                          0x555555555555555LL) {
                        v66 = 0xAAAAAAAAAAAAAAALL;
                      }
                      else {
                        v66 = v65;
                      }
                      if (v66 != 0) {
                        if (v66 > 0xAAAAAAAAAAAAAAALL) {
                          goto LABEL_194;
                        }
                        v63 = fw_memory_HeapManager_Allocate_alt1(
                            fw_memory_g_heap_manager, 24 * v66, 16, 0);
                      }
                      else {
                        v63 = 0;
                      }
                      v67 = v108_.v108;
                      v68 = v108_.v109;
                      v25 = v63 + v64;
                      v108_.v108 = nullptr;
                      v108_.v109 = 0;
                      *(_QWORD*)v25 = v67;
                      *(_QWORD*)(v25 + 8) = v68;
                      v69 = v108_.v110;
                      v108_.v110 = nullptr;
                      *(_QWORD*)(v25 + 16) = v69;
                      v93 = v63 + 24 * v66;
                      memcpy(v63, v94, v64);
                      if (v94 != 0) {
                        v70 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v70 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v70, v94);
                        if (((unsigned __int8)v108_.v108 & 1) != 0 &&
                            v108_.v110 != nullptr) {
                          v71 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v71 = 56;
                          }
                          nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v71,
                              (_QWORD)v108_.v110);
                        }
                      }
                    }
                    else {
                      v61 = v108_.v108;
                      v62 = v108_.v110;
                      v63 = v94;
                      *(_QWORD*)(v25 + 8) = v108_.v109;
                      *(_QWORD*)(v25 + 16) = v62;
                      *(_QWORD*)v25 = v61;
                    }
                    v25 += 24LL;
                    v94 = v63;
                    v51 = v101_.v101 & 1;
                    goto LABEL_128;
                  }
                }
                memmove(v59, v52, v53);
                goto LABEL_107;
              }
            }
          LABEL_128:
            if (v51 != 0 && v101_.v103 != 0) {
              v72 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v72 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v72, v101_.v103);
            }
            v45 = v97;
            goto LABEL_68;
          }
        }
      LABEL_133:
        v2 = (__int64*)fw_memory_g_heap_manager_ptr;
        v73 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v73 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v73, v41);
        v38 = a1;
      }
    }
    result = nn_fs_CloseDirectory(v100[0]);
    if ((v98_.v98[0] & 1) != 0) {
    LABEL_137:
      if (v98_.v99 != nullptr) {
        v74 = 128;
        if (*(_QWORD*)(*v2 + 200) == 0) {
          v74 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v2 + v74, (_QWORD)v98_.v99);
      }
    }
  LABEL_31:
    v24 += 24;
    if (v24 == (unsigned __int8*)v95) {
      v4 = v95;
      if (0xAAAAAAAAAAAAAAABLL * (((char*)v95 - (char*)v92) >> 3) <= 1) {
        v76 = a2;
      }
      else {
        v75 = (unsigned __int8*)v94;
        if (v94 != v25) {
          GameRoutine_8319e0(
              v94, (char*)v25, (__int64)&v101_.v101,
              (2 * __clz(0xAAAAAAAAAAAAAAABLL * ((__int64)(v25 - v94) >> 3))) ^
                  0x7E,
              1);
          v75 = (unsigned __int8*)v94;
        }
        result = (__int64)ProcHubSeqEnter_919600(v75, (unsigned __int8*)v25);
        v76 = a2;
        if (v25 != result) {
          v77 = result;
          if (result != v25) {
            v78 = v25;
            do {
              v79 = *(_BYTE*)(v78 - 24);
              v78 -= 24LL;
              if ((v79 & 1) != 0 && *(_QWORD*)(v25 - 8) != 0) {
                if (*(_QWORD*)(*v2 + 200) != 0) {
                  v80 = 128;
                }
                else {
                  v80 = 56;
                }
                result = nn_mem_StandardAllocator_Free(*v2 + v80,
                                                       *(_QWORD*)(v25 - 8));
              }
              v25 = v78;
            } while (v78 != v77);
          }
          v76 = a2;
          v25 = v77;
        }
        v38 = a1;
      }
      if (v94 == v25) {
        if (v94 != 0) {
        LABEL_174:
          v86 = 128;
          if (*(_QWORD*)(*v2 + 200) == 0) {
            v86 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v2 + v86, v94);
        }
      }
      else {
        v81 = v94;
        do {
          if ((*(_BYTE*)v81 & 1) != 0) {
            v82 = *(const char**)(v81 + 16);
          }
          else {
            v82 = (const char*)(v81 + 1);
          }
          result = GameRoutine_a4c1e0(v38, v82, v76 & 1);
          v81 += 24;
        } while (v81 != v25);
        if (v94 != 0) {
          v83 = v25;
          do {
            v84 = *(_BYTE*)(v83 - 24);
            v83 -= 24LL;
            if ((v84 & 1) != 0 && *(_QWORD*)(v25 - 8) != 0) {
              if (*(_QWORD*)(*v2 + 200) != 0) {
                v85 = 128;
              }
              else {
                v85 = 56;
              }
              nn_mem_StandardAllocator_Free(*v2 + v85, *(_QWORD*)(v25 - 8));
            }
            v25 = v83;
          } while (v83 != v94);
          goto LABEL_174;
        }
      }
      v5 = (__int64*)v92;
      goto LABEL_178;
    }
  }
}

void Manager_a4cfa0(__int64* a1)
{
  _QWORD* v1;
  __int64* v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  char v11;
  __int64** v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64 (***v15)();
  __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 (***v26)();
  __int64 v27;
  __int64 v28;
  __int64 v29;
  const char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  const char* v39;
  __int64 v40;
  _QWORD* i;
  unsigned __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  struct {
    __int64* v47;
    unsigned __int64 v48;
    __int64 (***v49)();
    int v50;
  } v47_;
  struct {
    __int64 v51;
    __int64 v52;
    const char* v53;
    __int64 v54;
  } v51_;

  v1 = (_QWORD*)a1[3];
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    while (1) {
      if ((v1[2] & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(&v51_.v51, v1[4], v1[3]);
      }
      else {
        v7 = v1[3];
        v8 = v1[4];
        v51_.v51 = v1[2];
        v51_.v52 = v7;
        v51_.v53 = (const char*)v8;
      }
      v9 = v1[5];
      v10 = *(_DWORD*)(v9 + 832);
      v11 = *(_BYTE*)(v9 + 808);
      v51_.v54 = v9;
      if ((v11 & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(
            (__int64*)&v47_.v47, *(_QWORD*)(v9 + 824), *(_QWORD*)(v9 + 816));
      }
      else {
        v12 = (__int64**)(v9 + 808);
        v13 = *v12;
        v14 = (unsigned __int64)v12[1];
        v15 = (__int64 (***)(void))v12[2];
        v47_.v47 = v13;
        v47_.v48 = v14;
        v47_.v49 = v15;
      }
      v47_.v50 = v10;
      if (v5 >= v6) {
        break;
      }
      v16 = v47_.v47;
      v17 = v47_.v48;
      *(_DWORD*)(v5 + 24) = v10;
      *(_QWORD*)v5 = v16;
      *(_QWORD*)(v5 + 8) = v17;
      *(_QWORD*)(v5 + 16) = v47_.v49;
      if ((v51_.v51 & 1) != 0) {
        goto LABEL_32;
      }
    LABEL_3:
      v1 = (_QWORD*)*v1;
      v5 += 32LL;
      if (v1 == nullptr) {
        goto LABEL_37;
      }
    }
    v18 = v5 - v4;
    v19 = (__int64)(v5 - v4) >> 5;
    v20 = v19 + 1;
    if ((unsigned __int64)(v19 + 1) >> 59 != 0) {
      GameRoutine_a52f60_alt1();
    }
    if ((__int64)(v6 - v4) >> 4 > v20) {
      v20 = (__int64)(v6 - v4) >> 4;
    }
    if (v6 - v4 >= 0x7FFFFFFFFFFFFFE0LL) {
      v21 = 0x7FFFFFFFFFFFFFFLL;
    }
    else {
      v21 = v20;
    }
    if (v21 != 0) {
      if (v21 >> 59 != 0) {
        GameRoutine_60a210_alt1();
      }
      v22 = fw_memory_HeapManager_Allocate_alt1(*v3, 32 * v21, 16, 0);
    }
    else {
      v22 = 0;
    }
    v23 = v47_.v47;
    v24 = v47_.v48;
    v5 = v22 + v18;
    v6 = v22 + 32 * v21;
    v47_.v47 = nullptr;
    v47_.v48 = 0;
    *(_DWORD*)(v5 + 24) = v10;
    v25 = v22 + v18 - 32 * v19;
    *(_QWORD*)v5 = v23;
    *(_QWORD*)(v5 + 8) = v24;
    v26 = v47_.v49;
    v47_.v49 = nullptr;
    *(_QWORD*)(v5 + 16) = v26;
    memcpy_alt1(v25, v4, v18);
    if (v4 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*v3 + 200) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(*v3 + v27, v4);
      if (((unsigned __int8)v47_.v47 & 1) != 0 && v47_.v49 != nullptr) {
        v28 = 128;
        if (*(_QWORD*)(*v3 + 200) == 0) {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free_alt4(*v3 + v28, (__int64)v47_.v49);
      }
    }
    v4 = v25;
    if ((v51_.v51 & 1) == 0) {
      goto LABEL_3;
    }
  LABEL_32:
    if (v51_.v53 != nullptr) {
      v29 = 128;
      if (*(_QWORD*)(*v3 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(*v3 + v29, (__int64)v51_.v53);
    }
    goto LABEL_3;
  }
  v5 = 0;
  v4 = 0;
LABEL_37:
  Manager_a4c820_alt1(a1);
  if (*a1 != 0) {
    GameRoutine_634d80_alt2(*(_QWORD*)(*a1 + 8), *a1);
    *a1 = 0;
  }
  v30 = Manager_a4aea0(GameData_21759e0);
  snprintf_alt1((__int64)&v51_.v51, 0x100u, "Msg/%s/Msg.msbp", v30);
  v47_.v47 = &v51_.v51;
  v31 = *snd_g_fileIndex_ptr[0];
  v47_.v48 = strlen_alt1((const char*)&v51_.v51);
  v47_.v49 = GameData_212c3c8;
  v47_.v50 = 2;
  v32 = ((__int64 (*)(__int64, __int64**))GameRoutine_a51920)(v31, &v47_.v47);
  *a1 = v32;
  v33 = v32;
  v34 = *(_QWORD*)(v32 + 8);
  nn_os_LockMutex_alt1(v34 + 4456);
  nn_os_AcquireWriteLock_alt1(v33 + 696);
  *(_DWORD*)(v33 + 656) |= 4u;
  nn_os_ReleaseWriteLock_alt1(v33 + 696);
  nn_os_UnlockMutex_alt2(v34 + 4456);
  if (v4 != v5) {
    v35 = v4;
    do {
      if ((*(_BYTE*)v35 & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(&v51_.v51, *(_QWORD*)(v35 + 16),
                                           *(_QWORD*)(v35 + 8));
      }
      else {
        v36 = *(_QWORD*)v35;
        v37 = *(_QWORD*)(v35 + 16);
        v51_.v52 = *(_QWORD*)(v35 + 8);
        v51_.v53 = (const char*)v37;
        v51_.v51 = v36;
      }
      v38 = *(_DWORD*)(v35 + 24);
      if (v38 >= 1) {
        do {
          if ((v51_.v51 & 1) != 0) {
            v39 = v51_.v53;
          }
          else {
            v39 = (char*)&v51_.v51 + 1;
          }
          GameRoutine_a4c1e0_alt2(a1, v39, 1);
          --v38;
        } while (v38 != 0);
      }
      if ((v51_.v51 & 1) != 0 && v51_.v53 != nullptr) {
        if (*(_QWORD*)(*v3 + 200) != 0) {
          v40 = 128;
        }
        else {
          v40 = 56;
        }
        nn_mem_StandardAllocator_Free_alt4(*v3 + v40, (__int64)v51_.v53);
      }
      v35 += 32;
    } while (v35 != v5);
  }
  for (i = (_QWORD*)a1[3]; i != nullptr; i = (_QWORD*)*i) {
    GameHr_636000(*(_QWORD*)(i[5] + 8LL), i[5]);
  }
  if (v4 != 0) {
    if (v4 != v5) {
      v42 = v5;
      do {
        v43 = *(_BYTE*)(v42 - 32);
        v42 -= 32LL;
        if ((v43 & 1) != 0) {
          v44 = *(_QWORD*)(v5 - 16);
          if (v44 != 0) {
            if (*(_QWORD*)(*v3 + 200) != 0) {
              v45 = 128;
            }
            else {
              v45 = 56;
            }
            nn_mem_StandardAllocator_Free_alt4(*v3 + v45, v44);
          }
        }
        v5 = v42;
      } while (v42 != v4);
    }
    v46 = 128;
    if (*(_QWORD*)(*v3 + 200) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(*v3 + v46, v4);
  }
}

__attribute__((swiftcall)) void Manager_a4fd20(PSEUDO_X8 x8_, __int64 a1,
                                               const char* a2, const char* a3,
                                               char a4)
{
  __int64* a5 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  const char* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  char* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  struct {
    unsigned __int8 v35[16];
    __int64 v36;
  } v35_;
  const char* v37[3];

  v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 14600LL) + 800LL);
  v10 = Registration_a4ac60_alt1(v9, a3);
  if ((v10 & 0x80000000) != 0 || (v11 = *(_DWORD*)(v9 + 44)) == -1 ||
      (signed __int32)*(
          _DWORD*)(v12 = *(_QWORD*)(*(_QWORD*)(v9 + 24) + 24LL * v11)) <=
          (signed int)v10 ||
      ((v13 = *(unsigned int*)(v12 + 8LL * v10 + 8)) & 0x80000000) != 0) {
    v23 = msg_MessageManager_empty_text_;
    v24 = strlen_alt1(msg_MessageManager_empty_text_);
    if (v24 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_55;
    }
    v25 = v24;
    if (v24 >= 0x17) {
      if ((v24 | 7) == 0x17) {
        v27 = 26;
      }
      else {
        v27 = (v24 | 7) + 1;
      }
      v28 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v27,
                                                16, 0);
      a5[1] = v25;
      a5[2] = v28;
      *a5 = v27 | 1;
      v26 = v28;
    }
    else {
      *(_BYTE*)a5 = 2 * v24;
      v26 = (__int64)a5 + 1;
      if (v24 == 0) {
        goto LABEL_22;
      }
    }
    memmove_alt1(v26, (__int64)v23, v25);
  LABEL_22:
    *(_BYTE*)(v26 + v25) = 0;
    return;
  }
  v37[0] = a2;
  v14 = *msg_MessageManager_empty_text__ptr;
  v15 = GameRoutine_a542c0_alt1((_QWORD*)(*(_QWORD*)a1 + 14648LL), v37);
  if (v15 != nullptr) {
    v16 = v15[5];
    if (v16 != 0) {
      v17 = *(_QWORD*)(v16 + 800);
      v18 = GameRoutine_a4a400_alt1(v17, a2);
      if ((v18 & 0x80000000) == 0) {
        v19 = *(_QWORD*)(*(_QWORD*)(v17 + 24) + 24LL * *(int*)(v17 + 40));
        v14 = (const char*)(v19 +
                            *(int*)(v19 + v13 +
                                    (unsigned int)(*(_DWORD*)(v19 + 4) * v18) +
                                    8));
      }
    }
  }
  v20 = strlen_alt1(v14);
  if (v20 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_55:
    String_60a1d0();
  }
  v21 = v20;
  if (v20 >= 0x17) {
    if ((v20 | 7) == 0x17) {
      v29 = 26;
    }
    else {
      v29 = (v20 | 7) + 1;
    }
    v22 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v29, 16,
                                              0);
    a5[1] = v21;
    a5[2] = v22;
    *a5 = v29 | 1;
    goto LABEL_28;
  }
  *(_BYTE*)a5 = 2 * v20;
  v22 = (__int64)a5 + 1;
  if (v20 != 0) {
  LABEL_28:
    memmove_alt1(v22, (__int64)v14, v21);
  }
  *(_BYTE*)(v22 + v21) = 0;
  if ((a4 & 1) == 0) {
    BYTE3(v37[0]) = 0;
    *(_WORD*)v35_.v35 = 0;
    LOBYTE(v37[0]) = 4;
    *(_WORD*)((char*)v37 + 1) = 2573;
    GameRoutine_112cc60_alt1((__int64)a5, (unsigned __int8*)v37, v35_.v35);
    if ((v35_.v35[0] & 1) != 0 && v35_.v36 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v35_.v36);
    }
    BYTE2(v37[0]) = 0;
    *(_WORD*)v35_.v35 = 0;
    LOWORD(v37[0]) = 3330;
    GameRoutine_112cc60_alt1((__int64)a5, (unsigned __int8*)v37, v35_.v35);
    if ((v35_.v35[0] & 1) != 0 && v35_.v36 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v35_.v36);
    }
    BYTE2(v37[0]) = 0;
    *(_WORD*)v35_.v35 = 0;
    LOWORD(v37[0]) = 2562;
    GameRoutine_112cc60_alt1((__int64)a5, (unsigned __int8*)v37, v35_.v35);
    if ((v35_.v35[0] & 1) != 0 && v35_.v36 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v35_.v36);
    }
    BYTE2(v37[0]) = 0;
    *(_WORD*)v35_.v35 = 0;
    LOWORD(v37[0]) = 8194;
    GameRoutine_112cc60_alt1((__int64)a5, (unsigned __int8*)v37, v35_.v35);
    if ((v35_.v35[0] & 1) != 0 && v35_.v36 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v35_.v36);
    }
    *(_WORD*)v35_.v35 = 0;
    LOBYTE(v37[0]) = 6;
    *(_DWORD*)((char*)v37 + 1) = 8421603;
    GameRoutine_112cc60_alt1((__int64)a5, (unsigned __int8*)v37, v35_.v35);
    if ((v35_.v35[0] & 1) != 0 && v35_.v36 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v35_.v36);
    }
  }
}

__attribute__((swiftcall)) void Manager_a50570(PSEUDO_X8 x8_, __int64 a1,
                                               const char* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  char* v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _DWORD* v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    unsigned __int64 v19;
    __int64 v20;
  } v18_;
  struct {
    __int64 v21;
    unsigned __int64 v22;
    char* v23;
  } v21_;

  Manager_a4fd20((void*)(&v21_.v21), a1 + 15176, a2, "Looks", 0);
  v4 = v21_.v21;
  if ((v21_.v21 & 1) != 0) {
    v5 = v21_.v22;
  }
  else {
    v5 = (unsigned __int64)(unsigned __int8)v21_.v21 >> 1;
  }
  if (v5 != 0) {
    v6 = (__int64)v21_.v23;
    v7 = v5 + 4;
    if ((v21_.v21 & 1) != 0) {
      v8 = v21_.v23;
    }
    else {
      v8 = (char*)&v21_.v21 + 1;
    }
    if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    if (v7 > 0x16) {
      if ((v7 | 7) == 0x17) {
        v12 = 26;
      }
      else {
        v12 = (v7 | 7) + 1;
      }
      v10 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v12,
                                                16, 0);
      v18_.v19 = v5 + 4;
      v18_.v20 = v10;
      v18_.v18 = v12 | 1;
      v9 = v12 | 1;
    }
    else {
      v9 = 2 * v7;
      v10 = 0;
      v18_.v19 = 0;
      v18_.v20 = 0;
      v18_.v18 = (unsigned __int8)(2 * v7);
    }
    if ((v9 & 1) != 0) {
      v13 = (_DWORD*)v10;
    }
    else {
      v13 = (_DWORD*)((char*)&v18_.v18 + 1);
    }
    *v13 = 1598310726;
    if ((v9 & 1) != 0) {
      v14 = (char*)(v10 + 4);
    }
    else {
      v14 = (char*)&v18_.v18 + 5;
    }
    memmove_alt1((__int64)v14, (__int64)v8, v5);
    v14[v5] = 0;
    if ((v4 & 1) != 0 && v6 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v6);
    }
    v16 = v18_.v19;
    v17 = v18_.v20;
    v21_.v21 = v18_.v18;
    v21_.v22 = v18_.v19;
    v21_.v23 = (char*)v18_.v20;
    *a3 = v18_.v18;
    a3[1] = v16;
    a3[2] = v17;
  }
  else {
    *(_WORD*)a3 = 0;
    if ((v4 & 1) != 0 && v21_.v23 != nullptr) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v21_.v23);
    }
  }
}

__attribute__((swiftcall)) void Manager_a50e90(PSEUDO_X8 x8_, __int64 a1,
                                               const char* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  char* v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _DWORD* v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    unsigned __int64 v19;
    __int64 v20;
  } v18_;
  struct {
    __int64 v21;
    unsigned __int64 v22;
    char* v23;
  } v21_;

  Manager_a4fd20((void*)(&v21_.v21), a1 + 15176, a2, "FavorabilityPID", 0);
  v4 = v21_.v21;
  if ((v21_.v21 & 1) != 0) {
    v5 = v21_.v22;
  }
  else {
    v5 = (unsigned __int64)(unsigned __int8)v21_.v21 >> 1;
  }
  if (v5 != 0) {
    v6 = (__int64)v21_.v23;
    v7 = v5 + 4;
    if ((v21_.v21 & 1) != 0) {
      v8 = v21_.v23;
    }
    else {
      v8 = (char*)&v21_.v21 + 1;
    }
    if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    if (v7 > 0x16) {
      if ((v7 | 7) == 0x17) {
        v12 = 26;
      }
      else {
        v12 = (v7 | 7) + 1;
      }
      v10 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v12,
                                                16, 0);
      v18_.v19 = v5 + 4;
      v18_.v20 = v10;
      v18_.v18 = v12 | 1;
      v9 = v12 | 1;
    }
    else {
      v9 = 2 * v7;
      v10 = 0;
      v18_.v19 = 0;
      v18_.v20 = 0;
      v18_.v18 = (unsigned __int8)(2 * v7);
    }
    if ((v9 & 1) != 0) {
      v13 = (_DWORD*)v10;
    }
    else {
      v13 = (_DWORD*)((char*)&v18_.v18 + 1);
    }
    *v13 = 1598310736;
    if ((v9 & 1) != 0) {
      v14 = (char*)(v10 + 4);
    }
    else {
      v14 = (char*)&v18_.v18 + 5;
    }
    memmove_alt1((__int64)v14, (__int64)v8, v5);
    v14[v5] = 0;
    if ((v4 & 1) != 0 && v6 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v6);
    }
    v16 = v18_.v19;
    v17 = v18_.v20;
    v21_.v21 = v18_.v18;
    v21_.v22 = v18_.v19;
    v21_.v23 = (char*)v18_.v20;
    *a3 = v18_.v18;
    a3[1] = v16;
    a3[2] = v17;
  }
  else {
    *(_WORD*)a3 = 0;
    if ((v4 & 1) != 0 && v21_.v23 != nullptr) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v21_.v23);
    }
  }
}

__int64 fs_Manager_createFileSync_msg_ProjectFile(__int64 a1)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  int v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  _DWORD* v14;
  unsigned int v15;
  unsigned int v16;
  _BYTE* v17;
  unsigned __int64 v18;
  __int64 v19;
  _QWORD* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  bool v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char v34[48];

  v4 = *msg_MessageManager_instance__ptr[0] + 14600;
  v5 = *(_QWORD*)(a1 + 800);
  v6 = a1;
  v7 = *(_DWORD*)(v5 + 36);
  if (v7 != -1) {
    v8 = **(_DWORD**)(*(_QWORD*)(v5 + 24) + 24LL * v7);
    if (v8 >= 1) {
      v9 = v4;
      v10 = 0;
      v11 = (__int64*)fw_memory_g_heap_manager_ptr;
      while (1) {
        v13 = *(_QWORD*)(*(_QWORD*)(v6 + 800) + 24LL) +
              24LL * *(int*)(*(_QWORD*)(v6 + 800) + 32LL);
        v14 = *(_DWORD**)v13;
        v15 = *(_DWORD*)(v13 + 12);
        v16 = (8 * *v14) | 4;
        if (v16 < v15) {
          break;
        }
      LABEL_7:
        if (++v10 == v8) {
          goto LABEL_35;
        }
      }
      while (1) {
        v17 = (char*)v14 + v16;
        v18 = (unsigned __int8)*v17;
        if (*(_DWORD*)&v17[v18 + 1] == v10) {
          break;
        }
        v16 += v18 + 5;
        if (v16 >= v15) {
          goto LABEL_7;
        }
      }
      if (*v17 != 0) {
        memcpy_alt1((__int64)v34, (__int64)v14 + v16 + 1, v18);
      }
      v19 = *v11;
      v34[v18] = 0;
      v20 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v19, 48, 16, 0);
      *v20 = 0;
      v20[1] = 0;
      v21 = strlen_alt1(v34);
      if (v21 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      v22 = v21;
      if (v21 >= 0x17) {
        if ((v21 | 7) == 0x17) {
          v24 = 26;
        }
        else {
          v24 = (v21 | 7) + 1;
        }
        v23 = fw_memory_HeapManager_Allocate_alt1(*v11, v24, 16, 0);
        v20[3] = v22;
        v20[4] = v23;
        v20[2] = v24 | 1;
      }
      else {
        v23 = (__int64)v20 + 17;
        *((_BYTE*)v20 + 16) = 2 * v21;
        if (v21 == 0) {
        LABEL_23:
          *(_BYTE*)(v23 + v22) = 0;
          v20[5] = v6;
          v25 = *((unsigned __int8*)v20 + 16);
          v26 = (v25 & 1) == 0;
          v27 = v25 >> 1;
          if (v26) {
            v28 = (__int64)v20 + 17;
          }
          else {
            v28 = v20[4];
          }
          if (v26) {
            v29 = v27;
          }
          else {
            v29 = v20[3];
          }
          v20[1] = std___1___hash_memory_alt1(v28, v29);
          v11 = &fw_memory_g_heap_manager;
          if ((llvm_libcxx_21_libcxx_include___functional_a53bc0(v9 + 48,
                                                                 (__int64)v20) &
               1) == 0) {
            if ((v20[2] & 1) != 0) {
              v30 = v20[4];
              if (v30 != 0) {
                v31 = 128;
                if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                  v31 = 56;
                }
                nn_mem_StandardAllocator_Free_alt4(
                    fw_memory_g_heap_manager + v31, v30);
              }
            }
            v12 = 128;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
              v12 = 56;
            }
            nn_mem_StandardAllocator_Free_alt4(fw_memory_g_heap_manager + v12,
                                               (__int64)v20);
          }
          goto LABEL_7;
        }
      }
      memcpy_alt1(v23, (__int64)v34, v22);
      goto LABEL_23;
    }
  }
LABEL_35:
  v32 = *(_QWORD*)(v6 + 8);
  nn_os_LockMutex_alt1(v32 + 4456);
  nn_os_AcquireWriteLock_alt1(v6 + 696);
  *(_DWORD*)(v6 + 656) |= 4u;
  nn_os_ReleaseWriteLock_alt1(v6 + 696);
  return nn_os_UnlockMutex_alt2(v32 + 4456);
}

__int64 Manager_a527c0(__int64 result, __int64 a2)
{
  __int64 v3;
  int v4;
  unsigned __int64 v5;
  unsigned __int8* v6;
  unsigned int v7;
  __int64 v8;
  __int64 i;
  int v10;
  __int64 v11;
  unsigned __int8* v12;
  int v13;
  int v14;
  __int64 v15;
  __int64* v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  bool v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  _QWORD* v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD v38[2];
  char* v39;

  if (a2 == 0) {
    return result;
  }
  v3 = result;
  v4 = -2128831035;
  result = strlen(a2);
  if ((int)result < 8) {
    v7 = 0;
    if ((int)result <= 0) {
      goto LABEL_13;
    }
  }
  else {
    v5 = 7;
    do {
      v6 = (unsigned __int8*)(a2 + v5);
      v5 += 8LL;
      v4 = (16777619 *
            ((16777619 *
              ((16777619 *
                ((16777619 *
                  ((16777619 *
                    ((16777619 * ((16777619 * ((16777619 * v4) ^ *(v6 - 7))) ^
                                  *(v6 - 6))) ^
                     *(v6 - 5))) ^
                   *(v6 - 4))) ^
                 *(v6 - 3))) ^
               *(v6 - 2))) ^
             *(v6 - 1))) ^
           *v6;
    } while (v5 < ((unsigned int)result & 0x7FFFFFFF));
    v7 = result & 0x7FFFFFF8;
    if ((result & 0x7FFFFFF8) >= (int)result) {
      goto LABEL_13;
    }
  }
  v8 = result & 7;
  for (i = v7; v8 != 0; v4 = (16777619 * v4) ^ v10) {
    v10 = *(unsigned __int8*)(a2 + i++);
    --v8;
  }
  if (v7 - (unsigned __int64)(unsigned int)result <= 0xFFFFFFFFFFFFFFF8LL) {
    v11 = (unsigned int)result - i;
    v12 = (unsigned __int8*)(i + a2 + 3);
    do {
      v11 -= 8;
      v13 = (16777619 *
             ((16777619 *
               ((16777619 *
                 ((16777619 *
                   ((16777619 * ((16777619 * ((16777619 * v4) ^ *(v12 - 3))) ^
                                 *(v12 - 2))) ^
                    *(v12 - 1))) ^
                  *v12)) ^
                v12[1])) ^
              v12[2])) ^
            v12[3];
      v14 = v12[4];
      v12 += 8;
      v4 = (16777619 * v13) ^ v14;
    } while (v11 != 0);
  }
LABEL_13:
  v16 = (__int64*)(v3 + 32);
  v15 = *(_QWORD*)(v3 + 32);
  if (v4 != 0) {
    v17 = v4;
  }
  else {
    v17 = -1;
  }
  if (v15 != 0) {
    v18 = v3 + 32;
    do {
      v19 = *(_DWORD*)(v15 + 28);
      v20 = v19 >= v17;
      if (v19 >= v17) {
        v21 = 0;
      }
      else {
        v21 = 8;
      }
      if (v20) {
        v18 = v15;
      }
      v15 = *(_QWORD*)(v15 + v21);
    } while (v15 != 0);
    if ((__int64*)v18 != v16 && v17 >= *(_DWORD*)(v18 + 28)) {
      return result;
    }
  }
  v22 = strlen(a2);
  if (v22 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(v22, v23, v24, v25, v26);
  }
  v27 = v22;
  v28 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v22 >= 0x17) {
    if ((v22 | 7) == 0x17) {
      v30 = 26;
    }
    else {
      v30 = (v22 | 7) + 1;
    }
    v29 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v30, 16, 0);
    v38[1] = v27;
    v39 = v29;
    v38[0] = v30 | 1;
  }
  else {
    LOBYTE(v38[0]) = 2 * v22;
    v29 = (char*)v38 + 1;
    if (v22 == 0) {
      goto LABEL_36;
    }
  }
  memcpy(v29, a2, v27);
LABEL_36:
  v29[v27] = 0;
  result = GameRoutine_7a8220(v3, v38);
  if ((v38[0] & 1) != 0 && v39 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*v28 + 200LL) == 0) {
      v31 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(*v28 + v31, (_QWORD)(v39));
  }
  v32 = *v16;
  v33 = (__int64*)(v3 + 32);
  if (*v16 != 0) {
    while (1) {
      while (1) {
        v33 = (__int64*)v32;
        v34 = *(_DWORD*)(v32 + 28);
        if (v17 >= v34) {
          break;
        }
        v32 = *v33;
        v16 = v33;
        if (*v33 == 0) {
          goto LABEL_48;
        }
      }
      if (v34 >= v17) {
        break;
      }
      v32 = v33[1];
      if (v32 == 0) {
        v16 = v33 + 1;
        goto LABEL_48;
      }
    }
  }
  else {
  LABEL_48:
    v35 = fw_memory_HeapManager_Allocate(*v28, 32, 16, 0);
    *(_DWORD*)(v35 + 28) = v17;
    *(_QWORD*)v35 = 0;
    *(_QWORD*)(v35 + 8) = 0;
    *(_QWORD*)(v35 + 16) = v33;
    *v16 = v35;
    v36 = **(_QWORD**)(v3 + 24);
    if (v36 != 0) {
      *(_QWORD*)(v3 + 24) = v36;
      v37 = *v16;
    }
    else {
      v37 = v35;
    }
    result = fw_containers_BalanceAfterInsert(*(_QWORD*)(v3 + 32), v37);
    ++*(_QWORD*)(v3 + 40);
  }
  return result;
}

__int64 fs_Manager_createFileSync_fs_ElfFile_closure_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  int v9;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 896, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = v5;
  v10[0] = 0;
  v10[1] = 0;
  v9 = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  *(_DWORD*)(v7 + 888) = 0;
  *(_QWORD*)(v7 + 880) = 0;
  *(_QWORD*)(v7 + 872) = 0;
  *(_QWORD*)(v7 + 864) = 0;
  *(_QWORD*)(v7 + 856) = 0;
  *(_QWORD*)(v7 + 848) = 0;
  *(_QWORD*)(v7 + 840) = 0;
  *(_QWORD*)(v7 + 832) = 0;
  *(_QWORD*)(v7 + 824) = 0;
  *(_QWORD*)(v7 + 816) = 0;
  *(_QWORD*)(v7 + 808) = 0;
  *(_QWORD*)(v7 + 800) = 0;
  *(_QWORD*)v7 = GameData_212c3b8 + 16;
  return v7;
}

_QWORD* fs_Manager_createFileSync_msg_ProjectFile_closure_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  int v9;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 816, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = (_QWORD*)v5;
  v10[0] = 0;
  v10[1] = 0;
  v9 = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  v7[100] = 0;
  *v7 = msg_ProjectFile_vtable;
  return v7;
}

__int64 fs_Manager_createFileAsync_msg_MessageFile_closure_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 848, 16);
  v6 = *(_QWORD**)(a1 + 24);
  v7 = v5;
  v8 = v6[1];
  v10[0] = *v6;
  v10[1] = v8;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_a535e0(v5, v2, v4, v10, **(_QWORD**)(a1 + 8));
    std___1___shared_weak_count___release_weak(v8);
  }
  else {
    GameRoutine_a535e0(v5, v2, v4, v10, **(_QWORD**)(a1 + 8));
  }
  return v7;
}

__int64 fs_Manager_createFileSync_msg_MessageFile_closure_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  _QWORD v9[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 848, 16);
  v6 = *(__int64**)(a1 + 8);
  v7 = v5;
  v9[0] = 0;
  v9[1] = 0;
  GameRoutine_a535e0(v5, v2, v4, v9, *v6);
  return v7;
}

__int64 fs_Manager_createFileAsync_fs_ElfFile(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  int v11;
  __int64 v12;
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;
  __int64 v20;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex(a1 + 4456),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *(_QWORD*)(a2 + 24);
  v5 = *(_QWORD*)(a2 + 32);
  v6 = *(_QWORD*)(a2 + 16);
  v18_.v19 = v4;
  v20 = v5;
  v18_.v18 = v6;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
  }
  v16_.v16[0] = GameData_1fd01c0;
  v16_.v16[1] = &v20;
  v16_.v17 = v16_.v16;
  v16_.v16[2] = a1;
  v16_.v16[3] = &v18_.v18;
  v7 = ({
    unsigned __int128 r_ = GameRoutine_635a60_alt1_pair(a1, (char**)a2, 0, 0, 0,
                                                        (__int64)v16_.v16);
    v8 = COERCE_AS(__typeof__(v8), (unsigned long long)(r_ >> 64));
    (__int64)(unsigned long long)r_;
  });
  v9 = v8;
  if (v16_.v17 == v16_.v16) {
    v10 = 32;
  }
  else {
    if (v16_.v17 == nullptr) {
      goto LABEL_8;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v16_.v17 + v10))((__int64)v16_.v17),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_8:
  if ((v9 & 1) != 0) {
    v11 = *(_DWORD*)(a2 + 40);
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)v12 = v7;
    *(_DWORD*)(v12 + 8) = v11;
    GameRoutine_17d4db0_alt1(a1 + 3536, v12),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    if (v18_.v19 == 0) {
      goto LABEL_16;
    }
    if (*(_QWORD*)(v18_.v19 + 8) != -1) {
      v14_.v14 = v18_.v18;
      v14_.v15 = v18_.v19;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18_.v19 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_631500(v7, &v14_.v14),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v14_.v15 != 0) {
        std___1___shared_weak_count___release_weak(v14_.v15),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  if (v18_.v19 != 0) {
    std___1___shared_weak_count___release_weak(v18_.v19),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_16:
  nn_os_UnlockMutex(a1 + 4456),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return v7;
}

_QWORD* fs_Manager_createFileAsync_fs_ElfFile_closure_CloneInto(_QWORD* result,
                                                                _QWORD* a2)
{
  __int64 v2;
  __int64 v3;

  *a2 = GameData_1fd01c0;
  v2 = result[1];
  v3 = result[3];
  a2[2] = result[2];
  a2[3] = v3;
  a2[1] = v2;
  return result;
}

__int64 fs_Manager_createFileAsync_fs_ElfFile_closure_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD v13[2];
  int v14;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 896, 16);
  v6 = *(__int64**)(a1 + 24);
  v7 = v5;
  v8 = *v6;
  v9 = v6[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v13[0] = v8;
    v13[1] = v9;
    v10 = **(_QWORD**)(a1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v14 = 0;
    GameRoutine_6313f0(v5, v2, v4, v13, v10, &v14);
    std___1___shared_weak_count___release_weak(v9);
    *(_DWORD*)(v7 + 888) = 0;
    *(_QWORD*)(v7 + 880) = 0;
    *(_QWORD*)(v7 + 872) = 0;
    *(_QWORD*)(v7 + 864) = 0;
    *(_QWORD*)(v7 + 856) = 0;
    *(_QWORD*)(v7 + 848) = 0;
    *(_QWORD*)(v7 + 840) = 0;
    *(_QWORD*)(v7 + 832) = 0;
    *(_QWORD*)(v7 + 824) = 0;
    *(_QWORD*)(v7 + 816) = 0;
    *(_QWORD*)(v7 + 808) = 0;
    *(_QWORD*)(v7 + 800) = 0;
    *(_QWORD*)v7 = GameData_212c3b8 + 16;
    std___1___shared_weak_count___release_weak(v9);
  }
  else {
    v11 = *(_QWORD**)(a1 + 8);
    v13[0] = v8;
    v13[1] = 0;
    v14 = 0;
    GameRoutine_6313f0(v5, v2, v4, v13, *v11, &v14);
    *(_DWORD*)(v7 + 888) = 0;
    *(_QWORD*)(v7 + 880) = 0;
    *(_QWORD*)(v7 + 872) = 0;
    *(_QWORD*)(v7 + 864) = 0;
    *(_QWORD*)(v7 + 856) = 0;
    *(_QWORD*)(v7 + 848) = 0;
    *(_QWORD*)(v7 + 840) = 0;
    *(_QWORD*)(v7 + 832) = 0;
    *(_QWORD*)(v7 + 824) = 0;
    *(_QWORD*)(v7 + 816) = 0;
    *(_QWORD*)(v7 + 808) = 0;
    *(_QWORD*)(v7 + 800) = 0;
    *(_QWORD*)v7 = GameData_212c3b8 + 16;
  }
  return v7;
}

__int64 fs_Manager_createFileSync_fs_GfxFile(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 (**v13)();
  __int64 (**v14)();
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 (**v19)();
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v24;
  struct {
    __int64 v25[2];
    __int64 v26;
    unsigned int v27;
  } v25_;
  char v28[128];
  struct {
    __int64 (**v29)();
    __int64 (**v30)();
    __int64 v31;
    char gap184_[8];
    __int64* v32;
  } v29_;
  struct {
    __int64 v33;
    char gap216_[24];
    __int64* v34;
  } v33_;
  __int64 v35;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    return 0;
  }
  v1 = *(_QWORD*)(eft_g_effectSystem + 112);
  if (*(_QWORD*)(v1 + 24) == 0) {
    return 0;
  }
  if (*(_BYTE*)(a1 + 10) == 1) {
    v2 = *(_QWORD*)(a1 + 40);
    if (v2 != 0) {
      goto LABEL_41;
    }
    goto LABEL_46;
  }
  v3 = a1;
  snprintf_alt1((__int64)v28, 0x80u, "Effect/Particle/%s.ptcl",
                *(const char**)(*(_QWORD*)(v1 + 40) + 8LL * *(int*)(a1 + 32))),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25_.v25[0] = (__int64)v28;
  v4 = *snd_g_fileIndex_ptr[0];
  v25_.v25[1] = strlen_alt1(v28),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25_.v26 = GameData_2203100;
  v25_.v27 = 1;
  nn_os_LockMutex_alt1(v4 + 4456),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29_.v31 = v4;
  v29_.v32 = (__int64*)&v29_.v29;
  v35 = v25_.v26;
  v29_.v29 = GameData_1fd07d8;
  v29_.v30 = (__int64 (**)(void))&v35,
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = ({
    unsigned __int128 r_ =
        GameRoutine_635a60_alt2_pair(v4, v25_.v25, 1, 0, 0, (__int64)&v29_.v29);
    v5 = COERCE_AS(__typeof__(v5), (unsigned long long)(r_ >> 64));
    v9 = COERCE_AS(__typeof__(v9), (unsigned long long)(r_ >> 64));
    (__int64)(unsigned long long)r_;
  });
  v6 = v5;
  if (v29_.v32 == (__int64*)&v29_.v29) {
    v7 = 32;
  }
  else {
    if (v29_.v32 == nullptr) {
      goto LABEL_11;
    }
    v7 = 40;
  }
  (*(void (**)(__int64*, __int64))(*v29_.v32 + v7))(v29_.v32, v5),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_11:
  if ((v6 & 1) != 0) {
    v8 = v2;
  }
  else {
    v8 = 0;
  }
  nn_os_UnlockMutex_alt2(v4 + 4456),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v6 & 1) == 0) {
    goto LABEL_40;
  }
  GameRoutine_632da0_alt1((void*)(&v29_.v29), v2, v25_.v27),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_633980_alt1((_QWORD*)v2, (__int64*)&v29_.v29),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_632cd0_alt1(v4, v2),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_631820(v2),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_AcquireWriteLock_alt1(v2 + 696),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)(v2 + 656) |= 0x40u;
  nn_os_ReleaseWriteLock_alt1(v2 + 696),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = v29_.v32;
  v29_.v32 = nullptr;
  if (v10 != nullptr) {
    v35 = (__int64)v10;
    if (v33_.v34 == nullptr) {
    LABEL_47:
      GameRoutine_60a310_alt1(),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    (*(void (**)(__int64*, __int64*))(*v33_.v34 + 48))(v33_.v34, &v35),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v33_.v34 == &v33_.v33) {
    v11 = 32;
    goto LABEL_22;
  }
  if (v33_.v34 != nullptr) {
    v11 = 40;
  LABEL_22:
    (*(void (**)(__int64*, __int64))(*v33_.v34 + v11))(v33_.v34, v9),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v12 = (__int64)v29_.v29;
  if (v29_.v29 == nullptr) {
    goto LABEL_39;
  }
  v13 = v29_.v30;
  if (v29_.v29 == v29_.v30) {
    goto LABEL_36;
  }
  v14 = v29_.v30;
  do {
    v17 = (__int64)*(v14 - 10);
    v14 -= 10;
    v16 = v17;
    *v14 = nullptr;
    if (v17 != 0) {
      v35 = v16;
      v18 = (__int64)*(v13 - 4);
      if (v18 == 0) {
        goto LABEL_47;
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v18 + 48LL))(v18, &v35),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v19 = (__int64 (**)(void)) * (v13 - 4),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v13 - 8 == v19) {
      v15 = 32;
    LABEL_27:
      (*(void (**)(__int64 (**)(void), __int64))((char*)*v19 + v15))(v19, v9),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_28;
    }
    if (v19 != nullptr) {
      v15 = 40;
      goto LABEL_27;
    }
  LABEL_28:
    v13 = v14;
  } while (v14 != (__int64 (**)(void))v12);
  v29_.v30 = (__int64 (**)(void))v12,
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = (__int64)v29_.v29;
  if (v29_.v29 != nullptr) {
  LABEL_36:
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v12),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_39:
  v2 = v8;
LABEL_40:
  a1 = v3;
  *(_QWORD*)(v3 + 40) = v2;
  *(_BYTE*)(v3 + 10) = 1;
  if (v2 != 0) {
  LABEL_41:
    v21 = a1;
    nn_os_AcquireReadLock_alt1(v2 + 696),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v22 = *(_DWORD*)(v2 + 656);
    nn_os_ReleaseReadLock_alt1(v2 + 696),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v22 & 8) == 0) {
      return 0;
    }
    v24 = *(_QWORD*)(v21 + 40);
    a1 = v21;
    if (v24 != 0 && *(_QWORD*)(v24 + 592) == 0) {
      GameRoutine_634d80_alt2(*(_QWORD*)(v24 + 8), v24),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      a1 = v21;
      *(_QWORD*)(v21 + 40) = 0;
    }
  }
LABEL_46:
  *(_BYTE*)(a1 + 8) = 1;
  return 1;
}

_QWORD* fs_Manager_createFileAsync_fs_GfxFile_closure_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  int v15;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(__int64**)(a1 + 24);
  v7 = (_QWORD*)v5;
  v8 = *v6;
  v9 = v6[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v15 = 0;
    v13 = v8;
    v14 = v9;
    v10 = **(_QWORD**)(a1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v11 = *(__int64**)(a1 + 8);
    v15 = 0;
    v13 = v8;
    v14 = 0;
    v10 = *v11;
  }
  GameRoutine_6313f0(v5, v2, v4, &v13, v10, &v15);
  if (v14 != 0) {
    std___1___shared_weak_count___release_weak(v14);
  }
  *v7 = fs_GfxFile_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  return v7;
}

_QWORD* fs_Manager_createFileSync_fs_GfxFile_closure_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  int v9;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = (_QWORD*)v5;
  v9 = 0;
  v10[0] = 0;
  v10[1] = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  *v7 = GameData_212c008[0] + 2;
  return v7;
}

__int64

fs_Manager_createFileSync_fs_PropertyFile_closure_Invoke(__int64 a1,
                                                         const char** a2)
{
  __int64 v2;
  const char* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  int v9;
  __int64 v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 864, 16);
  v6 = *(__int64**)(a1 + 8);
  v7 = v5;
  v9 = 0;
  v10[0] = 0;
  v10[1] = 0;
  GameRoutine_6313f0_alt2(v5, v2, v4, v10, *v6, &v9);
  *(_QWORD*)(v7 + 824) = 0;
  *(_QWORD*)(v7 + 816) = 0;
  *(_QWORD*)(v7 + 808) = 0;
  *(_QWORD*)(v7 + 800) = 0;
  *(_BYTE*)(v7 + 842) = 0;
  *(_DWORD*)(v7 + 832) = 1065353216;
  *(_WORD*)(v7 + 840) = 12034;
  *(_QWORD*)v7 = fs_PropertyFile_vtable;
  return v7;
}

_QWORD* fs_Manager_createFileSync_fs_ResFile_closure_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64* v9;
  int v10;
  _QWORD v11[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 832, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = (_QWORD*)v5;
  v10 = 0;
  v11[0] = 0;
  v11[1] = 0;
  GameRoutine_6313f0(v5, v2, v4, v11, *v6, &v10);
  v9 = GameData_212c030[0];
  v7[100] = 0;
  v7[102] = 0;
  v7[103] = 0;
  *v7 = v9 + 2;
  v7[101] = v7 + 102;
  return v7;
}

_QWORD* fs_Manager_createFileSync_ui_Ui2dArcFile_closure_Invoke(__int64 a1,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  int v9;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = (_QWORD*)v5;
  v9 = 0;
  v10[0] = 0;
  v10[1] = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  *v7 = ui_Ui2dArcFile_vtable;
  return v7;
}

_QWORD* fs_Manager_createFileAsync_ui_Ui2dArcFile_closure_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  int v15;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(__int64**)(a1 + 24);
  v7 = (_QWORD*)v5;
  v8 = *v6;
  v9 = v6[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v15 = 0;
    v13 = v8;
    v14 = v9;
    v10 = **(_QWORD**)(a1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v11 = *(__int64**)(a1 + 8);
    v15 = 0;
    v13 = v8;
    v14 = 0;
    v10 = *v11;
  }
  GameRoutine_6313f0(v5, v2, v4, &v13, v10, &v15);
  if (v14 != 0) {
    std___1___shared_weak_count___release_weak(v14);
  }
  *v7 = ui_Ui2dArcFile_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  return v7;
}

__int64 Manager_136a710(__int64 result, unsigned int a2)
{
  _QWORD* v2;

  v2 = (_QWORD*)(result + 376LL * a2);
  if (*v2 != 0) {
    result = GameRoutine_636000(*(_QWORD*)(*v2 + 8LL));
    if (v2[31] == 0) {
      ArcResourceAccessor_573580(v2 + 1, *(_QWORD*)(*v2 + 592LL), ".", 0, 0, 0);
      LayoutArchive_5725c0(v2 + 2, *game_g_frame_clock_ptr[0] + 568);
      return LayoutArchive_573340(v2 + 2, RenderTask_13697d0, 0);
    }
  }
  return result;
}

__int64 fs_Manager_createFileAsync_ui_IconManager_Ui2dIconArcFile(__int64 a1,
                                                                  __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  int v11;
  __int64 v12;
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;
  __int64 v20;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1(a1 + 4456),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *(_QWORD*)(a2 + 24);
  v5 = *(_QWORD*)(a2 + 32);
  v6 = *(_QWORD*)(a2 + 16);
  v18_.v19 = v4;
  v20 = v5;
  v18_.v18 = v6;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
  }
  v16_.v16[0] = GameData_202f580;
  v16_.v16[1] = &v20;
  v16_.v17 = v16_.v16;
  v16_.v16[2] = a1;
  v16_.v16[3] = &v18_.v18;
  v7 = ({
    unsigned __int128 r_ = GameRoutine_635a60_alt2_pair(a1, (__int64*)a2, 0, 0,
                                                        0, (__int64)v16_.v16);
    v8 = COERCE_AS(__typeof__(v8), (unsigned long long)(r_ >> 64));
    (__int64)(unsigned long long)r_;
  });
  v9 = v8;
  if (v16_.v17 == v16_.v16) {
    v10 = 32;
  }
  else {
    if (v16_.v17 == nullptr) {
      goto LABEL_8;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v16_.v17 + v10))((__int64)v16_.v17),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_8:
  if ((v9 & 1) != 0) {
    v11 = *(_DWORD*)(a2 + 40);
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)v12 = v7;
    *(_DWORD*)(v12 + 8) = v11;
    GameRoutine_17d4db0_alt1(a1 + 3536, v12),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    if (v18_.v19 == 0) {
      goto LABEL_16;
    }
    if (*(_QWORD*)(v18_.v19 + 8) != -1) {
      v14_.v14 = v18_.v18;
      v14_.v15 = v18_.v19;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18_.v19 + 16), 1u,
                                memory_order_relaxed);
      GameHr_631500(v7, &v14_.v14),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v14_.v15 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v14_.v15),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  if (v18_.v19 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v18_.v19),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_16:
  nn_os_UnlockMutex_alt2(a1 + 4456),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return v7;
}

__int64 Manager_136a920(__int64 a1, __int64 a2, int a3, unsigned int a4,
                        const char* a5)
{
  __int64 result;
  char** v10;
  char* v11;
  int v12;
  char* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  int v19;
  struct {
    __int64 v20[2];
    char* v21;
  } v20_;

  result = 0;
  if (a2 == 0 || a4 == 14) {
    return result;
  }
  if (a5 != nullptr && *a5 != 0) {
    Manager_136aaf0(v20_.v20, a4, a5);
    v10 = (char**)(a1 + 376LL * a4);
    v11 = *v10;
    if (*v10 != nullptr) {
      nn_os_AcquireReadLock_alt1((__int64)(v11 + 696));
      v12 = *((_DWORD*)v11 + 164);
      nn_os_ReleaseReadLock_alt1((__int64)(v11 + 696));
      if ((v12 & 8) == 0 || v10[31] == nullptr) {
        goto LABEL_18;
      }
      if ((v20_.v20[0] & 1) != 0) {
        v11 = v20_.v21;
      }
      else {
        v11 = (char*)v20_.v20 + 1;
      }
      if (v11 != nullptr) {
        if (*v11 != 0) {
          v13 = *v10;
          if (*v10 != nullptr) {
            nn_os_AcquireReadLock_alt1((__int64)(v13 + 696));
            v14 = *((_DWORD*)v13 + 164);
            nn_os_ReleaseReadLock_alt1((__int64)(v13 + 696));
            if ((v14 & 8) != 0 && v10[31] != nullptr) {
              v15 = GameRoutine_573330(v10 + 2);
              if (v15 != 0) {
                v11 = (char*)GameRoutine_59e700_alt1(v15, (__int64)v11);
                goto LABEL_19;
              }
            }
          }
        }
      LABEL_18:
        v11 = nullptr;
      }
    }
  LABEL_19:
    if ((v20_.v20[0] & 1) != 0 && v20_.v21 != nullptr) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)v20_.v21);
    }
    if (v11 != nullptr) {
      v17 = 1;
    LABEL_31:
      *(_QWORD*)(*(_QWORD*)(Pane_58f8a0(a2) + 24) + 16LL * a3 + 8) = v11;
      return v17;
    }
  }
  v18 = *(_QWORD*)(a1 + 2632);
  if (v18 == 0) {
    return 0;
  }
  nn_os_AcquireReadLock_alt1(v18 + 696);
  v19 = *(_DWORD*)(v18 + 656);
  nn_os_ReleaseReadLock_alt1(v18 + 696);
  result = 0;
  if ((v19 & 8) != 0 && *(_QWORD*)(a1 + 2880) != 0) {
    result = GameRoutine_573330(a1 + 2648);
    if (result != 0) {
      v11 = (char*)GameRoutine_59e700_alt1(result, (__int64)"Dummy^q");
      v17 = 0;
      result = 0;
      if (v11 != nullptr) {
        goto LABEL_31;
      }
    }
  }
  return result;
}

void Manager_136aaf0(__int64* a1, unsigned int a2, const char* a3)
{
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    char v18;
    char v19[15];
    __int64 v20;
  } v19_;

  if (a2 > 8 || ((1 << a2) & 0x181) == 0) {
    v12 = strlen_alt1(a3);
    if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v13 = v12;
    if (v12 >= 0x17) {
      if ((v12 | 7) == 0x17) {
        v16 = 26;
      }
      else {
        v16 = (v12 | 7) + 1;
      }
      v17 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v16,
                                                16, 0);
      a1[1] = v13;
      a1[2] = v17;
      v14 = (__int64)a3;
      *a1 = v16 | 1;
      v15 = v17;
    }
    else {
      v14 = (__int64)a3;
      *(_BYTE*)a1 = 2 * v12;
      v15 = (__int64)a1 + 1;
      if (v12 == 0) {
        goto LABEL_17;
      }
    }
    memcpy_alt1(v15, v14, v13);
  LABEL_17:
    *(_BYTE*)(v15 + v13) = 0;
    return;
  }
  v19_.v18 = 4;
  strcpy(v19_.v19, "^q");
  v5 = strlen_alt1(a3);
  v6 = (__int64*)GameRoutine_1a0a680_alt1((__int64)&v19_.v18, 0, a3, v5);
  v7 = *v6;
  v8 = v6[1];
  *v6 = 0;
  v6[1] = 0;
  *a1 = v7;
  a1[1] = v8;
  v9 = v6[2];
  v6[2] = 0;
  a1[2] = v9;
  if ((v19_.v18 & 1) != 0 && v19_.v20 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v19_.v20);
  }
}

__int64 Manager_136ad70(__int64 a1, __int64 a2, int a3, unsigned int a4,
                        char* a5)
{
  unsigned __int64 v10;
  _BYTE* v11;
  char* v12;
  __int64 v13;
  _BYTE* v14;
  __int64 v15;
  char* v16;
  char v17;
  char v18;
  __int64 v19;
  _QWORD v21[6];
  struct {
    _QWORD v22[2];
    unsigned __int64 v23;
    __int64 (*v24)();
    __int64 v25;
  } v22_;
  struct {
    _BYTE v26[256];
    _BYTE* v27;
  } v26_;
  struct {
    __int64* v28;
    __int64 v29;
    char* v30;
    __int64 v31;
  } v28_;
  struct {
    _BYTE v32[8];
    char v33;
  } v32_;
  struct {
    _QWORD v34[2];
    int v35;
    char gap420_[4];
    __int64 v36;
    __int64 v37;
  } v34_;

  v21[2] = GameRoutine_a4aea0(GameData_21759e0);
  v21[0] = a5;
  v22_.v25 = 0;
  v34_.v35 = 0;
  v22_.v23 = 0;
  v22_.v24 = GameRoutine_64be60;
  v21[4] = 396;
  v32_.v32[0] = 0;
  v32_.v33 = 0;
  v22_.v22[0] = v26_.v26;
  v22_.v22[1] = 256;
  v26_.v27 = v26_.v26;
  v34_.v34[0] = "{}_{}";
  v34_.v34[1] = "";
  v34_.v36 = 0;
  v34_.v37 = 2;
  v28_.v30 = (char*)v21;
  v28_.v31 = 396;
  v28_.v28 = v22_.v22;
  v28_.v29 = 2;
  GameRoutine_6380e0((__int64)v34_.v34, &v28_.v28);
  if (v32_.v33 == 1) {
    std___1_locale_Destroy_locale(v32_.v32);
  }
  v10 = v22_.v23;
  if (v22_.v23 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v11 = v26_.v27;
  if (v22_.v23 >= 0x17) {
    if ((v22_.v23 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v22_.v23 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v13, 16, 0);
    v28_.v29 = v10;
    v28_.v30 = v12;
    v28_.v28 = (__int64*)(v13 | 1);
  }
  else {
    LOBYTE(v28_.v28) = 2 * v22_.v23;
    v12 = (char*)&v28_.v28 + 1;
    if (v22_.v23 == 0) {
      goto LABEL_12;
    }
  }
  memmove(v12, v11, v10);
LABEL_12:
  v14 = v26_.v27;
  v12[v10] = 0;
  if (v14 != v26_.v26 && v14 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v15, (_QWORD)(v14));
  }
  if (((unsigned __int8)v28_.v28 & 1) != 0) {
    v16 = v28_.v30;
  }
  else {
    v16 = (char*)&v28_.v28 + 1;
  }
  if ((Manager_136afb0_alt1(a1, a4, v16) & 1) != 0) {
    if (((unsigned __int8)v28_.v28 & 1) != 0) {
      a5 = v28_.v30;
    }
    else {
      a5 = (char*)&v28_.v28 + 1;
    }
  }
  v17 = Manager_136a920_alt1(a1, a2, a3, a4, a5);
  if (((unsigned __int8)v28_.v28 & 1) != 0 && v28_.v30 != nullptr) {
    v18 = v17;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v19, (_QWORD)(v28_.v30));
    v17 = v18;
  }
  return v17 & 1;
}

__int64 Manager_136afb0(__int64 a1, unsigned int a2, const char* a3)
{
  __int64 result;
  __int64* v7;
  __int64 v8;
  int v11;
  int v12;
  _BYTE* v13;
  __int64 v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  struct {
    __int64 v18[2];
    _BYTE* v19;
  } v18_;

  result = 0;
  if (a2 != 14 && a3 != nullptr) {
    if (*a3 != 0) {
      v7 = (__int64*)(a1 + 376LL * a2);
      v8 = *v7;
      if (*v7 != 0 &&
          (nn_os_AcquireReadLock_alt1(v8 + 696), v11 = *(_DWORD*)(v8 + 656),
           nn_os_ReleaseReadLock_alt1(v8 + 696), (v11 & 8) != 0) &&
          v7[31] != 0) {
        Manager_136aaf0(v18_.v18, a2, a3);
        v12 = v18_.v18[0] & 1;
        if ((v18_.v18[0] & 1) != 0) {
          v13 = v18_.v19;
        }
        else {
          v13 = (char*)v18_.v18 + 1;
        }
        if (v13 != nullptr && *v13 != 0 && (v14 = *v7, *v7 != 0) &&
            (nn_os_AcquireReadLock_alt1(v14 + 696), v15 = *(_DWORD*)(v14 + 656),
             nn_os_ReleaseReadLock_alt1(v14 + 696), (v15 & 8) != 0) &&
            v7[31] != 0) {
          result = GameRoutine_573330(v7 + 2);
          if (result != 0) {
            result = GameRoutine_59e700_alt1(result, (__int64)v13) != 0;
            v12 = v18_.v18[0] & 1;
          }
        }
        else {
          result = 0;
        }
        if (v12 != 0 && v18_.v19 != nullptr) {
          v16 = result;
          v17 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free_alt4(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (__int64)v18_.v19);
          return v16;
        }
      }
      else {
        return 0;
      }
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 Manager_136b110(__int64 a1, unsigned int a2, char* a3)
{
  unsigned __int64 v6;
  _BYTE* v7;
  char* v8;
  __int64 v9;
  _BYTE* v10;
  __int64 v11;
  _BYTE* v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  _QWORD v16[7];
  struct {
    _QWORD v17[2];
    unsigned __int64 v18;
    __int64 (*v19)();
    __int64 v20;
  } v17_;
  struct {
    _BYTE v21[256];
    _BYTE* v22;
  } v21_;
  struct {
    __int64* v23;
    __int64 v24;
    _QWORD* v25;
    __int64 v26;
  } v23_;
  struct {
    _BYTE v27[8];
    char v28;
  } v27_;
  struct {
    _QWORD v29[2];
    int v30;
    char gap428_[4];
    __int64 v31;
    __int64 v32;
  } v29_;

  v16[2] = GameRoutine_a4aea0(GameData_21759e0);
  v16[0] = a3;
  v17_.v20 = 0;
  v29_.v30 = 0;
  v17_.v18 = 0;
  v17_.v19 = GameRoutine_64be60;
  v16[4] = 396;
  v27_.v27[0] = 0;
  v27_.v28 = 0;
  v17_.v17[0] = v21_.v21;
  v17_.v17[1] = 256;
  v21_.v22 = v21_.v21;
  v29_.v29[0] = "{}_{}";
  v29_.v29[1] = "";
  v29_.v31 = 0;
  v29_.v32 = 2;
  v23_.v25 = v16;
  v23_.v26 = 396;
  v23_.v23 = v17_.v17;
  v23_.v24 = 2;
  GameRoutine_6380e0((__int64)v29_.v29, &v23_.v23);
  if (v27_.v28 == 1) {
    std___1_locale_Destroy_locale(v27_.v27);
  }
  v6 = v17_.v18;
  if (v17_.v18 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v7 = v21_.v22;
  if (v17_.v18 >= 0x17) {
    if ((v17_.v18 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v17_.v18 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v9, 16, 0);
    v23_.v24 = v6;
    v23_.v25 = v8;
    v23_.v23 = (__int64*)(v9 | 1);
  }
  else {
    LOBYTE(v23_.v23) = 2 * v17_.v18;
    v8 = (char*)&v23_.v23 + 1;
    if (v17_.v18 == 0) {
      goto LABEL_12;
    }
  }
  memmove(v8, v7, v6);
LABEL_12:
  v10 = v21_.v22;
  v8[v6] = 0;
  if (v10 != v21_.v21 && v10 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v11, (_QWORD)(v10));
  }
  if (((unsigned __int8)v23_.v23 & 1) != 0) {
    v12 = v23_.v25;
  }
  else {
    v12 = (char*)&v23_.v23 + 1;
  }
  if ((Manager_136afb0_alt1(a1, a2, v12) & 1) != 0) {
    if (((unsigned __int8)v23_.v23 & 1) != 0) {
      a3 = (char*)v23_.v25;
    }
    else {
      a3 = (char*)&v23_.v23 + 1;
    }
  }
  result = Manager_136ac50(a1, a2, (__int64)a3);
  if (((unsigned __int8)v23_.v23 & 1) != 0 && v23_.v25 != nullptr) {
    v14 = result;
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v15, (_QWORD)(v23_.v25));
    return v14;
  }
  return result;
}

_QWORD* Manager_136b340(_QWORD* result, __int64 a2)
{
  __int64 v2;
  _QWORD* v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v31;

  v2 = *result;
  v4 = result;
  if (*result != 0) {
    nn_os_AcquireReadLock(v2 + 696);
    v5 = *(_DWORD*)(v2 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v2 + 696);
    if ((v5 & 8) != 0 && v4[31] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 2);
    }
  }
  v6 = v4[47];
  if (v6 != 0) {
    nn_os_AcquireReadLock(v6 + 696);
    v7 = *(_DWORD*)(v6 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v6 + 696);
    if ((v7 & 8) != 0 && v4[78] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 49);
    }
  }
  v8 = v4[94];
  if (v8 != 0) {
    nn_os_AcquireReadLock(v8 + 696);
    v9 = *(_DWORD*)(v8 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v8 + 696);
    if ((v9 & 8) != 0 && v4[125] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 96);
    }
  }
  v10 = v4[141];
  if (v10 != 0) {
    nn_os_AcquireReadLock(v10 + 696);
    v11 = *(_DWORD*)(v10 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v10 + 696);
    if ((v11 & 8) != 0 && v4[172] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 143);
    }
  }
  v12 = v4[188];
  if (v12 != 0) {
    nn_os_AcquireReadLock(v12 + 696);
    v13 = *(_DWORD*)(v12 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v12 + 696);
    if ((v13 & 8) != 0 && v4[219] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 190);
    }
  }
  v14 = v4[235];
  if (v14 != 0) {
    nn_os_AcquireReadLock(v14 + 696);
    v15 = *(_DWORD*)(v14 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v14 + 696);
    if ((v15 & 8) != 0 && v4[266] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 237);
    }
  }
  v16 = v4[282];
  if (v16 != 0) {
    nn_os_AcquireReadLock(v16 + 696);
    v17 = *(_DWORD*)(v16 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v16 + 696);
    if ((v17 & 8) != 0 && v4[313] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 284);
    }
  }
  v18 = v4[329];
  if (v18 != 0) {
    nn_os_AcquireReadLock(v18 + 696);
    v19 = *(_DWORD*)(v18 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v18 + 696);
    if ((v19 & 8) != 0 && v4[360] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 331);
    }
  }
  v20 = v4[376];
  if (v20 != 0) {
    nn_os_AcquireReadLock(v20 + 696);
    v21 = *(_DWORD*)(v20 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v20 + 696);
    if ((v21 & 8) != 0 && v4[407] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 378);
    }
  }
  v22 = v4[423];
  if (v22 != 0) {
    nn_os_AcquireReadLock(v22 + 696);
    v23 = *(_DWORD*)(v22 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v22 + 696);
    if ((v23 & 8) != 0 && v4[454] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 425);
    }
  }
  v24 = v4[470];
  if (v24 != 0) {
    nn_os_AcquireReadLock(v24 + 696);
    v25 = *(_DWORD*)(v24 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v24 + 696);
    if ((v25 & 8) != 0 && v4[501] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 472);
    }
  }
  v26 = v4[517];
  if (v26 != 0) {
    nn_os_AcquireReadLock(v26 + 696);
    v27 = *(_DWORD*)(v26 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v26 + 696);
    if ((v27 & 8) != 0 && v4[548] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 519);
    }
  }
  v28 = v4[564];
  if (v28 != 0) {
    nn_os_AcquireReadLock(v28 + 696);
    v29 = *(_DWORD*)(v28 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v28 + 696);
    if ((v29 & 8) != 0 && v4[595] != 0) {
      result = (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 566);
    }
  }
  v30 = v4[611];
  if (v30 != 0) {
    nn_os_AcquireReadLock(v30 + 696);
    v31 = *(_DWORD*)(v30 + 656);
    result = (_QWORD*)nn_os_ReleaseReadLock(v30 + 696);
    if ((v31 & 8) != 0 && v4[642] != 0) {
      return (_QWORD*)MultiArcResourceAccessor_574050(a2, v4 + 613);
    }
  }
  return result;
}

_QWORD* fs_Manager_createFileSync_ui_IconManager_Ui2dIconArcFile_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  int v9;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = (_QWORD*)v5;
  v9 = 0;
  v10[0] = 0;
  v10[1] = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  *v7 = ui_IconManager_Ui2dIconArcFile_vtable;
  return v7;
}

_QWORD*

fs_Manager_createFileAsync_ui_IconManager_Ui2dIconArcFile_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  int v15;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(__int64**)(a1 + 24);
  v7 = (_QWORD*)v5;
  v8 = *v6;
  v9 = v6[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v15 = 0;
    v10 = **(_QWORD**)(a1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v13 = v8;
    v14 = v9;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v11 = *(__int64**)(a1 + 8);
    v15 = 0;
    v13 = v8;
    v14 = 0;
    v10 = *v11;
  }
  GameRoutine_6313f0_alt1(v5, v2, v4, &v13, v10, &v15);
  if (v14 != 0) {
    std___1___shared_weak_count___release_weak(v14);
  }
  *v7 = ui_Ui2dArcFile_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
    *v7 = ui_IconManager_Ui2dIconArcFile_vtable;
    std___1___shared_weak_count___release_weak(v9);
  }
  else {
    *v7 = ui_IconManager_Ui2dIconArcFile_vtable;
  }
  return v7;
}

__int64 fs_Manager_createFileAsync_fs_BntxFile(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  int v11;
  __int64 v12;
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;
  __int64 v20;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1(a1 + 4456),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *(_QWORD*)(a2 + 24);
  v5 = *(_QWORD*)(a2 + 32);
  v6 = *(_QWORD*)(a2 + 16);
  v18_.v19 = v4;
  v20 = v5;
  v18_.v18 = v6;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
  }
  v16_.v16[0] = GameData_2032be0;
  v16_.v16[1] = &v20;
  v16_.v17 = v16_.v16;
  v16_.v16[2] = a1;
  v16_.v16[3] = &v18_.v18;
  v7 = ({
    unsigned __int128 r_ = GameRoutine_635a60_alt2_pair(a1, (__int64*)a2, 0, 0,
                                                        0, (__int64)v16_.v16);
    v8 = COERCE_AS(__typeof__(v8), (unsigned long long)(r_ >> 64));
    (__int64)(unsigned long long)r_;
  });
  v9 = v8;
  if (v16_.v17 == v16_.v16) {
    v10 = 32;
  }
  else {
    if (v16_.v17 == nullptr) {
      goto LABEL_8;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v16_.v17 + v10))((__int64)v16_.v17),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_8:
  if ((v9 & 1) != 0) {
    v11 = *(_DWORD*)(a2 + 40);
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)v12 = v7;
    *(_DWORD*)(v12 + 8) = v11;
    GameRoutine_17d4db0_alt1(a1 + 3536, v12),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    if (v18_.v19 == 0) {
      goto LABEL_16;
    }
    if (*(_QWORD*)(v18_.v19 + 8) != -1) {
      v14_.v14 = v18_.v18;
      v14_.v15 = v18_.v19;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18_.v19 + 16), 1u,
                                memory_order_relaxed);
      GameHr_631500(v7, &v14_.v14),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v14_.v15 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v14_.v15),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  if (v18_.v19 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v18_.v19),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_16:
  nn_os_UnlockMutex_alt2(a1 + 4456),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return v7;
}

_QWORD* fs_Manager_createFileAsync_fs_BntxFile_closure_CloneInto(_QWORD* result,
                                                                 _QWORD* a2)
{
  __int64 v2;
  __int64 v3;

  *a2 = GameData_2032be0;
  v2 = result[1];
  v3 = result[3];
  a2[2] = result[2];
  a2[3] = v3;
  a2[1] = v2;
  return result;
}

_QWORD* fs_Manager_createFileAsync_fs_BntxFile_closure_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  int v15;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(__int64**)(a1 + 24);
  v7 = (_QWORD*)v5;
  v8 = *v6;
  v9 = v6[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v10 = **(_QWORD**)(a1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v15 = 0;
    v13 = v8;
    v14 = v9;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v11 = *(__int64**)(a1 + 8);
    v15 = 0;
    v13 = v8;
    v14 = 0;
    v10 = *v11;
  }
  GameRoutine_6313f0(v5, v2, v4, &v13, v10, &v15);
  if (v14 != 0) {
    std___1___shared_weak_count___release_weak(v14);
  }
  *v7 = fs_GfxFile_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
    *v7 = GameData_212c000[0] + 2;
    std___1___shared_weak_count___release_weak(v9);
  }
  else {
    *v7 = fs_BntxFile_vtable;
  }
  return v7;
}

__int64 fs_Manager_createFileAsync_fs_ShaderFile(__int64 a1, __int64 a2,
                                                 __int64 a3, __int64* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  int v13;
  __int64 v14;
  struct {
    __int64 v16[3];
    __int64 v17;
    __int64 v18;
    int v19;
  } v16_;
  struct {
    __int64 (**v20)();
    __int64* v21;
    __int64 v22;
    __int64 (***v23)();
    __int64 (***v24)();
  } v20_;
  struct {
    __int64 (**v25)();
    __int64 v26;
  } v25_;
  __int64 v27;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v4 = *(_QWORD*)(a1 + 8);
  v6 = *a4;
  v5 = a4[1];
  v16_.v16[0] = a2;
  v16_.v16[1] = a3;
  v16_.v16[2] = v6;
  v16_.v17 = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
  }
  v7 = a1 + 56;
  v16_.v18 = a1 + 56;
  v16_.v19 = 1;
  nn_os_LockMutex_alt1(v4 + 4456),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v27 = v7;
  v25_.v25 = (__int64 (**)(void))v6,
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v25_.v26 = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
  }
  v20_.v20 = GameData_20da378;
  v20_.v21 = &v27;
  v20_.v24 = &v20_.v20;
  v20_.v22 = v4;
  v20_.v23 = &v25_.v25;
  v10 = ({
    unsigned __int128 r_ =
        GameRoutine_635a60_alt2_pair(v4, v16_.v16, 0, 0, 0, (__int64)&v20_.v20);
    v8 = COERCE_AS(__typeof__(v8), (unsigned long long)(r_ >> 64));
    (__int64)(unsigned long long)r_;
  }),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v11 = v8;
  if (v20_.v24 == &v20_.v20) {
    v12 = 4;
  }
  else {
    if (v20_.v24 == nullptr) {
      goto LABEL_10;
    }
    v12 = 5;
  }
  ((void (*)(__int64 (***)(void), __int64, __int64))(*v20_.v24)[v12])(v20_.v24,
                                                                      v8, v9),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
LABEL_10:
  if ((v11 & 1) != 0) {
    v13 = v16_.v19;
    v14 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, 16, 16,
                                              0),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    *(_QWORD*)v14 = v10;
    *(_DWORD*)(v14 + 8) = v13;
    GameRoutine_17d4db0_alt1(v4 + 3536, v14),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  else {
    if (v25_.v26 == 0) {
      goto LABEL_18;
    }
    if (*(_QWORD*)(v25_.v26 + 8) != -1) {
      v20_.v20 = v25_.v25;
      v20_.v21 = (__int64*)v25_.v26;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v25_.v26 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_631500(v10, &v20_.v20),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v20_.v21 != nullptr) {
        std___1___shared_weak_count___release_weak_alt1((__int64)v20_.v21),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
  }
  if (v25_.v26 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v25_.v26),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
LABEL_18:
  nn_os_UnlockMutex_alt2(v4 + 4456),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v16_.v17 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v16_.v17),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  return v10;
}

__int64 fs_Manager_createFileAsync_fs_ResFile(__int64 a1, __int64 a2,
                                              unsigned __int64 a3, __int64* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  int v12;
  __int64 v13;
  struct {
    __int64 v15[3];
    __int64 v16;
    __int64 v17;
    int v18;
  } v15_;
  struct {
    __int64 (**v19)();
    __int64* v20;
    __int64 v21;
    __int64 (***v22)();
    __int64 (***v23)();
  } v19_;
  struct {
    __int64 (**v24)();
    __int64 v25;
  } v24_;
  __int64 v26;

  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v4 = *(_QWORD*)(a1 + 8);
  v6 = *a4;
  v5 = a4[1];
  v15_.v15[0] = a2;
  v15_.v15[1] = a3;
  v15_.v15[2] = v6;
  v15_.v16 = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
  }
  v15_.v17 = GameRoutine_17db7e0(a1, a2, a3),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v15_.v18 = 1;
  nn_os_LockMutex_alt1(v4 + 4456),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v26 = v15_.v17;
  v24_.v24 = (__int64 (**)(void))v6,
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v24_.v25 = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
  }
  v19_.v19 = GameData_20da460;
  v19_.v20 = &v26;
  v19_.v23 = &v19_.v19;
  v19_.v21 = v4;
  v19_.v22 = &v24_.v24;
  v9 = ({
    unsigned __int128 r_ =
        GameRoutine_635a60_alt2_pair(v4, v15_.v15, 0, 0, 0, (__int64)&v19_.v19);
    v7 = COERCE_AS(__typeof__(v7), (unsigned long long)(r_ >> 64));
    (__int64)(unsigned long long)r_;
  }),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v10 = v7;
  if (v19_.v23 == &v19_.v19) {
    v11 = 4;
  }
  else {
    if (v19_.v23 == nullptr) {
      goto LABEL_10;
    }
    v11 = 5;
  }
  ((void (*)(__int64 (***)(void), __int64, __int64))(*v19_.v23)[v11])(v19_.v23,
                                                                      v7, v8),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
LABEL_10:
  if ((v10 & 1) != 0) {
    v12 = v15_.v18;
    v13 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, 16, 16,
                                              0),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    *(_QWORD*)v13 = v9;
    *(_DWORD*)(v13 + 8) = v12;
    GameRoutine_17d4db0_alt1(v4 + 3536, v13),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  else {
    if (v24_.v25 == 0) {
      goto LABEL_18;
    }
    if (*(_QWORD*)(v24_.v25 + 8) != -1) {
      v19_.v19 = v24_.v24;
      v19_.v20 = (__int64*)v24_.v25;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v24_.v25 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_631500(v9, &v19_.v19),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v19_.v20 != nullptr) {
        std___1___shared_weak_count___release_weak_alt1((__int64)v19_.v20),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
  }
  if (v24_.v25 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v24_.v25),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
LABEL_18:
  nn_os_UnlockMutex_alt2(v4 + 4456),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v15_.v16 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v15_.v16),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  return v9;
}

_QWORD* fs_Manager_createFileAsync_fs_ShaderFile_closure_Invoke(__int64 a1,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  int v15;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(__int64**)(a1 + 24);
  v7 = (_QWORD*)v5;
  v8 = *v6;
  v9 = v6[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v15 = 0;
    v10 = **(_QWORD**)(a1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v13 = v8;
    v14 = v9;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v11 = *(__int64**)(a1 + 8);
    v15 = 0;
    v13 = v8;
    v14 = 0;
    v10 = *v11;
  }
  GameRoutine_6313f0(v5, v2, v4, &v13, v10, &v15);
  if (v14 != 0) {
    std___1___shared_weak_count___release_weak(v14);
  }
  *v7 = fs_GfxFile_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
    *v7 = fs_ShaderFile_vtable;
    std___1___shared_weak_count___release_weak(v9);
  }
  else {
    *v7 = fs_ShaderFile_vtable;
  }
  return v7;
}

_QWORD* fs_Manager_createFileAsync_fs_ResFile_closure_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v14;
  __int64 v15;
  int v16;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 832, 16);
  v6 = *(__int64**)(a1 + 24);
  v7 = (_QWORD*)v5;
  v8 = *v6;
  v9 = v6[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v16 = 0;
    v10 = **(_QWORD**)(a1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v14 = v8;
    v15 = v9;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v11 = *(__int64**)(a1 + 8);
    v16 = 0;
    v14 = v8;
    v15 = 0;
    v10 = *v11;
  }
  GameRoutine_6313f0(v5, v2, v4, &v14, v10, &v16);
  if (v15 != 0) {
    std___1___shared_weak_count___release_weak(v15);
  }
  *v7 = fs_GfxFile_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
    v12 = GameData_212c030[0];
    v7[100] = 0;
    v7[102] = 0;
    v7[103] = 0;
    *v7 = v12 + 2;
    v7[101] = v7 + 102;
    std___1___shared_weak_count___release_weak(v9);
  }
  else {
    v7[100] = 0;
    v7[102] = 0;
    v7[103] = 0;
    *v7 = fs_ResFile_vtable;
    v7[101] = v7 + 102;
  }
  return v7;
}

_QWORD* fs_Manager_createFileSync_fs_ShaderFile_closure_Invoke(__int64 a1,
                                                               __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  int v9;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = (_QWORD*)v5;
  v9 = 0;
  v10[0] = 0;
  v10[1] = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  *v7 = fs_ShaderFile_vtable;
  return v7;
}

__int64

fs_Manager_createFileSync_fs_BntxFile_closure_DeletingDestructor(__int64 a1)
{
  __int64 v1;

  v1 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v1, a1);
}

_QWORD* fs_Manager_createFileSync_fs_BntxFile_closure_Clone(__int64 a1)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 24,
                                                   16, 0);
  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(a1 + 16);
  *result = GameData_20da560;
  result[1] = v3;
  result[2] = v4;
  return result;
}

_QWORD* fs_Manager_createFileSync_fs_BntxFile_closure_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  int v9;
  _QWORD v10[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 800, 16);
  v6 = *(_QWORD**)(a1 + 8);
  v7 = (_QWORD*)v5;
  v9 = 0;
  v10[0] = 0;
  v10[1] = 0;
  GameRoutine_6313f0(v5, v2, v4, v10, *v6, &v9);
  *v7 = GameData_212c000[0] + 2;
  return v7;
}

__int64 fs_Manager_createFileAsync_fs_PropertyFile(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  int v11;
  __int64 v12;
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;
  __int64 v20;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1(a1 + 4456),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *(_QWORD*)(a2 + 24);
  v5 = *(_QWORD*)(a2 + 32);
  v6 = *(_QWORD*)(a2 + 16);
  v18_.v19 = v4;
  v20 = v5;
  v18_.v18 = v6;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
  }
  v16_.v16[0] = GameData_211ed10;
  v16_.v16[1] = &v20;
  v16_.v17 = v16_.v16;
  v16_.v16[2] = a1;
  v16_.v16[3] = &v18_.v18;
  v7 = ({
    unsigned __int128 r_ = GameRoutine_635a60_alt2_pair(a1, (__int64*)a2, 0, 0,
                                                        0, (__int64)v16_.v16);
    v8 = COERCE_AS(__typeof__(v8), (unsigned long long)(r_ >> 64));
    (__int64)(unsigned long long)r_;
  });
  v9 = v8;
  if (v16_.v17 == v16_.v16) {
    v10 = 32;
  }
  else {
    if (v16_.v17 == nullptr) {
      goto LABEL_8;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v16_.v17 + v10))((__int64)v16_.v17),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_8:
  if ((v9 & 1) != 0) {
    v11 = *(_DWORD*)(a2 + 40);
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)v12 = v7;
    *(_DWORD*)(v12 + 8) = v11;
    GameRoutine_17d4db0_alt1(a1 + 3536, v12),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    if (v18_.v19 == 0) {
      goto LABEL_16;
    }
    if (*(_QWORD*)(v18_.v19 + 8) != -1) {
      v14_.v14 = v18_.v18;
      v14_.v15 = v18_.v19;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18_.v19 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_631500(v7, &v14_.v14),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v14_.v15 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v14_.v15),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  if (v18_.v19 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v18_.v19),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_16:
  nn_os_UnlockMutex_alt2(a1 + 4456),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return v7;
}

__int64 fs_Manager_createFileAsync_fs_PropertyFile_closure_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD v13[2];
  int v14;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 864, 16);
  v6 = *(__int64**)(a1 + 24);
  v7 = v5;
  v8 = *v6;
  v9 = v6[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v14 = 0;
    v13[0] = v8;
    v13[1] = v9;
    v10 = **(_QWORD**)(a1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_6313f0(v5, v2, v4, v13, v10, &v14);
    std___1___shared_weak_count___release_weak(v9);
  }
  else {
    v11 = *(_QWORD**)(a1 + 8);
    v14 = 0;
    v13[0] = v8;
    v13[1] = 0;
    GameRoutine_6313f0(v5, v2, v4, v13, *v11, &v14);
  }
  *(_QWORD*)(v7 + 824) = 0;
  *(_QWORD*)(v7 + 816) = 0;
  *(_QWORD*)(v7 + 808) = 0;
  *(_QWORD*)(v7 + 800) = 0;
  *(_BYTE*)(v7 + 842) = 0;
  *(_DWORD*)(v7 + 832) = 1065353216;
  *(_WORD*)(v7 + 840) = 12034;
  *(_QWORD*)v7 = fs_PropertyFile_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  return v7;
}

#pragma GCC visibility pop
