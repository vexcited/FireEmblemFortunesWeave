#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Manager_a4fd20(PSEUDO_X8, __int64, __int64,
                                               __int64, char);
__attribute__((swiftcall)) void fs_63be60(PSEUDO_X8, __int64, unsigned __int8*);
__int64 GameHr_63c1a0(unsigned __int8*, __int64, __int64, __int64,
                      unsigned __int64, __int64 (*)(_QWORD));
__int64 GameRoutine_1a0a240(__int64, __int64);
__int64 GameRoutine_639dc0(__int64, unsigned __int64, __int64, __int64,
                           unsigned __int64, __int64);
__int64 GameRoutine_63b800(__int64, __int64, unsigned __int8*, int,
                           unsigned __int8*, char, __int64, unsigned __int64);
__int64 GameRoutine_63c3f0();
__int64 fs_63e140(__int64, __int64, __int64, unsigned __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1_locale_locale_1a0a220(__int64);
__int64 std___1_locale_locale_1a0a230(__int64, __int64);
__int64 std___1_locale_use_facet(__int64, __int64);
extern __int64 GameData_212c3d8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a1f0(const char*);
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a250(const char*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void std___1_locale_Destroy_locale(__int64);
void __attribute__((noreturn)) fs_60a230();
void __attribute__((noreturn)) fs_638220();
_QWORD* fs_63dd60(__int64 a1, unsigned __int64 a2, __int64 a3,
                  unsigned __int64 a4, unsigned __int64 a5, char a6,
                  unsigned __int8* a7, __int64 a8, unsigned __int8* a9,
                  unsigned int a10);
__int64* fs_644300(__int64* result, __int64* a2, __int64* a3);
__int64* fs_644480(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                   __int64* a5);
bool fs_644700(__int64* a1, __int64* a2);
__attribute__((swiftcall)) void fs_a501f0(PSEUDO_X8 x8_, __int64 a1,
                                          __int64 a2);
void __attribute__((noreturn)) fs_60a230() { String_60a250("basic_string"); }

void __attribute__((noreturn)) fs_638220()
{
  GameRoutine_60a1f0("__direct_iterator_buffer");
}

_QWORD* fs_63dd60(__int64 a1, unsigned __int64 a2, __int64 a3,
                  unsigned __int64 a4, unsigned __int64 a5, char a6,
                  unsigned __int8* a7, __int64 a8, unsigned __int8* a9,
                  unsigned int a10)
{
  char v12;
  __int64 v13;
  char v15;
  int v16;
  unsigned __int8* v17;
  unsigned __int8 v18;
  unsigned __int8* v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* result;
  int v25;
  unsigned __int64 v26;
  unsigned __int8* v27;
  unsigned __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  int v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  _QWORD* v39;
  unsigned __int8* v40;
  unsigned __int8* v41;
  unsigned __int64 v42;
  bool v43;
  unsigned __int8* v44;
  bool v45;
  int v46;
  unsigned __int8 v47;
  unsigned __int8 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  struct {
    __int64 v56[2];
    __int64 v57;
  } v56_;
  struct {
    _QWORD v58[2];
    unsigned __int8* v59;
  } v58_;

  v12 = a4;
  v13 = (__int64)a7;
  if ((a6 & 1) != 0) {
    v15 = 45;
  LABEL_7:
    *a7 = v15;
    v17 = a7 + 1;
    goto LABEL_8;
  }
  v16 = ((unsigned __int8)a4 >> 3) & 3;
  if (v16 == 2) {
    v15 = 43;
    goto LABEL_7;
  }
  v17 = a7;
  if (v16 == 3) {
    v15 = 32;
    goto LABEL_7;
  }
LABEL_8:
  if ((a4 & 0x20) != 0 && a9 != nullptr) {
    v19 = a9 + 1;
    v18 = *a9;
    if (*a9 != 0) {
      do {
        *v17++ = v18;
        v20 = *v19++;
        v18 = v20;
      } while (v20 != 0);
    }
  }
  v21 = fs_63e140((__int64)v17, a8, a1, a2, a10);
  if ((v12 & 0x40) != 0) {
    if ((*(_BYTE*)(a3 + 40) & 1) == 0) {
      std___1_locale_locale_1a0a220((__int64)v58_.v58);
      v22 = a3 + 32;
      if (*(_BYTE*)(a3 + 40) == 1) {
        GameRoutine_1a0a240(v22, (__int64)v58_.v58);
      }
      else {
        std___1_locale_locale_1a0a230(v22, (__int64)v58_.v58);
        *(_BYTE*)(a3 + 40) = 1;
      }
      std___1_locale_Destroy_locale((__int64)v58_.v58);
    }
    std___1_locale_locale_1a0a230((__int64)v58_.v58, a3 + 32);
    v23 = std___1_locale_use_facet((__int64)v58_.v58, GameData_212c3d8);
    std___1_locale_Destroy_locale((__int64)v58_.v58);
    result = X8CALL_X0(
        _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
                     *(_QWORD*)v23 + 40LL))((void*)v58_.v58, v23));
    v25 = v58_.v58[0] & 1;
    v26 = (unsigned __int64)LOBYTE(v58_.v58[0]) >> 1;
    if (v25 != 0) {
      v26 = v58_.v58[1];
    }
    if (v26 == 0) {
      goto LABEL_31;
    }
    v27 = v58_.v59;
    result = (_QWORD*)(v21 - (_QWORD)v17);
    if (v25 == 0) {
      v27 = (unsigned __int8*)v58_.v58 + 1;
    }
    if ((__int64)result > *v27) {
      v28 = a5;
      v29 = *(_QWORD*)a3;
      fs_63be60((void*)(v56_.v56), (__int64)result, (unsigned __int8*)v58_.v58);
      v30 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 32LL))(v23);
      v31 = v29;
      a5 = v28;
      result = (_QWORD*)GameRoutine_63b800(
          v31, v13, v17, v21, (unsigned __int8*)v56_.v56, v30, a4, v28);
      if ((v56_.v56[0] & 1) != 0 && v56_.v57 != 0) {
        v32 = result;
        v33 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v56_.v57);
        result = v32;
      }
      v34 = 0;
      if ((v58_.v58[0] & 1) == 0) {
      LABEL_36:
        if (v34 == 0) {
          return result;
        }
        goto LABEL_37;
      }
    }
    else {
    LABEL_31:
      v34 = 1;
      if (v25 == 0) {
        goto LABEL_36;
      }
    }
    if (v58_.v59 != nullptr) {
      v35 = result;
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, (__int64)v58_.v59);
      result = v35;
    }
    goto LABEL_36;
  }
