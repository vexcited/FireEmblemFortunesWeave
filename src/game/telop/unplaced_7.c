#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* LayoutEx_58d200(_BYTE* result, _BYTE*);
_BYTE* Layout_579280(_QWORD*, __int64);
__attribute__((swiftcall)) void Layout_1363f00(PSEUDO_X8, __int64, __int64);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64 GameRoutine_60a020(__int64, const char*);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 LayoutEx_579180(__int64);
__int64 LayoutEx_5791a0(__int64);
__int64 LayoutEx_57b150(__int64, __int64, __int64, __int64, __int64);
__int64 LayoutEx_57cf40(__int64, __int64);
__int64 Pane_58dee0(__int64 result, __int64);
__int64 Pane_58df60(__int64 result, _QWORD*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_GetPartsLayout(__int64*, const char*);
char* LayoutAccessor_1562060(char* result, __int64, const char*);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN GameData_1bff24c;
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_2131b50;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_2130ec0[2];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_20bd060[20];
extern char GameData_1bfebc8[2];
int __cxa_guard_acquire(__int64);
unsigned __int64 strlen(const char*);
void Layout_13639a0(_QWORD*, __int64);
void Layout_1364020(_QWORD*, __int64, __int64);
void Se_80e330(__int64, const char*);
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64* game_telop_1760e40(__int64 a1, unsigned int a2);
void game_telop_1761ec0(__int64 a1, int a2, int a3, char a4);

__int64* game_telop_1760e40(__int64 a1, unsigned int a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  char* v6;
  int v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  char* v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _BOOL4 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _BOOL4 v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  _QWORD* v47;
  int v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  atomic_uchar* v56;
  __int64* v57;
  __int64* v58;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  _BYTE* v64;
  __int64 i;
  __int64 v66;
  __int64 v67;
  __int64* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  _QWORD* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64* v82;
  __int64* v83;
  __int64 v84;
  char v85;
  __int64 v86;
  char v87;
  char* v88;
  __int64* result;
  __int64* v90;
  __int64 v91;
  __int64* v92;
  __int64 v93;
  _QWORD* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  _QWORD* v101;
  struct {
    _QWORD v102[2];
    char* v103;
  } v102_;
  struct {
    _QWORD v104[2];
    char* v105;
  } v104_;
  struct {
    __int64 v106;
    __int64 v107;
  } v106_;
  struct {
    __int64 v108;
    __int64 v109;
  } v108_;
  struct {
    __int64 v110;
    __int64 v111;
  } v110_;

  v2 = 4LL * a2;
  v4 = *(int*)&GameData_1bfebc8[v2];
  v5 = a1 + v2;
  v6 = GameData_20bd060[a2];
  v7 = *(_DWORD*)(v5 + 864);
  *(_DWORD*)(v5 + 864) = v7 + 1;
  v8 = (__int64)game_util_Format("%s_00", &GameData_1bfebc8[v4]);
  v9 = strlen((const char*)v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_190:
    String_60a1d0();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (const char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v12, 16, 0);
    v104_.v104[1] = v10;
    v104_.v105 = v11;
    v104_.v104[0] = v12 | 1;
    goto LABEL_9;
  }
  LOBYTE(v104_.v104[0]) = 2 * v9;
  v11 = (char*)v104_.v104 + 1;
  if (v9 != 0) {
  LABEL_9:
    memmove((__int64)v11, v8, v10);
  }
  v11[v10] = 0;
  v13 = game_util_Format("%s_%02d", v6, v7);
  v14 = strlen(v13);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_190;
  }
  v15 = v14;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v14 | 7) + 1;
    }
    v16 = (const char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v8, 16, 0);
    v102_.v102[1] = v15;
    v102_.v103 = v16;
    v102_.v102[0] = v8 | 1;
    goto LABEL_18;
  }
  LOBYTE(v102_.v102[0]) = 2 * v14;
  v16 = (char*)v102_.v102 + 1;
  if (v14 != 0) {
  LABEL_18:
    memmove((__int64)v16, (__int64)v13, v15);
  }
  v16[v15] = 0;
  v17 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 168), (__int64)"A_Tlp");
  if (v17 == 0) {
    goto LABEL_165;
  }
  v18 = v102_.v102;
  v19 = v17;
  if ((v102_.v102[0] & 1) != 0) {
    v20 = v102_.v103;
  }
  else {
    v20 = (char*)v102_.v102 + 1;
  }
  v21 = LayoutAccessor_155fbe0((__int64*)(a1 + 168), v20);
  if (v21[2] == 0) {
    goto LABEL_44;
  }
  v22 = v21;
  v23 = v21[1];
  if (v23 == 0) {
    goto LABEL_44;
  }
  v24 = std___1___shared_weak_count_lock(v23);
  if (v24 == 0) {
    goto LABEL_33;
  }
  v25 = *v22;
  if (*v22 != 0) {
    v8 = *(unsigned __int8*)(v25 + 24);
    v26 = v25 + 152;
    if ((_DWORD)v8 == 0) {
      v26 = 0;
    }
    v27 = v26 != v22[2];
  }
  else {
    v27 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v34 = v24;
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v34);
    if (v27) {
      goto LABEL_33;
    }
  LABEL_43:
    if ((v8 & 1) != 0) {
      goto LABEL_35;
    }
    goto LABEL_44;
  }
  if (!v27) {
    goto LABEL_43;
  }
