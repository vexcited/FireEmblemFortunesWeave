#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_28b750(_QWORD, _QWORD);
__int64 GameRoutine_29e4f0(__int64, __int64, __int64);
__int64 GameRoutine_29e590(_QWORD, _QWORD);
__int64 GameRoutine_29e5a0(__int64 result, __int64);
__int64 GameRoutine_2b8d40(__int64 result, _QWORD*, _QWORD*, __int64, _QWORD*);
__int64 StreamHeaderLoadTask_29db80(__int64 result, __int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_os_GetSystemTick(_QWORD);
__n128 nn_atk_2b8e00(__int64, __int64*);
__int64 StreamSoundLoader_29d180(__int64 a1, __int64 a2, __int64 a3, int a4,
                                 __int64 a5, __int64 a6, __int64 a7);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 nn_atk_2b8e00_alt1(__int64, __int64*) __asm__("nn_atk_2b8e00");
__int64 nn_os_GetSystemTick_alt1() __asm__("nn_os_GetSystemTick");

__int64 StreamSoundLoader_29d180(__int64 a1, __int64 a2, __int64 a3, int a4,
                                 __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 result;
  int v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  bool v30;
  __int64 v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  struct {
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
  } v52_;
  struct {
    _QWORD v56[2];
    __int64 v57;
    __int64 v58;
  } v56_;
  __int64 v59;
  __int64 SystemTickEv;
  __int64 v61;
  struct {
    __int64 v62;
    __int64 v63;
    __int64 v64;
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
    __int64 v75;
    __int64 v76;
  } v62_;

  SystemTickEv = nn_os_GetSystemTick_alt1();
  v13 = *(_QWORD*)(a1 + 13888);
  if (v13 != 0) {
    v14 = *(unsigned __int8*)(a7 + 48);
  }
  else {
    v14 = 0;
  }
  if (v14 == 1) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 48LL))(v13);
  }
  if (*(_DWORD*)(a1 + 792) <= *(_DWORD*)(a1 + 796) ||
      *(_BYTE*)(*(_QWORD*)(a1 + 48) + 8LL) != 1) {
    v49 = 0;
    v50 = a7;
    v51 = a4;
    if (a5 == 0) {
      goto LABEL_26;
    }
    goto LABEL_16;
  }
  *(_DWORD*)(a1 + 792) = *(_DWORD*)(a1 + 800);
  v15 = nn_os_GetSystemTick_alt1();
  (*(void (**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 40) + 48LL))(
      *(_QWORD*)(a1 + 40), *(_QWORD*)(a1 + 816), 0);
  v16 = nn_os_GetSystemTick_alt1();
  if (*(_BYTE*)(a1 + 89) != 1) {
    if (*(_QWORD*)(a1 + 13896) == 0) {
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  v17 = *(_QWORD*)(a1 + 13896);
  if (*(_DWORD*)(a1 + 800) == 0) {
    if (v17 == 0) {
      goto LABEL_25;
    }
  LABEL_24:
    (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 13888) + 40LL))(
        *(_QWORD*)(a1 + 13888));
    goto LABEL_25;
  }
  if (v17 == 0) {
    return 0;
  }
  v18 = *(unsigned int*)(a1 + 80);
  v62_.v75 = 0;
  v62_.v76 = 0;
  v62_.v73 = 0;
  v62_.v74 = 0;
  v62_.v71 = 0;
  v62_.v72 = 0;
  v62_.v69 = 0;
  v62_.v70 = 0;
  v62_.v67 = 0;
  v62_.v68 = 0;
  v62_.v65 = 0;
  v62_.v66 = 0;
  v62_.v63 = 0;
  v62_.v64 = 0;
  v61 = 0;
  v62_.v62 = 0;
  if ((int)v18 >= 1) {
    memcpy_alt1((__int64)&v61, a3, 8 * v18);
  }
  if (((*(__int64 (**)(_QWORD, __int64*, _QWORD, _QWORD, __int64))(
           **(_QWORD**)(a1 + 13888) + 32LL))(*(_QWORD*)(a1 + 13888), &v61,
                                             *(_QWORD*)(a1 + 40),
                                             (unsigned int)v18, 2) &
       1) == 0) {
    return 0;
  }
