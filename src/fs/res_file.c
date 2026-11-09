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
__int64 ResFile_Unknown2(__int64 result);

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

__int64 ResFile_Unknown2(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
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
  __int64* v24;
  _QWORD* v25;
  _BYTE* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  _QWORD* v36;
  char* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  bool v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  int v45;
  _QWORD* v46;
  _QWORD* v47;
  __int64 v48;
  unsigned __int64 v49;
  _QWORD* v50;
  _QWORD* v51;
  char* v52;
  __int64 v53;
  int v54;
  __int64 v55;
  int v56;
  __int64* v57;
  __int64 v58;
  unsigned __int64 v59;
  char* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;

  if (*(_QWORD*)(result + 592) != 0) {
    v1 = result;
    nn_os_AcquireReadLock(result + 696);
    v2 = *(_DWORD*)(v1 + 656);
    result = nn_os_ReleaseReadLock(v1 + 696);
    if ((v2 & 0x10) == 0) {
      nn_os_AcquireReadLock(v1 + 696);
      v3 = *(_DWORD*)(v1 + 656);
      nn_os_ReleaseReadLock(v1 + 696);
      if ((v3 & 0x20) == 0) {
        v4 = GameRoutine_5e5f00(*(_QWORD*)(v1 + 592));
        GameRoutine_5e5fe0(v4, game_g_frame_clock + 568);
        v5 = GameRoutine_5e5f00(*(_QWORD*)(v1 + 592));
        GameRoutine_a61680(v5);
        nn_os_AcquireWriteLock(v1 + 696);
        *(_DWORD*)(v1 + 656) |= 0x20u;
        nn_os_ReleaseWriteLock(v1 + 696);
      }
      v6 = *(_QWORD*)(v1 + 592);
      v64 = 0;
      v65 = 0;
      v62 = 0;
      v63 = 0;
      v60 = nullptr;
      v61 = 0;
      v58 = 0;
      v59 = 0;
      v7 = GameRoutine_5e5f00(v6);
      nn_util_SNPrintf(&v58, 64, "%s.bntx",
                       (const char*)(*(_QWORD*)(v7 + 32) + 2LL));
      v8 = GameRoutine_5e5f00(*(_QWORD*)(v1 + 592));
      v9 = *(_QWORD*)(v8 + 192);
      if (v9 != 0) {
        v10 = v8;
        v11 = strlen(&v58);
        v12 = v9 + 8;
        v13 = *(unsigned __int16*)(v9 + 12);
        v14 = v9 + 8 + 16 * v13;
        v15 = *(_DWORD*)v14;
        if (*(_DWORD*)(v9 + 8) < *(_DWORD*)v14) {
          do {
            v18 = (__int64)v15 >> 3;
            if (v11 > v18) {
              v16 = (*((unsigned __int8*)&v58 + v11 + ~v18) >> (v15 & 7)) & 1;
            }
            else {
              v16 = 0;
            }
            v13 = *(unsigned __int16*)(v9 + 12 + 16 * v13 + 2 * v16);
            v17 = v15 < *(_DWORD*)(v12 + 16 * v13);
            v15 = *(_DWORD*)(v12 + 16 * v13);
          } while (v17);
          v14 = v12 + 16 * v13;
        }
        v19 = *(unsigned __int16**)(v14 + 8);
        if (v11 == *v19 && (unsigned int)memcmp(v19 + 1, &v58, v11) == 0) {
          v20 = v14 - v9 - 24;
          if ((~v20 & 0xFFFFFFFF0LL) != 0) {
            v21 = *(_QWORD*)(v10 + 184);
            if (v21 != 0) {
              *(_QWORD*)(v1 + 800) =
                  GameRoutine_5fc1f0(*(_QWORD*)(v21 + 16LL * (int)(v20 >> 4)));
            }
          }
        }
      }
      result = GameRoutine_5e5f00(*(_QWORD*)(v1 + 592));
      v22 = *(unsigned __int16*)(result + 236);
      if (*(_WORD*)(result + 236) != 0) {
        v23 = 0;
        v57 = (__int64*)(v1 + 816);
        v24 = (__int64*)fw_memory_g_heap_manager_ptr;
        while (1) {
          result = GameRoutine_5e5f00(*(_QWORD*)(v1 + 592));
          v25 = (_QWORD*)(*(_QWORD*)(result + 184) + 16 * v23);
          v26 = (_BYTE*)*v25;
          if (*(_BYTE*)*v25 != 127 || v26[1] != 69 || v26[2] != 76 ||
              v26[3] != 70) {
            goto LABEL_20;
          }
          v27 = *(_QWORD*)(GameRoutine_5e5f00(*(_QWORD*)(v1 + 592)) + 192);
          if (v27 != 0) {
            v28 = *(_QWORD*)(v27 + 16 * v23 + 32) + 2LL;
          }
          else {
            v28 = 0;
          }
          v29 = fw_memory_HeapManager_Allocate(*v24, 96, 16, 0);
          *(_QWORD*)v29 = 0;
          *(_QWORD*)(v29 + 8) = 0;
          *(_QWORD*)(v29 + 16) = 0;
          *(_QWORD*)(v29 + 24) = 0;
          *(_QWORD*)(v29 + 32) = 0;
          *(_QWORD*)(v29 + 40) = 0;
          *(_QWORD*)(v29 + 48) = 0;
          *(_QWORD*)(v29 + 56) = 0;
          *(_QWORD*)(v29 + 64) = 0;
          *(_QWORD*)(v29 + 72) = 0;
          *(_QWORD*)(v29 + 80) = 0;
          *(_DWORD*)(v29 + 88) = 0;
          GameRoutine_630ca0();
          v30 = strlen(v28);
          if (v30 >= 0xFFFFFFFFFFFFFFF7LL) {
            GameRoutine_60a1d0();
          }
          v31 = v30;
          if (v30 >= 0x17) {
            break;
          }
          v32 = (char*)&v58 + 1;
          LOBYTE(v58) = 2 * v30;
          if (v30 != 0) {
            goto LABEL_36;
          }
        LABEL_37:
          v34 = (_QWORD*)(v1 + 816);
          v32[v31] = 0;
          v35 = *v57;
          v36 = (_QWORD*)(v1 + 816);
          if (*v57 != 0) {
            v56 = v58 & 1;
            if (v56 != 0) {
              v37 = v60;
            }
            else {
              v37 = (char*)&v58 + 1;
            }
            if ((v58 & 1) != 0) {
              v38 = v59;
            }
            else {
              v38 = (unsigned __int64)(unsigned __int8)v58 >> 1;
            }
            while (1) {
              while (1) {
                v34 = (_QWORD*)v35;
                v39 = *(unsigned __int8*)(v35 + 32);
                v40 = (v39 & 1) == 0;
                v41 = v39 >> 1;
                v42 = v40 ? v41 : v34[5];
                v43 = v40 ? (__int64)v34 + 33 : v34[6];
                v44 = v42 >= v38 ? v38 : v42;
                v45 = memcmp(v37, v43, v44);
                if (v45 != 0) {
                  break;
                }
                if (v38 >= v42) {
                  goto LABEL_58;
                }
              LABEL_44:
                v35 = *v34;
                v36 = v34;
                if (*v34 == 0) {
                  goto LABEL_64;
                }
              }
              if (v45 < 0) {
                goto LABEL_44;
              }
            LABEL_58:
              result = memcmp(v43, v37, v44);
              if ((_DWORD)result != 0) {
                if ((result & 0x80000000) == 0) {
                  goto LABEL_68;
                }
              }
              else if (v42 >= v38) {
              LABEL_68:
                v24 = &fw_memory_g_heap_manager;
                v34[7] = v29;
                if (v56 != 0) {
                  goto LABEL_69;
                }
                goto LABEL_20;
              }
              v35 = v34[1];
              if (v35 == 0) {
                v36 = v34 + 1;
                break;
              }
            }
          }
        LABEL_64:
          v46 = v34;
          v24 = (__int64*)fw_memory_g_heap_manager_ptr;
          v47 = (_QWORD*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
          v48 = v58;
          v49 = v59;
          v58 = 0;
          v59 = 0;
          v50 = v47;
          v51 = v47;
          *v47 = 0;
          v47[1] = 0;
          v47[2] = v46;
          v47[4] = v48;
          v47[5] = v49;
          v52 = v60;
          v60 = nullptr;
          v47[6] = v52;
          v47[7] = 0;
          *v36 = v47;
          v53 = **(_QWORD**)(v1 + 808);
          if (v53 != 0) {
            *(_QWORD*)(v1 + 808) = v53;
            v51 = (_QWORD*)*v36;
          }
          result = fw_containers_BalanceAfterInsert(*(_QWORD*)(v1 + 816), v51);
          ++*(_QWORD*)(v1 + 824);
          v54 = v58 & 1;
          v50[7] = v29;
          if (v54 != 0) {
          LABEL_69:
            if (v60 != nullptr) {
              v55 = 128;
              if (*(_QWORD*)(*v24 + 200) == 0) {
                v55 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*v24 + v55, v60);
            }
          }
        LABEL_20:
          if (++v23 == v22) {
            return result;
          }
        }
        if ((v30 | 7) == 0x17) {
          v33 = 26;
        }
        else {
          v33 = (v30 | 7) + 1;
        }
        v32 = (char*)fw_memory_HeapManager_Allocate(*v24, v33, 16, 0);
        v59 = v31;
        v60 = v32;
        v58 = v33 | 1;
      LABEL_36:
        memmove(v32, v28, v31);
        goto LABEL_37;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
