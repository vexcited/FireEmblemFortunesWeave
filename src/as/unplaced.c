#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void GameRoutine_628be0(PSEUDO_X8, __int64, __int64,
                                                   char, char);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 CScriptAny_GetTypeId(_QWORD);
__int64 CScriptBuilder_AddSectionFromMemory(_QWORD*, __int64, __int64,
                                            unsigned int, unsigned int);
__int64 CScriptBuilder_Build(__int64);
__int64 CScriptBuilder_CScriptBuilder(_QWORD*);
__int64 CScriptBuilder_GetModule(_QWORD);
__int64 CScriptBuilder_StartNewModule(_QWORD*, __int64, __int64);
__int64 GameRoutine_192f90(__int64);
__int64 GameRoutine_194210(_QWORD);
__int64 GameRoutine_25ec90(_QWORD, _QWORD);
__int64 GameRoutine_607dc0(__int64);
__int64 Manager_62a740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 as_Variable_setVariable(_QWORD, _QWORD);
__int64 as_string_c_str(_QWORD);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN* as_g_context_slots_ptr;
extern __int64 (*decltype_c81af0_ptr[3])();
extern __int64* as_g_engine_ptr_alt1[10] __asm__("as_g_engine_ptr");
extern __int64* as_g_script_manager_ptr;
extern __int64 GameData_212bf58;
extern __int64 GameData_21a5450;
extern __int64 GameData_2204690[];
extern __int64 GameData_22046a0;
extern __int64 GameData_22046a8;
extern __int64 GameData_22046b8;
extern __int64 GameData_22046c0;
extern __int64 GameData_22046d0;
extern __int64 GameData_22046d8;
extern __int64 GameData_22046e8;
extern __int64 GameData_22046f0;
extern __int64 GameData_2204700;
extern __int64 GameData_2204708;
extern __int64 GameData_2204718;
extern __int64 GameData_2204720;
extern __int64 GameData_2204730;
extern __int64 GameData_2204738;
extern __int64 GameData_2204748;
extern __int64 GameData_2204750;
extern __int64 GameData_2204760;
extern __int64 GameData_2204768;
extern __int64 GameData_2204778;
extern __int64 as_g_engine_ptr[10];
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
struct PseudoSret GameRoutine_62a940(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD, _QWORD, _QWORD, _DWORD, _QWORD);
struct PseudoSret Manager_629620(_QWORD, _QWORD);
struct PseudoSret Manager_62b060(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
void GameRoutine_1a1460();
__int64 as_607560(__int64 a1);
__int64 as_607d20(__int64 a1);
_QWORD* as_c78080(float a1);
__int64 as_c790c0();
__attribute__((swiftcall)) void
as_c7a950(__attribute__((swift_indirect_result)) void* x8_, __int64 a1,
          __int64 a2);
bool as_c81590();
__int64* as_c81b50(__int64* result, __int64* a2, __int64* a3);

__int64 as_607560(__int64 a1)
{

#pragma clang fp contract(off)
  char v3;
  int v4;
  const char* v5;
  __int64 v6;
  char* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  unsigned int* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  unsigned int v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  void (***v29)(_QWORD);
  __int64 v30;
  unsigned __int8* v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  unsigned int v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64 i;
  unsigned int v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  int v63;
  __int64 v64;
  __int64 v65;
  int v66;
  long double v67;
  __int64 v68;
  __int64 v69;
  unsigned int v70;
  __int64 v71;
  const char* v72;
  unsigned int v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  _QWORD v79[36];
  struct {
    __int64 v80;
    unsigned int v81;
  } v80_;

  v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((as_607d20(a1) & 1) != 0) {
    if ((*(_BYTE*)(a1 + 318) & 1) != 0) {
      return 1;
    }
    if ((*(_BYTE*)(a1 + 319) & 1) == 0) {
      v3 = *(_BYTE*)(a1 + 320);
      *(_BYTE*)(a1 + 319) = 1;
      v4 = *(_DWORD*)(a1 + 968);
      if ((v3 & 1) != 0) {
        if (v4 >= 1) {
          v5 = (const char*)(a1 + 972);
          v6 = 0;
          v7 = (char*)as_g_context_slots_ptr;
          v8 = (_QWORD*)(a1 + 9184);
          do {
            sprintf(v79, "contents:/%s", v5),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            GameRoutine_628be0((void*)((__int64)&v80_.v80), *(_QWORD*)(a1 + 16),
                               (__int64)v79, *(_BYTE*)(a1 + 323),
                               *(_BYTE*)(a1 + 324)),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            v9 = v80_.v80;
            v10 = v80_.v81;
            *(v8 - 2) = v80_.v80;
            *((_DWORD*)v8 - 2) = v10;
            if ((_DWORD)v10 == 0x2000) {
              *v8 = 0;
            }
            else {
              v11 = &v7[16 * v10];
              v12 = *((_QWORD*)v11 + 1);
              if (v12 != 0 && *(_QWORD*)v11 != v9) {
                v12 = 0;
              }
              *v8 = v12;
              v13 = *((_QWORD*)v11 + 1);
              if (v13 != 0 && *(_QWORD*)v11 == v9) {
                as_607560(v13),
                    v67 = COERCE_AS(__typeof__(v67),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
            }
            ++v6;
            v8 += 3;
            v5 += 128;
          } while (v6 < *(int*)(a1 + 968));
        }
      }
      else if (v4 >= 1) {
        v14 = 0;
        v15 = as_g_context_slots_ptr;
        v16 = (unsigned int*)(a1 + 9176);
        do {
          v17 = *v16;
          if ((_DWORD)v17 == 0x2000) {
            if ((*(((_UNKNOWN*)0x13CLL) + 2) & 1) == 0) {
              return 0;
            }
          }
          else {
            v18 = v15[2 * v17 + 1];
            if ((*(_BYTE*)(v18 + 318) & 1) == 0) {
              if (v15[2 * v17] != *((_QWORD*)v16 - 1) ||
                  (as_607560(v18) & 1) == 0) {
                return 0;
              }
              v4 = *(_DWORD*)(a1 + 968);
            }
          }
          ++v14;
          v16 += 6;
        } while (v14 < v4);
      }
      v19 = (_QWORD*)GameData_212bf58;
      v20 = (*(__int64 (**)(_QWORD))(**(_QWORD**)GameData_212bf58 + 32LL))(
          *(_QWORD*)GameData_212bf58),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v21 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
          as_g_thread_info),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v22 = as_g_script_manager_ptr;
      v23 = *as_g_script_manager_ptr + ((unsigned __int64)v21 << 7);
      v24 = *as_g_script_manager_ptr + 4LL * v21;
      v25 = *(int*)(v24 + 4640) + 1LL;
      *(_DWORD*)(v24 + 4640) = v25;
      *(_QWORD*)(v23 + 8 * v25 + 288) = 0;
      *(_QWORD*)(*v22 + 8LL * v21 + 4384) = 0;
      v26 = *(_QWORD*)(a1 + 40);
      if ((*(_BYTE*)(a1 + 316) & 1) != 0) {
        if (v26 == 0) {
          CScriptBuilder_CScriptBuilder(v79),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          GameData_21a5450 = a1;
          v27 = *(__int64**)as_g_engine_ptr[0];
          if ((CScriptBuilder_StartNewModule(v79, *(_QWORD*)as_g_engine_ptr[0],
                                             a1 + 56) &
               0x80000000) != 0) {
          LABEL_67:
            GameRoutine_607dc0((__int64)v79),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            v70 = 0;
          LABEL_68:
            v73 = (*(__int64 (**)(__int64, long double))(
                *(_QWORD*)as_g_thread_info + 72LL))(as_g_thread_info, v67),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
            v74 = (unsigned __int64)v73 << 7;
            v75 = 4LL * v73;
            v76 = *v22 + v74;
            v77 = *v22 + v75;
            v78 = *(int*)(v77 + 4640);
            *(_DWORD*)(v77 + 4640) = v78 - 1;
            *(_QWORD*)(v76 + 8 * v78 + 288) = 0;
            *(_QWORD*)(*v22 + 8LL * v73 + 4384) =
                *(_QWORD*)(*v22 + v74 + 8LL * *(int*)(*v22 + v75 + 4640) + 288);
            return v70;
          }
          GameData_21a5450 = a1;
          v28 = CScriptBuilder_GetModule(v79),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (((*(__int64 (**)(__int64, _QWORD, _QWORD))(
                   *(_QWORD*)v28 + 336LL))(v28, *(_QWORD*)(a1 + 32), 0) &
               0x80000000) == 0) {
            if (*(_BYTE*)(a1 + 326) == 1) {
              v29 = *(void (****)(_QWORD))(a1 + 24),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
              (**v29)(v29);
              v30 = 368;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) ==
                  0) {
                v30 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v29),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
              *(_QWORD*)(a1 + 24) = 0;
            }
            goto LABEL_44;
          }
          v71 = *v27;
          v72 = "Script failed to load byte code.";
        LABEL_66:
          (*(void (**)(__int64*, __int64, _QWORD, _QWORD, _QWORD, const char*))(
              v71 + 56))(v27, a1 + 56, 0, 0, 0, v72),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          goto LABEL_67;
        }
      }
      else if (v26 == 0) {
        CScriptBuilder_CScriptBuilder(v79),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
        GameData_21a5450 = a1;
        v27 = *(__int64**)as_g_engine_ptr[0];
        if ((CScriptBuilder_StartNewModule(v79, *(_QWORD*)as_g_engine_ptr[0],
                                           a1 + 56) &
             0x80000000) != 0) {
          goto LABEL_67;
        }
        ((void (*)(_QWORD*, const char*))GameRoutine_1a1460)(v79, "AS_SCRIPT"),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
        ((void (*)(_QWORD*, const char*))GameRoutine_1a1460)(v79, "_MSC_VER"),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v31 = (unsigned __int8*)(*(__int64 (**)(_QWORD))(
            **(_QWORD**)(a1 + 24) + 48LL))(*(_QWORD*)(a1 + 24)),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v32 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 24) + 56LL))(
            *(_QWORD*)(a1 + 24)),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (*v31 == 239 && v31[1] == 187 && v31[2] == 191) {
          v31 += 3;
          v32 -= 3;
        }
        if ((CScriptBuilder_AddSectionFromMemory(v79, a1 + 56, (__int64)v31,
                                                 v32, 0) &
             0x80000000) != 0) {
          goto LABEL_67;
        }
        GameData_21a5450 = a1;
        if ((CScriptBuilder_Build((__int64)v79) & 0x80000000) == 0) {
        LABEL_44:
          GameRoutine_607dc0((__int64)v79),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          goto LABEL_45;
        }
        v71 = *v27;
        v72 = "Script failed to build.";
        goto LABEL_66;
      }
    LABEL_45:
      v33 = (*(__int64 (**)(_QWORD, __int64, _QWORD))(
          **(_QWORD**)as_g_engine_ptr[0] + 376LL))(*(_QWORD*)as_g_engine_ptr[0],
                                                   a1 + 56, 0),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(_QWORD*)(a1 + 40) = v33;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v33 + 368LL))(v33, a1),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v34 = *v19;
      v35 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v19 + 32LL))(*v19),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v36 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v34 + 40LL))(
          v34, v35 - v20),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v37 = *(_QWORD*)(a1 + 16);
      *(_DWORD*)(a1 + 10708) = v36;
      *(_DWORD*)(v37 + 5208) += v36;
      v38 = *(_QWORD*)(a1 + 16);
      if (*(_BYTE*)(v38 + 4785) == 1) {
        nn_os_LockMutex(v38 + 4792),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v39 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v19 + 32LL))(*v19),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if ((*(_BYTE*)(a1 + 321) & 1) == 0) {
        v40 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
            as_g_thread_info),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v41 = *v22 + ((unsigned __int64)v40 << 7);
        v42 = *v22 + 4LL * v40;
        v43 = *(int*)(v42 + 4640) + 1LL;
        *(_DWORD*)(v42 + 4640) = v43;
        *(_QWORD*)(v41 + 8 * v43 + 288) = 0;
        *(_QWORD*)(*v22 + 8LL * v40 + 4384) = 0;
        GameData_21a5450 = a1;
        *(_BYTE*)(*(_QWORD*)(a1 + 16) + 4788LL) = 1;
        v44 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 312LL))(
            *(_QWORD*)(a1 + 40)),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
        *(_BYTE*)(*(_QWORD*)(a1 + 16) + 4788LL) = 0;
        if (v44 < 0) {
          (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, __int64, const char*))(
              **(_QWORD**)as_g_engine_ptr[0] + 56LL))(
              *(_QWORD*)as_g_engine_ptr[0], a1 + 56, 0, 0, 1,
              "Script failed to BindAllImportedFunctions."),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          *(_BYTE*)(a1 + 321) = 1;
        }
        v45 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
            as_g_thread_info),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v46 = (unsigned __int64)v45 << 7;
        v47 = 4LL * v45;
        v48 = *v22 + v46;
        v49 = *v22 + v47;
        v50 = *(int*)(v49 + 4640);
        *(_DWORD*)(v49 + 4640) = v50 - 1;
        *(_QWORD*)(v48 + 8 * v50 + 288) = 0;
        *(_QWORD*)(*v22 + 8LL * v45 + 4384) =
            *(_QWORD*)(*v22 + v46 + 8LL * *(int*)(*v22 + v47 + 4640) + 288);
      }
      v51 = v19;
      for (i = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16LL); i != 0;
           i = *(_QWORD*)(i + 48)) {
        if (*(_BYTE*)(i + 318) == 1 && (*(_BYTE*)(i + 321) & 1) == 0) {
          v59 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
              as_g_thread_info),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
          v60 = *v22 + ((unsigned __int64)v59 << 7);
          v61 = *v22 + 4LL * v59;
          v62 = *(int*)(v61 + 4640) + 1LL;
          *(_DWORD*)(v61 + 4640) = v62;
          *(_QWORD*)(v60 + 8 * v62 + 288) = 0;
          *(_QWORD*)(*v22 + 8LL * v59 + 4384) = 0;
          GameData_21a5450 = i;
          *(_BYTE*)(*(_QWORD*)(i + 16) + 4788LL) = 1;
          v63 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(i + 40) + 312LL))(
              *(_QWORD*)(i + 40)),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
          *(_BYTE*)(*(_QWORD*)(i + 16) + 4788LL) = 0;
          if (v63 < 0) {
            (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, __int64,
                         const char*))(**(_QWORD**)as_g_engine_ptr[0] + 56LL))(
                *(_QWORD*)as_g_engine_ptr[0], i + 56, 0, 0, 1,
                "Script failed to BindAllImportedFunctions."),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          else {
            *(_BYTE*)(i + 321) = 1;
          }
          v53 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
              as_g_thread_info),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
          v54 = (unsigned __int64)v53 << 7;
          v55 = 4LL * v53;
          v56 = *v22 + v54;
          v57 = *v22 + v55;
          v58 = *(int*)(v57 + 4640);
          *(_DWORD*)(v57 + 4640) = v58 - 1;
          *(_QWORD*)(v56 + 8 * v58 + 288) = 0;
          *(_QWORD*)(*v22 + 8LL * v53 + 4384) =
              *(_QWORD*)(*v22 + v54 + 8LL * *(int*)(*v22 + v55 + 4640) + 288);
        }
      }
      v64 = *v51;
      v65 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v51 + 32LL))(*v51),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v66 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v64 + 40LL))(
          v64, v65 - v39),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v68 = *(_QWORD*)(a1 + 16);
      *(_DWORD*)(a1 + 10712) = v66;
      *(_DWORD*)(v68 + 5212) += v66;
      v69 = *(_QWORD*)(a1 + 16);
      if (*(_BYTE*)(v69 + 4785) == 1) {
        *(__n128*)&v67 = nn_os_UnlockMutex(v69 + 4792),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v70 = 1;
      *(_WORD*)(a1 + 318) = 1;
      goto LABEL_68;
    }
  }
  return 0;
}