LABEL_25:
  v49 = v16 - v15;
  GameRoutine_29e590(a1 + 896, *(_QWORD*)(*(_QWORD*)(a1 + 48) + 16LL));
  *(_BYTE*)(a1 + 832) = 1;
  v50 = a7;
  v51 = a4;
  if (a5 == 0) {
  LABEL_26:
    if (*(_BYTE*)(a1 + 832) == 1) {
      v23 = *(_QWORD*)(a1 + 824);
      v21 = 0;
    }
    else {
      v21 = 0;
      v23 = 0;
    }
    goto LABEL_29;
  }
LABEL_16:
  v19 = *(_QWORD*)(a1 + 936);
  v20 = *(_QWORD*)(a1 + 952);
  if (v19 + a5 >= v20) {
    v21 = 0;
    while ((GameRoutine_29e4f0(a1 + 896, a1, *(_QWORD*)(a1 + 48)) & 1) != 0) {
      v22 = v19 - v20;
      v19 = *(_QWORD*)(a1 + 936);
      v20 = *(_QWORD*)(a1 + 952);
      ++v21;
      a5 += v22;
      if (v19 + a5 < v20) {
        goto LABEL_21;
      }
    }
    *(_BYTE*)(a1 + 833) = 1;
    *(_QWORD*)(a2 + 40) = 0;
    return 1;
  }
  v21 = 0;
LABEL_21:
  GameRoutine_29e5a0(a1 + 896, a5);
  StreamHeaderLoadTask_29db80(a1, a3);
  v23 = *(_QWORD*)(a1 + 936) -
        *(_QWORD*)(*(_QWORD*)(a1 + 48) + 56LL) * *(unsigned int*)(a1 + 792);
