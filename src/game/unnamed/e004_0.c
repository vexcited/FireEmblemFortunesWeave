#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern _DWORD GameData_1b835cc[3];
extern __int64 (*GameData_1fd4cf8[21])();
extern __int64 (*GameData_1fd4d30[14])();
extern __int64 (*GameData_1fd4d68[7])();
extern __int64 (*GameData_1fdc1d8[36])();
extern __int64 (*GameData_1fdce28[8])();
extern __int64 (*GameData_1fdce38[6])();
extern __int64 (*GameData_1fdd278[])();
extern __int64 (*GameData_1fdd3a0[])();
extern __int64 GameData_212bf68;
extern _UNKNOWN* GameData_212c028;
extern __int64 GameData_212c060;
extern __int64* GameData_212c330[2];
extern __int64* GameData_212c370;
extern __int64 GameData_212c5c0[3];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dbb8[9];
extern _UNKNOWN GameData_2167660;
extern __int64 GameData_21a6070;
extern __int64 GameData_21caab0;
extern __int64 GameData_21d96b8;
extern __int64 GameData_21ec550;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21ee240;
extern __int64 GameData_21f3cc0;
extern __int64 GameData_21f3d10;
extern __int64 GameData_220fc40;
extern __int64 GameData_220fc60;
extern __int64 GameData_220fc70;
extern __int64 GameData_220fc90;
extern __int64 GameData_220fca0;
extern __int64 GameData_220fcc0;
extern int GameData_2211098;
extern __int64 GameData_22110a0;
extern int GameData_22110a8;
extern __int64 GameData_2212270;
extern __int64 GameData_2265ee0;
__n128 GameRoutine_10c830(_QWORD, double);
__int64 GameRoutine_10c910(_QWORD, _QWORD);
__int64 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_1120d0(_QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_112290(_QWORD);
__int64 GameRoutine_1696100(_QWORD);
__int64 GameRoutine_1712520(void);
__int64 GameRoutine_17a5a00(void);
__n128 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_658d60(_QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD, long double);
__int64 GameRoutine_918ce0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_919020(_QWORD);
__int64 GameRoutine_cacc00(_QWORD);
__int64 GameRoutine_cb4e70(_QWORD, _QWORD);
__int64 GameRoutine_cb5190(_QWORD, _QWORD);
__int64 GameRoutine_cd7620(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cdf880(_QWORD);
__int64 GameRoutine_ce01c0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_ce7000(_QWORD);
__int64 GameRoutine_ce7020(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ce8cc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
void GameRoutine_cebf00(__int64, int);
__int64* GameRoutine_ced660(__int64);
__int64 GameRoutine_ced840(_QWORD*);
__int64 GameRoutine_cefbb0(_QWORD, _QWORD);
__int64 GameRoutine_cf1500(_QWORD, _QWORD);
__int64 GameRoutine_d30390(_QWORD, _QWORD);
__int64 GameRoutine_d31360(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d36440(_QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_d4c870(long double);
__int64 GameRoutine_d5bb40(_QWORD, _QWORD);
__int64 GameRoutine_d5bf40(_QWORD);
__int64 GameRoutine_d6b900(_QWORD);
__int64 GameRoutine_d6bda0(_QWORD);
__int64 GameRoutine_d6e320(void);
__int64 GameRoutine_d709d0(_QWORD, _QWORD);
__int64 GameRoutine_d70e70(_QWORD, _QWORD, long double);
void __attribute__((noreturn)) GameRoutine_d75440(void);
void __attribute__((noreturn)) GameRoutine_dac070(void);
void __attribute__((noreturn)) GameRoutine_dac290(void);
void __attribute__((noreturn)) GameRoutine_dac4b0(void);
void __attribute__((noreturn)) GameRoutine_dac6d0(void);
__int64 GameRoutine_deb450(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_deb620(_QWORD, _QWORD);
__int64 GameRoutine_f88720(_QWORD);
struct PseudoSret GameRoutine_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                    _QWORD, double, float);
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 ProcHubSeqEnter_918ce0(__int64*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
extern __int64* as_g_script_manager_ptr;
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 strlen(const char*);
void HubCharacterNatives_cd7620(__int64, __int64*, _BYTE*, _QWORD*);
void __attribute__((noreturn))
GameRoutine_919020_alt1() __asm__("GameRoutine_919020");
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
void snd_Fade_Fade_10c910(__int64, int);
void GameHr_cd82a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5);
__int64 GameHr_e4cbb0(__int64 a1, __int64 a2);

__int64 GameHr_cd7e00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 (*v31)();
  __int64 v32;
  __int64 result;
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
  _QWORD v48[2];
  char* v49;
  _QWORD v50[2];
  char* v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;

  v8 = *GameData_212c370;
  v9 = *(
      _QWORD*)(v8 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v9 != 0) {
    v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 472LL))(v9);
  }
  else {
    v10 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v10 + 24) + 448LL))(
      *(_QWORD*)(v10 + 24), 1);
  v11 = *(_QWORD**)(v10 + 2240);
  *(_QWORD*)(v10 + 2240) = 0;
  if (v11 == (_QWORD*)(v10 + 2208)) {
    v12 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_9;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
LABEL_9:
  v54 = 0;
  v55 = 0;
  v53 = 0;
  v50[0] = a4;
  v52 = 1;
  v54 = GameRoutine_918ce0(&v53, v50);
  if (v52 != -1) {
    ((void (*)(_QWORD*, _QWORD*))GameData_1fd4cf8[v52])(v48, v50);
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v13 = *(_QWORD*)(a2 + 16);
  }
  else {
    v13 = a2 + 1;
  }
  v14 = GameRoutine_1a09c70(v13);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_72:
    GameRoutine_60a1d0();
  }
  v15 = v14;
  v16 = (_QWORD*)GameData_212bf68;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v14 | 7) + 1;
    }
    v17 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v18, 16, 0);
    v50[1] = v15;
    v51 = v17;
    v50[0] = v18 | 1;
    goto LABEL_22;
  }
  LOBYTE(v50[0]) = 2 * v14;
  v17 = (char*)v50 + 1;
  if (v14 != 0) {
  LABEL_22:
    GameRoutine_1a0b940(v17, v13, v15);
  }
  v17[v15] = 0;
  if ((*(_BYTE*)a3 & 1) != 0) {
    v19 = *(_QWORD*)(a3 + 16);
  }
  else {
    v19 = a3 + 1;
  }
  v20 = GameRoutine_1a09c70(v19);
  if (v20 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_72;
  }
  v21 = v20;
  if (v20 >= 0x17) {
    if ((v20 | 7) == 0x17) {
      v23 = 26;
    }
    else {
      v23 = (v20 | 7) + 1;
    }
    v22 = (char*)GameRoutine_651b90(*v16, v23, 16, 0);
    v48[1] = v21;
    v49 = v22;
    v48[0] = v23 | 1;
    goto LABEL_34;
  }
  LOBYTE(v48[0]) = 2 * v20;
  v22 = (char*)v48 + 1;
  if (v20 != 0) {
  LABEL_34:
    v20 = GameRoutine_1a0b940(v22, v19, v21);
  }
  v22[v21] = 0;
  v24 = v53;
  v25 = v54;
  v26 = v54 - v53;
  v46 = 0;
  v47 = 0;
  v45 = 0;
  if (v54 == v53) {
    result = GameRoutine_cd7620(a1, v50, v48, &v45);
    if ((v48[0] & 1) == 0) {
      goto LABEL_56;
    }
    goto LABEL_52;
  }
  if (v26 < 0) {
    GameRoutine_919020(v20);
  }
  v27 = GameRoutine_651b90(*v16, v54 - v53, 16, 0);
  v28 = 0;
  v45 = v27;
  v47 = v27 + v26;
  do {
    v29 = v27 + v28;
    *(_BYTE*)v29 = 0;
    *(_DWORD*)(v29 + 24) = -1;
    v30 = *(_DWORD*)(v24 + v28 + 24);
    if (v30 != -1) {
      v31 = GameData_1fd4d30[v30];
      v56 = v27 + v28;
      ((void (*)(__int64*))v31)(&v56);
      *(_DWORD*)(v29 + 24) = v30;
    }
    v28 += 32;
  } while (v24 + v28 != v25);
  v32 = v27 + v28;
  v46 = v27 + v28;
  result = GameRoutine_cd7620(a1, v50, v48, &v45);
  v34 = -v28;
  v35 = v32 - 32;
  do {
    v36 = *(unsigned int*)(v35 + 24);
    if ((_DWORD)v36 != -1) {
      result =
          ((__int64 (*)(__int64*, __int64))GameData_1fd4cf8[v36])(&v56, v35);
    }
    *(_DWORD*)(v35 + 24) = -1;
    v35 -= 32;
    v34 += 32;
  } while (v34 != 0);
  v16 = (_QWORD*)GameData_212bf68;
  if (v45 != 0) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v37 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v37, v45);
  }
  if ((v48[0] & 1) != 0) {
  LABEL_52:
    if (v49 != nullptr) {
      v38 = 128;
      if (*(_QWORD*)(*v16 + 200LL) == 0) {
        v38 = 56;
      }
      result = GameRoutine_1a0a4e0(*v16 + v38, v49);
    }
  }
LABEL_56:
  if ((v50[0] & 1) != 0 && v51 != nullptr) {
    v39 = 128;
    if (*(_QWORD*)(*v16 + 200LL) == 0) {
      v39 = 56;
    }
    result = GameRoutine_1a0a4e0(*v16 + v39, v51);
  }
  v40 = v53;
  if (v53 != 0) {
    v41 = v54;
    if (v53 == v54) {
      goto LABEL_68;
    }
    do {
      v42 = *(unsigned int*)(v41 - 8);
      v43 = v41 - 32;
      if ((_DWORD)v42 != -1) {
        result = ((__int64 (*)(_QWORD*, __int64))GameData_1fd4cf8[v42])(
            v50, v41 - 32);
      }
      *(_DWORD*)(v41 - 8) = -1;
      v41 -= 32;
    } while (v43 != v40);
    v54 = v40;
    v40 = v53;
    if (v53 != 0) {
    LABEL_68:
      v44 = 128;
      if (*(_QWORD*)(*v16 + 200LL) == 0) {
        v44 = 56;
      }
      return GameRoutine_1a0a4e0(*v16 + v44, v40);
    }
  }
  return result;
}

void GameHr_cd82a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  const char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  char* v19;
  __int64 v20;
  _BYTE* v21;
  int v22;
  __int64 v23;
  const char* v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  const char* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  _BYTE* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 (*v42)();
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _BYTE* v51;
  __int64 v52;
  _BYTE* v53;
  __int64 v54;
  struct {
    __int64 v55;
    __int64 v56;
    _BYTE* v57;
  } v55_;
  struct {
    __int64 v58;
    unsigned __int64 v59;
    char* v60;
  } v58_;
  struct {
    __int64 v61;
    unsigned __int64 v62;
    char* v63;
    int v64;
  } v61_;
  struct {
    __int64 v65;
    _BYTE* v66;
    unsigned __int64 v67;
  } v65_;
  _BYTE* v68;

  v10 = *as_g_script_manager_ptr;
  v11 = *(
      _QWORD*)(v10 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v11 != 0) {
    v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 472LL))(v11);
  }
  else {
    v12 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v12 + 24) + 448LL))(
      *(_QWORD*)(v12 + 24), 1);
  v13 = *(_QWORD**)(v12 + 2240);
  *(_QWORD*)(v12 + 2240) = 0;
  if (v13 == (_QWORD*)(v12 + 2208)) {
    v14 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_9;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
LABEL_9:
  v65_.v66 = nullptr;
  v65_.v67 = 0;
  v65_.v65 = 0;
  v61_.v61 = a4;
  v61_.v64 = 1;
  v65_.v66 = (_BYTE*)ProcHubSeqEnter_918ce0(&v65_.v65, (__int64)&v61_.v61);
  if (v61_.v64 != -1) {
    ((void (*)(__int64*, __int64*))GameData_1fd4cf8[v61_.v64])(&v58_.v58,
                                                               &v61_.v61);
  }
  if ((*(_BYTE*)a5 & 1) != 0) {
    v15 = *(const char**)(a5 + 16);
  }
  else {
    v15 = (const char*)(a5 + 1);
  }
  v16 = strlen(v15);
  if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_91:
    String_60a1d0();
  }
  v17 = v16;
  v18 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v16 >= 0x17) {
    if ((v16 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v16 | 7) + 1;
    }
    v19 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v20, 16, 0);
    v58_.v59 = v17;
    v58_.v60 = v19;
    v58_.v58 = v20 | 1;
    goto LABEL_22;
  }
  LOBYTE(v58_.v58) = 2 * v16;
  v19 = (char*)&v58_.v58 + 1;
  if (v16 != 0) {
  LABEL_22:
    memmove((__int64)v19, (__int64)v15, v17);
  }
  v19[v17] = 0;
  v61_.v61 = v58_.v58;
  v61_.v62 = v58_.v59;
  v61_.v63 = v58_.v60;
  v61_.v64 = 4;
  v21 = v65_.v66;
  if ((unsigned __int64)v65_.v66 >= v65_.v67) {
    v23 = ProcHubSeqEnter_918ce0(&v65_.v65, (__int64)&v61_.v61);
  }
  else {
    *v65_.v66 = 0;
    *((_DWORD*)v21 + 6) = -1;
    v22 = v61_.v64;
    if (v61_.v64 != -1) {
      v68 = v21;
      ((void (*)(_BYTE**, __int64*))GameData_1fd4d68[v61_.v64])(&v68,
                                                                &v61_.v61);
      *((_DWORD*)v21 + 6) = v22;
    }
    v23 = (__int64)(v21 + 32);
  }
  v65_.v66 = (_BYTE*)v23;
  if (v61_.v64 != -1) {
    ((void (*)(_BYTE**, __int64*))GameData_1fd4cf8[v61_.v64])(&v68, &v61_.v61);
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v24 = *(const char**)(a2 + 16);
  }
  else {
    v24 = (const char*)(a2 + 1);
  }
  v25 = strlen(v24);
  if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_91;
  }
  v26 = v25;
  if (v25 >= 0x17) {
    if ((v25 | 7) == 0x17) {
      v28 = 26;
    }
    else {
      v28 = (v25 | 7) + 1;
    }
    v27 = (char*)fw_memory_HeapManager_Allocate(*v18, v28, 16, 0);
    v61_.v62 = v26;
    v61_.v63 = v27;
    v61_.v61 = v28 | 1;
    goto LABEL_41;
  }
  LOBYTE(v61_.v61) = 2 * v25;
  v27 = (char*)&v61_.v61 + 1;
  if (v25 != 0) {
  LABEL_41:
    memmove((__int64)v27, (__int64)v24, v26);
  }
  v27[v26] = 0;
  if ((*(_BYTE*)a3 & 1) != 0) {
    v29 = *(const char**)(a3 + 16);
  }
  else {
    v29 = (const char*)(a3 + 1);
  }
  v30 = strlen(v29);
  if (v30 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_91;
  }
  v31 = v30;
  if (v30 >= 0x17) {
    if ((v30 | 7) == 0x17) {
      v33 = 26;
    }
    else {
      v33 = (v30 | 7) + 1;
    }
    v32 = (char*)fw_memory_HeapManager_Allocate(*v18, v33, 16, 0);
    v58_.v59 = v31;
    v58_.v60 = v32;
    v58_.v58 = v33 | 1;
    goto LABEL_53;
  }
  LOBYTE(v58_.v58) = 2 * v30;
  v32 = (char*)&v58_.v58 + 1;
  if (v30 != 0) {
  LABEL_53:
    memmove((__int64)v32, (__int64)v29, v31);
  }
  v32[v31] = 0;
  v34 = v65_.v65;
  v35 = v65_.v66;
  v36 = (unsigned __int64)&v65_.v66[-v65_.v65];
  v55_.v56 = 0;
  v55_.v57 = nullptr;
  v55_.v55 = 0;
  if (v65_.v66 == (_BYTE*)v65_.v65) {
    HubCharacterNatives_cd7620(a1, &v61_.v61, &v58_.v58, &v55_.v55);
    if ((v58_.v58 & 1) == 0) {
      goto LABEL_75;
    }
    goto LABEL_71;
  }
  if ((v36 & 0x8000000000000000LL) != 0) {
    GameRoutine_919020_alt1();
  }
  v37 = a1;
  v38 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       (__int64)&v65_.v66[-v65_.v65], 16, 0);
  v39 = 0;
  v55_.v55 = v38;
  v55_.v57 = (_BYTE*)(v38 + v36);
  do {
    v40 = v38 + v39;
    *(_BYTE*)v40 = 0;
    *(_DWORD*)(v40 + 24) = -1;
    v41 = *(_DWORD*)(v34 + v39 + 24);
    if (v41 != -1) {
      v42 = GameData_1fd4d30[v41];
      v68 = (_BYTE*)(v38 + v39);
      ((void (*)(_BYTE**))v42)(&v68);
      *(_DWORD*)(v40 + 24) = v41;
    }
    v39 += 32;
  } while ((_BYTE*)(v34 + v39) != v35);
  v43 = v38 + v39;
  v55_.v56 = v38 + v39;
  HubCharacterNatives_cd7620(v37, &v61_.v61, &v58_.v58, &v55_.v55);
  v44 = -v39;
  v45 = v43 - 32;
  v18 = (__int64*)fw_memory_g_heap_manager_ptr;
  do {
    v46 = *(unsigned int*)(v45 + 24);
    if ((_DWORD)v46 != -1) {
      ((void (*)(_BYTE**, __int64))GameData_1fd4cf8[v46])(&v68, v45);
    }
    *(_DWORD*)(v45 + 24) = -1;
    v45 -= 32;
    v44 += 32;
  } while (v44 != 0);
  if (v55_.v55 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*v18 + 200) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*v18 + v47, v55_.v55);
  }
  if ((v58_.v58 & 1) != 0) {
  LABEL_71:
    if (v58_.v60 != nullptr) {
      v48 = 128;
      if (*(_QWORD*)(*v18 + 200) == 0) {
        v48 = 56;
      }
      nn_mem_StandardAllocator_Free(*v18 + v48, (__int64)v58_.v60);
    }
  }