LABEL_37:
  v37 = *(_QWORD*)a3;
  v55 = v21;
  v38 = HIDWORD(a4);
  if ((v12 & 7) == 4) {
    v39 = *(_QWORD**)(v37 + 32);
    v40 = &v17[-v13];
    v54 = a5;
    v41 = &v17[-v13];
    if (v39 == nullptr ||
        ((v42 = v39[1], *v39 - v42 >= (unsigned __int64)v40)
             ? (v41 = &v17[-v13])
             : (v41 = (unsigned __int8*)(*v39 - v42)),
         (v43 = *v39 > v42, v44 = &v40[v42], v43) ? (v45 = v41 == nullptr)
                                                  : (v45 = true),
         v39[1] = v44, !v45)) {
      v51 = *(_QWORD*)(v37 + 16);
      do {
        v52 = *(_QWORD*)(v37 + 8) - v51;
        if (v52 < (unsigned __int64)(v41 + 1)) {
          (*(void (**)(__int64, unsigned __int8*))(v37 + 24))(v37, v41 + 2);
          v51 = *(_QWORD*)(v37 + 16);
          v52 = *(_QWORD*)(v37 + 8) - v51;
        }
        if (v52 >= (unsigned __int64)v41) {
          v53 = (unsigned __int64)v41;
        }
        else {
          v53 = v52;
        }
        if (v53 != 0) {
          memmove(*(_QWORD*)v37 + v51, v13, v53);
          v51 = *(_QWORD*)(v37 + 16);
        }
        v51 += v53;
        v13 += v53;
        *(_QWORD*)(v37 + 16) = v51;
        v43 = (unsigned __int64)v41 > v52;
        v41 -= v53;
      } while (v43);
    }
    v37 = *(_QWORD*)a3;
    a5 = v54;
    if (SHIDWORD(a4) >= (int)v40) {
      v46 = (int)v40;
    }
    else {
      v46 = HIDWORD(a4);
    }
    v47 = a4 & 0xF8 | 3;
    v38 = (unsigned int)(HIDWORD(a4) - v46);
    v48 = 48;
  }
  else {
    v48 = BYTE4(a5);
    v47 = a4;
    v17 = (unsigned __int8*)v13;
  }
  v49 = v38 << 32;
  v50 = a5 & 0xFFFFFF00FFFFFFFFLL | ((unsigned __int64)v48 << 32);
  if ((a4 & 0xFF00) == 0x700) {
    return (_QWORD*)GameHr_63c1a0(v17, v55, v37,
                                  (unsigned int)a4 & 0xFFFF0700 | v49 | v47,
                                  v50, (__int64 (*)(_QWORD))GameRoutine_63c3f0);
  }
  else {
    return (_QWORD*)GameRoutine_639dc0(
        (__int64)v17, v55 - (_QWORD)v17, v37,
        v49 | (unsigned int)a4 & 0xFFFFFF00 | v47, v50, v55 - (_QWORD)v17);
  }
}

