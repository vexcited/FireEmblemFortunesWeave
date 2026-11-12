#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_13262e0(_QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_157cb40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1595650(_QWORD, _QWORD);
__int64 GameRoutine_1903280(_QWORD, _QWORD);
__int64 GameRoutine_1903880(_QWORD, _QWORD);
__int64 GameRoutine_8a1ae0(_QWORD);
__int64 GameRoutine_ae0560(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 game_menu_PageTab_SetupText(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                    _QWORD);
__int64 game_menu_PageTab_Update(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_1ab8d4c;
extern _UNKNOWN* GameData_1fa8308;
extern __int64 (*GameData_210f100[])();
extern __int64 (*GameData_210f180[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c790;
extern __int64* GameData_212c970[153];
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_8a7fd0(void);
__int64 ProcGmapShopGuideMenu_Unknown84_alt1(__int64* a1) __asm__(
    "ProcGmapShopGuideMenu_Unknown84");
__int64 ProcGmapShopGuideMenu_Unknown104(__int64 a1, char a2);
__int64 ProcGmapShopGuideMenu_Unknown106(__int64 a1, char a2);
extern __int64 GameData_21ca018;
__int64 ProcGmapShopGuideMenu_1903280(__int64 a1, unsigned __int8 a2);
_QWORD* GameRoutine_1903880_alt1(_QWORD* result, int,
                                 long double) __asm__("GameRoutine_1903880");
__int64 game_gmap_anonymous_ProcGmapShopGuideMenu_OnInit_closure_Invoke_alt1(
    __int64 result,
    __int64 a2) __asm__("game_gmap_anonymous_ProcGmapShopGuideMenu_OnInit_"
                        "closure_Invoke");
__int64
game_gmap_anonymous_ProcGmapShopGuideMenu_CreateBindMenuImpl_closure_Invoke_1903d70_alt1(
    __int64 a1, _DWORD* a2,
    unsigned __int8* a3) __asm__("game_gmap_anonymous_ProcGmapShopGuideMenu_"
                                 "CreateBindMenuImpl_closure_Invoke_1903d70");
__int64
game_gmap_anonymous_ProcGmapShopGuideMenu_CreateBindMenuImpl_closure_Invoke_1903f80(
    __int64 result, __int64 a2);
__int64 EmptyShopMenuItem_Buy_186b4c0(__int64, __int64, __int64, char, __int64);
__int64 GameRoutine_155f760(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16fdbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1700e60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8a29c0(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_210f200[])();
extern __int64 (*GameData_210f290[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 fw_memory_g_heap_manager;
extern char* msg_MessageManager_empty_text_;
void __attribute__((noreturn)) GameRoutine_8a5530(void);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void
game_gmap_anonymous_ProcGmapShopGuideMenu_OnInit_closure_Invoke_19036e0(
    PSEUDO_X8 x8_, __int64 a1, int* a2);
void game_gmap_anonymous_ProcGmapShopGuideMenu_CreateBindMenuImpl(__int64 a1,
                                                                  int a2);
_QWORD* game_gmap_anonymous_ProcGmapShopGuideMenu_CreateBindMenuImpl_alt1(
    _QWORD* result, int) __asm__("game_gmap_anonymous_ProcGmapShopGuideMenu_"
                                 "CreateBindMenuImpl");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_menu_PageTab_Move_alt1(int*, int,
                                    char) __asm__("game_menu_PageTab_Move");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn))
GameRoutine_8a5530_alt1() __asm__("GameRoutine_8a5530");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void game_menu_PageTab_Update_alt1(int*) __asm__("game_menu_PageTab_Update");
__int64
game_gmap_anonymous_ProcGmapShopGuideMenu_CreateBindMenuImpl_closure_Invoke_1903d70(
    __int64 a1, _DWORD* a2, char* a3);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 GameRoutine_1595650_alt1(unsigned int,
                                 const char*) __asm__("GameRoutine_1595650");
__int64 GameRoutine_ae0560_alt1() __asm__("GameRoutine_ae0560");
__int64 Impl_13262e0(__int64);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_menu_PageTab_SetupText_alt1(
    int*, __int64, __int64, unsigned int, unsigned int,
    unsigned int) __asm__("game_menu_PageTab_SetupText");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
const char*
GameRoutine_8a1ae0_alt1(const char* result) __asm__("GameRoutine_8a1ae0");
void GameRoutine_157cb40_alt1(__int64*, int, __int64, __int64, unsigned int,
                              char) __asm__("GameRoutine_157cb40");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_8a7fd0_alt1() __asm__("GameRoutine_8a7fd0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 ProcGmapShopGuideMenu_Unknown84(__int64 a1);
void game_gmap_anonymous_ProcGmapShopGuideMenu_OnInit_closure_Invoke(
    __int64 a1, __int64 a2);

__int64 ProcGmapShopGuideMenu_Unknown84(__int64 a1)
{
  __int64* v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  _QWORD* v86;
  __int64 v87;
  _QWORD* v88;
  _QWORD* v89;
  __int64 v90;
  int v91;
  __int64 v92;
  unsigned int v93;
  __int64 v94;
  __int64 result;
  unsigned __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v99;
  unsigned __int64 v100;
  _QWORD* v101;
  _QWORD* v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64 v105;
  _QWORD* v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  char* v110;
  __int64 v111;
  unsigned __int64 v112;
  __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  char* v121;
  unsigned __int64 v122;
  struct {
    __int64 v123;
    __int64 v124;
  } v123_;
  struct {
    _QWORD v125[4];
    _QWORD* v126;
  } v125_;
  _QWORD* v127;

  v2 = LayoutAccessor_155fbe0((__int64*)(a1 + 848), "L_Stock");
  if (game_GameModeData_instance_ != 0) {
    v3 = *(_DWORD*)(game_GameModeData_instance_ + 72);
  }
  else {
    v3 = 0;
  }
  GameRoutine_157cb40_alt1(v2, 0, (__int64)"Icon", (__int64)"T_Num", v3, 1);
  v4 = *(_QWORD*)(a1 + 1208);
  *(_QWORD*)(a1 + 1224) = *(_QWORD*)(a1 + 1216);
  v5 = Impl_13262e0(v4);
  if (v5 == 0) {
    v10 = ProcGmapShopGuideMenu_1903280(a1, 1u);
    if (v10 != 0) {
      v11 = *(__int64**)(a1 + 1224);
      v12 = *(_QWORD*)(a1 + 1232);
      if ((unsigned __int64)v11 >= v12) {
        v14 = *(_QWORD*)(a1 + 1216);
        v15 = (unsigned __int64)v11 - v14;
        v16 = ((__int64)v11 - v14) >> 3;
        v17 = v16 + 1;
        if ((unsigned __int64)(v16 + 1) >> 61 != 0) {
          goto LABEL_176;
        }
        v18 = v12 - v14;
        if (v18 >> 2 > v17) {
          v17 = v18 >> 2;
        }
        if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
          v19 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v19 = v17;
        }
        if (v19 != 0) {
          if (v19 >> 61 != 0) {
            goto LABEL_177;
          }
          v20 = v10;
          v21 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v19, 16, 0);
          v10 = v20;
        }
        else {
          v21 = 0;
        }
        v51 = v21 + 8 * v19;
        v52 = v21 + v15 - 8 * v16;
        *(_QWORD*)(v21 + v15) = v10;
        v13 = v21 + v15 + 8;
        memcpy_alt1(v52, v14, v15);
        *(_QWORD*)(a1 + 1216) = v52;
        *(_QWORD*)(a1 + 1224) = v13;
        *(_QWORD*)(a1 + 1232) = v51;
        if (v14 != 0) {
          v53 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v53 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, v14);
        }
      }
      else {
        *v11 = v10;
        v13 = (__int64)(v11 + 1);
      }
      *(_QWORD*)(a1 + 1224) = v13;
    }
    v54 = ProcGmapShopGuideMenu_1903280(a1, 2u);
    if (v54 != 0) {
      v55 = *(__int64**)(a1 + 1224);
      v56 = *(_QWORD*)(a1 + 1232);
      if ((unsigned __int64)v55 >= v56) {
        v58 = *(_QWORD*)(a1 + 1216);
        v59 = (unsigned __int64)v55 - v58;
        v60 = ((__int64)v55 - v58) >> 3;
        v61 = v60 + 1;
        if ((unsigned __int64)(v60 + 1) >> 61 != 0) {
          goto LABEL_176;
        }
        v62 = v56 - v58;
        if (v62 >> 2 > v61) {
          v61 = v62 >> 2;
        }
        if ((unsigned __int64)v62 >= 0x7FFFFFFFFFFFFFF8LL) {
          v63 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v63 = v61;
        }
        if (v63 != 0) {
          if (v63 >> 61 != 0) {
            goto LABEL_177;
          }
          v64 = v54;
          v65 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v63, 16, 0);
          v54 = v64;
        }
        else {
          v65 = 0;
        }
        v66 = v65 + 8 * v63;
        v67 = v65 + v59 - 8 * v60;
        *(_QWORD*)(v65 + v59) = v54;
        v57 = v65 + v59 + 8;
        memcpy_alt1(v67, v58, v59);
        *(_QWORD*)(a1 + 1216) = v67;
        *(_QWORD*)(a1 + 1224) = v57;
        *(_QWORD*)(a1 + 1232) = v66;
        if (v58 != 0) {
          v68 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v68 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, v58);
        }
      }
      else {
        *v55 = v54;
        v57 = (__int64)(v55 + 1);
      }
      *(_QWORD*)(a1 + 1224) = v57;
    }
    v69 = ProcGmapShopGuideMenu_1903280(a1, 4u);
    if (v69 != 0) {
      v70 = *(__int64**)(a1 + 1224);
      v71 = *(_QWORD*)(a1 + 1232);
      if ((unsigned __int64)v70 >= v71) {
        v73 = *(_QWORD*)(a1 + 1216);
        v74 = (unsigned __int64)v70 - v73;
        v75 = ((__int64)v70 - v73) >> 3;
        v76 = v75 + 1;
        if ((unsigned __int64)(v75 + 1) >> 61 != 0) {
          goto LABEL_176;
        }
        v77 = v71 - v73;
        if (v77 >> 2 > v76) {
          v76 = v77 >> 2;
        }
        if ((unsigned __int64)v77 >= 0x7FFFFFFFFFFFFFF8LL) {
          v78 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v78 = v76;
        }
        if (v78 != 0) {
          if (v78 >> 61 != 0) {
            goto LABEL_177;
          }
          v79 = v69;
          v80 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v78, 16, 0);
          v69 = v79;
        }
        else {
          v80 = 0;
        }
        v81 = v80 + 8 * v78;
        v82 = v80 + v74 - 8 * v75;
        *(_QWORD*)(v80 + v74) = v69;
        v72 = v80 + v74 + 8;
        memcpy_alt1(v82, v73, v74);
        *(_QWORD*)(a1 + 1216) = v82;
        *(_QWORD*)(a1 + 1224) = v72;
        *(_QWORD*)(a1 + 1232) = v81;
        if (v73 != 0) {
          v83 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v83 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v83, v73);
        }
      }
      else {
        *v70 = v69;
        v72 = (__int64)(v70 + 1);
      }
      *(_QWORD*)(a1 + 1224) = v72;
    }
    v84 = *(_QWORD*)(*(_QWORD*)(a1 + 1208) + 120LL);
    if (v84 != GameRoutine_ae0560_alt1()) {
      goto LABEL_111;
    }
    v96 = game_HashString_alt1((__int64)&GameData_1ab8d4c);
    if (v96 == 0) {
      goto LABEL_111;
    }
    v97 = *(_QWORD*)(*GameData_212c970[0] + 96);
    if (v97 == 0 || *(_QWORD*)(*GameData_212c970[0] + 112) == 0) {
      goto LABEL_111;
    }
    v99 = v97 - 1;
    if ((v97 & (v97 - 1)) != 0) {
      v100 = v96;
      if (v96 >= v97) {
        v100 = v96 % v97;
      }
    }
    else {
      v100 = v99 & v96;
    }
    v101 = *(_QWORD**)(*(_QWORD*)(*GameData_212c970[0] + 88) + 8 * v100);
    if (v101 == nullptr) {
      goto LABEL_111;
    }
    v102 = (_QWORD*)*v101;
    if (v102 == nullptr) {
      goto LABEL_111;
    }
    if ((v97 & v99) == 0) {
      while (1) {
        v104 = v102[1];
        if (v104 == v96) {
          if (v102[2] == v96) {
            goto LABEL_157;
          }
        }
        else if ((v104 & v99) != v100) {
          goto LABEL_111;
        }
        v102 = (_QWORD*)*v102;
        if (v102 == nullptr) {
          goto LABEL_111;
        }
      }
    }
    while (1) {
      v103 = v102[1];
      if (v103 == v96) {
        if (v102[2] == v96) {
        LABEL_157:
          v105 = v102[3];
          if (v105 == 0 ||
              (GameRoutine_1595650_alt1(0xCu, *(const char**)(v105 + 8)) & 1) !=
                  0) {
            goto LABEL_111;
          }
          v106 = *(_QWORD**)(a1 + 1224);
          v107 = *(_QWORD*)(a1 + 1232);
          if ((unsigned __int64)v106 < v107) {
            *v106 = v105;
            v108 = (__int64)(v106 + 1);
          LABEL_175:
            *(_QWORD*)(a1 + 1224) = v108;
            goto LABEL_111;
          }
          v109 = *(_QWORD*)(a1 + 1216);
          v110 = (char*)v106 - v109;
          v111 = ((__int64)v106 - v109) >> 3;
          v112 = v111 + 1;
          if ((unsigned __int64)(v111 + 1) >> 61 == 0) {
            v113 = v107 - v109;
            if (v113 >> 2 > v112) {
              v112 = v113 >> 2;
            }
            if ((unsigned __int64)v113 >= 0x7FFFFFFFFFFFFFF8LL) {
              v114 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v114 = v112;
            }
            if (v114 == 0) {
              v115 = 0;
            LABEL_171:
              v116 = v115 + 8 * v114;
              v117 = (unsigned __int64)v106 - v109;
              v118 = (__int64)&v110[v115 + -8 * v111];
              *(_QWORD*)&v110[v115] = v105;
              v108 = (__int64)&v110[v115 + 8];
              memcpy_alt1(v118, v109, v117);
              *(_QWORD*)(a1 + 1216) = v118;
              *(_QWORD*)(a1 + 1224) = v108;
              *(_QWORD*)(a1 + 1232) = v116;
              if (v109 != 0) {
                v119 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v119 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v119, v109);
              }
              goto LABEL_175;
            }
            if (v114 >> 61 == 0) {
              v115 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v114, 16, 0);
              goto LABEL_171;
            }
          LABEL_177:
            GameRoutine_60a210_alt1();
          }
        LABEL_176:
          GameRoutine_8a7fd0_alt1();
        }
      }
      else {
        if (v103 >= v97) {
          v103 %= v97;
        }
        if (v103 != v100) {
          goto LABEL_111;
        }
      }
      v102 = (_QWORD*)*v102;
      if (v102 == nullptr) {
        goto LABEL_111;
      }
    }
  }
  v6 = *(unsigned __int16*)(v5 + 32);
  v7 = v5;
  if (*(_WORD*)(v5 + 32) == 0) {
    goto LABEL_111;
  }
  v8 = 0;
  v9 = GameData_212c970[0];
  while (2) {
    v23 = (__int64)*(&GameData_1fa8308 +
                     (unsigned __int8)GameRoutine_8a1ae0_alt1(
                         *(const char**)(*(_QWORD*)(v7 + 40) + 8 * v8)));
    v24 = *(_QWORD*)(a1 + 1208);
    if ((*(_BYTE*)v24 & 1) != 0) {
      v25 = *(_QWORD*)(v24 + 16);
    }
    else {
      v25 = v24 + 1;
    }
    v26 = game_util_Format_alt1("%s_%s", v25, v23);
    v27 = game_HashString_alt1((__int64)v26);
    if (v27 == 0) {
      goto LABEL_21;
    }
    v28 = *(_QWORD*)(*v9 + 96);
    if (v28 == 0 || *(_QWORD*)(*v9 + 112) == 0) {
      goto LABEL_21;
    }
    v30 = v28 - 1;
    if ((v28 & (v28 - 1)) != 0) {
      v31 = v27;
      if (v27 >= v28) {
        v31 = v27 % v28;
      }
    }
    else {
      v31 = v30 & v27;
    }
    v32 = *(_QWORD**)(*(_QWORD*)(*v9 + 88) + 8 * v31);
    if (v32 == nullptr) {
      goto LABEL_21;
    }
    v33 = (_QWORD*)*v32;
    if (v33 == nullptr) {
      goto LABEL_21;
    }
    if ((v28 & v30) == 0) {
      while (1) {
        v35 = v33[1];
        if (v35 == v27) {
          if (v33[2] == v27) {
            goto LABEL_50;
          }
        }
        else if ((v35 & v30) != v31) {
          goto LABEL_21;
        }
        v33 = (_QWORD*)*v33;
        if (v33 == nullptr) {
          goto LABEL_21;
        }
      }
    }
    while (1) {
      v34 = v33[1];
      if (v34 == v27) {
        break;
      }
      if (v34 >= v28) {
        v34 %= v28;
      }
      if (v34 != v31) {
        goto LABEL_21;
      }
    LABEL_39:
      v33 = (_QWORD*)*v33;
      if (v33 == nullptr) {
        goto LABEL_21;
      }
    }
    if (v33[2] != v27) {
      goto LABEL_39;
    }
  LABEL_50:
    v36 = v33[3];
    if (v36 == 0 ||
        (GameRoutine_1595650_alt1(0, *(const char**)(v36 + 8)) & 1) != 0) {
      goto LABEL_21;
    }
    v37 = *(_QWORD**)(a1 + 1224);
    v38 = *(_QWORD*)(a1 + 1232);
    if ((unsigned __int64)v37 < v38) {
      *v37 = v36;
      v22 = (__int64)(v37 + 1);
      goto LABEL_20;
    }
    v39 = *(_QWORD*)(a1 + 1216);
    v40 = (unsigned __int64)v37 - v39;
    v41 = ((__int64)v37 - v39) >> 3;
    v42 = v41 + 1;
    if ((unsigned __int64)(v41 + 1) >> 61 != 0) {
      goto LABEL_176;
    }
    v43 = v38 - v39;
    if (v43 >> 2 > v42) {
      v42 = v43 >> 2;
    }
    if ((unsigned __int64)v43 >= 0x7FFFFFFFFFFFFFF8LL) {
      v44 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v44 = v42;
    }
    if (v44 == 0) {
      v46 = 0;
      goto LABEL_63;
    }
    v120 = ((__int64)v37 - v39) >> 3;
    v121 = (char*)v37 - v39;
    if (v44 >> 61 != 0) {
      goto LABEL_177;
    }
    v45 = *(_QWORD*)(a1 + 1216);
    v46 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v44, 16, 0);
    v41 = v120;
    v40 = (unsigned __int64)v121;
    v39 = v45;
  LABEL_63:
    v47 = v46 + 8 * v44;
    v48 = v46 + v40 - 8 * v41;
    v122 = v47;
    *(_QWORD*)(v46 + v40) = v36;
    v22 = v46 + v40 + 8;
    v49 = v39;
    memcpy_alt1(v48, v39, v40);
    *(_QWORD*)(a1 + 1216) = v48;
    *(_QWORD*)(a1 + 1224) = v22;
    *(_QWORD*)(a1 + 1232) = v122;
    if (v49 != 0) {
      v50 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v50 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v50, v49);
    }
  LABEL_20:
    *(_QWORD*)(a1 + 1224) = v22;
  LABEL_21:
    if (++v8 != v6) {
      continue;
    }
    break;
  }
