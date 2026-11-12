#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5e5f00(_QWORD);
__int64 GameRoutine_5e5f40(_QWORD);
__int64 GameRoutine_5e5fe0(_QWORD, _QWORD);
__int64 GameRoutine_5e6140(_QWORD, _QWORD);
__int64 GameRoutine_5e61e0(_QWORD);
__int64 GameRoutine_5fc1f0(__int64);
__int64 GameRoutine_630ca0(void);
__int64 GameRoutine_6315e0(_QWORD);
__int64 GameRoutine_a61680(_QWORD);
__int64 GameRoutine_a617e0(_QWORD);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_containers_DestroyStringTree(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_AcquireWriteLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 nn_os_ReleaseWriteLock(_QWORD);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
__int64 strlen(_QWORD);
extern __int64 (*fs_ResFile_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
void __attribute__((noreturn)) GameRoutine_60a1d0();
__int64 ResFile_Destructor(__int64 a1);
__int64 ResFile_Unknown2_alt1(__int64 result) __asm__("ResFile_Unknown2");
__int64* fw_containers_BalanceAfterInsert_alt1(
    __int64* result, __int64*) __asm__("fw_containers_BalanceAfterInsert");
__int64 GameRoutine_630ca0_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_630ca0");
__int64 ResFile_5e5f00(__int64);
__int64 ResFile_5e5fe0(__int64, _QWORD*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_os_AcquireReadLock_alt1(__int64) __asm__("nn_os_AcquireReadLock");
__int64 nn_os_AcquireWriteLock_alt1(__int64) __asm__("nn_os_AcquireWriteLock");
__int64 nn_os_ReleaseReadLock_alt1(__int64) __asm__("nn_os_ReleaseReadLock");
__int64 nn_os_ReleaseWriteLock_alt1(__int64) __asm__("nn_os_ReleaseWriteLock");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 GameHr_a61680(_QWORD*);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ResFile_Unknown2(__int64 a1);

__int64 ResFile_Destructor(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  bool v14;

  *(_QWORD*)a1 = fs_ResFile_vtable;
  if (*(_QWORD*)(a1 + 592) != 0) {
    nn_os_AcquireReadLock(a1 + 696);
    v2 = *(_DWORD*)(a1 + 656);
    nn_os_ReleaseReadLock(a1 + 696);
    if ((v2 & 0x20) != 0) {
      v3 = GameRoutine_5e5f00(*(_QWORD*)(a1 + 592));
      GameRoutine_a617e0(v3);
      v4 = GameRoutine_5e5f00(*(_QWORD*)(a1 + 592));
      GameRoutine_5e5f40(v4);
      v5 = GameRoutine_5e5f00(*(_QWORD*)(a1 + 592));
      GameRoutine_5e6140(v5, game_g_frame_clock + 568);
      v6 = GameRoutine_5e5f00(*(_QWORD*)(a1 + 592));
      GameRoutine_5e61e0(v6);
      nn_os_AcquireWriteLock(a1 + 696);
      *(_DWORD*)(a1 + 656) &= ~0x20u;
      nn_os_ReleaseWriteLock(a1 + 696);
      v7 = *(_QWORD**)(a1 + 808);
      v8 = (_QWORD*)(a1 + 816);
      if (v7 != (_QWORD*)(a1 + 816)) {
        v9 = fw_memory_g_heap_manager_ptr;
        do {
          v10 = v7[7];
          if (v10 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
              v11 = 128;
            }
            else {
              v11 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v11, v10);
          }
          v12 = (_QWORD*)v7[1];
          if (v12 != nullptr) {
            do {
              v13 = v12;
              v12 = (_QWORD*)*v12;
            } while (v12 != nullptr);
          }
          else {
            do {
              v13 = (_QWORD*)v7[2];
              v14 = v7 == (_QWORD*)*v13;
              v7 = v13;
            } while (!v14);
          }
          v7 = v13;
        } while (v13 != v8);
      }
      fw_containers_DestroyStringTree(*(_QWORD*)(a1 + 816));
      *(_QWORD*)(a1 + 824) = 0;
      *(_QWORD*)(a1 + 808) = v8;
      *(_QWORD*)(a1 + 816) = 0;
    }
  }
  fw_containers_DestroyStringTree(*(_QWORD*)(a1 + 816));
  return GameRoutine_6315e0(a1);
}

void ResFile_Unknown2(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  bool v17;
  unsigned __int64 v18;
  unsigned __int16* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  _BYTE* v27;
  __int64 v28;
  const char* v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  char* v34;
  __int64 v35;
  __int64* v36;
  __int64* v37;
  __int64** v38;
  char* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  bool v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  int v47;
  int v48;
  __int64* v49;
  __int64* v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64* v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 v58;
  int v59;
  __int64** v60;
  struct {
    __int64 v61;
    unsigned __int64 v62;
    char* v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
  } v61_;

  if (*(_QWORD*)(a1 + 592) != 0) {
    nn_os_AcquireReadLock_alt1(a1 + 696);
    v2 = *(_DWORD*)(a1 + 656);
    nn_os_ReleaseReadLock_alt1(a1 + 696);
    if ((v2 & 0x10) == 0) {
      nn_os_AcquireReadLock_alt1(a1 + 696);
      v3 = *(_DWORD*)(a1 + 656);
      nn_os_ReleaseReadLock_alt1(a1 + 696);
      if ((v3 & 0x20) == 0) {
        v4 = ResFile_5e5f00(*(_QWORD*)(a1 + 592));
        ResFile_5e5fe0(v4, (_QWORD*)(game_g_frame_clock + 568));
        v5 = (_QWORD*)ResFile_5e5f00(*(_QWORD*)(a1 + 592));
        GameHr_a61680(v5);
        nn_os_AcquireWriteLock_alt1(a1 + 696);
        *(_DWORD*)(a1 + 656) |= 0x20u;
        nn_os_ReleaseWriteLock_alt1(a1 + 696);
      }
      v6 = *(_QWORD*)(a1 + 592);
      v61_.v67 = 0;
      v61_.v68 = 0;
      v61_.v65 = 0;
      v61_.v66 = 0;
      v61_.v63 = nullptr;
      v61_.v64 = 0;
      v61_.v61 = 0;
      v61_.v62 = 0;
      v7 = ResFile_5e5f00(v6);
      nn_util_SNPrintf(&v61_.v61, 64, "%s.bntx",
                       (const char*)(*(_QWORD*)(v7 + 32) + 2LL));
      v8 = ResFile_5e5f00(*(_QWORD*)(a1 + 592));
      v9 = *(_QWORD*)(v8 + 192);
      if (v9 != 0) {
        v10 = v8;
        v11 = strlen_alt1((const char*)&v61_.v61);
        v12 = v9 + 8;
        v13 = *(unsigned __int16*)(v9 + 12);
        v14 = v9 + 8 + 16 * v13;
        v15 = *(_DWORD*)v14;
        if ((signed __int32)*(_DWORD*)(v9 + 8) <
            (signed __int32)*(_DWORD*)v14) {
          do {
            v18 = (__int64)v15 >> 3;
            if (v11 > v18) {
              v16 = (*((unsigned __int8*)&v61_.v61 + v11 + ~v18) >> (v15 & 7)) &
                    1;
            }
            else {
              v16 = 0;
            }
            v13 = *(unsigned __int16*)(v9 + 12 + 16 * v13 + 2 * v16);
            v17 = v15 < (signed __int32)*(_DWORD*)(v12 + 16 * v13);
            v15 = *(_DWORD*)(v12 + 16 * v13);
          } while (v17);
          v14 = v12 + 16 * v13;
        }
        v19 = *(unsigned __int16**)(v14 + 8);
        if (v11 == *v19 &&
            memcmp_alt1((__int64)(v19 + 1), (__int64)&v61_.v61, v11) == 0) {
          v20 = v14 - v9 - 24;
          if ((~v20 & 0xFFFFFFFF0LL) != 0) {
            v21 = *(_QWORD*)(v10 + 184);
            if (v21 != 0) {
              *(_QWORD*)(a1 + 800) =
                  GameRoutine_5fc1f0(*(_QWORD*)(v21 + 16LL * (int)(v20 >> 4)));
            }
          }
        }
      }
      v22 = ResFile_5e5f00(*(_QWORD*)(a1 + 592));
      v23 = *(unsigned __int16*)(v22 + 236);
      if (*(_WORD*)(v22 + 236) != 0) {
        v24 = 0;
        v60 = (__int64**)(a1 + 816);
        v25 = (__int64*)fw_memory_g_heap_manager_ptr;
        while (1) {
          v26 = (__int64*)(*(_QWORD*)(ResFile_5e5f00(*(_QWORD*)(a1 + 592)) +
                                      184) +
                           16 * v24);
          v27 = (_BYTE*)*v26;
          if (*(_BYTE*)*v26 != 127 || v27[1] != 69 || v27[2] != 76 ||
              v27[3] != 70) {
            goto LABEL_20;
          }
          v28 = *(_QWORD*)(ResFile_5e5f00(*(_QWORD*)(a1 + 592)) + 192);
          if (v28 != 0) {
            v29 = (const char*)(*(_QWORD*)(v28 + 16 * v24 + 32) + 2LL);
          }
          else {
            v29 = nullptr;
          }
          v30 = *v26;
          v31 = fw_memory_HeapManager_Allocate_alt1(*v25, 96, 16, 0);
          *(_QWORD*)v31 = 0;
          *(_QWORD*)(v31 + 8) = 0;
          *(_QWORD*)(v31 + 16) = 0;
          *(_QWORD*)(v31 + 24) = 0;
          *(_QWORD*)(v31 + 32) = 0;
          *(_QWORD*)(v31 + 40) = 0;
          *(_QWORD*)(v31 + 48) = 0;
          *(_QWORD*)(v31 + 56) = 0;
          *(_QWORD*)(v31 + 64) = 0;
          *(_QWORD*)(v31 + 72) = 0;
          *(_QWORD*)(v31 + 80) = 0;
          *(_DWORD*)(v31 + 88) = 0;
          GameRoutine_630ca0_alt1(v31, v30);
          v32 = strlen_alt1(v29);
          if (v32 >= 0xFFFFFFFFFFFFFFF7LL) {
            String_60a1d0();
          }
          v33 = v32;
          if (v32 >= 0x17) {
            break;
          }
          v34 = (char*)&v61_.v61 + 1;
          LOBYTE(v61_.v61) = 2 * v32;
          if (v32 != 0) {
            goto LABEL_36;
          }
        LABEL_37:
          v36 = (__int64*)(a1 + 816);
          v34[v33] = 0;
          v37 = *v60;
          v38 = (__int64**)(a1 + 816);
          if (*v60 != nullptr) {
            v59 = v61_.v61 & 1;
            if (v59 != 0) {
              v39 = v61_.v63;
            }
            else {
              v39 = (char*)&v61_.v61 + 1;
            }
            if ((v61_.v61 & 1) != 0) {
              v40 = v61_.v62;
            }
            else {
              v40 = (unsigned __int64)(unsigned __int8)v61_.v61 >> 1;
            }
            while (1) {
              while (1) {
                v36 = v37;
                v41 = *((unsigned __int8*)v37 + 32);
                v42 = (v41 & 1) == 0;
                v43 = v41 >> 1;
                v44 = v42 ? v43 : v36[5];
                v45 = v42 ? (__int64)v36 + 33 : v36[6];
                v46 = v44 >= v40 ? v40 : v44;
                v47 = memcmp_alt1((__int64)v39, v45, v46);
                if (v47 != 0) {
                  break;
                }
                if (v40 >= v44) {
                  goto LABEL_58;
                }
              LABEL_44:
                v37 = (__int64*)*v36;
                v38 = (__int64**)v36;
                if (*v36 == 0) {
                  goto LABEL_64;
                }
              }
              if (v47 < 0) {
                goto LABEL_44;
              }
            LABEL_58:
              v48 = memcmp_alt1(v45, (__int64)v39, v46);
              if (v48 != 0) {
                if ((v48 & 0x80000000) == 0) {
                  goto LABEL_68;
                }
              }
              else if (v44 >= v40) {
              LABEL_68:
                v25 = &fw_memory_g_heap_manager;
                v36[7] = v31;
                if (v59 != 0) {
                  goto LABEL_69;
                }
                goto LABEL_20;
              }
              v37 = (__int64*)v36[1];
              if (v37 == nullptr) {
                v38 = (__int64**)(v36 + 1);
                break;
              }
            }
          }
        LABEL_64:
          v49 = v36;
          v25 = (__int64*)fw_memory_g_heap_manager_ptr;
          v50 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
          v51 = v61_.v61;
          v52 = v61_.v62;
          v61_.v61 = 0;
          v61_.v62 = 0;
          v53 = v50;
          v54 = v50;
          *v50 = 0;
          v50[1] = 0;
          v50[2] = (__int64)v49;
          v50[4] = v51;
          v50[5] = v52;
          v55 = (__int64)v61_.v63;
          v61_.v63 = nullptr;
          v50[6] = v55;
          v50[7] = 0;
          *v38 = v50;
          v56 = **(_QWORD**)(a1 + 808);
          if (v56 != 0) {
            *(_QWORD*)(a1 + 808) = v56;
            v54 = *v38;
          }
          fw_containers_BalanceAfterInsert_alt1(*(__int64**)(a1 + 816), v54);
          ++*(_QWORD*)(a1 + 824);
          v57 = v61_.v61 & 1;
          v53[7] = v31;
          if (v57 != 0) {
          LABEL_69:
            if (v61_.v63 != nullptr) {
              v58 = 128;
              if (*(_QWORD*)(*v25 + 200) == 0) {
                v58 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v25 + v58, (__int64)v61_.v63);
            }
          }
        LABEL_20:
          if (++v24 == v23) {
            return;
          }
        }
        if ((v32 | 7) == 0x17) {
          v35 = 26;
        }
        else {
          v35 = (v32 | 7) + 1;
        }
        v34 = (char*)fw_memory_HeapManager_Allocate_alt1(*v25, v35, 16, 0);
        v61_.v62 = v33;
        v61_.v63 = v34;
        v61_.v61 = v35 | 1;
      LABEL_36:
        memmove_alt1((__int64)v34, (__int64)v29, v33);
        goto LABEL_37;
      }
    }
  }
}

#pragma GCC visibility pop