LABEL_33:
  v28 = v22[1];
  if (v28 != 0 && *(_QWORD*)(v28 + 8) != -1) {
  LABEL_35:
    if (v22[2] == 0) {
      goto LABEL_132;
    }
    v29 = v22[1];
    if (v29 == 0) {
      goto LABEL_132;
    }
    v30 = std___1___shared_weak_count_lock(v29);
    if (v30 == 0) {
      goto LABEL_126;
    }
    v31 = *v22;
    if (*v22 != 0) {
      LODWORD(v18) = *(unsigned __int8*)(v31 + 24);
      v32 = v31 + 152;
      if ((_DWORD)v18 == 0) {
        v32 = 0;
      }
      v33 = v32 != v22[2];
    }
    else {
      v33 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v70 = v30;
      (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
      std___1___shared_weak_count___release_weak(v70);
    }
    if (!v33) {
      if (((unsigned __int8)v18 & 1) == 0) {
        goto LABEL_132;
      }
    }
    else {
    LABEL_126:
      v71 = v22[1];
      if (v71 == 0 || *(_QWORD*)(v71 + 8) == -1) {
        goto LABEL_132;
      }
    }
    v72 = v22[2];
    if (v72 != 0) {
      v73 = *(_QWORD**)(v72 + 24);
    LABEL_133:
      Pane_58df60(v19, v73);
      Pane_58dee0(v19, (__int64)v73);
      goto LABEL_165;
    }
  LABEL_132:
    v73 = nullptr;
    goto LABEL_133;
  }
LABEL_44:
  v35 = *(_QWORD*)(a1 + 176);
  if ((v104_.v104[0] & 1) != 0) {
    v36 = v104_.v105;
  }
  else {
    v36 = (char*)v104_.v104 + 1;
  }
  if (v35 != 0) {
    v37 = std___1___shared_weak_count_lock(v35);
    if (v37 != 0) {
      v38 = *(_QWORD*)(a1 + 168);
      if (v38 != 0 && (v39 = ui_LayoutAccessor_GetPartsLayout(
                           (__int64*)(a1 + 168), v36)) != 0) {
        v40 = *(_QWORD*)(v39 + 24);
        if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)GameData_212dfd0) != 0) {
          *GameData_212dfc8 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
          __cxa_guard_release((__int64)GameData_212dfd0);
        }
        if (v40 == 0) {
          goto LABEL_60;
        }
        v41 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
        if (v41 != GameData_212dfc8) {
          do {
            v41 = (__int64*)*v41;
          } while (v41 != GameData_212dfc8 && v41 != nullptr);
          if (v41 == nullptr) {
          LABEL_60:
            v40 = 0;
          }
        }
        Layout_1363f00((void*)(&v106_.v106), v38, v40);
        v108_.v108 = 0;
        v108_.v109 = 0;
        if (v106_.v107 != 0 &&
            (v43 = std___1___shared_weak_count_lock(v106_.v107),
             v108_.v109 = v43, v43 != 0) &&
            (v108_.v108 = v106_.v106, v106_.v106 != 0) &&
            (v44 = v43, (v45 = __dynamic_cast(v106_.v106, GameData_212dfc0[0],
                                              GameData_2131b50, 0)) != 0)) {
          v46 = &v108_.v108;
          v110_.v110 = v45;
          v110_.v111 = v44;
        }
        else {
          v46 = &v110_.v110;
        }
        *v46 = 0;
        v46[1] = 0;
        v8 = v110_.v110;
        v38 = v110_.v111;
        if (v110_.v111 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v110_.v111 + 16),
                                    1u, memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
            std___1___shared_weak_count___release_weak(v38);
          }
        }
        v49 = v108_.v109;
        if (v108_.v109 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v108_.v109 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
          std___1___shared_weak_count___release_weak(v49);
        }
        if (v106_.v107 != 0) {
          std___1___shared_weak_count___release_weak(v106_.v107);
        }
        v48 = 0;
      }
      else {
        v48 = 1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
        std___1___shared_weak_count___release_weak(v37);
      }
      if (v48 != 0) {
        v37 = 0;
      }
      else {
        v37 = v38;
      }
      if (v48 != 0) {
        v47 = nullptr;
      }
      else {
        v47 = (_QWORD*)v8;
      }
    }
    else {
      v47 = nullptr;
    }
  }
  else {
    v37 = 0;
    v47 = nullptr;
  }
  v50 = std___1___shared_weak_count_lock(*(_QWORD*)(a1 + 176));
  if ((v102_.v102[0] & 1) != 0) {
    v51 = (char*)v102_.v103;
  }
  else {
    v51 = (char*)v102_.v102 + 1;
  }
  if (v37 == 0) {
    goto LABEL_161;
  }
  v52 = *(_QWORD**)(a1 + 168);
  v53 = std___1___shared_weak_count_lock(v37);
  if (v53 == 0) {
    goto LABEL_161;
  }
  if (v47 == nullptr) {
    goto LABEL_153;
  }
  v54 = v47[1];
  v101 = v52;
  if (*(_QWORD*)(*(_QWORD*)(v54 + 24) + 24LL) == 0) {
    goto LABEL_153;
  }
  v52 = (_QWORD*)v19;
  v55 = *((_BYTE*)v101 + 24) != 0 ? (__int64)(v101 + 19) : 0LL;
  v98 = v55;
  v100 = v53;
  v56 = (atomic_uchar*)GameData_212dfd0;
  v57 = GameData_212dfc8;
  do {
    if ((atomic_load_explicit(v56, memory_order_acquire) & 1) == 0 &&
        __cxa_guard_acquire((__int64)v56) != 0) {
      *v57 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      __cxa_guard_release((__int64)v56);
    }
    v58 = (__int64*)(*(__int64 (**)(_QWORD*))(*v52 + 16LL))(v52);
    if (v58 == v57) {
      goto LABEL_110;
    }
    do {
      v58 = (__int64*)*v58;
    } while (v58 != v57 && v58 != nullptr);
    if (v58 != nullptr) {
    LABEL_110:
      v60 = v52[29];
      v53 = v100;
      if (v54 == 0) {
        goto LABEL_153;
      }
      goto LABEL_113;
    }
    v52 = (_QWORD*)v52[3];
  } while (v52 != nullptr);
  v60 = v98;
  v53 = v100;
  if (v54 == 0) {
    goto LABEL_153;
  }