LABEL_111:
  v85 = *(_QWORD*)(a1 + 1208);
  v86 = v125_.v125;
  v125_.v125[0] = GameData_210f100;
  v125_.v125[1] = a1;
  v125_.v126 = v125_.v125;
  if (v85 == 0) {
    goto LABEL_122;
  }
  v87 = *(_QWORD*)(*GameData_212c790 + 8);
  v88 = *(_QWORD**)(v87 + 8);
  v89 = *(_QWORD**)(v87 + 16);
  if (v88 == v89) {
    v86 = v125_.v125;
    goto LABEL_122;
  }
  do {
    if (*(_QWORD*)*v88 == v85) {
      v127 = (_QWORD*)*v88;
      if (v125_.v126 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, _QWORD**))(*v125_.v126 + 48LL))(v125_.v126, &v127);
    }
    ++v88;
  } while (v88 != v89);
  v86 = v125_.v126;
  if (v125_.v126 == v125_.v125) {
  LABEL_122:
    v90 = 32;
  LABEL_123:
    (*(void (**)(__int64))(*v86 + v90))((__int64)v86);
  }
  else if (v125_.v126 != nullptr) {
    v90 = 40;
    goto LABEL_123;
  }
  *(_DWORD*)(a1 + 1072) =
      ((*(_QWORD*)(a1 + 1224) - *(_QWORD*)(a1 + 1216)) >> 3) - 1;
  v91 = *(_DWORD*)(a1 + 1200);
  *(_DWORD*)(a1 + 1076) = v91;
  *(_DWORD*)(a1 + 1080) = v91;
  LayoutAccessor_1560070((void*)(&v123_.v123), (__int64*)(a1 + 848),
                         "L_MenuTab");
  v125_.v125[0] = GameData_210f180;
  v125_.v125[1] = a1;
  v92 = *(_QWORD*)a1;
  v125_.v126 = v125_.v125;
  v93 = (*(__int64 (**)(__int64))(v92 + 192))(a1);
  game_menu_PageTab_SetupText_alt1((int*)(a1 + 1072), (__int64)&v123_.v123,
                                   (__int64)v125_.v125, v93, 4u, 5u);
  if (v125_.v126 == v125_.v125) {
    v94 = 32;
  LABEL_128:
    (*(void (**)(__int64))(*v125_.v126 + v94))((__int64)v125_.v126);
  }
  else if (v125_.v126 != nullptr) {
    v94 = 40;
    goto LABEL_128;
  }
  result = v123_.v124;
  if (v123_.v124 != 0) {
    return std___1___shared_weak_count___release_weak_alt2(v123_.v124);
  }
  return result;
}