LABEL_75:
  if ((v61_.v61 & 1) != 0 && v61_.v63 != nullptr) {
    v49 = 128;
    if (*(_QWORD*)(*v18 + 200) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free(*v18 + v49, (__int64)v61_.v63);
  }
  v50 = v65_.v65;
  if (v65_.v65 != 0) {
    v51 = v65_.v66;
    if ((_BYTE*)v65_.v65 == v65_.v66) {
      goto LABEL_87;
    }
    do {
      v52 = *((unsigned int*)v51 - 2);
      v53 = v51 - 32;
      if ((_DWORD)v52 != -1) {
        ((void (*)(__int64*, _BYTE*))GameData_1fd4cf8[v52])(&v61_.v61,
                                                            v51 - 32);
      }
      *((_DWORD*)v51 - 2) = -1;
      v51 -= 32;
    } while (v53 != (_BYTE*)v50);
    v65_.v66 = (_BYTE*)v50;
    v50 = v65_.v65;
    if (v65_.v65 != 0) {
    LABEL_87:
      v54 = 128;
      if (*(_QWORD*)(*v18 + 200) == 0) {
        v54 = 56;
      }
      nn_mem_StandardAllocator_Free(*v18 + v54, v50);
    }
  }
}

__int64 GameHr_cd8860(__int64 a1, __int64 a2, __int64 a3, char* a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  char v13;
  char* v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  char* v19;
  __int64 v20;
  _BYTE* v21;
  int v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  _BYTE* v34;
  _BYTE* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 (*v41)();
  __int64 v42;
  __int64 result;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _BYTE* v50;
  _BYTE* v51;
  __int64 v52;
  _BYTE* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _BYTE* v57;
  __int64 v58;
  unsigned __int64 v59;
  char* v60;
  __int64 v61;
  unsigned __int64 v62;
  char* v63;
  int v64;
  _BYTE* v65;
  _BYTE* v66;
  unsigned __int64 v67;
  _BYTE* v68;

  v8 = *GameData_212c370;
  v9 = *(
      _QWORD*)(v8 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v9 != 0) {
    v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 472LL))(v9);
  }
  else {
    v10 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v10 + 24) + 448LL))(
      *(_QWORD*)(v10 + 24), 1);
  v11 = *(_QWORD**)(v10 + 2240);
  *(_QWORD*)(v10 + 2240) = 0;
  if (v11 == (_QWORD*)(v10 + 2208)) {
    v12 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_9;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
LABEL_9:
  v13 = *a4;
  v14 = *((char**)a4 + 2);
  v66 = nullptr;
  v67 = 0;
  v65 = nullptr;
  if ((v13 & 1) != 0) {
    v15 = v14;
  }
  else {
    v15 = a4 + 1;
  }
  v16 = GameRoutine_1a09c70(v15);
  if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_89;
  }
  v17 = v16;
  v18 = (_QWORD*)GameData_212bf68;
  if (v16 >= 0x17) {
    if ((v16 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v16 | 7) + 1;
    }
    v19 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v20, 16, 0);
    v59 = v17;
    v60 = v19;
    v58 = v20 | 1;
    goto LABEL_20;
  }
  LOBYTE(v58) = 2 * v16;
  v19 = (char*)&v58 + 1;
  if (v16 != 0) {
  LABEL_20:
    GameRoutine_1a0b940(v19, v15, v17);
  }
  v19[v17] = 0;
  v61 = v58;
  v62 = v59;
  v63 = v60;
  v64 = 4;
  v21 = v66;
  if ((unsigned __int64)v66 >= v67) {
    v23 = GameRoutine_918ce0(&v65, &v61);
  }
  else {
    *v66 = 0;
    *((_DWORD*)v21 + 6) = -1;
    v22 = v64;
    if (v64 != -1) {
      v68 = v21;
      ((void (*)(_BYTE**, __int64*))GameData_1fd4d68[v64])(&v68, &v61);
      *((_DWORD*)v21 + 6) = v22;
    }
    v23 = (__int64)(v21 + 32);
  }
  v66 = (_BYTE*)v23;
  if (v64 != -1) {
    ((void (*)(_BYTE**, __int64*))GameData_1fd4cf8[v64])(&v68, &v61);
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v24 = *(_QWORD*)(a2 + 16);
  }
  else {
    v24 = a2 + 1;
  }
  v25 = GameRoutine_1a09c70(v24);
  if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_89:
    GameRoutine_60a1d0();
  }
  v26 = v25;
  if (v25 >= 0x17) {
    if ((v25 | 7) == 0x17) {
      v28 = 26;
    }
    else {
      v28 = (v25 | 7) + 1;
    }
    v27 = (char*)GameRoutine_651b90(*v18, v28, 16, 0);
    v62 = v26;
    v63 = v27;
    v61 = v28 | 1;
    goto LABEL_39;
  }
  LOBYTE(v61) = 2 * v25;
  v27 = (char*)&v61 + 1;
  if (v25 != 0) {
  LABEL_39:
    GameRoutine_1a0b940(v27, v24, v26);
  }
  v27[v26] = 0;
  if ((*(_BYTE*)a3 & 1) != 0) {
    v29 = *(_QWORD*)(a3 + 16);
  }
  else {
    v29 = a3 + 1;
  }
  v30 = GameRoutine_1a09c70(v29);
  if (v30 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_89;
  }
  v31 = v30;
  if (v30 >= 0x17) {
    if ((v30 | 7) == 0x17) {
      v33 = 26;
    }
    else {
      v33 = (v30 | 7) + 1;
    }
    v32 = (char*)GameRoutine_651b90(*v18, v33, 16, 0);
    v59 = v31;
    v60 = v32;
    v58 = v33 | 1;
    goto LABEL_51;
  }
  LOBYTE(v58) = 2 * v30;
  v32 = (char*)&v58 + 1;
  if (v30 != 0) {
  LABEL_51:
    v30 = GameRoutine_1a0b940(v32, v29, v31);
  }
  v32[v31] = 0;
  v34 = v65;
  v35 = v66;
  v36 = v66 - v65;
  v56 = 0;
  v57 = nullptr;
  v55 = 0;
  if (v66 == v65) {
    result = GameRoutine_cd7620(a1, &v61, &v58, &v55);
    if ((v58 & 1) == 0) {
      goto LABEL_73;
    }
    goto LABEL_69;
  }
  if ((v36 & 0x8000000000000000LL) != 0) {
    GameRoutine_919020(v30);
  }
  v37 = GameRoutine_651b90(*v18, v66 - v65, 16, 0);
  v38 = 0;
  v55 = v37;
  v57 = (_BYTE*)(v37 + v36);
  do {
    v39 = v37 + v38;
    *(_BYTE*)v39 = 0;
    *(_DWORD*)(v39 + 24) = -1;
    v40 = *(_DWORD*)&v34[v38 + 24];
    if (v40 != -1) {
      v41 = GameData_1fd4d30[v40];
      v68 = (_BYTE*)(v37 + v38);
      ((void (*)(_BYTE**))v41)(&v68);
      *(_DWORD*)(v39 + 24) = v40;
    }
    v38 += 32;
  } while (&v34[v38] != v35);
  v42 = v37 + v38;
  v56 = v37 + v38;
  result = GameRoutine_cd7620(a1, &v61, &v58, &v55);
  v44 = -v38;
  v45 = v42 - 32;
  do {
    v46 = *(unsigned int*)(v45 + 24);
    if ((_DWORD)v46 != -1) {
      result =
          ((__int64 (*)(_BYTE**, __int64))GameData_1fd4cf8[v46])(&v68, v45);
    }
    *(_DWORD*)(v45 + 24) = -1;
    v45 -= 32;
    v44 += 32;
  } while (v44 != 0);
  v18 = (_QWORD*)GameData_212bf68;
  if (v55 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v47 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v47, v55);
  }
  if ((v58 & 1) != 0) {
  LABEL_69:
    if (v60 != nullptr) {
      v48 = 128;
      if (*(_QWORD*)(*v18 + 200LL) == 0) {
        v48 = 56;
      }
      result = GameRoutine_1a0a4e0(*v18 + v48, v60);
    }
  }
LABEL_73:
  if ((v61 & 1) != 0 && v63 != nullptr) {
    v49 = 128;
    if (*(_QWORD*)(*v18 + 200LL) == 0) {
      v49 = 56;
    }
    result = GameRoutine_1a0a4e0(*v18 + v49, v63);
  }
  v50 = v65;
  if (v65 != nullptr) {
    v51 = v66;
    if (v65 == v66) {
      goto LABEL_85;
    }
    do {
      v52 = *((unsigned int*)v51 - 2);
      v53 = v51 - 32;
      if ((_DWORD)v52 != -1) {
        result = ((__int64 (*)(__int64*, _BYTE*))GameData_1fd4cf8[v52])(
            &v61, v51 - 32);
      }
      *((_DWORD*)v51 - 2) = -1;
      v51 -= 32;
    } while (v53 != v50);
    v66 = v50;
    v50 = v65;
    if (v65 != nullptr) {
    LABEL_85:
      v54 = 128;
      if (*(_QWORD*)(*v18 + 200LL) == 0) {
        v54 = 56;
      }
      return GameRoutine_1a0a4e0(*v18 + v54, v50);
    }
  }
  return result;
}

__int64 GameHr_cd8de0(__int64 a1, __int64 a2, __int64 a3, char* a4, __int64 a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  char v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  char* v21;
  __int64 v22;
  _BYTE* v23;
  int v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  _BYTE* v31;
  int v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  char* v42;
  __int64 v43;
  _BYTE* v44;
  _BYTE* v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 (*v52)();
  __int64 v53;
  __int64 result;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _BYTE* v61;
  _BYTE* v62;
  __int64 v63;
  _BYTE* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _BYTE* v68;
  __int64 v69;
  unsigned __int64 v70;
  char* v71;
  __int64 v72;
  unsigned __int64 v73;
  char* v74;
  int v75;
  _BYTE* v76;
  _BYTE* v77;
  unsigned __int64 v78;
  _BYTE* v79;

  v10 = *GameData_212c370;
  v11 = *(
      _QWORD*)(v10 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v11 != 0) {
    v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 472LL))(v11);
  }
  else {
    v12 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v12 + 24) + 448LL))(
      *(_QWORD*)(v12 + 24), 1);
  v13 = *(_QWORD**)(v12 + 2240);
  *(_QWORD*)(v12 + 2240) = 0;
  if (v13 == (_QWORD*)(v12 + 2208)) {
    v14 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_9;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
LABEL_9:
  v15 = *a4;
  v16 = *((char**)a4 + 2);
  v77 = nullptr;
  v78 = 0;
  v76 = nullptr;
  if ((v15 & 1) != 0) {
    v17 = v16;
  }
  else {
    v17 = a4 + 1;
  }
  v18 = GameRoutine_1a09c70(v17);
  if (v18 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_108;
  }
  v19 = v18;
  v20 = (_QWORD*)GameData_212bf68;
  if (v18 >= 0x17) {
    if ((v18 | 7) == 0x17) {
      v22 = 26;
    }
    else {
      v22 = (v18 | 7) + 1;
    }
    v21 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v22, 16, 0);
    v70 = v19;
    v71 = v21;
    v69 = v22 | 1;
    goto LABEL_20;
  }
  LOBYTE(v69) = 2 * v18;
  v21 = (char*)&v69 + 1;
  if (v18 != 0) {
  LABEL_20:
    GameRoutine_1a0b940(v21, v17, v19);
  }
  v21[v19] = 0;
  v72 = v69;
  v73 = v70;
  v74 = v71;
  v75 = 4;
  v23 = v77;
  if ((unsigned __int64)v77 >= v78) {
    v25 = GameRoutine_918ce0(&v76, &v72);
  }
  else {
    *v77 = 0;
    *((_DWORD*)v23 + 6) = -1;
    v24 = v75;
    if (v75 != -1) {
      v79 = v23;
      ((void (*)(_BYTE**, __int64*))GameData_1fd4d68[v75])(&v79, &v72);
      *((_DWORD*)v23 + 6) = v24;
    }
    v25 = (__int64)(v23 + 32);
  }
  v77 = (_BYTE*)v25;
  if (v75 != -1) {
    ((void (*)(_BYTE**, __int64*))GameData_1fd4cf8[v75])(&v79, &v72);
  }
  if ((*(_BYTE*)a5 & 1) != 0) {
    v26 = *(_QWORD*)(a5 + 16);
  }
  else {
    v26 = a5 + 1;
  }
  v27 = GameRoutine_1a09c70(v26);
  if (v27 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_108:
    GameRoutine_60a1d0();
  }
  v28 = v27;
  if (v27 >= 0x17) {
    if ((v27 | 7) == 0x17) {
      v30 = 26;
    }
    else {
      v30 = (v27 | 7) + 1;
    }
    v29 = (char*)GameRoutine_651b90(*v20, v30, 16, 0);
    v70 = v28;
    v71 = v29;
    v69 = v30 | 1;
    goto LABEL_39;
  }
  LOBYTE(v69) = 2 * v27;
  v29 = (char*)&v69 + 1;
  if (v27 != 0) {
  LABEL_39:
    GameRoutine_1a0b940(v29, v26, v28);
  }
  v29[v28] = 0;
  v72 = v69;
  v73 = v70;
  v74 = v71;
  v75 = 4;
  v31 = v77;
  if ((unsigned __int64)v77 >= v78) {
    v33 = GameRoutine_918ce0(&v76, &v72);
  }
  else {
    *v77 = 0;
    *((_DWORD*)v31 + 6) = -1;
    v32 = v75;
    if (v75 != -1) {
      v79 = v31;
      ((void (*)(_BYTE**, __int64*))GameData_1fd4d68[v75])(&v79, &v72);
      *((_DWORD*)v31 + 6) = v32;
    }
    v33 = (__int64)(v31 + 32);
  }
  v77 = (_BYTE*)v33;
  if (v75 != -1) {
    ((void (*)(_BYTE**, __int64*))GameData_1fd4cf8[v75])(&v79, &v72);
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v34 = *(_QWORD*)(a2 + 16);
  }
  else {
    v34 = a2 + 1;
  }
  v35 = GameRoutine_1a09c70(v34);
  if (v35 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_108;
  }
  v36 = v35;
  if (v35 >= 0x17) {
    if ((v35 | 7) == 0x17) {
      v38 = 26;
    }
    else {
      v38 = (v35 | 7) + 1;
    }
    v37 = (char*)GameRoutine_651b90(*v20, v38, 16, 0);
    v73 = v36;
    v74 = v37;
    v72 = v38 | 1;
    goto LABEL_58;
  }
  LOBYTE(v72) = 2 * v35;
  v37 = (char*)&v72 + 1;
  if (v35 != 0) {
  LABEL_58:
    GameRoutine_1a0b940(v37, v34, v36);
  }
  v37[v36] = 0;
  if ((*(_BYTE*)a3 & 1) != 0) {
    v39 = *(_QWORD*)(a3 + 16);
  }
  else {
    v39 = a3 + 1;
  }
  v40 = GameRoutine_1a09c70(v39);
  if (v40 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_108;
  }
  v41 = v40;
  if (v40 >= 0x17) {
    if ((v40 | 7) == 0x17) {
      v43 = 26;
    }
    else {
      v43 = (v40 | 7) + 1;
    }
    v42 = (char*)GameRoutine_651b90(*v20, v43, 16, 0);
    v70 = v41;
    v71 = v42;
    v69 = v43 | 1;
    goto LABEL_70;
  }
  LOBYTE(v69) = 2 * v40;
  v42 = (char*)&v69 + 1;
  if (v40 != 0) {
  LABEL_70:
    v40 = GameRoutine_1a0b940(v42, v39, v41);
  }
  v42[v41] = 0;
  v44 = v76;
  v45 = v77;
  v46 = v77 - v76;
  v67 = 0;
  v68 = nullptr;
  v66 = 0;
  if (v77 == v76) {
    result = GameRoutine_cd7620(a1, &v72, &v69, &v66);
    if ((v69 & 1) == 0) {
      goto LABEL_92;
    }
    goto LABEL_88;
  }
  if ((v46 & 0x8000000000000000LL) != 0) {
    GameRoutine_919020(v40);
  }
  v47 = a1;
  v48 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v77 - v76, 16, 0);
  v49 = 0;
  v66 = v48;
  v68 = (_BYTE*)(v48 + v46);
  do {
    v50 = v48 + v49;
    *(_BYTE*)v50 = 0;
    *(_DWORD*)(v50 + 24) = -1;
    v51 = *(_DWORD*)&v44[v49 + 24];
    if (v51 != -1) {
      v52 = GameData_1fd4d30[v51];
      v79 = (_BYTE*)(v48 + v49);
      ((void (*)(_BYTE**))v52)(&v79);
      *(_DWORD*)(v50 + 24) = v51;
    }
    v49 += 32;
  } while (&v44[v49] != v45);
  v53 = v48 + v49;
  v67 = v48 + v49;
  result = GameRoutine_cd7620(v47, &v72, &v69, &v66);
  v55 = -v49;
  v56 = v53 - 32;
  v20 = (_QWORD*)GameData_212bf68;
  do {
    v57 = *(unsigned int*)(v56 + 24);
    if ((_DWORD)v57 != -1) {
      result =
          ((__int64 (*)(_BYTE**, __int64))GameData_1fd4cf8[v57])(&v79, v56);
    }
    *(_DWORD*)(v56 + 24) = -1;
    v56 -= 32;
    v55 += 32;
  } while (v55 != 0);
  if (v66 != 0) {
    v58 = 128;
    if (*(_QWORD*)(*v20 + 200LL) == 0) {
      v58 = 56;
    }
    result = GameRoutine_1a0a4e0(*v20 + v58, v66);
  }
  if ((v69 & 1) != 0) {
  LABEL_88:
    if (v71 != nullptr) {
      v59 = 128;
      if (*(_QWORD*)(*v20 + 200LL) == 0) {
        v59 = 56;
      }
      result = GameRoutine_1a0a4e0(*v20 + v59, v71);
    }
  }
