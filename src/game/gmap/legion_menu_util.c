#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* LayoutAccessor_1560520(__int64*, const char*, const char*, const char*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* GameRoutine_6380e0(__int64, __int64**);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_64be60();
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
void GameHr_157e0f0(__int64, const char*, const char*);
void GameRoutine_156c5d0(__int64, __int64, char);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void std___1_locale_Destroy_locale(__int64);
void LegionMenuUtil_InfoMenuItem_Unknown17(__int64 a1);

void LegionMenuUtil_InfoMenuItem_Unknown17(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  char* v18;
  char* v19;
  char* v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  atomic_ullong* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  atomic_ullong* v31;
  __int64* v32;
  char* v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  atomic_ullong* v38;
  __int64* v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64* v50;
  __int64* v51;
  __int64* v52;
  __int64 v53;
  _QWORD v54[7];
  struct {
    __int64* v55;
    __int64 v56;
    unsigned __int64 v57;
    __int64 (*v58)();
    unsigned __int64 v59;
  } v55_;
  struct {
    _QWORD v60[32];
    _QWORD* v61;
  } v60_;
  struct {
    __int64** v62;
    __int64 v63;
    char* v64;
    __int64 v65;
  } v62_;
  struct {
    char v66[8];
    char v67;
  } v66_;
  struct {
    _QWORD v68[2];
    int v69;
    char gap428_[4];
    __int64 v70;
    __int64 v71;
  } v68_;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v49 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v4);
  v6 = v49;
  if (v49 == nullptr) {
  LABEL_5:
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  LayoutAccessor_155e830((__int64)v6, 0);
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 592LL))(a1);
  v8 = *(unsigned int*)(a1 + 40);
  v54[0] = v7;
  v55_.v59 = 0;
  v68_.v69 = 0;
  v66_.v66[0] = 0;
  v55_.v57 = 0;
  v55_.v58 = GameRoutine_64be60;
  v66_.v67 = 0;
  v55_.v55 = v60_.v60;
  v55_.v56 = 256;
  v54[3] = 0;
  v54[4] = 108;
  v60_.v61 = v60_.v60;
  v54[2] = v8;
  v68_.v68[0] = "{}_{:02}";
  v68_.v68[1] = "";
  v68_.v70 = 0;
  v68_.v71 = 2;
  v62_.v64 = (const char*)v54;
  v62_.v65 = 108;
  v62_.v62 = &v55_.v55;
  v62_.v63 = 2;
  GameRoutine_6380e0((__int64)v68_.v68, (__int64**)&v62_.v62);
  if (v66_.v67 == 1) {
    std___1_locale_Destroy_locale((__int64)v66_.v66);
  }
  v9 = v55_.v57;
  if (v55_.v57 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v10 = (__int64)v60_.v61;
  if (v55_.v57 >= 0x17) {
    if ((v55_.v57 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v55_.v57 | 7) + 1;
    }
    v11 = (const char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v12, 16, 0);
    v62_.v63 = v9;
    v62_.v64 = v11;
    v62_.v62 = (__int64**)(v12 | 1);
    goto LABEL_16;
  }
  LOBYTE(v62_.v62) = 2 * v55_.v57;
  v11 = (char*)&v62_.v62 + 1;
  if (v55_.v57 != 0) {
  LABEL_16:
    memmove((__int64)v11, v10, v9);
  }
  v13 = v60_.v61;
  v11[v9] = 0;
  if (v13 != v60_.v60 && v13 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  (__int64)v13);
  }
  v15 = *(_QWORD*)(a1 + 8);
  v16 = (__int64)v62_.v64;
  v17 = (char)v62_.v62;
  v18 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 592LL))(a1);
  if ((v17 & 1) != 0) {
    v19 = (const char*)v16;
  }
  else {
    v19 = (char*)&v62_.v62 + 1;
  }
  LayoutAccessor_1560520((__int64*)(v15 + 952), v18, "MenuItemList", v19);
  if (((unsigned __int8)v62_.v62 & 1) != 0) {
    v20 = v62_.v64;
  }
  else {
    v20 = (char*)&v62_.v62 + 1;
  }
  LayoutAccessor_1560070((void*)(&v55_.v55),
                         (__int64*)(*(_QWORD*)(a1 + 8) + 952LL), v20);
  v22 = v55_.v55;
  v21 = v55_.v56;
  v23 = *(_QWORD*)(a1 + 56);
  v55_.v55 = nullptr;
  v55_.v56 = 0;
  *(_QWORD*)(a1 + 48) = v22;
  *(_QWORD*)(a1 + 56) = v21;
  if (v23 != 0) {
    std___1___shared_weak_count___release_weak(v23);
    if (v55_.v56 != 0) {
      std___1___shared_weak_count___release_weak(v55_.v56);
    }
    v21 = *(_QWORD*)(a1 + 56);
  }
  if (v21 == 0) {
    goto LABEL_36;
  }
  v24 = std___1___shared_weak_count_lock(v21);
  if (v24 == 0) {
    goto LABEL_36;
  }
  v25 = v24;
  v26 = (atomic_ullong*)(v24 + 8);
  v27 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v26, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v27 != nullptr) {
      goto LABEL_37;
    }
    goto LABEL_36;
  }
  v50 = v27;
  (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
  std___1___shared_weak_count___release_weak(v25);
  v27 = v50;
  if (v50 == nullptr) {
  LABEL_36:
    v27 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_37:
  LayoutAccessor_155e830((__int64)v27, 1);
  v28 = *(_QWORD*)(a1 + 56);
  if (v28 == 0) {
    goto LABEL_41;
  }
  v29 = std___1___shared_weak_count_lock(v28);
  if (v29 == 0) {
    goto LABEL_41;
  }
  v30 = v29;
  v31 = (atomic_ullong*)(v29 + 8);
  v32 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v31, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v51 = v32;
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak(v30);
    v32 = v51;
    if (v51 != nullptr) {
      goto LABEL_42;
    }
    goto LABEL_41;
  }
  if (v32 == nullptr) {
  LABEL_41:
    v32 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_42:
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    v33 = *(const char**)(a1 + 112);
  }
  else {
    v33 = (const char*)(a1 + 97);
  }
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    v34 = *(const char**)(a1 + 136);
  }
  else {
    v34 = (const char*)(a1 + 121);
  }
  GameHr_157e0f0((__int64)v32, v33, v34);
  v35 = *(_QWORD*)(a1 + 56);
  if (v35 == 0) {
    goto LABEL_52;
  }
  v36 = std___1___shared_weak_count_lock(v35);
  if (v36 == 0) {
    goto LABEL_52;
  }
  v37 = v36;
  v38 = (atomic_ullong*)(v36 + 8);
  v39 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v38, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v52 = v39;
    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
    std___1___shared_weak_count___release_weak(v37);
    v39 = v52;
    if (v52 != nullptr) {
      goto LABEL_53;
    }
    goto LABEL_52;
  }
  if (v39 == nullptr) {
  LABEL_52:
    v39 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_53:
  if (*(_BYTE*)(a1 + 144) != 0) {
    v40 = "StateOn";
  }
  else {
    v40 = "StateOff";
  }
  GameHr_1562680((__int64)v39, v40, 0x1.0000000000000p+0f);
  if (*(_BYTE*)(a1 + 83) != 5) {
    goto LABEL_65;
  }
  v41 = *(_QWORD*)(a1 + 56);
  if (v41 == 0) {
    goto LABEL_61;
  }
  v42 = std___1___shared_weak_count_lock(v41);
  if (v42 == 0) {
    goto LABEL_61;
  }
  v43 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v53 = v42;
    (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
    std___1___shared_weak_count___release_weak(v53);
    if (v43 != nullptr) {
      goto LABEL_62;
    }
    goto LABEL_61;
  }
  if (v43 == nullptr) {
  LABEL_61:
    v43 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_62:
  memset(v60_.v60, 255, 96);
  v44 = *msg_MessageManager_instance__ptr[0];
  v55_.v55 = GameData_212e348 + 2;
  v55_.v56 = 0xFFFF0001FFFF0000LL;
  v55_.v57 = 0xFFFF0004FFFF0002LL;
  v55_.v58 = (__int64 (*)())0xFFFF0006FFFF0005LL;
  v60_.v60[12] = 8;
  v55_.v59 = 0xFFFF0008FFFF0007LL;
  v45 = GameRoutine_a4dbe0(v44, "MID_Menu_Own", 0);
  if (v45 != nullptr) {
    v46 = (__int64)v45;
    v47 = ui_LayoutAccessor_FindTextBox(v43, (__int64)"T_State");
    if (v47 != 0) {
      GameRoutine_156c5d0(v47, v46, 0);
    }
  }
LABEL_65:
  if (((unsigned __int8)v62_.v62 & 1) != 0 && v62_.v64 != nullptr) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v48,
                                  (__int64)v62_.v64);
  }
}

#pragma GCC visibility pop