__int64 ProcGmapShopGuideMenu_Unknown104(__int64 a1, char a2)
{
  int v2;
  __int64 v3;
  int v5;
  char v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_DWORD*)(a1 + 1076);
  v3 = *(_QWORD*)(a1 + 1088);
  if (v2 < (unsigned __int64)((*(_QWORD*)(a1 + 1096) - v3) >> 2)) {
    v5 = *(_DWORD*)(v3 + 4LL * v2);
    if (v2 != v5) {
      *(_DWORD*)(a1 + 1080) = v2;
      *(_DWORD*)(a1 + 1076) = v5;
      v6 = a2;
      game_menu_PageTab_Update(a1 + 1072);
      a2 = v6;
    }
  }
  if ((game_menu_PageTab_Move(a1 + 1072, 0xFFFFFFFFLL, a2 & 1) & 1) == 0) {
    return 0;
  }
  v7 = *(unsigned int*)(a1 + 1076);
  v8 = *(_QWORD*)(a1 + 1088);
  if ((int)v7 < (unsigned __int64)((*(_QWORD*)(a1 + 1096) - v8) >> 2)) {
    v7 = *(unsigned int*)(v8 + 4LL * (int)v7);
  }
  GameRoutine_1903880(a1, v7);
  return 13;
}

__int64 ProcGmapShopGuideMenu_Unknown106(__int64 a1, char a2)
{
  int v2;
  __int64 v3;
  int v5;
  char v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_DWORD*)(a1 + 1076);
  v3 = *(_QWORD*)(a1 + 1088);
  if (v2 < (unsigned __int64)((*(_QWORD*)(a1 + 1096) - v3) >> 2)) {
    v5 = *(_DWORD*)(v3 + 4LL * v2);
    if (v2 != v5) {
      *(_DWORD*)(a1 + 1080) = v2;
      *(_DWORD*)(a1 + 1076) = v5;
      v6 = a2;
      game_menu_PageTab_Update(a1 + 1072);
      a2 = v6;
    }
  }
  if ((game_menu_PageTab_Move(a1 + 1072, 1, a2 & 1) & 1) == 0) {
    return 0;
  }
  v7 = *(unsigned int*)(a1 + 1076);
  v8 = *(_QWORD*)(a1 + 1088);
  if ((int)v7 < (unsigned __int64)((*(_QWORD*)(a1 + 1096) - v8) >> 2)) {
    v7 = *(unsigned int*)(v8 + 4LL * (int)v7);
  }
  GameRoutine_1903880(a1, v7);
  return 13;
}