LABEL_92:
  if ((v72 & 1) != 0 && v74 != nullptr) {
    v60 = 128;
    if (*(_QWORD*)(*v20 + 200LL) == 0) {
      v60 = 56;
    }
    result = GameRoutine_1a0a4e0(*v20 + v60, v74);
  }
  v61 = v76;
  if (v76 != nullptr) {
    v62 = v77;
    if (v76 == v77) {
      goto LABEL_104;
    }
    do {
      v63 = *((unsigned int*)v62 - 2);
      v64 = v62 - 32;
      if ((_DWORD)v63 != -1) {
        result = ((__int64 (*)(__int64*, _BYTE*))GameData_1fd4cf8[v63])(
            &v72, v62 - 32);
      }
      *((_DWORD*)v62 - 2) = -1;
      v62 -= 32;
    } while (v64 != v61);
    v77 = v61;
    v61 = v76;
    if (v76 != nullptr) {
    LABEL_104:
      v65 = 128;
      if (*(_QWORD*)(*v20 + 200LL) == 0) {
        v65 = 56;
      }
      return GameRoutine_1a0a4e0(*v20 + v65, v61);
    }
  }
  return result;
}

__int64 GameHr_ce6740(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  _BYTE v14[32];
  _BYTE* v15;

  v3 = *(_QWORD*)(a1 + 80);
  v2 = *(_QWORD*)(a1 + 88);
  v4 = *(_QWORD*)(a2 + 32);
  if (v4 != 0) {
    if (v4 == a2) {
      v15 = v14;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 24LL))(v4, v14);
    }
    else {
      v15 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    }
  }
  else {
    v15 = nullptr;
  }
  if ((v2 - v3) >> 4 < 1) {
    v8 = 0;
  LABEL_12:
    GameRoutine_ce8cc0(v3, v2, v14, (v2 - v3) >> 4, 0, v8);
  }
  else {
    v5 = (v2 - v3) >> 4;
    v6 = GameData_212c060;
    while (1) {
      v7 = GameRoutine_1a09d20(16 * v5, v6);
      if (v7 != 0) {
        break;
      }
      v8 = v5 >> 1;
      v9 = v5 > 1;
      v5 >>= 1;
      if (!v9) {
        goto LABEL_12;
      }
    }
    v10 = v7;
    GameRoutine_ce8cc0(v3, v2, v14, (v2 - v3) >> 4, v7, v5);
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v11 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v11, v10);
  }
  result = (__int64)v15;
  if (v15 == v14) {
    v13 = 32;
  }
  else {
    if (v15 == nullptr) {
      return result;
    }
    v13 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v15 + v13))((__int64)v15);
}

__int64 GameHr_ce69c0(__int64 result, float a2, float a3)
{
  _QWORD* v3;
  _QWORD* v4;
  float v7;
  float v8;
  unsigned __int64 v9;
  char* v10;
  char* v11;
  _QWORD* v12;
  float v13;
  __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  float v25;
  __int64 v27;
  char* v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  bool v41[4];

  if (a2 != a3) {
    v3 = *(_QWORD**)(result + 80);
    v4 = *(_QWORD**)(result + 88);
    v7 = a2 <= a3 ? a3 : a2;
    v8 = a2 <= a3 ? a2 : a3;
    if (v3 != v4) {
      v9 = 0;
      v10 = nullptr;
      v11 = nullptr;
      v12 = (_QWORD*)GameData_212bf68;
      if (v8 != 0.0f) {
        while (1) {
          v25 = *(float*)(*v3 + 8LL);
          if (v25 > v8 && v25 <= v7) {
            if ((unsigned __int64)v10 >= v9) {
              v28 = (char*)(v10 - v11);
              v29 = (v10 - v11) >> 4;
              v30 = v29 + 1;
              if ((unsigned __int64)(v29 + 1) >> 60 != 0) {
                goto LABEL_72;
              }
              if ((__int64)(v9 - (_QWORD)v11) >> 3 > v30) {
                v30 = (__int64)(v9 - (_QWORD)v11) >> 3;
              }
              if (v9 - (unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF0LL) {
                v31 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v31 = v30;
              }
              if (v31 >> 60 != 0) {
                goto LABEL_71;
              }
              v32 = GameRoutine_651b90(*v12, 16 * v31, 16, 0);
              v33 = &v28[v32];
              *(_QWORD*)v33 = *v3;
              v34 = v3[1];
              *((_QWORD*)v33 + 1) = v34;
              if (v34 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8),
                                          1u, memory_order_relaxed);
              }
              v35 = &v33[-16 * v29];
              v9 = v32 + 16 * v31;
              v10 = v33 + 16;
              result = GameRoutine_1a0b950(v35, v11, v28);
              if (v11 != nullptr) {
                v36 = 128;
                if (*(_QWORD*)(*v12 + 200LL) == 0) {
                  v36 = 56;
                }
                result = GameRoutine_1a0a4e0(*v12 + v36, v11);
              }
              v11 = v35;
            }
            else {
              *(_QWORD*)v10 = *v3;
              v27 = v3[1];
              *((_QWORD*)v10 + 1) = v27;
              if (v27 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8),
                                          1u, memory_order_relaxed);
              }
              v10 += 16;
            }
          }
          v3 += 2;
          if (v3 == v4) {
            goto LABEL_58;
          }
        }
      }
      do {
        v13 = *(float*)(*v3 + 8LL);
        if (v13 >= v8 && v13 <= v7) {
          if ((unsigned __int64)v10 >= v9) {
            v16 = (char*)(v10 - v11);
            v17 = (v10 - v11) >> 4;
            v18 = v17 + 1;
            if ((unsigned __int64)(v17 + 1) >> 60 != 0) {
            LABEL_72:
              GameRoutine_ce7000(result);
            }
            if ((__int64)(v9 - (_QWORD)v11) >> 3 > v18) {
              v18 = (__int64)(v9 - (_QWORD)v11) >> 3;
            }
            if (v9 - (unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF0LL) {
              v19 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v19 = v18;
            }
            if (v19 >> 60 != 0) {
            LABEL_71:
              GameRoutine_60a210(result);
            }
            v20 = GameRoutine_651b90(*v12, 16 * v19, 16, 0);
            v21 = &v16[v20];
            *(_QWORD*)v21 = *v3;
            v22 = v3[1];
            *((_QWORD*)v21 + 1) = v22;
            if (v22 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                        memory_order_relaxed);
            }
            v23 = &v21[-16 * v17];
            v9 = v20 + 16 * v19;
            v10 = v21 + 16;
            result = GameRoutine_1a0b950(v23, v11, v16);
            if (v11 != nullptr) {
              v24 = 128;
              if (*(_QWORD*)(*v12 + 200LL) == 0) {
                v24 = 56;
              }
              result = GameRoutine_1a0a4e0(*v12 + v24, v11);
            }
            v11 = v23;
          }
          else {
            *(_QWORD*)v10 = *v3;
            v15 = v3[1];
            *((_QWORD*)v10 + 1) = v15;
            if (v15 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                        memory_order_relaxed);
            }
            v10 += 16;
          }
        }
        v3 += 2;
      } while (v3 != v4);
    LABEL_58:
      v41[0] = a2 > a3;
      if (v11 == v10) {
        if (v11 == nullptr) {
          return result;
        }
      }
      else {
        GameRoutine_ce7020(v11, v10, v41, (2 * __clz((v10 - v11) >> 4)) ^ 0x7E,
                           1);
        v37 = v11;
        do {
          v38 = *(_QWORD*)v37;
          v37 += 16;
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
        } while (v37 != v10);
        if (v11 == nullptr) {
          return result;
        }
        do {
          v39 = *((_QWORD*)v10 - 1);
          if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
            GameRoutine_1a09c50(v39);
          }
          v10 -= 16;
        } while (v10 != v11);
      }
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v40 = 56;
      }
      return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v40, v11);
    }
  }
  return result;
}

void GameHr_cec4a0(__int64 a1, unsigned int a2, __n128 a3)
{
  __int64 v3;
  int v4;
  int v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  unsigned __int64 v11;

  v3 = a2;
  if (*(_BYTE*)(a1 + 492) != 1) {
    goto LABEL_14;
  }
  if (GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) == 3) {
    v4 = *(_DWORD*)(GameData_21ee240 + 156);
    v5 = (v4 & 8) != 0 ? 2 : 3;
    if ((v5 & v4) == 0) {
      goto LABEL_14;
    }
  }
  if (GameData_21ec550 == 0) {
    goto LABEL_15;
  }
  v6 = GameData_21ec550 +
       ((unsigned __int64)*(unsigned __int8*)(GameData_21ec550 + 480) << 6);
  if (*(float*)(v6 + 172) == *(float*)(v6 + 168)) {
    v7 = a1;
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v6 + 160) + 16LL))(v6 + 160);
    a1 = v7;
  }
  else {
    a3 = *(__n128*)(v6 + 208);
  }
  ((uint32_t*)&a3)[0] = ((uint32_t*)&a3)[3];
  if (((float*)&a3)[3] == 1.0 && (v8 = a1,
                                  a3 = ((__n128 (*)(unsigned __int64, float)) *
                                        (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(
                                      v6 + 160, ((float*)&a3)[3]),
                                  ((uint32_t*)&a3)[0] = ((uint32_t*)&a3)[3],
                                  a1 = v8, ((float*)&a3)[3] == 1.0)) {
  LABEL_14:
    GameRoutine_cebf00(a1, v3);
  }
  else {
  LABEL_15:
    if ((*(_BYTE*)(a1 + 492) & 1) == 0) {
      GameRoutine_8123d0(a1, *(long double*)&a3);
    }
    if (*(_DWORD*)(a1 + 488) == (_DWORD)v3) {
      if (*(_BYTE*)(a1 + 504) == 1) {
        *(_BYTE*)(a1 + 504) = 0;
      }
    }
    else {
      v9 = *(unsigned __int8*)(a1 + 504);
      if (v9 != 1 || *(_DWORD*)(a1 + 500) != (_DWORD)v3) {
        if ((unsigned int)v3 > 2) {
          v10 = 0;
        }
        else {
          v10 = GameData_1b835cc[(unsigned int)v3];
        }
        v11 = (unsigned int)(*(_DWORD*)(a1 + 508) + v10) |
              (unsigned __int64)(v3 << 32);
        if ((v9 & 1) == 0) {
          *(_BYTE*)(a1 + 504) = 1;
        }
        *(_QWORD*)(a1 + 496) = v11;
      }
    }
  }
}

__int64 GameHr_cf16c0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  _DWORD* v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  _BYTE v15[32];
  _BYTE* v16;
  _BYTE v17[32];
  _BYTE* v18;

  v5 = GameRoutine_cf1500(a1, a3);
  v6 = *(_QWORD*)(a2 + 32);
  if (v6 != 0) {
    if (v6 == a2) {
      v16 = v15;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v6 + 24LL))(v6, v15);
      v7 = v16;
    }
    else {
      v7 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      v16 = v7;
    }
    v11 = *(_DWORD*)(a1 + 80);
    v8 = (_DWORD*)(a1 + 80);
    v10 = v5 + 80;
    *(_DWORD*)(v5 + 188) = v11;
    if (v7 != nullptr) {
      if (v7 == v15) {
        v18 = v17;
        (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v7 + 24LL))(v7, v17);
      }
      else {
        v18 = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v7 + 16LL))(v7);
      }
    }
    else {
      v18 = nullptr;
    }
  }
  else {
    v9 = *(_DWORD*)(a1 + 80);
    v8 = (_DWORD*)(a1 + 80);
    v16 = nullptr;
    v10 = v5 + 80;
    v18 = nullptr;
    *(_DWORD*)(v5 + 188) = v9;
  }
  GameRoutine_cefbb0(v17, v10);
  if (v18 == v17) {
    v12 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_16;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v18 + v12))((__int64)v18);
LABEL_16:
  GameRoutine_ced660(v5);
  GameRoutine_ced840((_QWORD*)v5);
  if (v16 == v15) {
    v13 = 32;
    goto LABEL_20;
  }
  if (v16 != nullptr) {
    v13 = 40;
  LABEL_20:
    (*(void (**)(__int64))(*(_QWORD*)v16 + v13))((__int64)v16);
  }
  ++*v8;
  return v5;
}

_QWORD* GameHr_d30dc0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  _QWORD* result;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];
  char* v18;
  char v19;
  _QWORD* v20;

  v7 = GameRoutine_1a09c70(a2);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0();
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)GameRoutine_651b90(GameData_2265ee0, v10, 16, 0);
    v17[1] = v8;
    v18 = v9;
    v17[0] = v10 | 1;
  }
  else {
    LOBYTE(v17[0]) = 2 * v7;
    v9 = (char*)v17 + 1;
    if (v7 == 0) {
      goto LABEL_10;
    }
  }
  GameRoutine_1a0b940(v9, a2, v8);
LABEL_10:
  v9[v8] = 0;
  v20 = v17;
  result =
      (_QWORD*)GameRoutine_d31360(a1 + 8, v17, GameData_212c028, &v20, &v19);
  if ((v17[0] & 1) != 0 && v18 != nullptr) {
    v12 = result;
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v13 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v13, v18);
    result = v12;
  }
  v14 = result[7];
  v15 = result[8];
  if (v14 != v15) {
    while (*(_DWORD*)(v14 + 48) != a4) {
      v14 += 64;
      if (v14 == v15) {
        return result;
      }
    }
    *(_BYTE*)(a1 + 32) = 1;
    result = *(_QWORD**)(v14 + 32);
    *(_QWORD*)(v14 + 32) = 0;
    if ((_QWORD*)v14 == result) {
      v16 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v16 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v16))((__int64)result);
  }
  return result;
}

__int64 GameHr_d35bc0(__int64 result)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  __int64 v3;
  int v4;
  unsigned __int64 v5;
  bool v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  unsigned __int8* v9;
  unsigned __int8* v10;
  int v11;
  unsigned __int8* v12;
  int v13;
  unsigned __int8* v14;
  int v15;
  int v16;

  v1 = *(unsigned __int8**)(result + 8);
  v2 = *(unsigned __int8**)(result + 16);
  if (v1 != v2) {
    v3 = result;
    do {
      v5 = *v1;
      v6 = (v5 & 1) == 0;
      v7 = v5 >> 1;
      if (v6) {
        v8 = v1 + 1;
      }
      else {
        v8 = *((unsigned __int8**)v1 + 2);
      }
      if (!v6) {
        v7 = *((_QWORD*)v1 + 1);
      }
      if (v7 != 0) {
        v9 = &v8[v7];
        v10 = v8 - 1;
        while (v7 != 0) {
          v11 = v10[v7--];
          if (v11 == 47) {
            if (v7 != -1 && *(v9 - 1) != 47) {
              result = GameRoutine_1a09ce0(v1, "/", 1);
              if ((*v1 & 1) != 0) {
                v12 = *((unsigned __int8**)v1 + 2);
              }
              else {
                v12 = v1 + 1;
              }
              v15 = *v12;
              v14 = v12 + 1;
              v13 = v15;
              if (v15 != 0) {
                v4 = 0;
                do {
                  v4 = v13 - v4 + 32 * v4;
                  v16 = *v14++;
                  v13 = v16;
                } while (v16 != 0);
              }
              else {
                v4 = 0;
              }
              *((_DWORD*)v1 + 6) = v4;
            }
            break;
          }
        }
      }
      v1 += 104;
    } while (v1 != v2);
    v1 = *(unsigned __int8**)(v3 + 8);
    v2 = *(unsigned __int8**)(v3 + 16);
  }
  if (v1 != v2) {
    return GameRoutine_d36440(
        v1, v2, (2 * __clz(0x4EC4EC4EC4EC4EC5LL * ((v2 - v1) >> 3))) ^ 0x7E, 1);
  }
  return result;
}

float GameHr_d4a800(__int64* a1, _DWORD* a2, float* a3)
{
  __int64 v3;
  int v4;
  float result;
  float* v6;
  char v7;

  v3 = *a1;
  v4 = *(_DWORD*)(*a1 + 96);
  if (v4 != -1) {
    if (v4 == 2) {
      result = *a3;
      *a2 = *(_DWORD*)a3;
      return result;
    }
    v6 = a3;
    ((void (*)(char*, __int64))GameData_1fdc1d8[v4])(&v7, v3);
    a3 = v6;
  }
  *(_DWORD*)(v3 + 96) = -1;
  result = *a3;
  *(_DWORD*)(v3 + 96) = 2;
  *(float*)v3 = result;
  return result;
}

__int64 GameHr_d4a900(__int64 result, _QWORD* a2, _QWORD* a3)
{
  __int64 v3;
  int v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  bool v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;

  v3 = *(_QWORD*)result;
  v4 = *(_DWORD*)(*(_QWORD*)result + 96LL);
  if (v4 != 4) {
    if ((*(_BYTE*)a3 & 1) != 0) {
      result = GameRoutine_60a270(&v14, a3[2], a3[1]);
      v4 = *(_DWORD*)(v3 + 96);
      if (v4 == -1) {
      LABEL_11:
        v8 = v15;
        v9 = v16;
        *(_QWORD*)v3 = v14;
        *(_QWORD*)(v3 + 8) = v8;
        *(_QWORD*)(v3 + 16) = v9;
        *(_DWORD*)(v3 + 96) = 4;
        return result;
      }
    }
    else {
      v7 = a3[1];
      v14 = *a3;
      v15 = v7;
      v16 = a3[2];
      if (v4 == -1) {
        goto LABEL_11;
      }
    }
    result = ((__int64 (*)(char*, __int64))GameData_1fdc1d8[v4])(&v17, v3);
    goto LABEL_11;
  }
  if (a2 != a3) {
    v5 = *(unsigned __int8*)a3;
    if ((*(_BYTE*)a2 & 1) != 0) {
      v10 = (char*)a3[2];
      v11 = (v5 & 1) == 0;
      v12 = v5 >> 1;
      if (v11) {
        v10 = (char*)a3 + 1;
      }
      if (v11) {
        v13 = v12;
      }
      else {
        v13 = a3[1];
      }
      return GameRoutine_64dde0(a2, v10, v13);
    }
    else if ((v5 & 1) != 0) {
      return GameRoutine_64df20(a2, a3[2], a3[1]);
    }
    else {
      a2[1] = a3[1];
      v6 = *a3;
      a2[2] = a3[2];
      *a2 = v6;
    }
  }
  return result;
}