__int64 as_607d20(__int64 a1)
{
  __int64 v1;
  char* v3;
  unsigned int* v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  char v8;

  v1 = *(unsigned int*)(a1 + 968);
  if ((int)v1 < 1) {
  LABEL_8:
    v8 = 1;
  }
  else {
    v3 = (char*)as_g_context_slots_ptr;
    v4 = (unsigned int*)(a1 + 9176);
    while (1) {
      v5 = *v4;
      if ((_DWORD)v5 == 0x2000) {
        break;
      }
      v6 = &v3[16 * v5];
      v7 = *((_QWORD*)v6 + 1);
      if (v7 == 0 || *(_QWORD*)v6 != *((_QWORD*)v4 - 1) ||
          (as_607d20(v7) & 1) == 0) {
        break;
      }
      v4 += 6;
      if (--v1 == 0) {
        goto LABEL_8;
      }
    }
    v8 = 0;
  }
  return (unsigned __int8)(v8 & *(_BYTE*)(a1 + 317));
}

_QWORD* as_c78080(float a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  _QWORD* v10;
  __int64 v11;
  int v12;
  int v13;
  _BOOL4 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  _QWORD* result;
  __int64 v20;
  int v21;
  float v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  float v27;
  __int64 v28;
  __int64 v29;
  int v30;
  _QWORD* v31;
  __int64 v32;
  float v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) != 0) {
    v6 = *v2;
    v7 = *(_QWORD*)(v6 +
                    8LL * (*(unsigned int (**)(__int64))(
                              *(_QWORD*)as_g_thread_info + 72LL))(
                              as_g_thread_info) +
                    4384);
    if (v7 != 0) {
      v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
    }
    else {
      v8 = 0;
    }
    v9 = *(_DWORD*)(v8 + 1176);
    if (v9 == 7) {
      GameRoutine_192f90(*(_QWORD*)(v8 + 1152));
    }
    else {
      if (v9 != 4) {
      LABEL_14:
        *(float*)(v8 + 1152) = a1;
        *(_DWORD*)(v8 + 1176) = 3;
        goto LABEL_15;
      }
      v10 = *(_QWORD**)(v8 + 1152);
      if ((*(_BYTE*)v10 & 1) != 0) {
        GameRoutine_25ec90(v10[2], *v10 & 0xFFFFFFFFFFFFFFFELL);
      }
      v11 = 368;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
    }
    *(_QWORD*)(v8 + 1152) = 0;
    goto LABEL_14;
  }