__int64* fs_644300(__int64* result, __int64* a2, __int64* a3)
{
  __int64 v3;
  _QWORD* v4;
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
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v3 = *a2;
  v4 = (_QWORD*)*result;
  v5 = *(_QWORD*)(*a2 + 576);
  v6 = *(_QWORD*)(*result + 576);
  if (v5 == v6) {
    v7 = *(_QWORD*)(v3 + 752);
    v8 = v4[94];
    if (v7 == v8) {
      if ((signed __int64)*(_QWORD*)(v3 + 744) >= (signed __int64)v4[93]) {
        goto LABEL_11;
      }
    LABEL_6:
      v9 = *a3;
      v10 = *(_QWORD*)(*a3 + 576);
      if (v10 == v5) {
        v11 = *(_QWORD*)(v9 + 752);
        v12 = *(_QWORD*)(v3 + 752);
        if (v11 == v12) {
          if ((signed __int64)*(_QWORD*)(v9 + 744) >=
              (signed __int64)*(_QWORD*)(v3 + 744)) {
          LABEL_20:
            *result = v3;
            *a2 = (__int64)v4;
            v17 = *a3;
            v18 = v4[72];
            v19 = *(_QWORD*)(*a3 + 576);
            if (v19 == v18) {
              v20 = *(_QWORD*)(v17 + 752);
              v21 = v4[94];
              if (v20 == v21) {
                if ((signed __int64)*(_QWORD*)(v17 + 744) >=
                    (signed __int64)v4[93]) {
                  return result;
                }
              }
              else if (v20 >= v21) {
                return result;
              }
            }
            else if (v19 <= v18) {
              return result;
            }
            *a2 = v17;
            *a3 = (__int64)v4;
            return result;
          }
        }
        else if (v11 >= v12) {
          goto LABEL_20;
        }
      }
      else if (v10 <= v5) {
        goto LABEL_20;
      }
      *result = v9;
      *a3 = (__int64)v4;
      return result;
    }
    if (v7 < v8) {
      goto LABEL_6;
    }
  }
  else if (v5 > v6) {
    goto LABEL_6;
  }
LABEL_11:
  v13 = *a3;
  v14 = *(_QWORD*)(*a3 + 576);
  if (v14 == v5) {
    v15 = *(_QWORD*)(v13 + 752);
    v16 = *(_QWORD*)(v3 + 752);
    if (v15 == v16) {
      if ((signed __int64)*(_QWORD*)(v13 + 744) >=
          (signed __int64)*(_QWORD*)(v3 + 744)) {
        return result;
      }
    }
    else if (v15 >= v16) {
      return result;
    }
  }
  else if (v14 <= v5) {
    return result;
  }
  *a2 = v13;
  *a3 = v3;
  v22 = *a2;
  v23 = *result;
  v24 = *(_QWORD*)(*a2 + 576);
  v25 = *(_QWORD*)(*result + 576);
  if (v24 == v25) {
    v26 = *(_QWORD*)(v22 + 752);
    v27 = *(_QWORD*)(v23 + 752);
    if (v26 != v27) {
      if (v26 >= v27) {
        return result;
      }
      goto LABEL_36;
    }
    if ((signed __int64)*(_QWORD*)(v22 + 744) <
        (signed __int64)*(_QWORD*)(v23 + 744)) {
    LABEL_36:
      *result = v22;
      *a2 = v23;
    }
  }
  else if (v24 > v25) {
    goto LABEL_36;
  }
  return result;
}