__int64 GameHr_d4ab70(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  char v7;

  v3 = *(_QWORD*)result;
  v4 = *(_DWORD*)(*(_QWORD*)result + 96LL);
  if (v4 == -1) {
    goto LABEL_7;
  }
  if (v4 != 7) {
    v5 = a3;
    result = ((__int64 (*)(char*, __int64))GameData_1fdc1d8[v4])(&v7, v3);
    a3 = v5;
  LABEL_7:
    *(_DWORD*)(v3 + 96) = -1;
    v6 = *(_DWORD*)(a3 + 8);
    *(_QWORD*)v3 = *(_QWORD*)a3;
    *(_DWORD*)(v3 + 8) = v6;
    *(_DWORD*)(v3 + 96) = 7;
    return result;
  }
  if (*(unsigned __int8*)(a2 + 8) == *(unsigned __int8*)(a3 + 8)) {
    if (*(_BYTE*)(a2 + 8) != 0) {
      *(_DWORD*)a2 = *(_DWORD*)a3;
      *(_DWORD*)(a2 + 4) = *(_DWORD*)(a3 + 4);
    }
  }
  else if (*(_BYTE*)(a2 + 8) != 0) {
    *(_BYTE*)(a2 + 8) = 0;
  }
  else {
    *(_QWORD*)a2 = *(_QWORD*)a3;
    *(_BYTE*)(a2 + 8) = 1;
  }
  return result;
}

__int64 GameHr_d4b3c0(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  long double v5;
  char* v6;
  char* v7;
  char* v8;
  unsigned __int64 v9;
  __int64 v10;
  char* v11;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;

  *(__n128*)&v5 = GameRoutine_1a09b70(a1 + 6);
  v6 = (char*)a1[2];
  v7 = (char*)a1[3];
  v8 = v6;
  if (v6 == v7) {
    goto LABEL_17;
  }
  v9 = v7 - v6 - 8;
  v8 = (char*)a1[2];
  if ((~(_BYTE)v9 & 0x18) != 0) {
    v10 = ((unsigned __int8)((unsigned int)v9 >> 3) + 1) & 3;
    v8 = (char*)a1[2];
    while (*(_QWORD*)v8 != a2) {
      v8 += 8;
      if (--v10 == 0) {
        goto LABEL_6;
      }
    }
  LABEL_17:
    if (v8 != v7) {
      return GameRoutine_1a09b80(a1 + 6);
    }
    goto LABEL_18;
  }
LABEL_6:
  if (v9 >= 0x18) {
    v8 += 16;
    while (1) {
      if (*((_QWORD*)v8 - 2) == a2) {
        if (v8 - 16 != v7) {
          return GameRoutine_1a09b80(a1 + 6);
        }
        goto LABEL_18;
      }
      if (*((_QWORD*)v8 - 1) == a2) {
        v8 -= 8;
        goto LABEL_17;
      }
      if (*(_QWORD*)v8 == a2) {
        goto LABEL_17;
      }
      if (*((_QWORD*)v8 + 1) == a2) {
        break;
      }
      v11 = v8 + 16;
      v8 += 32;
      if (v11 == v7) {
        goto LABEL_18;
      }
    }
    if (v8 + 8 != v7) {
      return GameRoutine_1a09b80(a1 + 6);
    }
  }
LABEL_18:
  v12 = a1[4];
  if ((unsigned __int64)v7 >= v12) {
    v14 = (char*)(v7 - v6);
    v15 = (v7 - v6) >> 3;
    v16 = v15 + 1;
    if ((unsigned __int64)(v15 + 1) >> 61 != 0) {
      GameRoutine_d4c870(v5);
    }
    v17 = v12 - (_QWORD)v6;
    v18 = GameData_212bf68;
    if (v17 >> 2 > v16) {
      v16 = v17 >> 2;
    }
    if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
      v19 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v19 = v16;
    }
    if (v19 != 0) {
      if (v19 >> 61 != 0) {
        GameRoutine_60a210(v4);
      }
      v20 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v19, 16, 0);
    }
    else {
      v20 = 0;
    }
    v21 = v20 + 8 * v19;
    v22 = (char*)(v7 - v6);
    v23 = (__int64)&v14[v20 + -8 * v15];
    *(_QWORD*)&v14[v20] = a2;
    v13 = (__int64)&v14[v20 + 8];
    GameRoutine_1a0b950(v23, v6, v22);
    a1[2] = v23;
    a1[3] = v13;
    a1[4] = v21;
    if (v6 != nullptr) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
        v24 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v18 + v24, v6);
    }
  }
  else {
    *(_QWORD*)v7 = a2;
    v13 = (__int64)(v7 + 8);
  }
  a1[3] = v13;
  return GameRoutine_1a09b80(a1 + 6);
}

_QWORD* GameHr_d55ef0(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* result;
  __int64 v10;

  v2 = a1 + 20;
  v3 = (_QWORD*)a1[24];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = (_QWORD*)a1[18];
  if (v5 == a1 + 14) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_11:
  v7 = (_QWORD*)a1[12];
  if (v7 == a1 + 8) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_16;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_16:
  result = (_QWORD*)a1[6];
  if (result == a1 + 2) {
    v10 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v10 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))((__int64)result);
}

_DWORD* GameHr_d55fd0(_DWORD* a1, __int64 a2)
{
  _DWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BYTE v14[32];
  _BYTE* v15;

  *a1 = *(_DWORD*)a2;
  v4 = a1 + 4;
  v5 = *(_QWORD*)(a2 + 48);
  if (v5 != 0) {
    if (v5 == a2 + 16) {
      v15 = v14;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 24LL))(v5, v14);
    }
    else {
      v15 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    }
  }
  else {
    v15 = nullptr;
  }
  GameRoutine_654050(v14, v4);
  if (v15 == v14) {
    v6 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v15 + v6))((__int64)v15);
LABEL_11:
  v7 = *(_QWORD*)(a2 + 96);
  if (v7 != 0) {
    if (v7 == a2 + 64) {
      v15 = v14;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v7 + 24LL))(v7, v14);
    }
    else {
      v15 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    }
  }
  else {
    v15 = nullptr;
  }
  GameRoutine_654050(v14, a1 + 16);
  if (v15 == v14) {
    v8 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_21;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v15 + v8))((__int64)v15);
LABEL_21:
  v9 = *(_QWORD*)(a2 + 144);
  if (v9 != 0) {
    if (v9 == a2 + 112) {
      v15 = v14;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v9 + 24LL))(v9, v14);
    }
    else {
      v15 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    }
  }
  else {
    v15 = nullptr;
  }
  GameRoutine_654050(v14, a1 + 28);
  if (v15 == v14) {
    v10 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_31;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v15 + v10))((__int64)v15);
LABEL_31:
  v11 = *(_QWORD*)(a2 + 192);
  if (v11 != 0) {
    if (v11 == a2 + 160) {
      v15 = v14;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v11 + 24LL))(v11, v14);
    }
    else {
      v15 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    }
  }
  else {
    v15 = nullptr;
  }
  GameRoutine_d30390(v14, a1 + 40);
  if (v15 == v14) {
    v12 = 32;
    goto LABEL_40;
  }
  if (v15 != nullptr) {
    v12 = 40;
  LABEL_40:
    (*(void (**)(__int64))(*(_QWORD*)v15 + v12))((__int64)v15);
  }
  return a1;
}

__int64 GameHr_d56660()
{
  __int64 result;
  __int64 v1;
  _BYTE v2[32];
  _BYTE* v3;

  result = GameData_220fc60;
  if (GameData_220fc60 != 0) {
    if ((__int64*)GameData_220fc60 == &GameData_220fc40) {
      v3 = v2;
      (*(void (**)(__int64*, _BYTE*))(GameData_220fc40 + 24))(&GameData_220fc40,
                                                              v2);
      result = (__int64)v3;
      if (v3 == nullptr) {
        return result;
      }
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_220fc60 + 16LL))(
          (__int64)GameData_220fc60);
      v3 = (_BYTE*)result;
      if (result == 0) {
        return result;
      }
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = (__int64)v3;
    if (v3 == v2) {
      v1 = 32;
    }
    else {
      if (v3 == nullptr) {
        return result;
      }
      v1 = 40;
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)v3 + v1))((__int64)v3);
  }
  return result;
}

__int64 GameHr_d56740()
{
  __int64 result;
  __int64 v1;
  _BYTE v2[32];
  _BYTE* v3;

  result = GameData_220fc90;
  if (GameData_220fc90 != 0) {
    if ((__int64*)GameData_220fc90 == &GameData_220fc70) {
      v3 = v2;
      (*(void (**)(__int64*, _BYTE*))(GameData_220fc70 + 24))(&GameData_220fc70,
                                                              v2);
      result = (__int64)v3;
      if (v3 == nullptr) {
        return result;
      }
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_220fc90 + 16LL))(
          (__int64)GameData_220fc90);
      v3 = (_BYTE*)result;
      if (result == 0) {
        return result;
      }
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = (__int64)v3;
    if (v3 == v2) {
      v1 = 32;
    }
    else {
      if (v3 == nullptr) {
        return result;
      }
      v1 = 40;
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)v3 + v1))((__int64)v3);
  }
  return result;
}

__int64 GameHr_d56850()
{
  __int64 result;
  __int64 v1;
  _BYTE v2[32];
  _BYTE* v3;

  result = GameData_220fcc0;
  if (GameData_220fcc0 != 0) {
    if ((__int64*)GameData_220fcc0 == &GameData_220fca0) {
      v3 = v2;
      (*(void (**)(__int64*, _BYTE*))(GameData_220fca0 + 24))(&GameData_220fca0,
                                                              v2);
      result = (__int64)v3;
      if (v3 == nullptr) {
        return result;
      }
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_220fcc0 + 16LL))(
          (__int64)GameData_220fcc0);
      v3 = (_BYTE*)result;
      if (result == 0) {
        return result;
      }
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = (__int64)v3;
    if (v3 == v2) {
      v1 = 32;
    }
    else {
      if (v3 == nullptr) {
        return result;
      }
      v1 = 40;
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)v3 + v1))((__int64)v3);
  }
  return result;
}

_QWORD* GameHr_d5be60(__int64 a1, _QWORD* a2)
{
  _QWORD* result;
  __int64 v3;

  result = (_QWORD*)a2[4];
  if (result == a2) {
    v3 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v3))((__int64)result);
}

_BYTE* GameHr_d5c6d0(__int64* a1, _QWORD* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  _BYTE* v7;
  _QWORD* v8;
  __int64 v9;
  _BYTE* result;
  _BYTE* v11;
  __int64 v12;
  _BYTE* v13;
  __int64 v14;
  __int64 v15;
  _BYTE v16[32];
  _BYTE* v17;
  _QWORD v18[4];

  v3 = *a1;
  if (*(_DWORD*)(*a1 + 48) == 1) {
    v4 = *(_QWORD*)(a3 + 32);
    if (v4 != 0) {
      if (v4 == a3) {
        v17 = v16;
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 24LL))(v4, v16);
      }
      else {
        v17 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      }
    }
    else {
      v17 = nullptr;
    }
    if (a2 != (_QWORD*)v16) {
      v7 = v17;
      v8 = (_QWORD*)a2[4];
      if (v17 == v16) {
        if (v8 == a2) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 24LL))((__int64)v17);
          (*(void (**)(_BYTE*))(*(_QWORD*)v17 + 32LL))(v17);
          v14 = a2[4];
          v17 = nullptr;
          (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v14 + 24LL))(v14, v16);
          (*(void (**)(_QWORD))(*(_QWORD*)a2[4] + 32LL))(a2[4]);
          v15 = v18[0];
          a2[4] = 0;
          v17 = v16;
          (*(void (**)(_QWORD*, _QWORD*))(v15 + 24))(v18, a2);
          (*(void (**)(_QWORD*))(v18[0] + 32LL))(v18);
          a2[4] = a2;
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 24LL))((__int64)v17);
          (*(void (**)(_BYTE*))(*(_QWORD*)v17 + 32LL))(v17);
          v11 = (_BYTE*)a2[4];
          a2[4] = a2;
          v17 = v11;
        }
      }
      else if (v8 == a2) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, _BYTE*))(
            *v8 + 24LL))((void*)v8, a2[4], v16);
        (*(void (**)(_QWORD))(*(_QWORD*)a2[4] + 32LL))(a2[4]);
        v13 = v17;
        v17 = v16;
        a2[4] = v13;
      }
      else {
        v17 = (_BYTE*)a2[4];
        a2[4] = v7;
      }
    }
    result = v17;
    if (v17 != v16) {
      goto LABEL_30;
    }
  LABEL_26:
    v12 = 32;
    return (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)result + v12))(
        (__int64)result);
  }
  v6 = *(_QWORD*)(a3 + 32);
  if (v6 != 0) {
    if (v6 == a3) {
      v17 = v16;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v6 + 24LL))(v6, v16);
    }
    else {
      v17 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    }
  }
  else {
    v17 = nullptr;
  }
  v9 = *(unsigned int*)(v3 + 48);
  if ((_DWORD)v9 != -1) {
    ((void (*)(_QWORD*, __int64))GameData_1fdce28[v9])(v18, v3);
  }
  result = v17;
  *(_DWORD*)(v3 + 48) = -1;
  if (result == nullptr) {
    *(_QWORD*)(v3 + 32) = 0;
    goto LABEL_22;
  }
  if (result != v16) {
    *(_QWORD*)(v3 + 32) = result;
  LABEL_22:
    *(_DWORD*)(v3 + 48) = 1;
    return result;
  }
  *(_QWORD*)(v3 + 32) = v3;
  (*(void (**)(_BYTE*, __int64))(*(_QWORD*)result + 24LL))(result, v3);
  result = v17;
  *(_DWORD*)(v3 + 48) = 1;
  if (result == v16) {
    goto LABEL_26;
  }
LABEL_30:
  if (result == nullptr) {
    return result;
  }
  v12 = 40;
  return (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)result + v12))(
      (__int64)result);
}

_QWORD* GameHr_d63160(__int64 a1, unsigned __int8* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  bool v14;
  unsigned __int64 v15;
  unsigned __int8* v16;
  unsigned __int64 v17;
  unsigned __int8* v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  unsigned __int8* v22;
  unsigned __int8* v23;
  unsigned __int64 v24;
  char* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int8* v28;
  _QWORD* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int16 v43;
  unsigned __int64 v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _BYTE v49[48];
  unsigned int v50;
  unsigned __int64 v51;

  v4 = *GameData_212c370;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  result = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (result == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v8 = 40;
  LABEL_8:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
  }
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 != 0x4000) {
    v10 = GameData_212c330[0];
    v11 = (_QWORD*)(GameData_212c330[0][*(unsigned int*)(a1 + 20)] + 16 * v9);
    if (v11[1] != 0 && *v11 == *(_QWORD*)(a1 + 8)) {
      v12 = *a2;
      v43 = 0;
      v46 = 0;
      v47 = 0;
      v13 = v12 >> 1;
      v14 = (v12 & 1) == 0;
      v15 = *((_QWORD*)a2 + 1);
      v16 = *((unsigned __int8**)a2 + 2);
      v48 = 0;
      if (v14) {
        v17 = v13;
      }
      else {
        v17 = v15;
      }
      if (v14) {
        v18 = a2 + 1;
      }
      else {
        v18 = v16;
      }
      GameRoutine_60a060(&v43, v18, v17);
      v19 = *(unsigned int*)(a1 + 16);
      v20 = v10[*(unsigned int*)(a1 + 20)];
      v21 = *(_QWORD**)(v20 + 16 * v19 + 8);
      v22 = (unsigned __int8*)v21[166];
      v23 = (unsigned __int8*)v21[167];
      if (v22 == v23) {
      LABEL_36:
        if (*(_QWORD*)(v20 + 16 * v19) == *(_QWORD*)(a1 + 8)) {
          v29 = v21;
        }
        else {
          v29 = nullptr;
        }
        GameRoutine_d5bf40(v49);
        v30 = v29[167];
        v31 = v21[168];
        v50 = 0;
        if (v30 >= v31) {
          result = (_QWORD*)GameRoutine_d5bb40(v21 + 166, v49);
        }
        else {
          *(_BYTE*)v30 = 0;
          *(_DWORD*)(v30 + 48) = -1;
          v32 = v50;
          if (v50 != -1) {
            v51 = v30;
            ((void (*)(unsigned __int64*, _BYTE*))GameData_1fdce38[v50])(&v51,
                                                                         v49);
            *(_DWORD*)(v30 + 48) = v32;
          }
          result = (_QWORD*)(v30 + 64);
        }
        v33 = v50;
        v29[167] = result;
        if ((_DWORD)v33 != -1) {
          result = (_QWORD*)((__int64 (*)(
              unsigned __int64*, _BYTE*))GameData_1fdce28[v33])(&v51, v49);
        }
      }
      else {
        if ((v43 & 1) != 0) {
          v24 = v44;
        }
        else {
          v24 = (unsigned __int64)(unsigned __int8)v43 >> 1;
        }
        if ((v43 & 1) != 0) {
          v25 = v45;
        }
        else {
          v25 = (char*)&v43 + 1;
        }
        while (1) {
          if (v22 != nullptr && *((_DWORD*)v22 + 12) == 0) {
            v26 = *v22;
            v27 = *((_QWORD*)v22 + 1);
            if ((v26 & 1) == 0) {
              v27 = v26 >> 1;
            }
            if (v27 == v24) {
              v28 = (v26 & 1) != 0 ? *((unsigned __int8**)v22 + 2) : v22 + 1;
              result = (_QWORD*)GameRoutine_1a09cf0(v28, v25, v24);
              if ((_DWORD)result == 0) {
                break;
              }
            }
          }
          v22 += 64;
          if (v22 == v23) {
            goto LABEL_36;
          }
        }
      }
      v34 = v46;
      if (v46 != 0) {
        v35 = v47;
        v36 = GameData_212bf68;
        if (v46 == v47) {
          goto LABEL_57;
        }
        v37 = v47;
        do {
          v38 = *(_BYTE*)(v37 - 24);
          v37 -= 24;
          if ((v38 & 1) != 0) {
            v39 = *(_QWORD*)(v35 - 8);
            if (v39 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v36 + 200LL) != 0) {
                v40 = 128;
              }
              else {
                v40 = 56;
              }
              result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v36 + v40, v39);
            }
          }
          v35 = v37;
        } while (v37 != v34);
        v47 = v34;
        v34 = v46;
        if (v46 != 0) {
        LABEL_57:
          v41 = 128;
          if (*(_QWORD*)(*(_QWORD*)v36 + 200LL) == 0) {
            v41 = 56;
          }
          result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v36 + v41, v34);
        }
      }
      if ((v43 & 1) != 0 && v45 != nullptr) {
        v42 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v42 = 56;
        }
        return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v42,
                                            v45);
      }
    }
  }
  return result;
}