LABEL_113:
  if (*(_QWORD*)(*(_QWORD*)(v54 + 24) + 24LL) == 0) {
    goto LABEL_153;
  }
  v52 = (_QWORD*)*game_g_frame_clock_ptr[0];
  v61 = (_QWORD*)LayoutEx_579180(96);
  if (v61 != nullptr) {
    v62 = (__int64)v61;
    v63 = GameData_2130ec0[0];
    v61[2] = v61 + 1;
    v99 = v60;
    *v61 = v63 + 16;
    v61[1] = v61 + 1;
    v61[9] = v61 + 9;
    v61[10] = v61 + 9;
    LayoutEx_57b150((__int64)v61, (__int64)(v52 + 71), v54, v60, 0);
    v64 = *(_BYTE**)(v62 + 24);
    LayoutEx_58d200(v64, v51);
    Pane_58dee0(v19, (__int64)v64);
    for (i = *(_QWORD*)(v54 + 80); i != v54 + 72; i = *(_QWORD*)(i + 8)) {
      v69 = LayoutEx_57cf40(v62, i - 40);
      if (v69 != 0) {
        Layout_1364020(v101, i - 216, v69);
      }
    }
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, __int64))(
        *v47 + 16LL))((void*)(&v108_.v108), v47, v62);
    if (v108_.v108 != 0) {
      v66 =
          __dynamic_cast(v108_.v108, GameData_212dfc0[0], GameData_2131b50, 0);
      v67 = v99;
      if (v66 != 0) {
        v110_.v110 = v66;
        v110_.v111 = v108_.v109;
        v68 = &v108_.v108;
        goto LABEL_136;
      }
    }
    else {
      v67 = v99;
    }
    v68 = &v110_.v110;
  LABEL_136:
    *v68 = 0;
    v68[1] = 0;
    v74 = v108_.v109;
    if (v108_.v109 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v108_.v109 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74);
      std___1___shared_weak_count___release_weak(v74);
    }
    v75 = v110_.v110;
    if (v110_.v110 != 0) {
      v76 = v110_.v111;
      v108_.v108 = v110_.v110;
      v108_.v109 = v110_.v111;
      if (v110_.v111 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v110_.v111 + 8), 1u,
                                  memory_order_relaxed);
      }
      v53 = v100;
      v77 = v101 + 284;
      v78 = (_QWORD*)v101[285];
      if (v78 == v101 + 284) {
        goto LABEL_180;
      }
      while (v78[2] != v75) {
        v78 = (_QWORD*)v78[1];
        if (v78 == v77) {
          goto LABEL_180;
        }
      }
      if (v78 == v77) {
      LABEL_180:
        v94 = (_QWORD*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
        v94[2] = v75;
        v94[3] = v76;
        if (v76 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v76 + 8), 1u,
                                    memory_order_relaxed);
        }
        v94[1] = v77;
        v95 = v101[284];
        *v94 = v95;
        *(_QWORD*)(v95 + 8) = v94;
        v101[284] = v94;
        ++v101[286];
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v75 + 128LL))(v75,
                                                                 &v108_.v108);
        v76 = v108_.v109;
        v53 = v100;
      }
      if (v76 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v76 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        v96 = v53;
        (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76);
        std___1___shared_weak_count___release_weak(v76);
        v53 = v96;
      }
      v52 = (_QWORD*)v110_.v111;
      if (v110_.v111 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v110_.v111 + 16),
                                  1u, memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v52 + 1),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v97 = v53;
          (*(void (**)(_QWORD*))(*v52 + 16LL))(v52);
          std___1___shared_weak_count___release_weak((__int64)v52);
          v53 = v97;
        }
      }
      v85 = 0;
      goto LABEL_154;
    }
    v52 = (_QWORD*)v110_.v111;
    if (v110_.v111 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v110_.v111 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(_QWORD*))(*v52 + 16LL))(v52);
      std___1___shared_weak_count___release_weak((__int64)v52);
    }
    v79 = *(_QWORD*)(v67 + 80);
    v80 = v67 + 72;
    if (v79 != v80) {
      v52 = *(_QWORD**)(*(_QWORD*)v80 + 16LL);
      if (v52 == (_QWORD*)v62) {
        v81 = *game_g_frame_clock_ptr[0];
        Layout_13639a0(v101, *(_QWORD*)(*(_QWORD*)v80 + 16LL));
        v82 = *(__int64**)v80;
        v83 = *(__int64**)(*(_QWORD*)v80 + 8LL);
        v84 = *v83;
        *(_QWORD*)(**(_QWORD**)v80 + 8LL) = v83;
        *v83 = *v82;
        *(_QWORD*)(v84 + 8) = v82;
        *v82 = v84;
        Layout_579280(v52, v81 + 568);
        (*(void (**)(_QWORD*))(*v52 + 8LL))(v52);
        LayoutEx_5791a0((__int64)v52);
      }
    }
  }
  v53 = v100;