__int64 ProcGmapShopGuideMenu_1903280(__int64 a1, unsigned __int8 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = (__int64)*(&GameData_1fa8308 + a2);
  v3 = *(_QWORD*)(a1 + 1208);
  if ((*(_BYTE*)v3 & 1) != 0) {
    v4 = *(_QWORD*)(v3 + 16);
  }
  else {
    v4 = v3 + 1;
  }
  v5 = game_util_Format("%s_%s", v4, v2);
  v6 = game_HashString(v5);
  if (v6 == 0) {
    return 0;
  }
  v7 = *(_QWORD*)(GameData_21ca018 + 96);
  if (v7 == 0 || *(_QWORD*)(GameData_21ca018 + 112) == 0) {
    return 0;
  }
  v9 = v7 - 1;
  if ((v7 & (v7 - 1)) != 0) {
    v10 = v6;
    if (v6 >= v7) {
      v10 = v6 % v7;
    }
  }
  else {
    v10 = v9 & v6;
  }
  v11 = *(_QWORD**)(*(_QWORD*)(GameData_21ca018 + 88) + 8 * v10);
  if (v11 == nullptr) {
    return 0;
  }
  v12 = (_QWORD*)*v11;
  if (v12 == nullptr) {
    return 0;
  }
  if ((v7 & v9) == 0) {
    while (1) {
      v15 = v12[1];
      if (v15 == v6) {
        if (v12[2] == v6) {
          goto LABEL_29;
        }
      }
      else if ((v15 & v9) != v10) {
        return 0;
      }
      v12 = (_QWORD*)*v12;
      v14 = 0;
      if (v12 == nullptr) {
        return v14;
      }
    }
  }
  while (1) {
    v13 = v12[1];
    if (v13 == v6) {
      break;
    }
    if (v13 >= v7) {
      v13 %= v7;
    }
    if (v13 != v10) {
      return 0;
    }
  LABEL_18:
    v12 = (_QWORD*)*v12;
    if (v12 == nullptr) {
      return 0;
    }
  }
  if (v12[2] != v6) {
    goto LABEL_18;
  }

LABEL_29:
  v16 = v12[3];
  if (v16 == 0) {
    return 0;
  }
  if ((GameRoutine_1595650(0, *(_QWORD*)(v16 + 8)) & 1) != 0) {
    return 0;
  }
  else {
    return v16;
  }
}

