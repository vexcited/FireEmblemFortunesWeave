#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Manager_629620(PSEUDO_X8, __int64 result,
                                               const char*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
extern _UNKNOWN as_g_context_slots;
extern __int64 as_g_script_manager;
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager;
extern int GameData_21a60ac;
int sprintf(__int64, const char*, ...);
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a1d0();
__int64 as_627e70(__int64 a1, __int64 a2, char a3, __int64 a4, char a5);
__attribute__((swiftcall)) void as_629480(PSEUDO_X8 x8_, __int64 result);

__int64 as_627e70(__int64 a1, __int64 a2, char a3, __int64 a4, char a5)
{
  int v6;
  unsigned int v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  __int16 v14;
  __int64 result;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  const char* v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  _DWORD v40[5];
  char v41[256];
  _QWORD v42[32];
  struct {
    __int64 v43;
    unsigned int v44;
  } v43_;
  const char* v45;

  if ((a3 & 1) == 0) {
    if (*(_DWORD*)(a2 + 52) == 1) {
      if (*(_DWORD*)(a2 + 2104) != 0) {
        return 0;
      }
      v13 = *(_DWORD*)(a2 + 2116);
      if ((*(_DWORD*)(a2 + 2112) & v13) != 0) {
        return 0;
      }
      if ((*(_DWORD*)(a2 + 2108) & v13) != 0) {
        return 0;
      }
      v14 = *(_WORD*)(a2 + 2144);
      if ((v14 & 3) != 0) {
        return 0;
      }
    }
    else {
      v14 = *(_WORD*)(a2 + 2144);
    }
    if ((v14 & 4) != 0) {
      return 0;
    }
    if ((v14 & 8) != 0) {
      if ((v14 & 0x10) == 0) {
        return 0;
      }
      *(_WORD*)(a2 + 2144) = v14 & 0xFFEB;
    }
  }
  if ((*(_BYTE*)(a1 + 4788) & 1) != 0) {
    return 0;
  }
  if ((a5 & 1) != 0) {
    v6 = *(_DWORD*)(a2 + 2140);
    if (v6 != 0 && (GameData_21a60ac & v6) != *(_DWORD*)(a2 + 2136)) {
      return 0;
    }
    *(_QWORD*)(a2 + 2136) = 0;
  }
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  if (a2 != 0) {
    v9 = (unsigned __int64)v8 << 7;
    v10 = 4LL * v8;
    v11 = as_g_script_manager + v9;
    v12 = *(int*)(as_g_script_manager + v10 + 4640) + 1LL;
    *(_DWORD*)(as_g_script_manager + v10 + 4640) = v12;
    *(_QWORD*)(v11 + 8 * v12 + 288) = *(_QWORD*)(a2 + 24);
    *(_QWORD*)(as_g_script_manager + 8LL * v8 + 4384) =
        *(_QWORD*)(as_g_script_manager + v9 +
                   8LL * *(int*)(as_g_script_manager + v10 + 4640) + 288);
  }
  else {
    v16 = as_g_script_manager + ((unsigned __int64)v8 << 7);
    v17 = as_g_script_manager + 4LL * v8;
    v18 = *(int*)(v17 + 4640) + 1LL;
    *(_DWORD*)(v17 + 4640) = v18;
    *(_QWORD*)(v16 + 8 * v18 + 288) = 0;
    *(_QWORD*)(as_g_script_manager + 8LL * v8 + 4384) = 0;
  }
  *(_QWORD*)(a2 + 2120) = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    32LL))(as_g_thread_info);
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a2 + 24) + 448LL))(
      *(_QWORD*)(a2 + 24), 1);
  v19 = *(_QWORD*)(a2 + 24);
  *(_WORD*)(a2 + 2144) |= 0x20u;
  v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 40LL))(v19);
  if (v20 != 0) {
    if (v20 != 2) {
      if (v20 != 3) {
        v30 = 0;
        goto LABEL_41;
      }
      v21 = *(_QWORD*)(a2 + 24);
      v40[1] = 1;
      v39 = (*(__int64 (**)(__int64, _DWORD*, const char**))(
          *(_QWORD*)v21 + 264LL))(v21, v40, &v45);
      sprintf((__int64)v41, "script/%s", v45);
      v22 = (const char*)(*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 24) +
                                                  280LL))(*(_QWORD*)(a2 + 24));
      sprintf((__int64)v42, "Exception...%s", v22);
      *(_QWORD*)&v40[3] = v42;
      v23 = as_g_script_manager;
      v24 = *(_QWORD*)(v23 +
                       8LL * (*(unsigned int (**)(__int64))(
                                 *(_QWORD*)as_g_thread_info + 72LL))(
                                 as_g_thread_info) +
                       4384);
      if (v24 != 0 &&
          (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 472LL))(v24) != 0) {
        Manager_629620((void*)((__int64)&v43_.v43), as_g_script_manager, v41);
        if (v43_.v44 != 0x2000) {
          v25 = (_QWORD*)((char*)&as_g_context_slots + 16 * v43_.v44);
          v26 = v25[1];
          if (v26 != 0 && *v25 == v43_.v43 && (*(_BYTE*)(v26 + 326) & 1) == 0 &&
              v39 < 0x4000) {
            (*(void (**)(_QWORD))(**(_QWORD**)(v26 + 24) + 48LL))(
                *(_QWORD*)(v26 + 24));
          }
        }
      }
    }
  }
  else {
    v27 = *(_QWORD*)(a4 + 32);
    if (v27 != 0) {
      v42[0] = a2;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v27 + 48LL))(v27, v42);
    }
  }
  v28 = *(_QWORD**)(a2 + 2240);
  *(_QWORD*)(a2 + 2240) = 0;
  *(_DWORD*)(a2 + 52) = 2;
  if (v28 == (_QWORD*)(a2 + 2208)) {
    v29 = 32;
    goto LABEL_38;
  }
  if (v28 != nullptr) {
    v29 = 40;
  LABEL_38:
    (*(void (**)(__int64))(*v28 + v29))((__int64)v28);
  }
  v30 = -1;