LABEL_153:
  v85 = 1;
LABEL_154:
  if (atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v86 = v53;
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    std___1___shared_weak_count___release_weak(v86);
  }
  if (v52 != nullptr) {
    v87 = v85;
  }
  else {
    v87 = 1;
  }
  if ((v87 & 1) == 0) {
    std___1___shared_weak_count___release_weak((__int64)v52);
  }
LABEL_161:
  if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
    std___1___shared_weak_count___release_weak(v50);
  }
  if (v37 != 0) {
    std___1___shared_weak_count___release_weak(v37);
  }
LABEL_165:
  if ((v102_.v102[0] & 1) != 0) {
    v88 = v102_.v103;
  }
  else {
    v88 = (char*)v102_.v102 + 1;
  }
  result = LayoutAccessor_155fbe0((__int64*)(a1 + 168), v88);
  if ((v102_.v102[0] & 1) != 0 && v102_.v103 != nullptr) {
    v90 = result;
    v91 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v91 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v91,
                                  (__int64)v102_.v103);
    result = v90;
  }
  if ((v104_.v104[0] & 1) != 0 && v104_.v105 != nullptr) {
    v92 = result;
    v93 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v93 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v93,
                                  (__int64)v104_.v105);
    return v92;
  }
  return result;
}

void game_telop_1761ec0(__int64 a1, int a2, int a3, char a4)
{
  char* v7;
  _BYTE* v8;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  char* v16;
  char* v17;
  char* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    _QWORD v29[2];
    char* v30;
  } v29_;
  __int128 v31;
  __int64 v32;
  struct {
    _QWORD v33[2];
    char* v34;
  } v33_;
  struct {
    _QWORD v35[2];
    __int64 v36;
    char v37;
    char v38[15];
    __int64 v39;
  } v35_;
  __int128 v40;
  __int64 v41;

  v41 = 0;
  v40 = (__typeof__(v40)){0};
  if (a3 == 2) {
    LOBYTE(v40) = 18;
    BYTE9(v40) = 104;
    v7 = "Pos_Perch";
  }
  else if (a3 == 1) {
    LOBYTE(v40) = 22;
    DWORD2(v40) = 1717981035;
    v7 = "Pos_TalkOff";
  }
  else {
    LOBYTE(v40) = 20;
    *(_WORD*)((char*)&v40 + 9) = 28239;
    v7 = "Pos_TalkOn";
  }
  v8 = (char*)&v31 + 12;
  *(_QWORD*)((char*)&v40 + 1) = *(_QWORD*)v7;
  LayoutAccessor_1562cf0(a1 + 168, (const char*)&v40 + 1);
  if ((v40 & 1) != 0 && v41 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  v41);
  }
  LayoutAccessor_1562cf0(a1 + 168, "Type_TitleOn");
  *((_QWORD*)&v40 + 1) = 27392;
  v41 = 0;
  v35_.v38[12] = 0;
  *(_WORD*)&v35_.v38[13] = 0;
  v35_.v39 = 0;
  v35_.v35[1] = 0;
  v35_.v36 = 0;
  v33_.v34 = nullptr;
  v35_.v35[0] = 0;
  v33_.v33[0] = 0;
  v33_.v33[1] = 0;
  v32 = 0;
  v31 = (__typeof__(v31)){0};
  LOBYTE(v40) = 18;
  v35_.v37 = 22;
  *(_QWORD*)((char*)&v40 + 1) = *(_QWORD*)"Title_Ank";
  strcpy(v35_.v38, "T_Title_Ank");
  if (a2 <= 1) {
    if (a2 != 0) {
      if (a2 != 1) {
      LABEL_18:
        v11 = 0;
        LOWORD(v35_.v35[0]) = 0;
        LOWORD(v33_.v33[0]) = 0;
        v8 = (char*)&v31 + 1;
        goto LABEL_23;
      }
      LOBYTE(v35_.v35[0]) = 24;
      strcpy((char*)v35_.v35 + 1, "Type_Judge01");
      GameRoutine_60a020((__int64)v33_.v33, "MID_Sys_Result_Headline_Good");
      DWORD2(v31) = 825255271;
      LOBYTE(v31) = 22;
      v10 = "In_Judege01";
    }
    else {
      LOBYTE(v35_.v35[0]) = 24;
      strcpy((char*)v35_.v35 + 1, "Type_Judge00");
      GameRoutine_60a020((__int64)v33_.v33, "MID_Sys_Result_Headline_Bad");
      DWORD2(v31) = 808478055;
      LOBYTE(v31) = 22;
      v10 = "In_Judege00";
    }
  }
  else if (a2 == 2) {
    LOBYTE(v35_.v35[0]) = 24;
    strcpy((char*)v35_.v35 + 1, "Type_Judge02");
    GameRoutine_60a020((__int64)v33_.v33, "MID_Sys_Result_Headline_Great");
    DWORD2(v31) = 842032487;
    LOBYTE(v31) = 22;
    v10 = "In_Judege02";
  }
  else {
    if (a2 != 3) {
      goto LABEL_18;
    }
    LOBYTE(v35_.v35[0]) = 24;
    strcpy((char*)v35_.v35 + 1, "Type_Judge03");
    GameRoutine_60a020((__int64)v33_.v33, "MID_Sys_Result_Headline_Perfect");
    DWORD2(v31) = 858809703;
    LOBYTE(v31) = 22;
    v10 = "In_Judege03";
  }
  v11 = 11;
  *(_QWORD*)((char*)&v31 + 1) = *(_QWORD*)v10;