LABEL_15:
  if (game_ProcGameSkipView_instance_ != 0 &&
      (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
              1 <=
          2) {
    v12 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v12 & 8) != 0) {
      v13 = 2;
    }
    else {
      v13 = 3;
    }
    v14 = (v13 & v12) == 0;
  }
  else {
    v14 = false;
  }
  v15 = *v2;
  v16 = *(
      _QWORD*)(v15 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v16 != 0) {
    v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 472LL))(v16);
    if (v14) {
      goto LABEL_24;
    }
  LABEL_28:
    v21 = *(_DWORD*)(v18 + 1176);
    switch (v21) {
    case 5:
      LOBYTE(v17) = *(_BYTE*)(v18 + 1152);
      v22 = (float)v17;
      break;
    case 2:
      v22 = (float)*(unsigned int*)(v18 + 1152);
      break;
    case 1:
      v22 = (float)*(int*)(v18 + 1152);
      break;
    default:
      v22 = *(float*)(v18 + 1152);
      break;
    }
    v23 = *v2;
    v24 = *(_QWORD*)(v23 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v24 != 0) {
      v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 472LL))(v24);
      if (v22 > 0x0.0p+0f) {
        goto LABEL_37;
      }
    }
    else {
      v25 = 0;
      if (v22 > 0x0.0p+0f) {
      LABEL_37:
        v26 = *v2;
        v27 =
            *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 104LL);
        v28 = *(_QWORD*)(v26 +
                         8LL * (*(unsigned int (**)(__int64))(
                                   *(_QWORD*)as_g_thread_info + 72LL))(
                                   as_g_thread_info) +
                         4384);
        if (v28 != 0) {
          v29 = (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 472LL))(v28);
        }
        else {
          v29 = 0;
        }
        v30 = *(_DWORD*)(v29 + 1176);
        if (v30 == 4) {
          v31 = *(_QWORD**)(v29 + 1152);
          if ((*(_BYTE*)v31 & 1) != 0) {
            GameRoutine_25ec90(v31[2], *v31 & 0xFFFFFFFFFFFFFFFELL);
          }
          v32 = 368;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
            v32 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
        }
        else {
          if (v30 != 7) {
            v33 = *(float*)(v29 + 1152);
            goto LABEL_56;
          }
          GameRoutine_192f90(*(_QWORD*)(v29 + 1152));
        }
        v33 = 0x0.0p+0f;
        *(_QWORD*)(v29 + 1152) = 0;
      LABEL_56:
        v34 = as_g_thread_info;
        *(_DWORD*)(v29 + 1176) = 3;
        *(float*)(v29 + 1152) = v33 + (float)(v27 * -0x1.0aaaaa0000000p+4f);
        v35 = *v2;
        v36 = *(_QWORD*)(v35 +
                         8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)v34 +
                                                              72LL))(v34) +
                         4384);
        v37 = (*(__int64 (**)(__int64))(*(_QWORD*)v36 + 472LL))(v36);
        return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
            **(_QWORD**)(v37 + 24) + 448LL))(*(_QWORD*)(v37 + 24), 0);
      }
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v25 + 24) + 448LL))(
        *(_QWORD*)(v25 + 24), 1);
    result = *(_QWORD**)(v25 + 2240);
    *(_QWORD*)(v25 + 2240) = 0;
    if (result != (_QWORD*)(v25 + 2208)) {
      if (result != nullptr) {
        goto LABEL_26;
      }
      return result;
    }
  LABEL_43:
    v20 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v20))((__int64)result);
  }
  v18 = 0;
  if (!v14) {
    goto LABEL_28;
  }