void game_gmap_anonymous_ProcGmapShopGuideMenu_OnInit_closure_Invoke(__int64 a1,
                                                                     __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  unsigned __int64 v6;
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

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 96LL);
  if (v2 != 0 && *(_BYTE*)(v2 + 32) == 2) {
    v3 = *(_QWORD**)(a1 + 8);
    v4 = *(_QWORD*)(v2 + 80);
    v5 = (_QWORD*)v3[153];
    v6 = v3[154];
    if ((unsigned __int64)v5 >= v6) {
      v8 = v3[152];
      v9 = (char*)v5 - v8;
      v10 = ((__int64)v5 - v8) >> 3;
      v11 = v10 + 1;
      if ((unsigned __int64)(v10 + 1) >> 61 != 0) {
        GameRoutine_8a7fd0_alt1();
      }
      v12 = v6 - v8;
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
          GameRoutine_60a210_alt1();
        }
        v15 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      }
      else {
        v15 = 0;
      }
      v16 = v15 + 8 * v14;
      v17 = (unsigned __int64)v5 - v8;
      v18 = (__int64)&v9[v15 + -8 * v10];
      *(_QWORD*)&v9[v15] = v4;
      v7 = (__int64)&v9[v15 + 8];
      memcpy_alt1(v18, v8, v17);
      v3[152] = v18;
      v3[153] = v7;
      v3[154] = v16;
      if (v8 != 0) {
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v13 + v19, v8);
      }
    }
    else {
      *v5 = v4;
      v7 = (__int64)(v5 + 1);
    }
    v3[153] = v7;
  }
}