_QWORD* GameHr_d634c0(__int64 a1, unsigned __int8* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  bool v14;
  unsigned __int64 v15;
  unsigned __int8* v16;
  unsigned __int64 v17;
  unsigned __int8* v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  unsigned __int8* v22;
  unsigned __int8* v23;
  unsigned __int64 v24;
  char* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int8* v28;
  _QWORD* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int16 v43;
  unsigned __int64 v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _BYTE v49[48];
  unsigned int v50;
  unsigned __int64 v51;

  v4 = *GameData_212c370;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  result = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (result == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v8 = 40;
  LABEL_8:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
  }
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 != 0x4000) {
    v10 = GameData_212c330[0];
    v11 = (_QWORD*)(GameData_212c330[0][*(unsigned int*)(a1 + 20)] + 16 * v9);
    if (v11[1] != 0 && *v11 == *(_QWORD*)(a1 + 8)) {
      v12 = *a2;
      v43 = 0;
      v46 = 0;
      v47 = 0;
      v13 = v12 >> 1;
      v14 = (v12 & 1) == 0;
      v15 = *((_QWORD*)a2 + 1);
      v16 = *((unsigned __int8**)a2 + 2);
      v48 = 0;
      if (v14) {
        v17 = v13;
      }
      else {
        v17 = v15;
      }
      if (v14) {
        v18 = a2 + 1;
      }
      else {
        v18 = v16;
      }
      GameRoutine_60a060(&v43, v18, v17);
      v19 = *(unsigned int*)(a1 + 16);
      v20 = v10[*(unsigned int*)(a1 + 20)];
      v21 = *(_QWORD**)(v20 + 16 * v19 + 8);
      v22 = (unsigned __int8*)v21[169];
      v23 = (unsigned __int8*)v21[170];
      if (v22 == v23) {
      LABEL_36:
        if (*(_QWORD*)(v20 + 16 * v19) == *(_QWORD*)(a1 + 8)) {
          v29 = v21;
        }
        else {
          v29 = nullptr;
        }
        GameRoutine_d5bf40(v49);
        v30 = v29[170];
        v31 = v21[171];
        v50 = 0;
        if (v30 >= v31) {
          result = (_QWORD*)GameRoutine_d5bb40(v21 + 169, v49);
        }
        else {
          *(_BYTE*)v30 = 0;
          *(_DWORD*)(v30 + 48) = -1;
          v32 = v50;
          if (v50 != -1) {
            v51 = v30;
            ((void (*)(unsigned __int64*, _BYTE*))GameData_1fdce38[v50])(&v51,
                                                                         v49);
            *(_DWORD*)(v30 + 48) = v32;
          }
          result = (_QWORD*)(v30 + 64);
        }
        v33 = v50;
        v29[170] = result;
        if ((_DWORD)v33 != -1) {
          result = (_QWORD*)((__int64 (*)(
              unsigned __int64*, _BYTE*))GameData_1fdce28[v33])(&v51, v49);
        }
      }
      else {
        if ((v43 & 1) != 0) {
          v24 = v44;
        }
        else {
          v24 = (unsigned __int64)(unsigned __int8)v43 >> 1;
        }
        if ((v43 & 1) != 0) {
          v25 = v45;
        }
        else {
          v25 = (char*)&v43 + 1;
        }
        while (1) {
          if (v22 != nullptr && *((_DWORD*)v22 + 12) == 0) {
            v26 = *v22;
            v27 = *((_QWORD*)v22 + 1);
            if ((v26 & 1) == 0) {
              v27 = v26 >> 1;
            }
            if (v27 == v24) {
              v28 = (v26 & 1) != 0 ? *((unsigned __int8**)v22 + 2) : v22 + 1;
              result = (_QWORD*)GameRoutine_1a09cf0(v28, v25, v24);
              if ((_DWORD)result == 0) {
                break;
              }
            }
          }
          v22 += 64;
          if (v22 == v23) {
            goto LABEL_36;
          }
        }
      }
      v34 = v46;
      if (v46 != 0) {
        v35 = v47;
        v36 = GameData_212bf68;
        if (v46 == v47) {
          goto LABEL_57;
        }
        v37 = v47;
        do {
          v38 = *(_BYTE*)(v37 - 24);
          v37 -= 24;
          if ((v38 & 1) != 0) {
            v39 = *(_QWORD*)(v35 - 8);
            if (v39 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v36 + 200LL) != 0) {
                v40 = 128;
              }
              else {
                v40 = 56;
              }
              result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v36 + v40, v39);
            }
          }
          v35 = v37;
        } while (v37 != v34);
        v47 = v34;
        v34 = v46;
        if (v46 != 0) {
        LABEL_57:
          v41 = 128;
          if (*(_QWORD*)(*(_QWORD*)v36 + 200LL) == 0) {
            v41 = 56;
          }
          result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v36 + v41, v34);
        }
      }
      if ((v43 & 1) != 0 && v45 != nullptr) {
        v42 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v42 = 56;
        }
        return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v42,
                                            v45);
      }
    }
  }
  return result;
}

__int64* GameHr_d69060(__int64* result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v1 = *result;
  if (*result == 0) {
    return result;
  }
  v2 = result[1];
  v3 = result;
  v4 = GameData_212bf68;
  if (v1 == v2) {
    goto LABEL_27;
  }
  do {
    v5 = *(_QWORD**)(v2 - 16);
    v6 = v2;
    if ((_QWORD*)(v2 - 48) == v5) {
      v7 = 32;
    }
    else {
      if (v5 == nullptr) {
        goto LABEL_10;
      }
      v7 = 40;
    }
    (*(void (**)(__int64))(*v5 + v7))((__int64)v5);
  LABEL_10:
    v8 = *(_QWORD**)(v2 - 64);
    if ((_QWORD*)(v2 - 96) == v8) {
      v9 = 32;
    }
    else {
      if (v8 == nullptr) {
        goto LABEL_15;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*v8 + v9))((__int64)v8);
  LABEL_15:
    result = *(__int64**)(v2 - 112);
    if ((__int64*)(v2 - 144) == result) {
      v10 = 32;
      goto LABEL_19;
    }
    if (result != nullptr) {
      v10 = 40;
    LABEL_19:
      result =
          (__int64*)(*(__int64 (**)(__int64))(*result + v10))((__int64)result);
    }
    v2 -= 176;
    if ((*(_BYTE*)(v6 - 176) & 1) != 0) {
      v11 = *(_QWORD*)(v6 - 160);
      if (v11 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        result = (__int64*)GameRoutine_1a0a4e0(*(_QWORD*)v4 + v12, v11);
      }
    }
  } while (v2 != v1);
  v13 = *v3;
  v3[1] = v1;
  v1 = v13;
  if (v13 != 0) {
  LABEL_27:
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v14 = 56;
    }
    result = (__int64*)GameRoutine_1a0a4e0(*(_QWORD*)v4 + v14, v1);
  }
  v3[1] = 0;
  v3[2] = 0;
  *v3 = 0;
  return result;
}

_QWORD* GameHr_d69330(_QWORD* a1, _QWORD* a2)
{
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* v6;
  bool v7;
  unsigned __int64 v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _BYTE v17[32];
  _BYTE* v18;

  if (a1 == a2) {
    goto LABEL_13;
  }
  v4 = *(unsigned __int8*)a2;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v7 = (v4 & 1) == 0;
    v8 = v4 >> 1;
    if (v7) {
      v9 = (char*)a2 + 1;
    }
    else {
      v9 = (char*)a2[2];
    }
    if (v7) {
      v10 = v8;
    }
    else {
      v10 = a2[1];
    }
    GameRoutine_64dde0(a1, v9, v10);
  LABEL_13:
    v6 = (_QWORD*)a2[8];
    if (v6 != nullptr) {
      goto LABEL_14;
    }
    goto LABEL_18;
  }
  if ((v4 & 1) != 0) {
    GameRoutine_64df20(a1, a2[2], a2[1]);
    v6 = (_QWORD*)a2[8];
    if (v6 != nullptr) {
      goto LABEL_14;
    }
  LABEL_18:
    v18 = nullptr;
    goto LABEL_19;
  }
  a1[1] = a2[1];
  v5 = *a2;
  a1[2] = a2[2];
  *a1 = v5;
  v6 = (_QWORD*)a2[8];
  if (v6 == nullptr) {
    goto LABEL_18;
  }
LABEL_14:
  if (v6 == a2 + 4) {
    v18 = v17;
    (*(void (**)(_QWORD*, _BYTE*))(*v6 + 24LL))(v6, v17);
  }
  else {
    v18 = (_BYTE*)(*(__int64 (**)(_QWORD*))(*v6 + 16LL))(v6);
  }
LABEL_19:
  GameRoutine_cb5190(v17, a1 + 4);
  if (v18 == v17) {
    v11 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_24;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v18 + v11))((__int64)v18);
LABEL_24:
  v12 = (_QWORD*)a2[14];
  if (v12 != nullptr) {
    if (v12 == a2 + 10) {
      v18 = v17;
      (*(void (**)(_QWORD*, _BYTE*))(*v12 + 24LL))(v12, v17);
    }
    else {
      v18 = (_BYTE*)(*(__int64 (**)(_QWORD*))(*v12 + 16LL))(v12);
    }
  }
  else {
    v18 = nullptr;
  }
  GameRoutine_cb5190(v17, a1 + 10);
  if (v18 == v17) {
    v13 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_34;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v18 + v13))((__int64)v18);
LABEL_34:
  v14 = (_QWORD*)a2[20];
  if (v14 != nullptr) {
    if (v14 == a2 + 16) {
      v18 = v17;
      (*(void (**)(_QWORD*, _BYTE*))(*v14 + 24LL))(v14, v17);
    }
    else {
      v18 = (_BYTE*)(*(__int64 (**)(_QWORD*))(*v14 + 16LL))(v14);
    }
  }
  else {
    v18 = nullptr;
  }
  GameRoutine_cb4e70(v17, a1 + 16);
  if (v18 == v17) {
    v15 = 32;
    goto LABEL_43;
  }
  if (v18 != nullptr) {
    v15 = 40;
  LABEL_43:
    (*(void (**)(__int64))(*(_QWORD*)v18 + v15))((__int64)v18);
  }
  return a1;
}

__int64 GameHr_d6aa20(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  GameRoutine_1a09b70(&GameData_2167660);
  *(_WORD*)(a1 + 1196) = 0;
  GameRoutine_d6b900(a1);
  GameRoutine_d6bda0(a1);
  GameRoutine_1a09b80(&GameData_2167660);
  v2 = *(_QWORD*)(a1 + 1184);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    GameRoutine_1a09c50(v2);
  }
  v3 = *(_QWORD*)(a1 + 1152);
  if (v3 != 0) {
    v4 = *(_QWORD*)(a1 + 1160);
    if (v3 == v4) {
      goto LABEL_11;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0) {
        GameRoutine_1a09c50(v5);
      }
      v4 -= 16;
    } while (v4 != v3);
    v6 = *(_QWORD*)(a1 + 1152);
    *(_QWORD*)(a1 + 1160) = v3;
    v3 = v6;
    if (v6 != 0) {
    LABEL_11:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v7 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7, v3);
    }
  }
  v8 = *(_QWORD*)(a1 + 1128);
  if (v8 != 0) {
    v9 = *(_QWORD*)(a1 + 1136);
    if (v8 == v9) {
      goto LABEL_21;
    }
    do {
      v10 = *(_QWORD*)(v9 - 8);
      if (v10 != 0) {
        GameRoutine_1a09c50(v10);
      }
      v9 -= 16;
    } while (v9 != v8);
    v11 = *(_QWORD*)(a1 + 1128);
    *(_QWORD*)(a1 + 1136) = v8;
    v8 = v11;
    if (v11 != 0) {
    LABEL_21:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v12 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v12, v8);
    }
  }
  GameRoutine_cacc00(a1 + 104);
  result = *(_QWORD*)(a1 + 88);
  if (result != 0) {
    return GameRoutine_1a09c50(result);
  }
  return result;
}

__int64 GameHr_d6e060(__int64 a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
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

  *(_QWORD*)a1 = GameData_1fdd278;
  GameRoutine_d6e320();
  if (GameData_22110a0 != 0 && GameData_22110a8-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_22110a0 + 24LL))(
        (__int64)GameData_22110a0);
    if (GameData_22110a0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_22110a0 + 8LL))(
          GameData_22110a0);
    }
    GameData_22110a0 = 0;
  }
  GameRoutine_f88720(a1 + 248);
  if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 240);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v4 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v4, v3);
    }
  }
  v5 = *(_QWORD*)(a1 + 192);
  if (v5 != 0) {
    v6 = *(_QWORD*)(a1 + 200);
    if (v5 == v6) {
      goto LABEL_23;
    }
    v7 = *(_QWORD*)(a1 + 200);
    v8 = GameData_212bf68;
    do {
      v9 = *(_BYTE*)(v7 - 24);
      v7 -= 24;
      if ((v9 & 1) != 0) {
        v10 = *(_QWORD*)(v6 - 8);
        if (v10 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v8 + v11, v10);
        }
      }
      v6 = v7;
    } while (v7 != v5);
    v12 = *(_QWORD*)(a1 + 192);
    *(_QWORD*)(a1 + 200) = v5;
    v5 = v12;
    if (v12 != 0) {
    LABEL_23:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v13 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v13, v5);
    }
  }
  result = GameRoutine_d709d0(a1 + 168, *(_QWORD*)(a1 + 176));
  if ((*(_BYTE*)(a1 + 136) & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 152);
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v16 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v16, v15);
    }
  }
  if ((*(_BYTE*)(a1 + 112) & 1) != 0) {
    v17 = *(_QWORD*)(a1 + 128);
    if (v17 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v18 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v18, v17);
    }
  }
  if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
    v19 = *(_QWORD*)(a1 + 80);
    if (v19 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v20 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v20, v19);
    }
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    v21 = *(_QWORD*)(a1 + 56);
    if (v21 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v22 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v22, v21);
    }
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v23 = *(_QWORD*)(a1 + 32);
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v24 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v24, v23);
    }
  }
  *(_QWORD*)a1 = GameData_1fdd3a0;
  if (GameData_21f3cc0 == a1) {
    GameData_21f3cc0 = 0;
    GameData_2211098 = 0;
  }
  return result;
}

__int64 GameHr_d71020(__int64 a1, __int64 a2, int a3)
{
  __int64 i;
  long double v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  long double v11;
  __int64 v13;
  char v14;
  char v15;
  char v16;
  char v17;
  char v18;
  char v19;
  char v20;
  char v21;
  char v22;
  char v23;
  char v24;
  char v25;
  char v26;
  char v27;
  char v28;
  char v29;

  LODWORD(i) = a3;
  *(__n128*)&v6 = GameRoutine_1a09b70(a1 + 48);
  if ((int)i >= 1) {
    v7 = (__int64*)(a2 + 8);
    for (i = (unsigned int)i; i != 0; --i) {
      v9 = *(v7 - 1);
      v8 = *v7;
      if (v9 != 0 && v8 != 0) {
        v14 = 0;
        v15 = 0;
        v16 = 0;
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        v23 = 0;
        v24 = 0;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v28 = 0;
        v29 = 0;
        v13 = v8;
        GameRoutine_d70e70(v9 + 16, &v13, v6);
        v14 = 0;
        v15 = 0;
        v16 = 0;
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        v23 = 0;
        v24 = 0;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v28 = 0;
        v29 = 0;
        v13 = v9;
        GameRoutine_d70e70(v8 + 16, &v13, v11);
      }
      v7 += 2;
    }
  }
  return GameRoutine_1a09b80(a1 + 48);
}