LABEL_23:
  v12 = (__int64*)(a1 + 960);
  *v8 = 0;
  if ((__int128*)(a1 + 960) != &v31) {
    if ((*(_BYTE*)v12 & 1) != 0) {
      SpineModel_64dde0(v12, (__int64)&v31 + 1, v11);
    }
    else {
      v13 = *((_QWORD*)&v31 + 1);
      *v12 = v31;
      *(_QWORD*)(a1 + 968) = v13;
      *(_QWORD*)(a1 + 976) = v32;
    }
  }
  v14 = LayoutAccessor_155fbe0((__int64*)(a1 + 168), "L_Title");
  v15 = (__int64)v14;
  if ((v33_.v33[0] & 1) != 0) {
    v16 = v33_.v34;
  }
  else {
    v16 = (char*)v33_.v33 + 1;
  }
  LayoutAccessor_1562060((char*)v14, (__int64)v35_.v38, v16);
  LayoutAccessor_1562cf0(v15, (const char*)v35_.v35 + 1);
  LayoutAccessor_1562cf0(v15, (const char*)&v40 + 1);
  if ((a4 & 1) == 0) {
    if (a2 == 4) {
      LOBYTE(v29_.v29[0]) = 24;
      v17 = (char*)v29_.v29 + 1;
      strcpy((char*)v29_.v29 + 1, "FF_Positive5");
      goto LABEL_45;
    }
    v18 = game_util_Format("FF_Activity_Result_%s",
                           (const char*)&GameData_1bff24c +
                               *((int*)&GameData_1bff24c + a2));
    v19 = strlen(v18);
    if (v19 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v20 = v19;
    if (v19 >= 0x17) {
      if ((v19 | 7) == 0x17) {
        v22 = 26;
      }
      else {
        v22 = (v19 | 7) + 1;
      }
      v21 = (const char*)fw_memory_HeapManager_Allocate(
          fw_memory_g_heap_manager, v22, 16, 0);
      v29_.v29[1] = v20;
      v29_.v30 = v21;
      v29_.v29[0] = v22 | 1;
    }
    else {
      LOBYTE(v29_.v29[0]) = 2 * v19;
      v21 = (char*)v29_.v29 + 1;
      if (v19 == 0) {
      LABEL_42:
        v21[v20] = 0;
        if ((v29_.v29[0] & 1) != 0) {
          v17 = v29_.v30;
        }
        else {
          v17 = (char*)v29_.v29 + 1;
        }
      LABEL_45:
        Se_80e330(a1, v17);
        if ((v29_.v29[0] & 1) != 0 && v29_.v30 != nullptr) {
          v23 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, (__int64)v29_.v30);
        }
        goto LABEL_50;
      }
    }
    memmove((__int64)v21, (__int64)v18, v20);
    goto LABEL_42;
  }
LABEL_50:
  if ((v31 & 1) != 0 && v32 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v24,
                                  v32);
  }
  if ((v33_.v33[0] & 1) != 0 && v33_.v34 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v25,
                                  (__int64)v33_.v34);
  }
  if ((v35_.v35[0] & 1) != 0 && v35_.v36 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26,
                                  v35_.v36);
  }
  if ((v35_.v37 & 1) != 0 && v35_.v39 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  v35_.v39);
  }
  if ((v40 & 1) != 0 && v41 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28,
                                  v41);
  }
}

#pragma GCC visibility pop
