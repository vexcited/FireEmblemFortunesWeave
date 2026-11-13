#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memchr(__int64, int, unsigned __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_os_AcquireReadLock(__int64);
__int64 nn_os_AcquireWriteLock(__int64);
__int64 nn_os_GetSystemTick();
__int64 nn_os_ReleaseReadLock(__int64);
__int64 nn_os_ReleaseWriteLock(__int64);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 strncpy(__int64, const char*, unsigned __int64);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
unsigned __int64 strlen(const char*);
void GameRoutine_635810(__int64*, char*, char*);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 fs_635a60(__int64 a1, __int64* a2, char a3, char a4, __int64 a5,
                  __int64 a6);

__int64 fs_635a60(__int64 a1, __int64* a2, char a3, char a4, __int64 a5,
                  __int64 a6)
{
  unsigned __int64 v6;
  __int64 v7;
  __int64* v11;
  char* v12;
  __int64 v13;
  char v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  char* v18;
  unsigned __int64 v19;
  __int64 v20;
  char* v21;
  char* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  char* v34;
  char* v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
  _QWORD* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64* v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  char* v53;
  char* v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  char* v57;
  char* v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 SystemTickEv;
  __int64 v66;
  unsigned __int64 v67;
  char v68;
  __int64 v71;
  struct {
    unsigned __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    char* v88;
  } v72_;
  struct {
    __int64 v89;
    unsigned __int64 v90;
    char* v91;
  } v89_;
  char v92[16];

  {
    v6 = a2[1];
    __asm__ volatile("" ::"r"(v6));
  }
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_92;
  }
  {
    v7 = *a2;
    __asm__ volatile("" ::"r"(v7));
  }
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v6 | 7) + 1;
    }
    v12 = (const char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v13, 16, 0);
    v89_.v90 = v6;
    v89_.v91 = v12;
    v89_.v89 = v13 | 1;
  }
  else {
    LOBYTE(v89_.v89) = 2 * v6;
    v12 = (char*)&v89_.v89 + 1;
    if (v6 == 0) {
      goto LABEL_10;
    }
  }
  memmove((__int64)v12, v7, v6);
LABEL_10:
  v12[v6] = 0;
  v14 = v89_.v89;
  v15 = (__int64)v89_.v91;
  if ((v89_.v89 & 1) != 0) {
    v16 = v89_.v91;
  }
  else {
    v16 = (char*)&v89_.v89 + 1;
  }
  if ((v89_.v89 & 1) != 0) {
    v17 = v89_.v90;
  }
  else {
    v17 = (unsigned __int64)(unsigned __int8)v89_.v89 >> 1;
  }
  if (v17 < 1) {
    goto LABEL_24;
  }
  {
    v18 = (char*)&v16[v17];
    __asm__ volatile("" ::"r"(v18));
  }
  v19 = v17;
  v20 = (__int64)v16;
  while (1) {
    v21 = (char*)memchr(v20, 58, v19);
    if (v21 == nullptr) {
      goto LABEL_24;
    }
    if (*v21 == 58) {
      break;
    }
    v20 = (__int64)(v21 + 1);
    {
      v19 = (unsigned __int64)&v18[-v20];
      __asm__ volatile("" ::"r"(v19));
    }
    if ((__int64)&v18[-v20] < 1) {
      goto LABEL_24;
    }
  }
  if (v21 == v18 || v21 - v16 == -1) {
  LABEL_24:
    v68 = a4;
    if ((*(_BYTE*)(a1 + 4432) & 1) != 0) {
      v22 = *(const char**)(a1 + 4448);
      __asm__ volatile("" ::"r"(v22));
    }
    else {
      v22 = (const char*)(a1 + 4433);
    }
    v23 = strlen(v22);
    v24 = v23 + v17;
    if (v23 + v17 < 0xFFFFFFFFFFFFFFF7LL) {
      v25 = v23;
      if (v24 > 0x16) {
        if ((v24 | 7) == 0x17) {
          v28 = 26;
        }
        else {
          v28 = (v24 | 7) + 1;
        }
        v27 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v28, 16,
                                             0);
        v72_.v72 = v24;
        v72_.v73 = v27;
        v71 = v28 | 1;
        v26 = v28 | 1;
      }
      else {
        v26 = 2 * v24;
        v27 = 0;
        v72_.v72 = 0;
        v72_.v73 = 0;
        v71 = (unsigned __int8)(2 * v24);
      }
      if ((v26 & 1) != 0) {
        v29 = (char*)v27;
      }
      else {
        v29 = (char*)&v71 + 1;
      }
      if (v25 != 0) {
        memcpy((__int64)v29, (__int64)v22, v25);
      }
      {
        v30 = (__int64)&v29[v25];
        __asm__ volatile("" ::"r"(v30));
      }
      if (v17 != 0) {
        memmove(v30, (__int64)v16, v17);
      }
      *(_BYTE*)(v30 + v17) = 0;
      v11 = &fw_memory_g_heap_manager;
      a4 = v68;
      if ((v14 & 1) != 0 && v15 != 0) {
        v31 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v31, v15);
      }
      v89_.v89 = v71;
      v89_.v90 = v72_.v72;
      v89_.v91 = (const char*)v72_.v73;
      goto LABEL_47;
    }
  LABEL_92:
    String_60a1d0();
  }