__int64* GameHr_d74b60(__int64* result, float* a2, float a3)
{
  float v4;
  float v5;
  int v7;
  int v8;
  int v9;
  int v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  __int64* v17;
  unsigned __int64 v18;
  __int64 v19;
  float v21;
  signed int v22;
  int v23;
  float v24;
  float v25;
  int v26;
  int v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;
  int v32;
  int v33;
  bool v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  bool v45;
  float v46;
  unsigned __int64 v48;
  _QWORD* v49;
  __int64 v50;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  _QWORD* v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  float* v72;
  __int64 v73;
  __int64* v74;
  __int64* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  int v81;
  int v82;
  signed int v83;
  float v84;
  float v85;
  float v86;
  __int64* v87;
  __int64 v88;

  v5 = *a2;
  v4 = a2[1];
  v7 = (int)(float)((float)(*a2 + 1280.0f) * 0.2f);
  v8 = (int)(float)((float)(v4 + 1280.0f) * 0.2f);
  v9 = v8 - 256;
  v82 = v7 - 256;
  if (((v7 - 256) | (v8 - 256)) != 0) {
    v10 = v8 - 256;
    v16 = (float)((float)((float)v7 * 5.0f) + 2.5f) + -1280.0f;
    v14 = v16 + 2.5f;
    v11 = (float)((float)((float)v8 * 5.0f) + 2.5f) + -1280.0f;
    v15 = v16 + -2.5f;
    v12 = v11 + -2.5f;
    v13 = v11 + 2.5f;
  }
  else {
    v10 = 0;
    v11 = 2.5f;
    v12 = 0.0f;
    v13 = 5.0f;
    v14 = 5.0f;
    v15 = 0.0f;
    v16 = 2.5f;
  }
  v87 = result;
  if (v5 > (float)(v14 - a3) || v5 < (float)(a3 + v15) ||
      v4 < (float)(a3 + v12) || v4 > (float)(v13 - a3)) {
    v21 = 5.0f;
    v22 = vcvtms_s32_f32(a3 / 5.0f);
    if (-2 - v22 <= v22) {
      v23 = ~v22;
      v24 = 2.5f;
      v25 = -2.5f;
      v81 = (int)(float)((float)(*a2 + 1280.0f) * 0.2f);
      do {
        v26 = ~v22;
        v83 = v23;
        v27 = v23 + v82;
        v28 = (float)(v24 + (float)((float)(v23 + v7) * v21)) + -1280.0f;
        v29 = v28 + v25;
        v30 = v28 + v24;
        v85 = v28 + v25;
        v86 = v28;
        v84 = v28 + v24;
        do {
          v32 = v26 + v8;
          v33 = v26 + v9;
          v34 = v27 == -10000 && v33 == -10000;
          if (v34) {
            v35 = 0.0f;
          }
          else {
            v35 = v29;
          }
          if (v34) {
            v36 = 0.0f;
          }
          else {
            v36 = v30;
          }
          if (v34) {
            v37 = 0.0f;
          }
          else {
            v37 = v28;
          }
          v38 = (float)(v24 + (float)((float)v32 * v21)) + -1280.0f;
          v39 = v38 + v25;
          v40 = v38 + v24;
          if (v34) {
            v41 = 0.0f;
          }
          else {
            v41 = (float)(v24 + (float)((float)v32 * v21)) + -1280.0f;
          }
          v42 = *a2;
          if (v34) {
            v43 = 0.0f;
          }
          else {
            v43 = v39;
          }
          if (v34) {
            v44 = 0.0f;
          }
          else {
            v44 = v40;
          }
          v45 = v42 < (float)(v35 - a3) || v42 > (float)(a3 + v36);
          if (!v45) {
            v46 = a2[1];
            if (v46 >= (float)(v43 - a3) && v46 <= (float)(a3 + v44)) {
              v49 = (_QWORD*)*result;
              v48 = result[1];
              v50 = *result;
              if (*result != v48) {
                v50 = *result;
                while (*(_DWORD*)(v50 + 24) != v27 ||
                       *(_DWORD*)(v50 + 28) != v33) {
                  v50 += 40;
                  if (v50 == v48) {
                    goto LABEL_62;
                  }
                }
              }
              if (v50 == v48) {
              LABEL_62:
                v52 = result[2];
                if (v48 < v52) {
                  *(float*)v48 = v37;
                  *(float*)(v48 + 4) = v41;
                  *(float*)(v48 + 8) = v35;
                  *(float*)(v48 + 12) = v43;
                  v31 = v48 + 40;
                  *(float*)(v48 + 16) = v36;
                  *(float*)(v48 + 20) = v44;
                  *(_DWORD*)(v48 + 24) = v27;
                  *(_DWORD*)(v48 + 28) = v33;
                  *(_DWORD*)(v48 + 32) = v27;
                  *(_DWORD*)(v48 + 36) = v33;
                }
                else {
                  v53 = 0xCCCCCCCCCCCCCCCDLL *
                            ((__int64)(v48 - (_QWORD)v49) >> 3) +
                        1;
                  if (v53 > 0x666666666666666LL) {
                    goto LABEL_99;
                  }
                  v54 = 0xCCCCCCCCCCCCCCCDLL *
                        ((__int64)(v52 - (_QWORD)v49) >> 3);
                  if (2 * v54 > v53) {
                    v53 = 2 * v54;
                  }
                  if (v54 >= 0x333333333333333LL) {
                    v55 = 0x666666666666666LL;
                  }
                  else {
                    v55 = v53;
                  }
                  if (v55 > 0x666666666666666LL) {
                    goto LABEL_98;
                  }
                  v88 = 5 * v55;
                  v56 = GameRoutine_651b90(GameData_2265ee0, 40 * v55, 16, 0);
                  v57 = v56 + v48 - (_QWORD)v49;
                  *(float*)v57 = v37;
                  *(float*)(v57 + 4) = v41;
                  *(float*)(v57 + 8) = v35;
                  *(float*)(v57 + 12) = v43;
                  *(float*)(v57 + 16) = v36;
                  *(float*)(v57 + 20) = v44;
                  *(_DWORD*)(v57 + 24) = v27;
                  *(_DWORD*)(v57 + 28) = v33;
                  *(_DWORD*)(v57 + 32) = v27;
                  *(_DWORD*)(v57 + 36) = v33;
                  if (v49 != (_QWORD*)v48) {
                    v58 = v49;
                    v59 = (_QWORD*)v56;
                    do {
                      *v59 = *v58;
                      v60 = v58[1];
                      v61 = v58[2];
                      v62 = v58[3];
                      v63 = v58[4];
                      v58 += 5;
                      v59[3] = v62;
                      v59[4] = v63;
                      v59[1] = v60;
                      v59[2] = v61;
                      v59 += 5;
                    } while (v58 != (_QWORD*)v48);
                  }
                  v31 = v57 + 40;
                  *v87 = v56;
                  v87[1] = v57 + 40;
                  v87[2] = v56 + 8 * v88;
                  if (v49 != nullptr) {
                    v64 = 128;
                    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                      v64 = 56;
                    }
                    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v64, v49);
                    result = v87;
                  }
                  else {
                    result = v87;
                  }
                  v29 = v85;
                  v28 = v86;
                  v30 = v84;
                  v21 = 5.0f;
                  v24 = 2.5f;
                  v25 = -2.5f;
                  v9 = v8 - 256;
                }
                result[1] = v31;
              }
            }
          }
          v45 = v26++ <= v22;
        } while (v45);
        v7 = v81;
        v23 = v83 + 1;
      } while (v83 <= v22);
    }
  }
  else {
    v17 = (__int64*)*result;
    v18 = result[1];
    v19 = *result;
    if (*result != v18) {
      v19 = *result;
      while (*(_DWORD*)(v19 + 24) != v82 || *(_DWORD*)(v19 + 28) != v9) {
        v19 += 40;
        if (v19 == v18) {
          goto LABEL_80;
        }
      }
    }
    if (v19 == v18) {
    LABEL_80:
      v65 = result[2];
      if (v18 >= v65) {
        v66 = v18 - (_QWORD)v17;
        v67 = 1 - 0x3333333333333333LL * ((__int64)(v18 - (_QWORD)v17) >> 3);
        if (v67 > 0x666666666666666LL) {
        LABEL_99:
          GameRoutine_d75440();
        }
        v68 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v65 - (_QWORD)v17) >> 3);
        if (2 * v68 > v67) {
          v67 = 2 * v68;
        }
        if (v68 >= 0x333333333333333LL) {
          v69 = 0x666666666666666LL;
        }
        else {
          v69 = v67;
        }
        if (v69 > 0x666666666666666LL) {
        LABEL_98:
          GameRoutine_60a210(result);
        }
        v70 = 5 * v69;
        v71 = GameData_212bf68;
        result = (__int64*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68,
                                              40 * v69, 16, 0);
        v72 = (float*)((char*)result + v66);
        v73 = (__int64)result + v66 + 40;
        *v72 = v16;
        v72[1] = v11;
        v72[2] = v15;
        v72[3] = v12;
        v72[4] = v14;
        v72[5] = v13;
        *((_DWORD*)v72 + 6) = v82;
        *((_DWORD*)v72 + 7) = v8 - 256;
        *((_DWORD*)v72 + 8) = v82;
        *((_DWORD*)v72 + 9) = v10;
        if (v17 != (__int64*)v18) {
          v74 = v17;
          v75 = result;
          do {
            *v75 = *v74;
            v76 = v74[1];
            v77 = v74[2];
            v78 = v74[3];
            v79 = v74[4];
            v74 += 5;
            v75[3] = v78;
            v75[4] = v79;
            v75[1] = v76;
            v75[2] = v77;
            v75 += 5;
          } while (v74 != (__int64*)v18);
        }
        *v87 = (__int64)result;
        v87[1] = v73;
        v87[2] = (__int64)&result[v70];
        if (v17 != nullptr) {
          v80 = 128;
          if (*(_QWORD*)(*(_QWORD*)v71 + 200LL) == 0) {
            v80 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v71 + v80, v17);
          v87[1] = v73;
          return v87;
        }
        else {
          v87[1] = v73;
        }
      }
      else {
        *(float*)v18 = v16;
        *(float*)(v18 + 4) = v11;
        *(float*)(v18 + 8) = v15;
        *(float*)(v18 + 12) = v12;
        *(float*)(v18 + 16) = v14;
        *(float*)(v18 + 20) = v13;
        *(_DWORD*)(v18 + 24) = v82;
        *(_DWORD*)(v18 + 28) = v9;
        *(_DWORD*)(v18 + 32) = v82;
        *(_DWORD*)(v18 + 36) = v10;
        result[1] = v18 + 40;
      }
    }
  }
  return result;
}

_QWORD* GameHr_d88620(__int64 a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  int v5;
  _QWORD* result;
  __int64 v7;
  __int16 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v1 = *(_DWORD*)(a1 + 152);
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 192);
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
      v1 = *(_DWORD*)(a1 + 152);
    }
    v4 = *(_QWORD*)(a1 + 8);
    if (v4 != 0) {
      while (1) {
        if (*(_BYTE*)v4 == 2) {
          if (*(_DWORD*)(v4 + 32) == v1) {
            v8 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v4;
            *(_WORD*)(a1 + 136) = v8 & 0xFF7F;
            v5 = *(_DWORD*)(a1 + 156);
            if (v5 == 0) {
              goto LABEL_37;
            }
            goto LABEL_16;
          }
        }
        else if (*(_BYTE*)v4 == 0) {
          break;
        }
        v4 += 64;
      }
    }
    v5 = *(_DWORD*)(a1 + 156);
    if (v5 != 0) {
    LABEL_16:
      v9 = *(_QWORD*)(a1 + 96);
      v10 = *(_QWORD*)(a1 + 104);
      v11 = ((v10 - v9) << 6) - 1;
      if (v10 == v9) {
        v11 = 0;
      }
      v12 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
      if (v11 == v12) {
        GameRoutine_658d60(a1 + 88);
        v9 = *(_QWORD*)(a1 + 96);
        v12 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
      }
      *(_QWORD*)(*(_QWORD*)(v9 + 8 * (v12 >> 9)) + 8 * (v12 & 0x1FF)) =
          *(_QWORD*)(a1 + 16);
      ++*(_QWORD*)(a1 + 128);
      v13 = *(_QWORD*)(a1 + 8);
      if (v13 != 0) {
        while (1) {
          if (*(_BYTE*)v13 == 2) {
            if (*(_DWORD*)(v13 + 32) == v5) {
              *(_QWORD*)(a1 + 16) = v13;
              *(_WORD*)(a1 + 136) &= ~0x80u;
              break;
            }
          }
          else if (*(_BYTE*)v13 == 0) {
            break;
          }
          v13 += 64;
        }
      }
    }
  LABEL_37:
    result = *(_QWORD**)(a1 + 192);
    *(_QWORD*)(a1 + 152) = 0;
    *(_QWORD*)(a1 + 192) = 0;
    if (result == (_QWORD*)(a1 + 160)) {
      v15 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v15 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v15))((__int64)result);
  }
  result = *(_QWORD**)(a1 + 192);
  *(_DWORD*)(a1 + 156) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == (_QWORD*)(a1 + 160)) {
    v7 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_29;
    }
    v7 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v7))((__int64)result);
LABEL_29:
  v14 = *(_QWORD*)(a1 + 8);
  if (v14 != 0) {
    while (1) {
      if (*(_BYTE*)v14 == 2) {
        if (*(_DWORD*)(v14 + 32) == 2) {
          *(_QWORD*)(a1 + 16) = v14;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v14 == 0) {
        return result;
      }
      v14 += 64;
    }
  }
  return result;
}

__int64 GameHr_d8d080(__int64 result)
{
  int v1;
  _DWORD* v2;
  __int64 v3;
  bool v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  char v9;
  int v10;
  bool v12;
  int v13;

  v1 = *(_DWORD*)(result + 48);
  v2 = (_DWORD*)result;
  *(_DWORD*)(result + 48) = v1 + 1;
  if (v1 == 0) {
    result = (**(__int64 (***)(__int64))(result + 40))(result + 40);
  }
  v3 = GameData_21d96b8;
  v4 = (int)v2[8] <= 0 && v2[4] <= 0;
  if (!v4 ||
      GameData_21ee240 != 0 &&
          (unsigned int)*(unsigned __int8*)(GameData_21ee240 + 152) - 1 <= 2 &&
          (((v5 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v6 = 2)
                                                                : (v6 = 3),
           (v6 & v5) == 0) ||
      GameData_2212270 != 0 && (v7 = *(_QWORD*)(GameData_2212270 + 408)) != 0 &&
          *(_QWORD*)(v7 + 40) != 0 ||
      (v8 = *(_QWORD*)(GameData_2212270 + 416)) != 0 &&
          *(_QWORD*)(v8 + 40) != 0) {
    v9 = 0;
  }
  else {
    v9 = *(_BYTE*)(GameData_21f3d10 + 10);
  }
  v10 = *(unsigned __int8*)(GameData_21d96b8 + 14);
  *(_BYTE*)(GameData_21d96b8 + 12) = v9 & 1;
  v12 = (int)v2[8] < 1 && v2[12] < 1;
  *(_BYTE*)(v3 + 13) = v12;
  v13 = v2[8] < 1;
  if (v10 != v13) {
    *(_BYTE*)(v3 + 14) = v13;
  }
  return result;
}

void GameHr_da3820()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  float v3;
  float v4;
  __int64 v5;
  float v6;
  int v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;

  v0 = *(_QWORD*)(GameData_21ec7c0 + 24);
  v1 = *(_QWORD*)(GameData_21ec7c0 + 32);
  if (v0 != v1) {
    v2 = *(_QWORD*)GameData_212c5c0[0];
    do {
      v5 = *(_QWORD*)(*(_QWORD*)v0 + 24LL);
      v6 = *(float*)(v5 + 424);
      *(_DWORD*)(v5 + 428) = 1028443341;
      v7 = *(unsigned __int8*)(v5 + 448);
      v8 = *(_QWORD*)(v5 + 8);
      v9 = v7 == 0;
      v10 = *(_QWORD*)(v8 + 232);
      v3 = v6 * 0.05f;
      if (!v9) {
        v3 = 0.0f;
      }
      *(float*)(v8 + 148) = v3;
      if (v10 != 0) {
        *(float*)(*(_QWORD*)(v10 + 304) + 12LL) = v3;
        v11 = *(_QWORD*)(v8 + 232);
        if (v11 != 0) {
          v3 = *(float*)(*(_QWORD*)(v11 + 304) + 16LL) * 16.683f;
          v4 = 0.001f;
          goto LABEL_5;
        }
        v3 = *(float*)(v8 + 148);
      }
      v4 = (float)(*(float*)(v2 + 160) * 16.683f) / 1000.0f;
    LABEL_5:
      v0 += 16;
      *(float*)(v8 + 228) = v3 * v4;
    } while (v0 != v1);
  }
}

_QWORD* GameHr_daa020(_QWORD* result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)result[37];
  v3 = (_QWORD*)result[38];
  v4 = result;
  if (v2 != v3) {
    while (*v2 != a2) {
      v2 += 8;
      if (v2 == v3) {
        return result;
      }
    }
  }
  if (v2 != v3) {
    if (v2 + 8 == v3) {
      if (v2 != v3) {
        goto LABEL_26;
      }
    LABEL_21:
      v4[38] = v2;
      return result;
    }
    while (1) {
      v5 = v2[8];
      v6 = v2;
      v7 = (_QWORD*)v2[6];
      v2[6] = 0;
      *v2 = v5;
      v8 = v2 + 2;
      if (v8 == v7) {
        break;
      }
      if (v7 != nullptr) {
        v9 = 40;
      LABEL_15:
        (*(void (**)(__int64))(*v7 + v9))((__int64)v7);
      }
      result = (_QWORD*)v6[14];
      if (result != nullptr) {
        if (v6 + 10 == result) {
          v6[6] = v8;
          result = (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD*))(*result + 24LL))(
              result, v8);
        }
        else {
          v6[6] = result;
          v6[14] = 0;
        }
      }
      else {
        v6[6] = 0;
      }
      v2 = v6 + 8;
      if (v6 + 16 == v3) {
        v3 = (_QWORD*)v4[38];
        if (v2 == v3) {
          goto LABEL_21;
        }
      LABEL_26:
        while (2) {
          result = (_QWORD*)*(v3 - 2);
          if (v3 - 6 != result) {
            if (result != nullptr) {
              v10 = 40;
            LABEL_24:
              result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))(
                  (__int64)result);
            }
            v3 -= 8;
            if (v3 == v2) {
              goto LABEL_21;
            }
            continue;
          }
          break;
        }
        v10 = 32;
        goto LABEL_24;
      }
    }
    v9 = 32;
    goto LABEL_15;
  }
  return result;
}