LABEL_29:
  v25 = *(_DWORD*)(a1 + 800);
  v26 = *(_DWORD*)(a1 + 792);
  if (v25 != 0) {
    v27 = v25 - *(unsigned __int8*)(a1 + 89);
  }
  else {
    v27 = 0;
  }
  if (v26 == v27) {
    v28 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 56LL))(
        *(_QWORD*)(a1 + 40));
    v26 = *(_DWORD*)(a1 + 792);
    *(_QWORD*)(a1 + 816) = v28;
  }
  v29 = *(_QWORD*)(a1 + 936);
  v30 = v26 == *(_DWORD*)(a1 + 796);
  v31 = 56;
  if (v30) {
    v31 = 80;
    v32 = 1;
  }
  else {
    v32 = 0;
  }
  v33 = *(_QWORD*)(*(_QWORD*)(a1 + 48) + v31);
  v34 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 56LL))(
      *(_QWORD*)(a1 + 40));
  if (v34 >= (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 64LL))(
                 *(_QWORD*)(a1 + 40))) {
    v35 = 0;
  }
  else {
    v35 = v33;
  }
  if (v35 != 0) {
    if (*(_QWORD*)(a1 + 13896) == 0) {
      return 0;
    }
    v36 = *(unsigned int*)(a1 + 80);
    v62_.v75 = 0;
    v62_.v76 = 0;
    v62_.v73 = 0;
    v62_.v74 = 0;
    v62_.v71 = 0;
    v62_.v72 = 0;
    v62_.v69 = 0;
    v62_.v70 = 0;
    v62_.v67 = 0;
    v62_.v68 = 0;
    v62_.v65 = 0;
    v62_.v66 = 0;
    v62_.v63 = 0;
    v62_.v64 = 0;
    v61 = 0;
    v62_.v62 = 0;
    if ((int)v36 >= 1) {
      memcpy_alt1((__int64)&v61, a3, 8 * v36);
    }
    if (((*(__int64 (**)(_QWORD, __int64*, _QWORD, _QWORD, _QWORD))(
             **(_QWORD**)(a1 + 13888) + 32LL))(*(_QWORD*)(a1 + 13888), &v61,
                                               *(_QWORD*)(a1 + 40),
                                               (unsigned int)v36, v32) &
         1) == 0) {
      return 0;
    }
    if (*(int*)(a1 + 80) >= 1) {
      v37 = 0;
      do {
        GameRoutine_28b750(*(_QWORD*)(a3 + 8 * v37++), 2 * v35);
      } while (v37 < *(int*)(a1 + 80));
    }
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 48) + 8LL) & 1) == 0) {
      v38 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 56LL))(
          *(_QWORD*)(a1 + 40));
      if (v38 >= (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 64LL))(
                     *(_QWORD*)(a1 + 40))) {
        *(_DWORD*)(a1 + 796) = *(_DWORD*)(a1 + 792);
      }
    }
  }
  GameRoutine_29e5a0(a1 + 896, v35);
  v39 = *(_DWORD*)(a1 + 792);
  v40 = *(_DWORD*)(a1 + 796);
  *(_BYTE*)(a1 + 832) = 0;
  *(_DWORD*)(a1 + 792) = ++v39;
  if (v39 > v40) {
    if (*(_BYTE*)(*(_QWORD*)(a1 + 48) + 8LL) == 1) {
      ++v21;
    }
    else {
      *(_BYTE*)(a1 + 833) = 1;
    }
  }
  *(_BYTE*)(a2 + 72) = 0;
  *(_QWORD*)(a2 + 40) = v35;
  *(_QWORD*)(a2 + 48) = v29;
  result = 1;
  *(_DWORD*)(a2 + 172) = v21;
  *(_DWORD*)(a2 + 32) = v51;
  *(_QWORD*)(a2 + 56) = v23;
  *(_QWORD*)(a2 + 64) = 2 * v35;
  *(_BYTE*)(a2 + 176) = *(_BYTE*)(a1 + 833);
  if (v14 != 0) {
    v56_.v58 = 0;
    v59 = nn_os_GetSystemTick_alt1();
    v41 = *(_QWORD*)(a1 + 13888);
    v56_.v56[1] = 0;
    v56_.v57 = 0;
    v56_.v56[0] = 0;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)v41 + 56LL))((void*)(v56_.v56), (__int64)v41);
    v61 = 1;
    v62_.v70 = 0;
    v62_.v71 = 0;
    v62_.v68 = 0;
    v62_.v69 = 0;
    v62_.v66 = 0;
    v62_.v67 = 0;
    v62_.v64 = 0;
    v62_.v65 = 0;
    v62_.v62 = 0;
    v62_.v63 = 0;
    v52_.v54 = 0;
    v52_.v55 = 0;
    v52_.v52 = 0;
    v52_.v53 = 0;
    v56_.v57 += v49;
    if (*(_QWORD*)(a1 + 776) == 0 || *(_QWORD*)(a1 + 784) == 0) {
      goto LABEL_74;
    }
    v42 = *(_QWORD*)(a1 + 40);
    if (v42 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v42 + 128LL))(v42) & 1) != 0) {
        v43 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 160LL))(
            *(_QWORD*)(a1 + 40));
        v44 = *(_QWORD*)(a1 + 40);
        v52_.v52 = v43;
        if (v44 != 0) {
        LABEL_62:
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v44 + 128LL))(v44) & 1) !=
              0) {
            v45 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 168LL))(
                *(_QWORD*)(a1 + 40));
          }
          else {
            v45 = 0;
          }
          v47 = *(_QWORD**)(a1 + 40);
          v52_.v53 = v45;
          if (v47 != nullptr &&
              ((unsigned int)X8CALL_X0(
                   _QWORD*,
                   (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
                       *v47 + 128LL))((void*)v47, v47)) &
               1) != 0) {
            v46 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 56LL))(
                *(_QWORD*)(a1 + 40));
          }
          else {
            v46 = 0;
          }
          goto LABEL_73;
        }
      }
      else {
        v44 = *(_QWORD*)(a1 + 40);
        v52_.v52 = 0;
        if (v44 != 0) {
          goto LABEL_62;
        }
      }
    }
    v46 = 0;
    v52_.v53 = 0;
  LABEL_73:
    v48 = *(_QWORD*)(a1 + 32);
    v52_.v54 = v46;
    v52_.v55 = v48;
  LABEL_74:
    GameRoutine_2b8d40((__int64)&v62_.v62, &SystemTickEv, &v59,
                       (__int64)v56_.v56, &v52_.v52);
    nn_atk_2b8e00_alt1(v50, &v61);
    return 1;
  }
  return result;
}

#pragma GCC visibility pop