__attribute__((swiftcall)) void

game_gmap_anonymous_ProcGmapShopGuideMenu_OnInit_closure_Invoke_19036e0(
    PSEUDO_X8 x8_, __int64 a1, int* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  _BYTE* v5;
  char* v6;
  unsigned __int64 result;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v4 = **(_QWORD**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1216LL) +
                               8LL * *a2) +
                    40LL);
  if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1216LL) +
                                       8LL * *a2) +
                            40LL) +
                 8LL) == v4) {
    GameRoutine_8a5530_alt1();
  }
  v5 = *(_BYTE**)(*(_QWORD*)v4 + 32LL);
  if (v5 != nullptr && *v5 != 0) {
    v6 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v5, 0);
  }
  else {
    v6 = msg_MessageManager_empty_text_;
  }
  result = strlen_alt1(v6);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v8 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (result | 7) + 1;
    }
    v11 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v10, 16,
                                              0);
    a3[1] = v8;
    a3[2] = v11;
    *a3 = v10 | 1;
    v9 = v11;
  }
  else {
    *(_BYTE*)a3 = 2 * result;
    v9 = (__int64)a3 + 1;
    if (result == 0) {
      goto LABEL_15;
    }
  }
  result = memmove_alt1(v9, (__int64)v6, v8);
LABEL_15:
  *(_BYTE*)(v9 + v8) = 0;
  {
    result;
    return;
  }
}