__int64* fs_644480(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                   __int64* a5)
{
  __int64* result;
  __int64 v11;
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

  result = fs_644300(a1, a2, a3);
  v11 = *a4;
  v12 = *a3;
  v13 = *(_QWORD*)(*a4 + 576);
  v14 = *(_QWORD*)(*a3 + 576);
  if (v13 == v14) {
    v15 = *(_QWORD*)(v11 + 752);
    v16 = *(_QWORD*)(v12 + 752);
    if (v15 == v16) {
      if ((signed __int64)*(_QWORD*)(v11 + 744) >=
          (signed __int64)*(_QWORD*)(v12 + 744)) {
        goto LABEL_21;
      }
    }
    else if (v15 >= v16) {
      goto LABEL_21;
    }
  }
  else if (v13 <= v14) {
    goto LABEL_21;
  }
  *a3 = v11;
  *a4 = v12;
  v17 = *a3;
  v18 = *a2;
  v19 = *(_QWORD*)(*a3 + 576);
  v20 = *(_QWORD*)(*a2 + 576);
  if (v19 == v20) {
    v21 = *(_QWORD*)(v17 + 752);
    v22 = *(_QWORD*)(v18 + 752);
    if (v21 == v22) {
      if ((signed __int64)*(_QWORD*)(v17 + 744) >=
          (signed __int64)*(_QWORD*)(v18 + 744)) {
        goto LABEL_21;
      }
    }
    else if (v21 >= v22) {
      goto LABEL_21;
    }
  }
  else if (v19 <= v20) {
    goto LABEL_21;
  }
  *a2 = v17;
  *a3 = v18;
  v23 = *a2;
  v24 = *a1;
  v25 = *(_QWORD*)(*a2 + 576);
  v26 = *(_QWORD*)(*a1 + 576);
  if (v25 != v26) {
    if (v25 <= v26) {
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  v27 = *(_QWORD*)(v23 + 752);
  v28 = *(_QWORD*)(v24 + 752);
  if (v27 == v28) {
    if ((signed __int64)*(_QWORD*)(v23 + 744) >=
        (signed __int64)*(_QWORD*)(v24 + 744)) {
      goto LABEL_21;
    }
  LABEL_20:
    *a1 = v23;
    *a2 = v24;
    goto LABEL_21;
  }
  if (v27 < v28) {
    goto LABEL_20;
  }
LABEL_21:
  v29 = *a5;
  v30 = *a4;
  v31 = *(_QWORD*)(*a5 + 576);
  v32 = *(_QWORD*)(*a4 + 576);
  if (v31 == v32) {
    v33 = *(_QWORD*)(v29 + 752);
    v34 = *(_QWORD*)(v30 + 752);
    if (v33 == v34) {
      if ((signed __int64)*(_QWORD*)(v29 + 744) >=
          (signed __int64)*(_QWORD*)(v30 + 744)) {
        return result;
      }
    }
    else if (v33 >= v34) {
      return result;
    }
  }
  else if (v31 <= v32) {
    return result;
  }
  *a4 = v29;
  *a5 = v30;
  v35 = *a4;
  v36 = *a3;
  v37 = *(_QWORD*)(*a4 + 576);
  v38 = *(_QWORD*)(*a3 + 576);
  if (v37 == v38) {
    v39 = *(_QWORD*)(v35 + 752);
    v40 = *(_QWORD*)(v36 + 752);
    if (v39 == v40) {
      if ((signed __int64)*(_QWORD*)(v35 + 744) >=
          (signed __int64)*(_QWORD*)(v36 + 744)) {
        return result;
      }
    }
    else if (v39 >= v40) {
      return result;
    }
  }
  else if (v37 <= v38) {
    return result;
  }
  *a3 = v35;
  *a4 = v36;
  v41 = *a3;
  v42 = *a2;
  v43 = *(_QWORD*)(*a3 + 576);
  v44 = *(_QWORD*)(*a2 + 576);
  if (v43 == v44) {
    v45 = *(_QWORD*)(v41 + 752);
    v46 = *(_QWORD*)(v42 + 752);
    if (v45 == v46) {
      if ((signed __int64)*(_QWORD*)(v41 + 744) >=
          (signed __int64)*(_QWORD*)(v42 + 744)) {
        return result;
      }
    }
    else if (v45 >= v46) {
      return result;
    }
  }
  else if (v43 <= v44) {
    return result;
  }
  *a2 = v41;
  *a3 = v42;
  v47 = *a2;
  v48 = *a1;
  v49 = *(_QWORD*)(*a2 + 576);
  v50 = *(_QWORD*)(*a1 + 576);
  if (v49 == v50) {
    v51 = *(_QWORD*)(v47 + 752);
    v52 = *(_QWORD*)(v48 + 752);
    if (v51 == v52) {
      if ((signed __int64)*(_QWORD*)(v47 + 744) >=
          (signed __int64)*(_QWORD*)(v48 + 744)) {
        return result;
      }
    }
    else if (v51 >= v52) {
      return result;
    }
  }
  else if (v49 <= v50) {
    return result;
  }
  *a1 = v47;
  *a2 = v48;
  return result;
}

bool fs_644700(__int64* a1, __int64* a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v12;
  __int64 v13;
  int v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;

  v2 = a2 - a1;
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      fs_644300(a1, a1 + 1, a2 - 1);
      return true;
    case 4LL:
      fs_644300(a1, a1 + 1, a1 + 2);
      v30 = (_QWORD*)*(a2 - 1);
      v31 = (_QWORD*)a1[2];
      v32 = v30[72];
      v33 = v31[72];
      if (v32 == v33) {
        v34 = v30[94];
        v35 = v31[94];
        if (v34 == v35) {
          if ((signed __int64)v30[93] >= (signed __int64)v31[93]) {
            return true;
          }
        }
        else if (v34 >= v35) {
          return true;
        }
      }
      else if (v32 <= v33) {
        return true;
      }
      a1[2] = (__int64)v30;
      *(a2 - 1) = (__int64)v31;
      v38 = (_QWORD*)a1[1];
      v37 = (_QWORD*)a1[2];
      v39 = v37[72];
      v40 = v38[72];
      if (v39 == v40) {
        v41 = v37[94];
        v42 = v38[94];
        if (v41 == v42) {
          if ((signed __int64)v37[93] >= (signed __int64)v38[93]) {
            return true;
          }
        }
        else if (v41 >= v42) {
          return true;
        }
      }
      else if (v39 <= v40) {
        return true;
      }
      a1[1] = (__int64)v37;
      a1[2] = (__int64)v38;
      v43 = *a1;
      v44 = v37[72];
      v45 = *(_QWORD*)(*a1 + 576);
      if (v44 == v45) {
        v46 = v37[94];
        v47 = *(_QWORD*)(v43 + 752);
        if (v46 == v47) {
          if ((signed __int64)v37[93] >=
              (signed __int64)*(_QWORD*)(v43 + 744)) {
            return true;
          }
        }
        else if (v46 >= v47) {
          return true;
        }
      }
      else if (v44 <= v45) {
        return true;
      }
      *a1 = (__int64)v37;
      a1[1] = v43;
      return true;
    case 5LL:
      fs_644480(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
      return true;
    default:
      break;
    }
  }
  else {
    if ((unsigned __int64)v2 < 2) {
      return true;
    }
    if (v2 == 2) {
      v3 = (_QWORD*)*(a2 - 1);
      v4 = *a1;
      v5 = v3[72];
      v6 = *(_QWORD*)(*a1 + 576);
      if (v5 == v6) {
        v7 = v3[94];
        v8 = *(_QWORD*)(v4 + 752);
        if (v7 == v8) {
          if ((signed __int64)v3[93] < (signed __int64)*(_QWORD*)(v4 + 744)) {
            goto LABEL_43;
          }
        }
        else if (v7 < v8) {
        LABEL_43:
          *a1 = (__int64)v3;
          *(a2 - 1) = v4;
        }
      }
      else if (v5 > v6) {
        goto LABEL_43;
      }
      return true;
    }
  }
  v9 = (__int64)(a1 + 2);
  fs_644300(a1, a1 + 1, a1 + 2);
  v12 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v13 = 0;
  v14 = 0;
  while (2) {
    v15 = (_QWORD*)*v12;
    v16 = *(_QWORD*)v9;
    v17 = *(_QWORD*)(*v12 + 576);
    v18 = *(_QWORD*)(*(_QWORD*)v9 + 576LL);
    if (v17 == v18) {
      v19 = v15[94];
      v20 = *(_QWORD*)(v16 + 752);
      if (v19 == v20) {
        if ((signed __int64)v15[93] >= (signed __int64)*(_QWORD*)(v16 + 744)) {
          goto LABEL_17;
        }
      }
      else if (v19 >= v20) {
        goto LABEL_17;
      }
    }
    else if (v17 <= v18) {
      goto LABEL_17;
    }
    *v12 = v16;
    v21 = v13;
    while (1) {
      v22 = (char*)a1 + v21;
      v23 = v15[72];
      v24 = *(_QWORD**)((char*)a1 + v21 + 8);
      v25 = v24[72];
      if (v23 != v25) {
        if (v23 <= v25) {
          goto LABEL_16;
        }
        goto LABEL_27;
      }
      v26 = v15[94];
      v27 = v24[94];
      if (v26 == v27) {
        if ((signed __int64)v15[93] >= (signed __int64)v24[93]) {
          goto LABEL_16;
        }
        goto LABEL_27;
      }
      if (v26 >= v27) {
        break;
      }
    LABEL_27:
      v9 -= 8;
      v21 -= 8;
      *((_QWORD*)v22 + 2) = v24;
      if (v21 == -16) {
        v9 = (__int64)a1;
        goto LABEL_16;
      }
    }
    v9 = (__int64)a1 + v21 + 16;
  LABEL_16:
    ++v14;
    *(_QWORD*)v9 = v15;
    if (v14 != 8) {
    LABEL_17:
      v9 = (__int64)v12++;
      v13 += 8;
      if (v12 == a2) {
        return true;
      }
      continue;
    }
    return v12 + 1 == a2;
  }
}

__attribute__((swiftcall)) void fs_a501f0(PSEUDO_X8 x8_, __int64 a1, __int64 a2)
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

  Manager_a4fd20((void*)(&v21_.v21), a1 + 15176, a2, (__int64)"PID", 0);
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
      v10 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12, 16, 0);
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
    memmove((__int64)v14, (__int64)v8, v5);
    v14[v5] = 0;
    if ((v4 & 1) != 0 && v6 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(
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
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v21_.v23);
    }
  }
}

#pragma GCC visibility pop
