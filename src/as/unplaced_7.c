#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameHr_62ec90(__int64, __int64);
__int64 Manager_62a740(__int64, __int64, const char*, const char*, __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 strcpy(__int64, const char*);
extern _QWORD as_g_context_slots[16384];
extern __int64 as_g_engine;
extern __int64 as_g_script_manager;
extern __int64 as_g_thread_info;
int sprintf(__int64, const char*, ...);
__attribute__((swiftcall)) void as_62a940(PSEUDO_X8 x8_, __int64 a1, char* a2,
                                          __int64 a3, __int64 a4, char* a5,
                                          char* a6, char* a7, int a8, int a10,
                                          char a11);

__attribute__((swiftcall)) void as_62a940(PSEUDO_X8 x8_, __int64 a1, char* a2,
                                          __int64 a3, __int64 a4, char* a5,
                                          char* a6, char* a7, int a8, int a10,
                                          char a11)
{
  __int64 a9 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v11;
  _QWORD* v17;
  int v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  _BOOL4 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  char v32;
  unsigned int v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int16 v42;
  _QWORD* v43;
  __int64 v44;
  char v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  __int64 v56;
  __int64 v57;
  unsigned int v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned int v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int16 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  __int64 v79;
  __int64* v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  char v87[136];

  v11 = *(unsigned int*)(a3 + 8);
  if ((_DWORD)v11 == 0x2000 || (v17 = &as_g_context_slots[2 * v11])[1] == 0) {
    v18 = a8;
    v19 = 0;
  }
  else {
    v18 = a8;
    if (*v17 == *(_QWORD*)a3) {
      v19 = v17[1];
    }
    else {
      v19 = 0;
    }
  }
  result = Manager_62a740(a1, v19, a5, a6, (__int64)a7);
  if (result == 0) {
    if (*(_BYTE*)(a1 + 4785) == 1) {
      result = nn_os_LockMutex(a1 + 4792);
    }
    v21 = *(_QWORD*)(a1 + 16);
    if (v21 != 0) {
      while (1) {
        result = Manager_62a740(result, v21, a5, a6, (__int64)a7);
        v22 = result == 0;
        if (result != 0) {
          break;
        }
        v21 = *(_QWORD*)(v21 + 48);
        if (v21 == 0) {
          result = 0;
          goto LABEL_16;
        }
      }
      v19 = v21;
    }
    else {
      result = 0;
      v22 = true;
    }
  LABEL_16:
    if (*(_BYTE*)(a1 + 4785) == 1) {
      v23 = result;
      nn_os_UnlockMutex(a1 + 4792);
      result = v23;
    }
    if (v22) {
      *(_QWORD*)a9 = 0;
      *(_DWORD*)(a9 + 8) = 0x2000;
      *(_QWORD*)(a9 + 16) = 0;
      {
        result;
        return;
      }
    }
  }
  v84 = result;
  nn_os_LockMutex(a1 + 5096);
  v24 = *(_QWORD*)(a1 + 5080);
  v25 = *(int*)(a1 + 5088);
  v26 = *(_DWORD*)(v24 + 4 * v25);
  *(_DWORD*)(a1 + 5088) = v25 + 1;
  *(_DWORD*)(v24 + 4 * v25) = -1;
  nn_os_UnlockMutex(a1 + 5096);
  v27 = *(_QWORD*)(a1 + 5072) + 2272LL * v26;
  GameHr_62ec90(v27, a1);
  v28 = *(unsigned int*)(v27 + 8);
  if ((_DWORD)v28 != 0x2000 && (v29 = &as_g_context_slots[2 * v28])[1] == v27) {
    v30 = *v29;
    sprintf((__int64)v87, "%s_%16zx", a2, v27);
    if (v29[1] != 0) {
      v32 = 0;
      if (*v29 == v30) {
        v31 = v29[1];
      }
      else {
        v31 = 0;
      }
    }
    else {
      v32 = 0;
      v31 = 0;
    }
  }
  else {
    sprintf((__int64)v87, "%s_%16zx", a2, v27);
    v30 = 0;
    v31 = 0;
    LODWORD(v28) = 0x2000;
    v32 = 1;
  }
  v33 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  v83 = v30;
  if (v31 != 0) {
    v34 = (unsigned __int64)v33 << 7;
    v35 = 4LL * v33;
    v36 = as_g_script_manager + v34;
    v37 = *(int*)(as_g_script_manager + v35 + 4640) + 1LL;
    *(_DWORD*)(as_g_script_manager + v35 + 4640) = v37;
    *(_QWORD*)(v36 + 8 * v37 + 288) = *(_QWORD*)(v31 + 24);
    *(_QWORD*)(as_g_script_manager + 8LL * v33 + 4384) =
        *(_QWORD*)(as_g_script_manager + v34 +
                   8LL * *(int*)(as_g_script_manager + v35 + 4640) + 288);
  }
  else {
    v38 = as_g_script_manager + ((unsigned __int64)v33 << 7);
    v39 = as_g_script_manager + 4LL * v33;
    v40 = *(int*)(v39 + 4640) + 1LL;
    *(_DWORD*)(v39 + 4640) = v40;
    *(_QWORD*)(v38 + 8 * v40 + 288) = 0;
    *(_QWORD*)(as_g_script_manager + 8LL * v33 + 4384) = 0;
  }
  v41 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_engine + 464LL))(as_g_engine);
  *(_BYTE*)(v27 + 336) = 0;
  strcpy(v27 + 80, v87);
  *(_BYTE*)(v27 + 208) = 0;
  *(_QWORD*)(v27 + 24) = v41;
  *(_QWORD*)(v27 + 32) = 0;
  *(_QWORD*)(v27 + 40) = 0;
  *(_DWORD*)(v27 + 48) = v18;
  *(_DWORD*)(v27 + 52) = 0;
  *(_QWORD*)(v27 + 2152) = 0;
  *(_QWORD*)(v27 + 2168) = 0;
  *(_QWORD*)(v27 + 2176) = 0;
  *(_DWORD*)(v27 + 2160) = 0x2000;
  *(_DWORD*)(v27 + 2184) = 0x2000;
  *(_QWORD*)(v27 + 2104) = 0;
  *(_QWORD*)(v27 + 2112) = 0;
  *(_QWORD*)(v27 + 2192) = 0;
  *(_QWORD*)(v27 + 2200) = 0;
  (*(void (**)(__int64, __int64))(*(_QWORD*)v41 + 480LL))(v41, v27);
  v42 = *(_WORD*)(v27 + 2144);
  v43 = *(_QWORD**)(v27 + 2240);
  *(_QWORD*)(v27 + 2240) = 0;
  *(_WORD*)(v27 + 2144) = v42 & 0xFE78 | 0x100;
  if (v43 == (_QWORD*)(v27 + 2208)) {
    v44 = a9;
    v46 = 32;
    v45 = v32;
  }
  else {
    v44 = a9;
    v45 = v32;
    if (v43 == nullptr) {
      goto LABEL_31;
    }
    v46 = 40;
  }
  (*(void (**)(__int64))(*v43 + v46))((__int64)v43);