LABEL_41:
  v31 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 32LL))(
            as_g_thread_info) -
        *(_QWORD*)(a2 + 2120);
  v32 = as_g_thread_info;
  *(_QWORD*)(a2 + 2128) = v31;
  v33 = (*(__int64 (**)(__int64))(*(_QWORD*)v32 + 72LL))(v32);
  v34 = (unsigned __int64)v33 << 7;
  v35 = 4LL * v33;
  v36 = as_g_script_manager + v34;
  v37 = *(int*)(as_g_script_manager + v35 + 4640);
  *(_DWORD*)(as_g_script_manager + v35 + 4640) = v37 - 1;
  *(_QWORD*)(v36 + 8 * v37 + 288) = 0;
  v38 = as_g_script_manager + 8LL * v33;
  result = v30;
  *(_QWORD*)(v38 + 4384) =
      *(_QWORD*)(as_g_script_manager + v34 +
                 8LL * *(int*)(as_g_script_manager + v35 + 4640) + 288);
  return result;
}

__attribute__((swiftcall)) void as_629480(PSEUDO_X8 x8_, __int64 result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int8* v3;
  unsigned __int8* v4;
  unsigned __int8* v5;
  int v6;
  _BYTE* v7;
  char v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD v13[16];

  if (result == 0) {
    *(_WORD*)a2 = 0;
    {
      result;
      return;
    }
  }
  v3 = (unsigned __int8*)result;
  result = strlen((const char*)result);
  v4 = &v3[result - 1];
  if (result >= 2) {
    v5 = v3;
    while (*v5 != 46) {
      if (++v5 >= v4) {
        goto LABEL_11;
      }
    }
    --v5;
  LABEL_11:
    if (v5 == v4) {
      v5 = v3;
    }
    while (1) {
      v6 = *v4;
      if (v6 == 92 || v6 == 47) {
        break;
      }
      if (--v4 <= v3) {
        if (v4 >= v5) {
          goto LABEL_24;
        }
        goto LABEL_17;
      }
    }
    if (++v4 < v5) {
      goto LABEL_17;
    }
    goto LABEL_24;
  }
  v5 = v3;
  if (v4 >= v3) {
  LABEL_24:
    strcpy((char*)a2, "\ndummy");
    {
      result;
      return;
    }
  }
LABEL_17:
  v7 = v13;
  memset(v13, 0, sizeof(v13));
  do {
    v8 = *v4++;
    *v7++ = v8;
  } while (v4 <= v5);
  *v7 = 0;
  result = strlen((const char*)v13);
  if ((unsigned __int64)result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v9 = result;
  if ((unsigned __int64)result >= 0x17) {
    if ((result | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (result | 7) + 1;
    }
    v12 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11, 16, 0);
    *(_QWORD*)(a2 + 8) = v9;
    *(_QWORD*)(a2 + 16) = v12;
    *(_QWORD*)a2 = v11 | 1;
    v10 = v12;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v10 = a2 + 1;
    if (result == 0) {
      goto LABEL_30;
    }
  }
  result = memcpy(v10, (__int64)v13, v9);
LABEL_30:
  *(_BYTE*)(v10 + v9) = 0;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