void game_gmap_anonymous_ProcGmapShopGuideMenu_CreateBindMenuImpl(__int64 a1,
                                                                  int a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  unsigned __int32 v5;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BOOL4 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int32x4_t* v17;
  __int64 v18;
  _QWORD* v19;
  int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  _DWORD* v24;
  _QWORD* v25;
  __int64 v26;
  int v27;
  int v28;
  _BYTE v29[32];
  _BYTE* v30;
  _BYTE v31[32];
  _BYTE* v32;
  _QWORD v33[4];
  _QWORD* v34;
  _QWORD v35[4];
  _QWORD* v36;
  _QWORD v37[4];
  _QWORD* v38;
  _QWORD v39[4];
  _QWORD* v40;
  _QWORD v41[4];
  _QWORD* v42;
  _QWORD v43[4];
  _QWORD* v44;
  char v45;

  v3 = *(_QWORD*)(a1 + 864);
  v4 = 0;
  v5 = 0;
  *(_DWORD*)(a1 + 1200) = a2;
  if (v3 == 0) {
    goto LABEL_19;
  }
  v8 = *(_QWORD*)(a1 + 856);
  if (v8 == 0) {
    goto LABEL_19;
  }
  v9 = (__int64*)(a1 + 848);
  v10 = std___1___shared_weak_count_lock(v8);
  if (v10 == 0) {
    goto LABEL_11;
  }
  v11 = *v9;
  if (*v9 != 0) {
    v2 = *(unsigned __int8*)(v11 + 24);
    v12 = v11 + 152;
    if (v2 == 0) {
      v12 = 0;
    }
    v13 = v12 != *(_QWORD*)(a1 + 864);
  }
  else {
    v13 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v13) {
    LABEL_11:
      v14 = *(_QWORD*)(a1 + 856);
      v4 = 0;
      if (v14 == 0 || *(_QWORD*)(v14 + 8) == -1) {
        goto LABEL_19;
      }
      goto LABEL_16;
    }
  }
  else {
    v15 = v10;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak_alt1(v15);
    if (v13) {
      goto LABEL_11;
    }
  }
  v4 = 0;
  if ((v2 & 1) != 0) {
  LABEL_16:
    v16 = *(_QWORD*)(a1 + 864);
    if (v16 != 0) {
      v17 = (int32x4_t*)GameRoutine_155f760(a1 + 848, v16, "N_Lct");
      v4 = 0;
      if (v17 != nullptr) {
        v5 = LANES128(v17[9]).n128_u32[3];
        LODWORD(v4) = LANES128_OF(vdupq_laneq_s32(v17[7], 3)).n128_u32[0];
        HIDWORD(v4) = HIDWORD(LANES128(v17[8]).n128_u64[1]);
      }
    }
  }
LABEL_19:
  v18 = *(_QWORD*)(*(_QWORD*)(a1 + 1216) + 8LL * a2);
  if (v18 == 0) {
    return;
  }
  v19 = v43;
  v20 = HIDWORD(v4);
  v44 = v43;
  v43[0] = GameData_210f200;
  v43[1] = a1;
  v21 = *(unsigned __int8*)(*(_QWORD*)(v18 + 24) + 64LL);
  v22 = 32;
  if (v21 <= 3) {
    if (v21 != 1) {
      if (v21 != 2) {
        goto LABEL_41;
      }
      v28 = v4;
      v39[0] = GameData_210f200;
      v39[1] = a1;
      v40 = v39;
      v24 = (_DWORD*)EmptyShopMenuItem_Buy_186b4c0(a1, v18, 0, 1, (__int64)v39);
      v25 = v40;
      if (v40 == v39) {
        goto LABEL_35;
      }
      goto LABEL_32;
    }
    v28 = v4;
    v41[0] = GameData_210f200;
    v41[1] = a1;
    v42 = v41;
    v24 = (_DWORD*)EmptyShopMenuItem_Buy_186b4c0(a1, v18, 0, 1, (__int64)v41);
    v25 = v42;
    if (v42 != v41) {
      goto LABEL_32;
    }
  LABEL_35:
    v26 = 32;
    goto LABEL_36;
  }
  if (v21 == 4) {
    v28 = v4;
    v37[0] = GameData_210f200;
    v37[1] = a1;
    v38 = v37;
    v24 = (_DWORD*)GameRoutine_1700e60(a1, v18, 1, v37);
    v25 = v38;
    if (v38 != v37) {
      goto LABEL_32;
    }
    goto LABEL_35;
  }
  if (v21 == 5) {
    v28 = v4;
    v35[0] = GameData_210f200;
    v35[1] = a1;
    v36 = v35;
    v24 = (_DWORD*)GameRoutine_16fdbe0(a1, v18, 1, v35);
    v25 = v36;
    if (v36 != v35) {
      goto LABEL_32;
    }
    goto LABEL_35;
  }
  if (v21 != 6) {
    goto LABEL_41;
  }
  v28 = v4;
  v45 = 0;
  v33[0] = GameData_210f290;
  v33[1] = &v45;
  v34 = v33;
  GameRoutine_8a29c0(v18, v33);
  if (v34 == v33) {
    v23 = 32;
  }
  else {
    if (v34 == nullptr) {
      goto LABEL_47;
    }
    v23 = 40;
  }
  (*(void (**)(__int64))(*v34 + v23))((__int64)v34);