LABEL_31:
  (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(v27 + 24) + 464LL))(
      *(_QWORD*)(v27 + 24), 0);
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v27 + 24) + 448LL))(
      *(_QWORD*)(v27 + 24), 1);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  v47 = (unsigned __int64)(unsigned int)result << 7;
  v48 = 4LL * (unsigned int)result;
  v49 = as_g_script_manager + v47;
  v50 = *(int*)(as_g_script_manager + v48 + 4640);
  *(_DWORD*)(as_g_script_manager + v48 + 4640) = v50 - 1;
  *(_QWORD*)(v49 + 8 * v50 + 288) = 0;
  *(_QWORD*)(as_g_script_manager + 8LL * (unsigned int)result + 4384) =
      *(_QWORD*)(as_g_script_manager + v47 +
                 8LL * *(int*)(as_g_script_manager + v48 + 4640) + 288);
  if (v19 != 0 && (_DWORD)(v51 = *(unsigned int*)(v19 + 8)) != 0x2000 &&
      (v52 = &as_g_context_slots[2 * v51])[1] == v19) {
    v82 = *v52;
    *(_DWORD*)(v27 + 64) = v51;
    *(_QWORD*)(v27 + 56) = v82;
    v53 = v52[1];
    if (v53 != 0 && *v52 != v82) {
      v53 = 0;
    }
  }
  else {
    v53 = 0;
    *(_QWORD*)(v27 + 56) = 0;
    *(_DWORD*)(v27 + 64) = 0x2000;
  }
  *(_QWORD*)(v27 + 72) = v53;
  v54 = *(_QWORD*)(v19 + 40);
  *(_QWORD*)(v27 + 32) = v54;
  if (v54 == 0) {
    goto LABEL_60;
  }
  strcpy(v27 + 208, a7);
  if ((v45 & 1) != 0 ||
      (v55 = &as_g_context_slots[2 * (unsigned int)v28])[1] == 0) {
    v56 = v83;
    v57 = 0;
  }
  else {
    v56 = v83;
    if (*v55 == v83) {
      v57 = v55[1];
    }
    else {
      v57 = 0;
    }
  }
  v58 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  if (v57 != 0) {
    v59 = (unsigned __int64)v58 << 7;
    v60 = 4LL * v58;
    v61 = as_g_script_manager + v59;
    v62 = *(int*)(as_g_script_manager + v60 + 4640) + 1LL;
    *(_DWORD*)(as_g_script_manager + v60 + 4640) = v62;
    *(_QWORD*)(v61 + 8 * v62 + 288) = *(_QWORD*)(v57 + 24);
    *(_QWORD*)(as_g_script_manager + 8LL * v58 + 4384) =
        *(_QWORD*)(as_g_script_manager + v59 +
                   8LL * *(int*)(as_g_script_manager + v60 + 4640) + 288);
  }
  else {
    v63 = as_g_script_manager + ((unsigned __int64)v58 << 7);
    v64 = as_g_script_manager + 4LL * v58;
    v65 = *(int*)(v64 + 4640) + 1LL;
    *(_DWORD*)(v64 + 4640) = v65;
    *(_QWORD*)(v63 + 8 * v65 + 288) = 0;
    *(_QWORD*)(as_g_script_manager + 8LL * v58 + 4384) = 0;
  }
  v66 = *(_QWORD*)(v27 + 24);
  *(_QWORD*)(v27 + 40) = v84;
  (*(void (**)(__int64))(*(_QWORD*)v66 + 24LL))(v66);
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v27 + 24) + 96LL))(
      *(_QWORD*)(v27 + 24), a4);
  v67 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  v68 = (unsigned __int64)v67 << 7;
  v69 = 4LL * v67;
  v70 = as_g_script_manager + v68;
  v71 = *(int*)(as_g_script_manager + v69 + 4640);
  *(_DWORD*)(as_g_script_manager + v69 + 4640) = v71 - 1;
  *(_QWORD*)(v70 + 8 * v71 + 288) = 0;
  *(_QWORD*)(as_g_script_manager + 8LL * v67 + 4384) =
      *(_QWORD*)(as_g_script_manager + v68 +
                 8LL * *(int*)(as_g_script_manager + v69 + 4640) + 288);
  v72 = *(_QWORD*)(v27 + 24);
  *(_DWORD*)(v27 + 52) = 1;
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v72 + 464LL))(v72, 1);
  v73 = *(_WORD*)(v27 + 2144);
  *(_DWORD*)(v27 + 2116) = a10;
  *(_WORD*)(v27 + 2144) = v73 & 0xFFBF | ((a11 & 1) << 6);
  if (*(_BYTE*)(a1 + 4785) == 1) {
    result = nn_os_LockMutex(a1 + 4792);
  }
  v74 = *(int*)(v27 + 48);
  v75 = *(_QWORD*)(a1 + 24 + 8 * v74);
  if (v75 != 0) {
    do {
      v76 = v75;
      v75 = *(_QWORD*)(v75 + 2200);
    } while (v75 != 0);
    *(_QWORD*)(v76 + 2200) = v27;
  }
  else {
    *(_QWORD*)(a1 + 24 + 8 * v74) = v27;
  }
  if (*(_BYTE*)(a1 + 4785) == 1) {
    result = nn_os_UnlockMutex(a1 + 4792);
  }
  if ((v45 & 1) == 0 &&
      (v77 = &as_g_context_slots[2 * (unsigned int)v28], (v78 = v77[1]) != 0) &&
      *v77 == v56) {
    *(_QWORD*)v44 = 0;
    *(_DWORD*)(v44 + 8) = 0x2000;
    v79 = *(unsigned int*)(v78 + 8);
    if ((_DWORD)v79 != 0x2000) {
      v80 = &as_g_context_slots[2 * v79];
      if (v80[1] == v78) {
        v81 = *v80;
        *(_DWORD*)(v44 + 8) = v79;
        *(_QWORD*)v44 = v81;
      }
    }
    *(_QWORD*)(v44 + 16) = v78;
  }
  else {
  LABEL_60:
    *(_QWORD*)v44 = 0;
    *(_QWORD*)(v44 + 16) = 0;
    *(_DWORD*)(v44 + 8) = 0x2000;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