__int64 GameHr_dabe80(__int64* a1, _QWORD* a2, __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;

  v3 = a1[1] - *a1;
  v4 = (v3 >> 6) + 1;
  if (v4 >> 58 != 0) {
    GameRoutine_dac070();
  }
  v6 = a1[2] - *a1;
  if (v6 >> 5 > v4) {
    v4 = v6 >> 5;
  }
  v7 = (unsigned __int64)v6 >= 0x7FFFFFFFFFFFFFC0LL;
  v8 = 0x3FFFFFFFFFFFFFFLL;
  if (!v7) {
    v8 = v4;
  }
  if (v8 >> 58 != 0) {
    GameRoutine_60a210(a1);
  }
  v10 = v8 << 6;
  v12 = GameData_212bf68;
  v13 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v8 << 6, 16, 0);
  v14 = v13 + v3;
  v15 = *(_QWORD*)(a3 + 32);
  *(_QWORD*)(v13 + v3) = *a2;
  v16 = v13 + v3 + 16;
  if (v15 != 0) {
    if (v15 == a3) {
      *(_QWORD*)(v14 + 48) = v16;
      (*(void (**)(__int64))(*(_QWORD*)v15 + 24LL))(v15);
    }
    else {
      *(_QWORD*)(v14 + 48) =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v15 + 16LL))(v15, v16);
    }
  }
  else {
    *(_QWORD*)(v14 + 48) = 0;
  }
  v17 = *a1;
  v18 = a1[1];
  v19 = v13 + v10;
  v20 = v14 + 64;
  v21 = v14 + *a1 - v18;
  if (v18 != *a1) {
    v22 = 0;
    do {
      v23 = v17 + v22;
      v24 = v21 + v22;
      *(_QWORD*)(v21 + v22) = *(_QWORD*)(v17 + v22);
      v25 = *(_QWORD*)(v17 + v22 + 48);
      if (v25 != 0) {
        if (v23 + 16 == v25) {
          *(_QWORD*)(v24 + 48) = v21 + v22 + 16;
          (*(void (**)(_QWORD))(**(_QWORD**)(v23 + 48) + 24LL))(
              *(_QWORD*)(v23 + 48));
        }
        else {
          *(_QWORD*)(v24 + 48) = v25;
          *(_QWORD*)(v23 + 48) = 0;
        }
      }
      else {
        *(_QWORD*)(v24 + 48) = 0;
      }
      v22 += 64;
    } while (v17 + v22 != v18);
    while (1) {
      v27 = *(_QWORD**)(v17 + 48);
      if ((_QWORD*)(v17 + 16) == v27) {
        v26 = 32;
      }
      else {
        if (v27 == nullptr) {
          goto LABEL_22;
        }
        v26 = 40;
      }
      (*(void (**)(__int64))(*v27 + v26))((__int64)v27);
    LABEL_22:
      v17 += 64;
      if (v17 == v18) {
        v17 = *a1;
        break;
      }
    }
  }
  *a1 = v21;
  a1[1] = v20;
  a1[2] = v19;
  if (v17 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
      v28 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v12 + v28, v17);
  }
  return v20;
}

__int64 GameHr_dac0a0(__int64* a1, _QWORD* a2, __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;

  v3 = a1[1] - *a1;
  v4 = (v3 >> 6) + 1;
  if (v4 >> 58 != 0) {
    GameRoutine_dac290();
  }
  v6 = a1[2] - *a1;
  if (v6 >> 5 > v4) {
    v4 = v6 >> 5;
  }
  v7 = (unsigned __int64)v6 >= 0x7FFFFFFFFFFFFFC0LL;
  v8 = 0x3FFFFFFFFFFFFFFLL;
  if (!v7) {
    v8 = v4;
  }
  if (v8 >> 58 != 0) {
    GameRoutine_60a210(a1);
  }
  v10 = v8 << 6;
  v12 = GameData_212bf68;
  v13 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v8 << 6, 16, 0);
  v14 = v13 + v3;
  v15 = *(_QWORD*)(a3 + 32);
  *(_QWORD*)(v13 + v3) = *a2;
  v16 = v13 + v3 + 16;
  if (v15 != 0) {
    if (v15 == a3) {
      *(_QWORD*)(v14 + 48) = v16;
      (*(void (**)(__int64))(*(_QWORD*)v15 + 24LL))(v15);
    }
    else {
      *(_QWORD*)(v14 + 48) =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v15 + 16LL))(v15, v16);
    }
  }
  else {
    *(_QWORD*)(v14 + 48) = 0;
  }
  v17 = *a1;
  v18 = a1[1];
  v19 = v13 + v10;
  v20 = v14 + 64;
  v21 = v14 + *a1 - v18;
  if (v18 != *a1) {
    v22 = 0;
    do {
      v23 = v17 + v22;
      v24 = v21 + v22;
      *(_QWORD*)(v21 + v22) = *(_QWORD*)(v17 + v22);
      v25 = *(_QWORD*)(v17 + v22 + 48);
      if (v25 != 0) {
        if (v23 + 16 == v25) {
          *(_QWORD*)(v24 + 48) = v21 + v22 + 16;
          (*(void (**)(_QWORD))(**(_QWORD**)(v23 + 48) + 24LL))(
              *(_QWORD*)(v23 + 48));
        }
        else {
          *(_QWORD*)(v24 + 48) = v25;
          *(_QWORD*)(v23 + 48) = 0;
        }
      }
      else {
        *(_QWORD*)(v24 + 48) = 0;
      }
      v22 += 64;
    } while (v17 + v22 != v18);
    while (1) {
      v27 = *(_QWORD**)(v17 + 48);
      if ((_QWORD*)(v17 + 16) == v27) {
        v26 = 32;
      }
      else {
        if (v27 == nullptr) {
          goto LABEL_22;
        }
        v26 = 40;
      }
      (*(void (**)(__int64))(*v27 + v26))((__int64)v27);
    LABEL_22:
      v17 += 64;
      if (v17 == v18) {
        v17 = *a1;
        break;
      }
    }
  }
  *a1 = v21;
  a1[1] = v20;
  a1[2] = v19;
  if (v17 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
      v28 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v12 + v28, v17);
  }
  return v20;
}

__int64 GameHr_dac2c0(__int64* a1, _QWORD* a2, __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;

  v3 = a1[1] - *a1;
  v4 = (v3 >> 6) + 1;
  if (v4 >> 58 != 0) {
    GameRoutine_dac4b0();
  }
  v6 = a1[2] - *a1;
  if (v6 >> 5 > v4) {
    v4 = v6 >> 5;
  }
  v7 = (unsigned __int64)v6 >= 0x7FFFFFFFFFFFFFC0LL;
  v8 = 0x3FFFFFFFFFFFFFFLL;
  if (!v7) {
    v8 = v4;
  }
  if (v8 >> 58 != 0) {
    GameRoutine_60a210(a1);
  }
  v10 = v8 << 6;
  v12 = GameData_212bf68;
  v13 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v8 << 6, 16, 0);
  v14 = v13 + v3;
  v15 = *(_QWORD*)(a3 + 32);
  *(_QWORD*)(v13 + v3) = *a2;
  v16 = v13 + v3 + 16;
  if (v15 != 0) {
    if (v15 == a3) {
      *(_QWORD*)(v14 + 48) = v16;
      (*(void (**)(__int64))(*(_QWORD*)v15 + 24LL))(v15);
    }
    else {
      *(_QWORD*)(v14 + 48) =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v15 + 16LL))(v15, v16);
    }
  }
  else {
    *(_QWORD*)(v14 + 48) = 0;
  }
  v17 = *a1;
  v18 = a1[1];
  v19 = v13 + v10;
  v20 = v14 + 64;
  v21 = v14 + *a1 - v18;
  if (v18 != *a1) {
    v22 = 0;
    do {
      v23 = v17 + v22;
      v24 = v21 + v22;
      *(_QWORD*)(v21 + v22) = *(_QWORD*)(v17 + v22);
      v25 = *(_QWORD*)(v17 + v22 + 48);
      if (v25 != 0) {
        if (v23 + 16 == v25) {
          *(_QWORD*)(v24 + 48) = v21 + v22 + 16;
          (*(void (**)(_QWORD))(**(_QWORD**)(v23 + 48) + 24LL))(
              *(_QWORD*)(v23 + 48));
        }
        else {
          *(_QWORD*)(v24 + 48) = v25;
          *(_QWORD*)(v23 + 48) = 0;
        }
      }
      else {
        *(_QWORD*)(v24 + 48) = 0;
      }
      v22 += 64;
    } while (v17 + v22 != v18);
    while (1) {
      v27 = *(_QWORD**)(v17 + 48);
      if ((_QWORD*)(v17 + 16) == v27) {
        v26 = 32;
      }
      else {
        if (v27 == nullptr) {
          goto LABEL_22;
        }
        v26 = 40;
      }
      (*(void (**)(__int64))(*v27 + v26))((__int64)v27);
    LABEL_22:
      v17 += 64;
      if (v17 == v18) {
        v17 = *a1;
        break;
      }
    }
  }
  *a1 = v21;
  a1[1] = v20;
  a1[2] = v19;
  if (v17 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
      v28 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v12 + v28, v17);
  }
  return v20;
}

__int64 GameHr_dac4e0(__int64* a1, _QWORD* a2, __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;

  v3 = a1[1] - *a1;
  v4 = (v3 >> 6) + 1;
  if (v4 >> 58 != 0) {
    GameRoutine_dac6d0();
  }
  v6 = a1[2] - *a1;
  if (v6 >> 5 > v4) {
    v4 = v6 >> 5;
  }
  v7 = (unsigned __int64)v6 >= 0x7FFFFFFFFFFFFFC0LL;
  v8 = 0x3FFFFFFFFFFFFFFLL;
  if (!v7) {
    v8 = v4;
  }
  if (v8 >> 58 != 0) {
    GameRoutine_60a210(a1);
  }
  v10 = v8 << 6;
  v12 = GameData_212bf68;
  v13 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v8 << 6, 16, 0);
  v14 = v13 + v3;
  v15 = *(_QWORD*)(a3 + 32);
  *(_QWORD*)(v13 + v3) = *a2;
  v16 = v13 + v3 + 16;
  if (v15 != 0) {
    if (v15 == a3) {
      *(_QWORD*)(v14 + 48) = v16;
      (*(void (**)(__int64))(*(_QWORD*)v15 + 24LL))(v15);
    }
    else {
      *(_QWORD*)(v14 + 48) =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v15 + 16LL))(v15, v16);
    }
  }
  else {
    *(_QWORD*)(v14 + 48) = 0;
  }
  v17 = *a1;
  v18 = a1[1];
  v19 = v13 + v10;
  v20 = v14 + 64;
  v21 = v14 + *a1 - v18;
  if (v18 != *a1) {
    v22 = 0;
    do {
      v23 = v17 + v22;
      v24 = v21 + v22;
      *(_QWORD*)(v21 + v22) = *(_QWORD*)(v17 + v22);
      v25 = *(_QWORD*)(v17 + v22 + 48);
      if (v25 != 0) {
        if (v23 + 16 == v25) {
          *(_QWORD*)(v24 + 48) = v21 + v22 + 16;
          (*(void (**)(_QWORD))(**(_QWORD**)(v23 + 48) + 24LL))(
              *(_QWORD*)(v23 + 48));
        }
        else {
          *(_QWORD*)(v24 + 48) = v25;
          *(_QWORD*)(v23 + 48) = 0;
        }
      }
      else {
        *(_QWORD*)(v24 + 48) = 0;
      }
      v22 += 64;
    } while (v17 + v22 != v18);
    while (1) {
      v27 = *(_QWORD**)(v17 + 48);
      if ((_QWORD*)(v17 + 16) == v27) {
        v26 = 32;
      }
      else {
        if (v27 == nullptr) {
          goto LABEL_22;
        }
        v26 = 40;
      }
      (*(void (**)(__int64))(*v27 + v26))((__int64)v27);
    LABEL_22:
      v17 += 64;
      if (v17 == v18) {
        v17 = *a1;
        break;
      }
    }
  }
  *a1 = v21;
  a1[1] = v20;
  a1[2] = v19;
  if (v17 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
      v28 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v12 + v28, v17);
  }
  return v20;
}