LABEL_24:
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v18 + 24) + 448LL))(
      *(_QWORD*)(v18 + 24), 2);
  result = *(_QWORD**)(v18 + 2240);
  *(_QWORD*)(v18 + 2240) = 0;
  if (result == (_QWORD*)(v18 + 2208)) {
    goto LABEL_43;
  }
  if (result != nullptr) {
  LABEL_26:
    v20 = 40;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v20))((__int64)result);
  }
  return result;
}

__int64 as_c790c0()
{
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((GameData_2204768 & 1) != 0) {
    result = GameRoutine_25ec90(GameData_2204778,
                                GameData_2204768 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((GameData_2204750 & 1) != 0) {
    result = GameRoutine_25ec90(GameData_2204760,
                                GameData_2204750 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((GameData_2204738 & 1) != 0) {
    result = GameRoutine_25ec90(GameData_2204748,
                                GameData_2204738 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((GameData_2204720 & 1) != 0) {
    result = GameRoutine_25ec90(GameData_2204730,
                                GameData_2204720 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((GameData_2204708 & 1) != 0) {
    result = GameRoutine_25ec90(GameData_2204718,
                                GameData_2204708 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((GameData_22046f0 & 1) != 0) {
    result = GameRoutine_25ec90(GameData_2204700,
                                GameData_22046f0 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((GameData_22046d8 & 1) != 0) {
    result = GameRoutine_25ec90(GameData_22046e8,
                                GameData_22046d8 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((GameData_22046c0 & 1) != 0) {
    result = GameRoutine_25ec90(GameData_22046d0,
                                GameData_22046c0 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((GameData_22046a8 & 1) != 0) {
    result = GameRoutine_25ec90(GameData_22046b8,
                                GameData_22046a8 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((GameData_2204690[0] & 1) != 0) {
    return GameRoutine_25ec90(GameData_22046a0,
                              GameData_2204690[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  return result;
}

__attribute__((swiftcall)) void

as_c7a950(__attribute__((swift_indirect_result)) void* x8_, __int64 a1,
          __int64 a2)
{
  __int64 a3 = (__int64)(unsigned __int64)x8_;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  const char* v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  unsigned int v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  _QWORD* v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _QWORD* v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  _QWORD* v75;
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
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64* v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  _QWORD* result;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  unsigned int v158;
  _BYTE v159[256];
  __int64 v160;
  unsigned int v161;
  __int64 v162;

  v6 = as_g_script_manager_ptr;
  v7 = *as_g_script_manager_ptr;
  v8 = *(
      _QWORD*)(v7 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 472LL))(v8);
  v10 = *(unsigned int*)(v9 + 64);
  if ((_DWORD)v10 != 0x2000 &&
      (v11 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v10),
       (v12 = v11[1]) != 0) &&
      *v11 == *(_QWORD*)(v9 + 56)) {
    v162 = 0;
    v160 = 0;
    v161 = 0x2000;
    v13 = *(unsigned int*)(v12 + 8);
    if ((_DWORD)v13 != 0x2000) {
      v14 = (__int64*)((char*)as_g_context_slots_ptr + 16 * v13);
      if (v14[1] == v12) {
        v15 = *v14;
        v161 = *(_DWORD*)(v12 + 8);
        v160 = v15;
      }
    }
    v162 = v12;
  }
  else {
    v160 = 0;
    v162 = 0;
    v161 = 0x2000;
  }
  *(_QWORD*)a3 = 0;
  *(_QWORD*)(a3 + 16) = 0;
  *(_DWORD*)(a3 + 8) = 0x2000;
  v16 = (const char*)as_string_c_str(a2);
  sprintf(v159, "void %s(void)", v16);
  if (a1 != 0) {
    v17 = CScriptAny_GetTypeId(a1);
    v18 =
        (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)as_g_engine_ptr_alt1[0] +
                                         208LL))(*as_g_engine_ptr_alt1[0], v17);
    v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 56LL))(v18);
    v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 48LL))(v18);
    if (v161 == 0x2000 ||
        (v21 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v161))[1] == 0) {
      v22 = 0;
    }
    else if (*v21 == v160) {
      v22 = v21[1];
    }
    else {
      v22 = 0;
    }
    if (Manager_62a740(v20, v22, v19, v20, v159) != 0) {
      v23 = v161;
      if (v161 == 0x2000) {
        goto LABEL_110;
      }
    }
    else {
      v57 = *v6;
      v58 = *(_QWORD*)(v57 +
                       8LL * (*(unsigned int (**)(__int64))(
                                 *(_QWORD*)as_g_thread_info + 72LL))(
                                 as_g_thread_info) +
                       4384);
      v59 = (*(__int64 (**)(__int64))(*(_QWORD*)v58 + 472LL))(v58);
      v60 = (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v59 + 24) + 336LL))(
          *(_QWORD*)(v59 + 24), 0);
      v61 = (*(__int64 (**)(__int64))(*(_QWORD*)v60 + 40LL))(v60);
      *(struct PseudoSret*)(&v157) = Manager_629620(*v6, v61);
      v23 = v158;
      v160 = v157;
      v161 = v158;
      if (v158 == 0x2000 || (v62 = (_QWORD*)((char*)as_g_context_slots_ptr +
                                             16 * v158))[1] == 0) {
        v63 = 0;
      }
      else if (*v62 == v157) {
        v63 = v62[1];
      }
      else {
        v63 = 0;
      }
      v162 = v63;
      if (v158 == 0x2000) {
        goto LABEL_110;
      }
    }
    v64 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v23);
    v65 = v64[1];
    if (v65 == 0 || *v64 != v160) {
      goto LABEL_110;
    }
    v66 = *v6;
    v67 = GameRoutine_194210(a1);
    v68 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 56LL))(v18);
    v69 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 48LL))(v18);
    v70 = *v6;
    v71 = *(_QWORD*)(v70 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    LODWORD(v70) =
        *(_DWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)v71 + 472LL))(v71) + 48);
    v72 = *v6;
    v73 = *(_QWORD*)(v72 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    v74 = (*(__int64 (**)(__int64))(*(_QWORD*)v73 + 472LL))(v73);
    *(struct PseudoSret*)(&v157) =
        GameRoutine_62a940(v66, v65 + 56, &v160, v67, v68, v69, v159,
                           (unsigned int)v70, *(_DWORD*)(v74 + 2116), 2);
    v55 = v157;
    v56 = v158;
    *(_QWORD*)a3 = v157;
    *(_DWORD*)(a3 + 8) = v56;
    if ((_DWORD)v56 == 0x2000) {
      v76 = 0;
      v46 = as_g_context_slots_ptr;
      goto LABEL_54;
    }
    v46 = as_g_context_slots_ptr;
    goto LABEL_48;
  }
  if (v161 == 0x2000) {
    goto LABEL_25;
  }
  v24 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v161);
  v25 = v24[1];
  if (v25 == 0) {
    goto LABEL_25;
  }
  if (*v24 != v160) {
    goto LABEL_25;
  }
  v26 = *(_QWORD*)(v25 + 40);
  if (v26 == 0) {
    goto LABEL_25;
  }
  v27 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  v28 = *v6 + ((unsigned __int64)v27 << 7);
  v29 = *v6 + 4LL * v27;
  v30 = *(int*)(v29 + 4640) + 1LL;
  *(_DWORD*)(v29 + 4640) = v30;
  *(_QWORD*)(v28 + 8 * v30 + 288) = 0;
  *(_QWORD*)(*v6 + 8LL * v27 + 4384) = 0;
  v31 = (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v26 + 104LL))(v26, v159);
  v32 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_thread_info + 72LL))(
      as_g_thread_info);
  v33 = (unsigned __int64)v32 << 7;
  v34 = 4LL * v32;
  v35 = *v6 + v33;
  v36 = *v6 + v34;
  v37 = *(int*)(v36 + 4640);
  *(_DWORD*)(v36 + 4640) = v37 - 1;
  *(_QWORD*)(v35 + 8 * v37 + 288) = 0;
  *(_QWORD*)(*v6 + 8LL * v32 + 4384) =
      *(_QWORD*)(*v6 + v33 + 8LL * *(int*)(*v6 + v34 + 4640) + 288);
  if (v31 != 0) {
    v38 = v161;
  }
  else {
  LABEL_25:
    v39 = *v6;
    v40 = *(_QWORD*)(v39 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    v41 = (*(__int64 (**)(__int64))(*(_QWORD*)v40 + 472LL))(v40);
    v42 = (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v41 + 24) + 336LL))(
        *(_QWORD*)(v41 + 24), 0);
    v43 = (*(__int64 (**)(__int64))(*(_QWORD*)v42 + 40LL))(v42);
    *(struct PseudoSret*)(&v157) = Manager_629620(*v6, v43);
    v38 = v158;
    v160 = v157;
    v161 = v158;
    if (v158 == 0x2000 ||
        (v44 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v158))[1] == 0) {
      v45 = 0;
    }
    else if (*v44 == v157) {
      v45 = v44[1];
    }
    else {
      v45 = 0;
    }
    v162 = v45;
  }
  if (v38 == 0x2000) {
    goto LABEL_110;
  }
  v46 = as_g_context_slots_ptr;
  v47 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v38);
  v48 = v47[1];
  if (v48 == 0 || *v47 != v160) {
    goto LABEL_110;
  }
  v49 = *v6;
  v50 = *(
      _QWORD*)(v49 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v51 = *(_DWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)v50 + 472LL))(v50) + 48);
  v52 = *v6;
  v53 = *(
      _QWORD*)(v52 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v54 = (*(__int64 (**)(__int64))(*(_QWORD*)v53 + 472LL))(v53);
  *(struct PseudoSret*)(&v157) = Manager_62b060(
      v49, v48 + 56, &v160, v159, v51, *(unsigned int*)(v54 + 2116), 2);
  v55 = v157;
  v56 = v158;
  *(_QWORD*)a3 = v157;
  *(_DWORD*)(a3 + 8) = v56;
  if ((_DWORD)v56 != 0x2000) {
  LABEL_48:
    v75 = &v46[2 * v56];
    if (v75[1] != 0) {
      if (*v75 == v55) {
        v76 = v75[1];
      }
      else {
        v76 = 0;
      }
      goto LABEL_54;
    }
  }
  v76 = 0;
LABEL_54:
  v77 = as_g_thread_info;
  *(_QWORD*)(a3 + 16) = v76;
  v78 = *v6;
  v79 = *(_QWORD*)(v78 +
                   8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)v77 + 72LL))(
                             v77) +
                   4384);
  if (v79 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v79 + 472LL))(v79);
  }
  if ((_DWORD)v56 == 0x2000) {
    v80 = 0;
  }
  else {
    v80 = v46[2 * v56 + 1];
  }
  v81 = *v6;
  v82 = *(
      _QWORD*)(v81 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v83 = (*(__int64 (**)(__int64))(*(_QWORD*)v82 + 472LL))(v82);
  as_Variable_setVariable(v80 + 504, v83 + 504);
  if ((_DWORD)v56 == 0x2000) {
    v84 = 0;
  }
  else {
    v84 = v46[2 * v56 + 1];
  }
  v85 = *v6;
  v86 = *(
      _QWORD*)(v85 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v87 = (*(__int64 (**)(__int64))(*(_QWORD*)v86 + 472LL))(v86);
  as_Variable_setVariable(v84 + 544, v87 + 544);
  if ((_DWORD)v56 == 0x2000) {
    v88 = 0;
  }
  else {
    v88 = v46[2 * v56 + 1];
  }
  v89 = *v6;
  v90 = *(
      _QWORD*)(v89 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v91 = (*(__int64 (**)(__int64))(*(_QWORD*)v90 + 472LL))(v90);
  as_Variable_setVariable(v88 + 584, v91 + 584);
  if ((_DWORD)v56 == 0x2000) {
    v92 = 0;
  }
  else {
    v92 = v46[2 * v56 + 1];
  }
  v93 = *v6;
  v94 = *(
      _QWORD*)(v93 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v95 = (*(__int64 (**)(__int64))(*(_QWORD*)v94 + 472LL))(v94);
  as_Variable_setVariable(v92 + 624, v95 + 624);
  if ((_DWORD)v56 == 0x2000) {
    v96 = 0;
  }
  else {
    v96 = v46[2 * v56 + 1];
  }
  v97 = *v6;
  v98 = *(
      _QWORD*)(v97 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v99 = (*(__int64 (**)(__int64))(*(_QWORD*)v98 + 472LL))(v98);
  as_Variable_setVariable(v96 + 664, v99 + 664);
  if ((_DWORD)v56 == 0x2000) {
    v100 = 0;
  }
  else {
    v100 = v46[2 * v56 + 1];
  }
  v101 = *v6;
  v102 = *(
      _QWORD*)(v101 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v103 = (*(__int64 (**)(__int64))(*(_QWORD*)v102 + 472LL))(v102);
  as_Variable_setVariable(v100 + 704, v103 + 704);
  if ((_DWORD)v56 == 0x2000) {
    v104 = 0;
  }
  else {
    v104 = v46[2 * v56 + 1];
  }
  v105 = *v6;
  v106 = *(
      _QWORD*)(v105 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v107 = (*(__int64 (**)(__int64))(*(_QWORD*)v106 + 472LL))(v106);
  as_Variable_setVariable(v104 + 744, v107 + 744);
  if ((_DWORD)v56 == 0x2000) {
    v108 = 0;
  }
  else {
    v108 = v46[2 * v56 + 1];
  }
  v109 = *v6;
  v110 = *(
      _QWORD*)(v109 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v111 = (*(__int64 (**)(__int64))(*(_QWORD*)v110 + 472LL))(v110);
  as_Variable_setVariable(v108 + 784, v111 + 784);
  if ((_DWORD)v56 == 0x2000) {
    v112 = 0;
  }
  else {
    v112 = v46[2 * v56 + 1];
  }
  v113 = *v6;
  v114 = *(
      _QWORD*)(v113 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v115 = (*(__int64 (**)(__int64))(*(_QWORD*)v114 + 472LL))(v114);
  as_Variable_setVariable(v112 + 824, v115 + 824);
  if ((_DWORD)v56 == 0x2000) {
    v116 = 0;
  }
  else {
    v116 = v46[2 * v56 + 1];
  }
  v117 = *v6;
  v118 = *(
      _QWORD*)(v117 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v119 = (*(__int64 (**)(__int64))(*(_QWORD*)v118 + 472LL))(v118);
  as_Variable_setVariable(v116 + 864, v119 + 864);
  if ((_DWORD)v56 == 0x2000) {
    v120 = 0;
  }
  else {
    v120 = v46[2 * v56 + 1];
  }
  v121 = *v6;
  v122 = *(
      _QWORD*)(v121 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v123 = (*(__int64 (**)(__int64))(*(_QWORD*)v122 + 472LL))(v122);
  as_Variable_setVariable(v120 + 904, v123 + 904);
  if ((_DWORD)v56 == 0x2000) {
    v124 = 0;
  }
  else {
    v124 = v46[2 * v56 + 1];
  }
  v125 = *v6;
  v126 = *(
      _QWORD*)(v125 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v127 = (*(__int64 (**)(__int64))(*(_QWORD*)v126 + 472LL))(v126);
  as_Variable_setVariable(v124 + 944, v127 + 944);
  if ((_DWORD)v56 == 0x2000) {
    v128 = 0;
  }
  else {
    v128 = v46[2 * v56 + 1];
  }
  v129 = *v6;
  v130 = *(
      _QWORD*)(v129 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v131 = (*(__int64 (**)(__int64))(*(_QWORD*)v130 + 472LL))(v130);
  as_Variable_setVariable(v128 + 984, v131 + 984);
  if ((_DWORD)v56 == 0x2000) {
    v132 = 0;
  }
  else {
    v132 = v46[2 * v56 + 1];
  }
  v133 = *v6;
  v134 = *(
      _QWORD*)(v133 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v135 = (*(__int64 (**)(__int64))(*(_QWORD*)v134 + 472LL))(v134);
  as_Variable_setVariable(v132 + 1024, v135 + 1024);
  if ((_DWORD)v56 == 0x2000) {
    v136 = 0;
  }
  else {
    v136 = v46[2 * v56 + 1];
  }
  v137 = *v6;
  v138 = *(
      _QWORD*)(v137 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v139 = (*(__int64 (**)(__int64))(*(_QWORD*)v138 + 472LL))(v138);
  as_Variable_setVariable(v136 + 1064, v139 + 1064);
  if ((_DWORD)v56 == 0x2000) {
    v140 = 0;
  }
  else {
    v140 = v46[2 * v56 + 1];
  }
  v141 = *v6;
  v142 = *(
      _QWORD*)(v141 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v143 = (*(__int64 (**)(__int64))(*(_QWORD*)v142 + 472LL))(v142);
  as_Variable_setVariable(v140 + 1104, v143 + 1104);
  v144 = *v6;
  v145 = *(
      _QWORD*)(v144 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v145 != 0 &&
      (v146 = (*(__int64 (**)(__int64))(*(_QWORD*)v145 + 472LL))(v145)) != 0 &&
      (_DWORD)(v147 = *(unsigned int*)(v146 + 8)) != 0x2000 &&
      (v148 = &v46[2 * v147])[1] == v146) {
    v156 = *v148;
    v150 = v46[2 * v56 + 1];
    *(_QWORD*)(v150 + 2176) = *v148;
    *(_DWORD*)(v150 + 2184) = v147;
    v149 = v148[1];
    if (v149 != 0 && *v148 != v156) {
      v149 = 0;
    }
  }
  else {
    v149 = 0;
    v150 = v46[2 * v56 + 1];
    *(_QWORD*)(v150 + 2176) = 0;
    *(_DWORD*)(v150 + 2184) = 0x2000;
  }
  *(_QWORD*)(v150 + 2192) = v149;
LABEL_110:
  v151 = *v6;
  v152 = *(
      _QWORD*)(v151 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v152 != 0) {
    v153 = (*(__int64 (**)(__int64))(*(_QWORD*)v152 + 472LL))(v152);
  }
  else {
    v153 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v153 + 24) + 448LL))(
      *(_QWORD*)(v153 + 24), 1);
  result = *(_QWORD**)(v153 + 2240);
  *(_QWORD*)(v153 + 2240) = 0;
  if (result == (_QWORD*)(v153 + 2208)) {
    v155 = 32;
  }
  else {
    if (result == nullptr) {
      result;
      return;
    }
    v155 = 40;
  }
  {
    (_QWORD*)(*(__int64 (**)(__int64))(*result + v155))((__int64)result);
    return;
  }
}

bool as_c81590()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  __int64 v5;
  __int64 v6;
  int v7;
  _QWORD* v8;
  __int64 v9;
  float v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  int v15;
  float v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;

  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  }
  v3 = *v0;
  v4 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 104LL);
  v5 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  v7 = *(_DWORD*)(v6 + 1776);
  if (v7 == 4) {
    v8 = *(_QWORD**)(v6 + 1752);
    if ((*(_BYTE*)v8 & 1) != 0) {
      GameRoutine_25ec90(v8[2], *v8 & 0xFFFFFFFFFFFFFFFELL);
    }
    v9 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v9);
    goto LABEL_14;
  }
  if (v7 == 7) {
    GameRoutine_192f90(*(_QWORD*)(v6 + 1752));
  LABEL_14:
    v10 = 0x0.0p+0f;
    *(_QWORD*)(v6 + 1752) = 0;
    goto LABEL_16;
  }
  v10 = *(float*)(v6 + 1752);
LABEL_16:
  v11 = as_g_thread_info;
  *(_DWORD*)(v6 + 1776) = 3;
  *(float*)(v6 + 1752) = v10 + (float)(v4 * -0x1.0aaaaa0000000p+4f);
  v12 = *v0;
  v13 = *(_QWORD*)(v12 +
                   8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)v11 + 72LL))(
                             v11) +
                   4384);
  if (v13 != 0) {
    v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 472LL))(v13);
  }
  v15 = *(_DWORD*)(v13 + 1776);
  switch (v15) {
  case 5:
    LOBYTE(v14) = *(_BYTE*)(v13 + 1752);
    v16 = (float)v14;
    break;
  case 2:
    v16 = (float)*(unsigned int*)(v13 + 1752);
    break;
  case 1:
    v16 = (float)*(int*)(v13 + 1752);
    break;
  default:
    v16 = *(float*)(v13 + 1752);
    break;
  }
  v17 = *v0;
  v18 = *(
      _QWORD*)(v17 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v18 != 0) {
    v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 472LL))(v18);
  }
  else {
    v19 = 0;
  }
  if (v16 <= 0x0.0p+0f) {
    v20 = 1;
  }
  else {
    v20 = 2;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v19 + 24) + 448LL))(
      *(_QWORD*)(v19 + 24), v20);
  v21 = *(_QWORD**)(v19 + 2240);
  *(_QWORD*)(v19 + 2240) = 0;
  if (v21 == (_QWORD*)(v19 + 2208)) {
    v22 = 32;
    goto LABEL_35;
  }
  if (v21 != nullptr) {
    v22 = 40;
  LABEL_35:
    (*(void (**)(__int64))(*v21 + v22))((__int64)v21);
  }
  return v16 > 0x0.0p+0f;
}