LABEL_47:
  if (v45 == 1) {
    if (v44 != nullptr) {
      if (v44 == v43) {
        v32 = v31;
        (*(void (**)(_QWORD*, _BYTE*))(*v44 + 24LL))(v44, v31);
      }
      else {
        v32 = (_BYTE*)(*(__int64 (**)(_QWORD*))(*v44 + 16LL))(v44);
      }
    }
    else {
      v32 = nullptr;
    }
    v24 = (_DWORD*)GameRoutine_1700e60(a1, v18, 1, v31);
    v25 = v32;
    if (v32 == v31) {
      goto LABEL_35;
    }
  }
  else {
    if (v44 != nullptr) {
      if (v44 == v43) {
        v30 = v29;
        (*(void (**)(_QWORD*, _BYTE*))(*v44 + 24LL))(v44, v29);
      }
      else {
        v30 = (_BYTE*)(*(__int64 (**)(_QWORD*))(*v44 + 16LL))(v44);
      }
    }
    else {
      v30 = nullptr;
    }
    v24 = (_DWORD*)EmptyShopMenuItem_Buy_186b4c0(a1, v18, 0, 1, (__int64)v29);
    v25 = v30;
    if (v30 == v29) {
      goto LABEL_35;
    }
  }
LABEL_32:
  if (v25 != nullptr) {
    v26 = 40;
  LABEL_36:
    (*(void (**)(__int64))(*v25 + v26))((__int64)v25);
  }
  v19 = v44;
  v27 = v24[89] | 1;
  v24[92] = v20;
  v24[93] = v5;
  v24[89] = v27;
  v24[91] = v28;
  if (v19 == v43) {
    v22 = 32;
  }
  else {
    if (v19 == nullptr) {
      return;
    }
    v22 = 40;
  }
LABEL_41:
  (*(void (**)(__int64))(*v19 + v22))((__int64)v19);
}

__int64

game_gmap_anonymous_ProcGmapShopGuideMenu_CreateBindMenuImpl_closure_Invoke_1903d70(
    __int64 a1, _DWORD* a2, char* a3)
{
  __int64 v3;
  __int64 v4;
  int v5;
  char v6;
  unsigned __int64 v7;
  int v8;
  char v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v14;
  char v15;

  v3 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v3 + 1224) - *(_QWORD*)(v3 + 1216) != 8) {
    v4 = *(_QWORD*)(v3 + 1088);
    v5 = *(_DWORD*)(v3 + 1076);
    v6 = *a3;
    v7 = (*(_QWORD*)(v3 + 1096) - v4) >> 2;
    if ((*a2 & 0x80000000) != 0) {
      if (v7 > v5) {
        v14 = *(_DWORD*)(v4 + 4LL * v5);
        if (v5 != v14) {
          *(_DWORD*)(v3 + 1080) = v5;
          *(_DWORD*)(v3 + 1076) = v14;
          v15 = v6;
          game_menu_PageTab_Update_alt1((int*)(v3 + 1072));
          v6 = v15;
        }
      }
      if ((game_menu_PageTab_Move_alt1((int*)(v3 + 1072), -1, v6) & 1) != 0) {
        v10 = *(_DWORD*)(v3 + 1076);
        v11 = *(_QWORD*)(v3 + 1088);
        v12 = v10;
        if (v10 >= (unsigned __int64)((*(_QWORD*)(v3 + 1096) - v11) >> 2)) {
          goto LABEL_9;
        }
        goto LABEL_8;
      }
    }
    else {
      if (v7 > v5) {
        v8 = *(_DWORD*)(v4 + 4LL * v5);
        if (v5 != v8) {
          *(_DWORD*)(v3 + 1080) = v5;
          *(_DWORD*)(v3 + 1076) = v8;
          v9 = v6;
          game_menu_PageTab_Update_alt1((int*)(v3 + 1072));
          v6 = v9;
        }
      }
      if ((game_menu_PageTab_Move_alt1((int*)(v3 + 1072), 1, v6) & 1) != 0) {
        v10 = *(_DWORD*)(v3 + 1076);
        v11 = *(_QWORD*)(v3 + 1088);
        v12 = v10;
        if (v10 >= (unsigned __int64)((*(_QWORD*)(v3 + 1096) - v11) >> 2)) {
        LABEL_9:
          game_gmap_anonymous_ProcGmapShopGuideMenu_CreateBindMenuImpl_alt1(
              (_QWORD*)v3, v10);
          return 1;
        }
      LABEL_8:
        v10 = *(_DWORD*)(v11 + 4 * v12);
        goto LABEL_9;
      }
    }
  }
  return 0;
}

__int64

game_gmap_anonymous_ProcGmapShopGuideMenu_CreateBindMenuImpl_closure_Invoke_1903f80(
    __int64 result, __int64 a2)
{
  if ((((0x10000000000LL << *(_BYTE*)(*(_QWORD*)(**(_QWORD**)a2 + 48LL) +
                                      72LL)) |
        (1LL << *(_BYTE*)(*(_QWORD*)(**(_QWORD**)a2 + 48LL) + 73LL))) &
       0xFFBFFFFFFFA39FFFLL) == 0) {
    **(_BYTE**)(result + 8) = 1;
  }
  return result;
}

#pragma GCC visibility pop