__int64 GameHr_dea880(__int64 result, __int64* a2, __int64 a3, char a4)
{
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64* v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  char v61;
  char v62;
  __int64 v63;
  __int64* v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  int v77;
  __int64 v78;
  int v79;
  __int64 v80;
  __int64 v81;
  int v82;
  __int64 v83;
  int v84;
  __int64* v85;
  bool v87;
  __int64 v88;
  __int64* v89;
  __int64* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  signed __int64 v94;
  signed __int64 v95;
  signed __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64* v99;
  __int64 v100;
  __int64* v101;
  __int64 v102;
  __int64* v103;
  __int64 v104;
  __int64 v105;
  bool v106;
  __int64 v107;
  __int64 v108;
  __int64* v109;
  __int64* v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64* v114;
  __int64* v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64* v121;
  __int64 v122;
  __int64* v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;

  v7 = (__int64*)result;
  while (2) {
    v8 = v7;
    while (1) {
      while (1) {
        v7 = v8;
        v9 = a2 - v8;
        if (v9 > 2) {
          if (v9 == 3) {
            v75 = *v8;
            v76 = v8[1];
            v77 = *(_DWORD*)(*(_QWORD*)(v76 + 24) + 608LL);
            v78 = *(a2 - 1);
            v79 = *(_DWORD*)(*(_QWORD*)(v78 + 24) + 608LL);
            if (v77 < *(_DWORD*)(*(_QWORD*)(*v8 + 24) + 608LL)) {
              if (v79 >= v77) {
                *v8 = v76;
                v8[1] = v75;
                v127 = *(a2 - 1);
                if (*(_DWORD*)(*(_QWORD*)(v127 + 24) + 608LL) <
                    *(_DWORD*)(*(_QWORD*)(v75 + 24) + 608LL)) {
                  v8[1] = v127;
                  *(a2 - 1) = v75;
                }
              }
              else {
                *v8 = v78;
                *(a2 - 1) = v75;
              }
              return result;
            }
            if (v79 >= v77) {
              return result;
            }
            v8[1] = v78;
            *(a2 - 1) = v76;
            v124 = v8[1];
          LABEL_182:
            v130 = *v8;
            if (*(_DWORD*)(*(_QWORD*)(v124 + 24) + 608LL) <
                *(_DWORD*)(*(_QWORD*)(*v8 + 24) + 608LL)) {
              *v8 = v124;
              v8[1] = v130;
            }
            return result;
          }
          if (v9 != 4) {
            if (v9 == 5) {
              return GameRoutine_deb450(v8, v8 + 1, v8 + 2, v8 + 3, a2 - 1);
            }
            goto LABEL_10;
          }
          v81 = *v8;
          v80 = v8[1];
          v82 = *(_DWORD*)(*(_QWORD*)(v80 + 24) + 608LL);
          v83 = v8[2];
          v84 = *(_DWORD*)(*(_QWORD*)(v83 + 24) + 608LL);
          if (v82 >= *(_DWORD*)(*(_QWORD*)(*v8 + 24) + 608LL)) {
            if (v84 < v82) {
              v8[1] = v83;
              v8[2] = v80;
              if (*(_DWORD*)(*(_QWORD*)(v83 + 24) + 608LL) <
                  *(_DWORD*)(*(_QWORD*)(v81 + 24) + 608LL)) {
                *v8 = v83;
                v8[1] = v81;
              }
              goto LABEL_179;
            }
          }
          else {
            if (v84 < v82) {
              *v8 = v83;
            LABEL_177:
              v8[2] = v81;
              v80 = v81;
              goto LABEL_179;
            }
            *v8 = v80;
            v8[1] = v81;
            if (*(_DWORD*)(*(_QWORD*)(v83 + 24) + 608LL) <
                *(_DWORD*)(*(_QWORD*)(v81 + 24) + 608LL)) {
              v8[1] = v83;
              goto LABEL_177;
            }
          }
          v80 = v83;
        LABEL_179:
          v128 = *(a2 - 1);
          if (*(_DWORD*)(*(_QWORD*)(v128 + 24) + 608LL) >=
              *(_DWORD*)(*(_QWORD*)(v80 + 24) + 608LL)) {
            return result;
          }
          v8[2] = v128;
          *(a2 - 1) = v80;
          v129 = v8[1];
          v124 = v8[2];
          if (*(_DWORD*)(*(_QWORD*)(v124 + 24) + 608LL) >=
              *(_DWORD*)(*(_QWORD*)(v129 + 24) + 608LL)) {
            return result;
          }
          v8[1] = v124;
          v8[2] = v129;
          goto LABEL_182;
        }
        if ((unsigned __int64)v9 < 2) {
          return result;
        }
        if (v9 == 2) {
          v73 = *(a2 - 1);
          v74 = *v8;
          if (*(_DWORD*)(*(_QWORD*)(v73 + 24) + 608LL) <
              *(_DWORD*)(*(_QWORD*)(*v8 + 24) + 608LL)) {
            *v8 = v73;
            *(a2 - 1) = v74;
          }
          return result;
        }
      LABEL_10:
        if (v9 <= 23) {
          v85 = v8 + 1;
          v87 = v8 == a2 || v85 == a2;
          if ((a4 & 1) != 0) {
            if (!v87) {
              v88 = 0;
              v89 = v8;
              do {
                v92 = *v89;
                v91 = v89[1];
                v89 = v85;
                if (*(_DWORD*)(*(_QWORD*)(v91 + 24) + 608LL) <
                    *(_DWORD*)(*(_QWORD*)(v92 + 24) + 608LL)) {
                  v93 = v88;
                  do {
                    *(__int64*)((char*)v8 + v93 + 8) = v92;
                    if (v93 == 0) {
                      v90 = v8;
                      goto LABEL_124;
                    }
                    v92 = *(__int64*)((char*)v8 + v93 - 8);
                    v93 -= 8;
                  } while (*(_DWORD*)(*(_QWORD*)(v91 + 24) + 608LL) <
                           *(_DWORD*)(*(_QWORD*)(v92 + 24) + 608LL));
                  v90 = (__int64*)((char*)v8 + v93 + 8);
                LABEL_124:
                  *v90 = v91;
                }
                v85 = v89 + 1;
                v88 += 8;
              } while (v89 + 1 != a2);
            }
          }
          else if (!v87) {
            do {
              v126 = *v7;
              v125 = v7[1];
              v7 = v85;
              if (*(_DWORD*)(*(_QWORD*)(v125 + 24) + 608LL) <
                  *(_DWORD*)(*(_QWORD*)(v126 + 24) + 608LL)) {
                do {
                  *v85 = v126;
                  v126 = *(v85 - 2);
                  --v85;
                } while (*(_DWORD*)(*(_QWORD*)(v125 + 24) + 608LL) <
                         *(_DWORD*)(*(_QWORD*)(v126 + 24) + 608LL));
                *v85 = v125;
              }
              v85 = v7 + 1;
            } while (v7 + 1 != a2);
          }
          return result;
        }
        if (a3 == 0) {
          if (v8 != a2) {
            v94 = (unsigned __int64)(v9 - 2) >> 1;
            v95 = v94;
            do {
              v96 = v95;
              if (v94 >= v95) {
                v97 = (2 * (v95 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v98 = 2 * v95 + 2;
                v99 = &v8[v97];
                v100 = *v99;
                if (v98 < v9 &&
                    *(_DWORD*)(*(_QWORD*)(v100 + 24) + 608LL) <
                        *(_DWORD*)(*(_QWORD*)(v99[1] + 24) + 608LL)) {
                  v100 = v99[1];
                  ++v99;
                  v97 = 2 * v96 + 2;
                }
                v101 = &v8[v96];
                v102 = *v101;
                if (*(_DWORD*)(*(_QWORD*)(v100 + 24) + 608LL) >=
                    *(_DWORD*)(*(_QWORD*)(*v101 + 24) + 608LL)) {
                  do {
                    v103 = v99;
                    *v101 = v100;
                    if (v94 < v97) {
                      break;
                    }
                    v104 = (2 * v97) | 1;
                    v105 = 2 * v97 + 2;
                    v99 = &v8[v104];
                    v100 = *v99;
                    if (v105 < v9 &&
                        *(_DWORD*)(*(_QWORD*)(v100 + 24) + 608LL) <
                            *(_DWORD*)(*(_QWORD*)(v99[1] + 24) + 608LL)) {
                      v100 = v99[1];
                      ++v99;
                      v104 = v105;
                    }
                    v101 = v103;
                    result = *(unsigned int*)(*(_QWORD*)(v102 + 24) + 608LL);
                    v97 = v104;
                  } while (*(_DWORD*)(*(_QWORD*)(v100 + 24) + 608LL) >=
                           (int)result);
                  *v103 = v102;
                }
              }
              v95 = v96 - 1;
            } while (v96 != 0);
            do {
              v107 = *v8;
              v108 = 0;
              v109 = v8;
              do {
                v115 = &v109[v108];
                v114 = v115 + 1;
                v113 = v115[1];
                v116 = (2 * v108) | 1;
                v108 = 2 * v108 + 2;
                if (v108 < v9) {
                  v112 = v115[2];
                  v110 = v115 + 2;
                  v111 = v112;
                  result = *(unsigned int*)(*(_QWORD*)(v112 + 24) + 608LL);
                  if (*(_DWORD*)(*(_QWORD*)(v113 + 24) + 608LL) >=
                      (int)result) {
                    v108 = v116;
                  }
                  else {
                    v113 = v111;
                    v114 = v110;
                  }
                }
                else {
                  v108 = v116;
                }
                *v109 = v113;
                v109 = v114;
              } while (v108 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
              if (v114 == --a2) {
                *v114 = v107;
              }
              else {
                *v114 = *a2;
                *a2 = v107;
                v117 = ((char*)v114 - (char*)v8 + 8) >> 3;
                v106 = v117 < 2;
                v118 = v117 - 2;
                if (!v106) {
                  v119 = v118 >> 1;
                  v120 = *v114;
                  v121 = &v8[v119];
                  v122 = *v121;
                  if (*(_DWORD*)(*(_QWORD*)(*v121 + 24) + 608LL) <
                      *(_DWORD*)(*(_QWORD*)(*v114 + 24) + 608LL)) {
                    do {
                      v123 = v121;
                      *v114 = v122;
                      if (v119 == 0) {
                        break;
                      }
                      v119 = (v119 - 1) >> 1;
                      v121 = &v8[v119];
                      v122 = *v121;
                      v114 = v123;
                    } while (*(_DWORD*)(*(_QWORD*)(*v121 + 24) + 608LL) <
                             *(_DWORD*)(*(_QWORD*)(v120 + 24) + 608LL));
                    *v123 = v120;
                  }
                }
              }
              v106 = v9-- <= 2;
            } while (!v106);
          }
          return result;
        }
        v10 = *(a2 - 1);
        v11 = &v8[(unsigned __int64)v9 >> 1];
        v12 = *(_DWORD*)(*(_QWORD*)(v10 + 24) + 608LL);
        if ((unsigned __int64)v9 >= 0x81) {
          v13 = *v11;
          v14 = *v8;
          v15 = *(_DWORD*)(*(_QWORD*)(*v11 + 24) + 608LL);
          if (v15 >= *(_DWORD*)(*(_QWORD*)(*v8 + 24) + 608LL)) {
            if (v12 < v15) {
              *v11 = v10;
              *(a2 - 1) = v13;
              v19 = *v8;
              if (*(_DWORD*)(*(_QWORD*)(*v11 + 24) + 608LL) <
                  *(_DWORD*)(*(_QWORD*)(*v8 + 24) + 608LL)) {
                *v8 = *v11;
                *v11 = v19;
              }
            }
          }
          else {
            if (v12 >= v15) {
              *v8 = v13;
              *v11 = v14;
              v21 = *(a2 - 1);
              if (*(_DWORD*)(*(_QWORD*)(v21 + 24) + 608LL) >=
                  *(_DWORD*)(*(_QWORD*)(v14 + 24) + 608LL)) {
                goto LABEL_28;
              }
              *v11 = v21;
            }
            else {
              *v8 = v10;
            }
            *(a2 - 1) = v14;
          }
        LABEL_28:
          v22 = *(v11 - 1);
          v23 = v8[1];
          v24 = *(_DWORD*)(*(_QWORD*)(v22 + 24) + 608LL);
          v25 = *(a2 - 2);
          v26 = *(_DWORD*)(*(_QWORD*)(v25 + 24) + 608LL);
          if (v24 >= *(_DWORD*)(*(_QWORD*)(v23 + 24) + 608LL)) {
            if (v26 < v24) {
              *(v11 - 1) = v25;
              *(a2 - 2) = v22;
              v27 = *(v11 - 1);
              v28 = v8[1];
              if (*(_DWORD*)(*(_QWORD*)(v27 + 24) + 608LL) <
                  *(_DWORD*)(*(_QWORD*)(v28 + 24) + 608LL)) {
                v8[1] = v27;
                *(v11 - 1) = v28;
              }
            }
          }
          else {
            if (v26 >= v24) {
              v8[1] = v22;
              *(v11 - 1) = v23;
              v30 = *(a2 - 2);
              if (*(_DWORD*)(*(_QWORD*)(v30 + 24) + 608LL) >=
                  *(_DWORD*)(*(_QWORD*)(v23 + 24) + 608LL)) {
                goto LABEL_40;
              }
              *(v11 - 1) = v30;
            }
            else {
              v8[1] = v25;
            }
            *(a2 - 2) = v23;
          }
        LABEL_40:
          v31 = v11[1];
          v32 = v8[2];
          v33 = *(_DWORD*)(*(_QWORD*)(v31 + 24) + 608LL);
          v34 = *(a2 - 3);
          v35 = *(_DWORD*)(*(_QWORD*)(v34 + 24) + 608LL);
          if (v33 >= *(_DWORD*)(*(_QWORD*)(v32 + 24) + 608LL)) {
            if (v35 < v33) {
              v11[1] = v34;
              *(a2 - 3) = v31;
              v36 = v11[1];
              v37 = v8[2];
              if (*(_DWORD*)(*(_QWORD*)(v36 + 24) + 608LL) <
                  *(_DWORD*)(*(_QWORD*)(v37 + 24) + 608LL)) {
                v8[2] = v36;
                v11[1] = v37;
              }
            }
          }
          else {
            if (v35 >= v33) {
              v8[2] = v31;
              v11[1] = v32;
              v38 = *(a2 - 3);
              if (*(_DWORD*)(*(_QWORD*)(v38 + 24) + 608LL) >=
                  *(_DWORD*)(*(_QWORD*)(v32 + 24) + 608LL)) {
                goto LABEL_49;
              }
              v11[1] = v38;
            }
            else {
              v8[2] = v34;
            }
            *(a2 - 3) = v32;
          }
        LABEL_49:
          v39 = *(v11 - 1);
          v40 = *v11;
          v41 = *(_DWORD*)(*(_QWORD*)(*v11 + 24) + 608LL);
          v42 = v11[1];
          v43 = *(_DWORD*)(*(_QWORD*)(v42 + 24) + 608LL);
          if (v41 >= *(_DWORD*)(*(_QWORD*)(v39 + 24) + 608LL)) {
            if (v43 >= v41) {
              goto LABEL_55;
            }
            *v11 = v42;
            v11[1] = v40;
            if (*(_DWORD*)(*(_QWORD*)(v42 + 24) + 608LL) <
                *(_DWORD*)(*(_QWORD*)(v39 + 24) + 608LL)) {
              *(v11 - 1) = v42;
              *v11 = v39;
            LABEL_59:
              v44 = *v8;
              *v8 = v39;
              *v11 = v44;
              goto LABEL_60;
            }
          }
          else {
            if (v43 < v41) {
              *(v11 - 1) = v42;
              v11[1] = v39;
            LABEL_55:
              v39 = v40;
              goto LABEL_59;
            }
            *(v11 - 1) = v40;
            *v11 = v39;
            if (*(_DWORD*)(*(_QWORD*)(v42 + 24) + 608LL) >=
                *(_DWORD*)(*(_QWORD*)(v39 + 24) + 608LL)) {
              goto LABEL_59;
            }
            *v11 = v42;
            v11[1] = v39;
          }
          v39 = v42;
          goto LABEL_59;
        }
        v16 = *v8;
        v17 = *v11;
        v18 = *(_DWORD*)(*(_QWORD*)(*v8 + 24) + 608LL);
        if (v18 >= *(_DWORD*)(*(_QWORD*)(*v11 + 24) + 608LL)) {
          if (v12 < v18) {
            *v8 = v10;
            *(a2 - 1) = v16;
            v20 = *v11;
            if (*(_DWORD*)(*(_QWORD*)(*v8 + 24) + 608LL) <
                *(_DWORD*)(*(_QWORD*)(*v11 + 24) + 608LL)) {
              *v11 = *v8;
              *v8 = v20;
            }
          }
        }
        else {
          if (v12 >= v18) {
            *v11 = v16;
            *v8 = v17;
            v29 = *(a2 - 1);
            if (*(_DWORD*)(*(_QWORD*)(v29 + 24) + 608LL) >=
                *(_DWORD*)(*(_QWORD*)(v17 + 24) + 608LL)) {
              goto LABEL_60;
            }
            *v8 = v29;
          }
          else {
            *v11 = v10;
          }
          *(a2 - 1) = v17;
        }
      LABEL_60:
        v45 = *v8;
        --a3;
        if ((a4 & 1) != 0) {
          break;
        }
        v46 = *(_DWORD*)(*(_QWORD*)(v45 + 24) + 608LL);
        if (*(_DWORD*)(*(_QWORD*)(*(v8 - 1) + 24) + 608LL) < v46) {
          goto LABEL_63;
        }
        if (v46 >= *(_DWORD*)(*(_QWORD*)(*(a2 - 1) + 24) + 608LL)) {
          v64 = v8 + 1;
          do {
            v8 = v64;
            if (v64 >= a2) {
              break;
            }
            ++v64;
          } while (v46 >= *(_DWORD*)(*(_QWORD*)(*v8 + 24) + 608LL));
        }
        else {
          do {
            v63 = v8[1];
            ++v8;
          } while (v46 >= *(_DWORD*)(*(_QWORD*)(v63 + 24) + 608LL));
        }
        v65 = a2;
        if (v8 < a2) {
          v65 = a2;
          do {
            v66 = *--v65;
          } while (v46 < *(_DWORD*)(*(_QWORD*)(v66 + 24) + 608LL));
        }
        if (v8 < v65) {
          v67 = *v8;
          v68 = *v65;
          do {
            *v8 = v68;
            *v65 = v67;
            v69 = *(_DWORD*)(*(_QWORD*)(v45 + 24) + 608LL);
            do {
              v70 = v8[1];
              ++v8;
              v67 = v70;
            } while (v69 >= *(_DWORD*)(*(_QWORD*)(v70 + 24) + 608LL));
            do {
              v71 = *--v65;
              v68 = v71;
            } while (v69 < *(_DWORD*)(*(_QWORD*)(v71 + 24) + 608LL));
          } while (v8 < v65);
        }
        v72 = v8 - 1;
        if (v7 != v8 - 1) {
          *v7 = *v72;
        }
        a4 = 0;
        *v72 = v45;
      }
      v46 = *(_DWORD*)(*(_QWORD*)(v45 + 24) + 608LL);
    LABEL_63:
      v47 = 0;
      do {
        v48 = &v8[v47++];
        v49 = v48[1];
      } while (*(_DWORD*)(*(_QWORD*)(v49 + 24) + 608LL) < v46);
      v50 = &v8[v47];
      v51 = a2;
      if (v47 == 1) {
        v51 = a2;
        do {
          if (v50 >= v51) {
            break;
          }
          v53 = *--v51;
        } while (*(_DWORD*)(*(_QWORD*)(v53 + 24) + 608LL) >= v46);
      }
      else {
        do {
          v52 = *--v51;
        } while (*(_DWORD*)(*(_QWORD*)(v52 + 24) + 608LL) >= v46);
      }
      if (v50 >= v51) {
        v60 = v50 - 1;
        if (v8 == v50 - 1) {
          goto LABEL_81;
        }
      LABEL_80:
        *v8 = *v60;
        goto LABEL_81;
      }
      v54 = *v51;
      v55 = &v8[v47];
      v56 = v51;
      do {
        *v55 = v54;
        *v56 = v49;
        v57 = *(_DWORD*)(*(_QWORD*)(v45 + 24) + 608LL);
        do {
          v58 = v55[1];
          ++v55;
          v49 = v58;
        } while (*(_DWORD*)(*(_QWORD*)(v58 + 24) + 608LL) < v57);
        do {
          v59 = *--v56;
          v54 = v59;
        } while (*(_DWORD*)(*(_QWORD*)(v59 + 24) + 608LL) >= v57);
      } while (v55 < v56);
      v60 = v55 - 1;
      if (v8 != v55 - 1) {
        goto LABEL_80;
      }
    LABEL_81:
      *v60 = v45;
      if (v50 < v51) {
        goto LABEL_84;
      }
      v61 = GameRoutine_deb620(v8, v60);
      v8 = v60 + 1;
      v62 = v61;
      result = GameRoutine_deb620(v60 + 1, a2);
      if ((result & 1) != 0) {
        break;
      }
      if ((v62 & 1) == 0) {
      LABEL_84:
        result = GameHr_dea880(v7, v60, a3, a4 & 1);
        a4 = 0;
        v8 = v60 + 1;
      }
    }
    a2 = v60;
    if ((v62 & 1) == 0) {
      continue;
    }
    return result;
  }
}

__int64 GameHr_e1d870(__int64 a1)
{
  int v1;
  __int64 result;
  __int64 v5;
  int v6;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[2];
  int v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;

  v1 = *(_DWORD*)(a1 + 208);
  switch (v1) {
  case 1:
    GameRoutine_10c830(&v12, 0.0f);
    *(struct PseudoSret*)(v11) = GameRoutine_ff2d0(
        "SE_SYS_Menu_Open", "SE_SYS_Menu_Open", &v12, 0, 65537, 0, 0.0f, 1.0f);
    GameRoutine_10cff0(&v12);
    return GameRoutine_1696100(a1);
  case 2:
    return GameRoutine_1712520();
  case 3:
    return GameRoutine_17a5a00();
  default:
    GameRoutine_10c830(&v12, 0.0f);
    *(struct PseudoSret*)(v11) = GameRoutine_ff2d0(
        "SE_SYS_Menu_Open", "SE_SYS_Menu_Open", &v12, 0, 65537, 0, 0.0f, 1.0f);
    GameRoutine_10cff0(&v12);
    if (*(_DWORD*)(*(_QWORD*)GameData_212dbb8[0] + 136LL) == 1) {
      if (GameData_21caab0 != 0) {
        v5 = *(_QWORD*)(GameData_21caab0 + 96);
      }
      else {
        v5 = 0;
      }
      v6 = *(_DWORD*)(*(_QWORD*)GameData_212c6a0[0] + 308LL);
      if ((*(_QWORD*)(*(_QWORD*)GameData_212c6a0[0] + 328LL) & 4LL) != 0) {
        v6 = 1;
      }
      v12 = v6;
      v7 = (__int64*)GameData_212bf68;
      v8 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8, 16, 0);
      v13 = v8;
      *v8 = v5;
      v14 = v8 + 1;
      v15 = v8 + 1;
      result = GameRoutine_ce01c0(a1, &v12);
      if (v13 != nullptr) {
        v9 = *v7;
        v14 = v13;
        v10 = 128;
        if (*(_QWORD*)(v9 + 200) == 0) {
          v10 = 56;
        }
        return GameRoutine_1a0a4e0(v9 + v10, v13);
      }
    }
    else {
      return GameRoutine_cdf880(a1);
    }
    break;
  }
  return result;
}

__int64 GameHr_e4cbb0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  struct {
    __int64 v7;
    int v8;
  } v7_;
  _QWORD v9[25];

  if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 152)) & 1) != 0) {
    v4 = snd_fnd_WeakHandle_get(a1 + 152);
    snd_Fade_Fade_10c910((__int64)v9, 1000);
    (*(void (**)(__int64, _QWORD*, _QWORD, double))(
        *(_QWORD*)(v4 - 5592) + 248LL))(v4 - 5592, v9, 0, 0x0.0p+0);
    snd_Fade_Destroy_Fade(v9);
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v5 = *(_QWORD*)(a2 + 16);
  }
  else {
    v5 = a2 + 1;
  }
  if (v5 != 0) {
    snd_Fade_Fade_10c830((__int64)v9, 0x0.0p+0f);
    snd_play_ff2d0(v5, v5, (__int64)v9, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v9);
  }
  else {
    v7_.v7 = 0;
    v7_.v8 = 0x2000;
  }
  return GameRoutine_112180_alt1(a1 + 152, (__int64)&v7_.v7);
}

#pragma GCC visibility pop