__int64* as_c81b50(__int64* result, __int64* a2, __int64* a3)
{
  int v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  struct {
    __int64 v16;
    __int64 v17;
    __int64 v18;
  } v16_;
  char v21;

  v5 = *((_DWORD*)result + 6);
  if (v5 != 2) {
    v9 = result;
    if ((*(_BYTE*)a3 & 1) != 0) {
      result = (__int64*)fw_text_String_CopyTerminated(&v16_.v16, a3[2], a3[1]);
      v5 = *((_DWORD*)v9 + 6);
      if (v5 == -1) {
      LABEL_11:
        v11 = v16_.v17;
        *v9 = v16_.v16;
        v9[1] = v11;
        v9[2] = v16_.v18;
        *((_DWORD*)v9 + 6) = 2;
        return result;
      }
    }
    else {
      v10 = a3[1];
      v16_.v16 = *a3;
      v16_.v17 = v10;
      v16_.v18 = a3[2];
      if (v5 == -1) {
        goto LABEL_11;
      }
    }
    result = (__int64*)((__int64 (*)(char*, __int64*))decltype_c81af0_ptr[v5])(
        &v21, v9);
    goto LABEL_11;
  }
  if (a2 != a3) {
    v6 = *(unsigned __int8*)a3;
    if ((*(_BYTE*)a2 & 1) != 0) {
      v12 = a3[2];
      v13 = (v6 & 1) == 0;
      v14 = v6 >> 1;
      if (v13) {
        v12 = (__int64)a3 + 1;
      }
      if (v13) {
        v15 = v14;
      }
      else {
        v15 = a3[1];
      }
      return SpineModel_64dde0(a2, v12, v15);
    }
    else if ((v6 & 1) != 0) {
      return GameRoutine_64df20(a2, a3[2], a3[1]);
    }
    else {
      v7 = *a3;
      v8 = a3[2];
      a2[1] = a3[1];
      a2[2] = v8;
      *a2 = v7;
    }
  }
  return result;
}

#pragma GCC visibility pop