LABEL_47:
  v33 = (const char*)*a2;
  {
    v32 = a2[1];
    __asm__ volatile("" ::"r"(v32));
  }
  v71 = 0;
  v72_.v72 = 0;
  v72_.v73 = 0;
  v72_.v74 = 0;
  v72_.v75 = 0;
  v72_.v76 = 0;
  v72_.v77 = 0;
  v72_.v78 = 0;
  v72_.v79 = 0;
  v72_.v80 = 0;
  v72_.v81 = 0;
  v72_.v82 = 0;
  v72_.v83 = 0;
  v72_.v84 = 0;
  v72_.v85 = 0;
  v72_.v86 = 0;
  v72_.v87 = 0;
  if (v32 != 0) {
    if (v33[v32] != 0) {
      if (v32 - 128 > 0xFFFFFFFFFFFFFF7ELL) {
        v34 = (char*)&v72_.v72;
      }
      else {
        v34 = (char*)fw_memory_HeapManager_Allocate(*v11, v32 + 1, 16, 0);
        memset((__int64)v34, 0, v32 + 1);
        v71 = (__int64)v34;
      }
      strncpy((__int64)v34, v33, v32);
      v34[v32] = 0;
    }
    else {
      v34 = (char*)v33;
    }
  }
  else {
    v34 = &GameData_1a9f09e;
  }
  v72_.v88 = v34;
  if ((v89_.v89 & 1) != 0) {
    v35 = v89_.v91;
  }
  else {
    v35 = (char*)&v89_.v89 + 1;
  }
  v36 = strlen(v35);
  v37 = std___1___hash_memory((__int64)v35, v36);
  {
    v38 = *(_QWORD**)(a1 + 4328);
    __asm__ volatile("" ::"r"(v38));
  }
  {
    v39 = *(_QWORD**)(a1 + 4336);
    __asm__ volatile("" ::"r"(v39));
  }
  v40 = v37;
  if (v39 != v38) {
    v41 = v39 - v38;
    do {
      v42 = v41 >> 1;
      {
        v43 = &v38[v41 >> 1];
        __asm__ volatile("" ::"r"(v43));
      }
      {
        v45 = *v43;
        __asm__ volatile("" ::"r"(v45));
      }
      v44 = v43 + 1;
      v41 += ~(v41 >> 1);
      if (*(_QWORD*)(v45 + 528) < v37) {
        v38 = v44;
      }
      else {
        v41 = v42;
      }
    } while (v41 != 0);
    if (v38 != v39) {
      {
        v46 = *v38;
        __asm__ volatile("" ::"r"(v46));
      }
      if (*(_QWORD*)(*v38 + 528LL) == v37) {
        nn_os_AcquireReadLock(v46 + 696);
        {
          v47 = *(_DWORD*)(v46 + 656);
          __asm__ volatile("" ::"r"(v47));
        }
        nn_os_ReleaseReadLock(v46 + 696);
        if ((v47 & 0x10) == 0) {
          {
            v48 = *v38;
            __asm__ volatile("" ::"r"(v48));
          }
          if ((a4 & 1) == 0) {
            atomic_fetch_add((atomic_uint* volatile)(v48 + 760), 1u);
            SystemTickEv = nn_os_GetSystemTick();
            {
              v66 = *(_QWORD*)(v48 + 8);
              __asm__ volatile("" ::"r"(v66));
            }
            *(_QWORD*)(v48 + 744) = SystemTickEv;
            v67 = atomic_load((unsigned __int64*)(v66 + 4704));
            *(_QWORD*)(v48 + 752) = v67;
            nn_os_AcquireWriteLock(v48 + 696);
            *(_DWORD*)(v48 + 656) &= ~0x10u;
            nn_os_ReleaseWriteLock(v48 + 696);
            nn_os_AcquireWriteLock(v48 + 696);
            *(_DWORD*)(v48 + 656) &= ~0x200u;
            nn_os_ReleaseWriteLock(v48 + 696);
          }
          goto LABEL_82;
        }
        v34 = v72_.v88;
      }
    }
  }
  *(_QWORD*)v92 = v34;
  {
    v49 = *(_QWORD*)(a6 + 32);
    __asm__ volatile("" ::"r"(v49));
  }
  if (v49 == 0) {
    GameRoutine_60a310();
  }
  *(_QWORD*)v92 =
      (*(__int64 (**)(__int64, char*))(*(_QWORD*)v49 + 48LL))(v49, v92);
  {
    v48 = *(_QWORD*)v92;
    __asm__ volatile("" ::"r"(v48));
  }
  atomic_fetch_add((atomic_uint* volatile)(*(_QWORD*)v92 + 760LL), 1u);
  v50 = nn_os_GetSystemTick();
  {
    v51 = *(_QWORD*)(v48 + 8);
    __asm__ volatile("" ::"r"(v51));
  }
  *(_QWORD*)(v48 + 744) = v50;
  v52 = atomic_load((unsigned __int64*)(v51 + 4704));
  *(_QWORD*)(v48 + 752) = v52;
  {
    v53 = *(char**)(a1 + 4328);
    __asm__ volatile("" ::"r"(v53));
  }
  {
    v54 = *(char**)(a1 + 4336);
    __asm__ volatile("" ::"r"(v54));
  }
  if (v54 != v53) {
    v55 = (v54 - v53) >> 3;
    {
      v54 = *(char**)(a1 + 4328);
      __asm__ volatile("" ::"r"(v54));
    }
    do {
      v56 = v55 >> 1;
      {
        v57 = &v54[8 * (v55 >> 1)];
        __asm__ volatile("" ::"r"(v57));
      }
      {
        v59 = *(_QWORD*)v57;
        __asm__ volatile("" ::"r"(v59));
      }
      v58 = v57 + 8;
      v55 += ~(v55 >> 1);
      if (v40 < *(_QWORD*)(v59 + 528)) {
        v55 = v56;
      }
      else {
        v54 = v58;
      }
    } while (v55 != 0);
  }
  GameRoutine_635810((__int64*)(a1 + 4328), v54, v92);
  if ((a3 & 1) != 0) {
    nn_os_AcquireWriteLock(v48 + 696);
    *(_DWORD*)(v48 + 656) |= 0x100u;
    nn_os_ReleaseWriteLock(v48 + 696);
  }
  if ((a4 & 1) != 0) {
    nn_os_AcquireWriteLock(v48 + 696);
    *(_DWORD*)(v48 + 656) |= 0x200u;
    nn_os_ReleaseWriteLock(v48 + 696);
    v60 = atomic_load((unsigned __int64*)(*(_QWORD*)(v48 + 8) + 4704LL));
    *(_QWORD*)(v48 + 752) = v60;
    atomic_fetch_add((atomic_uint* volatile)(v48 + 760), 0xFFFFFFFF);
  }
LABEL_82:
  v61 = v71;
  v71 = 0;
  if (v61 != 0) {
    v62 = 128;
    if (*(_QWORD*)(*v11 + 200) == 0) {
      v62 = 56;
    }
    nn_mem_StandardAllocator_Free(*v11 + v62, v61);
  }
  if ((v89_.v89 & 1) != 0 && v89_.v91 != nullptr) {
    v63 = 128;
    if (*(_QWORD*)(*v11 + 200) == 0) {
      v63 = 56;
    }
    nn_mem_StandardAllocator_Free(*v11 + v63, (__int64)v89_.v91);
  }
  return v48;
}

#pragma GCC visibility pop
