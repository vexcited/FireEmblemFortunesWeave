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
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 result;
  int v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  unsigned int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  struct {
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
  } v53_;
  struct {
    _QWORD v57[2];
    __int64 v58;
    __int64 v59;
  } v57_;
  __int64 v60;
  __int64 SystemTickEv;
  __int64 v62;
  struct {
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
    __int64 v77;
  } v63_;

  SystemTickEv = nn_os_GetSystemTick(a1);
  v13 = *(_QWORD*)(a1 + 13888);
  if (v13 != 0) {
    v14 = *(unsigned __int8*)(a7 + 48);
  }
  else {
    v14 = 0;
  }
  if (v14 == 1) {
    v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 48LL))(v13);
  }
  if (*(_DWORD*)(a1 + 792) <= *(_DWORD*)(a1 + 796) ||
      *(_BYTE*)(*(_QWORD*)(a1 + 48) + 8LL) != 1) {
    v50 = 0;
    v51 = a7;
    v52 = a4;
    if (a5 == 0) {
      goto LABEL_26;
    }
    goto LABEL_16;
  }
  *(_DWORD*)(a1 + 792) = *(_DWORD*)(a1 + 800);
  v15 = nn_os_GetSystemTick(v13);
  v16 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 40) + 48LL))(
      *(_QWORD*)(a1 + 40), *(_QWORD*)(a1 + 816), 0);
  v17 = nn_os_GetSystemTick(v16);
  if (*(_BYTE*)(a1 + 89) != 1) {
    if (*(_QWORD*)(a1 + 13896) == 0) {
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  v18 = *(_QWORD*)(a1 + 13896);
  if (*(_DWORD*)(a1 + 800) == 0) {
    if (v18 == 0) {
      goto LABEL_25;
    }
  LABEL_24:
    (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 13888) + 40LL))(
        *(_QWORD*)(a1 + 13888));
    goto LABEL_25;
  }
  if (v18 == 0) {
    return 0;
  }
  v19 = *(unsigned int*)(a1 + 80);
  v63_.v76 = 0;
  v63_.v77 = 0;
  v63_.v74 = 0;
  v63_.v75 = 0;
  v63_.v72 = 0;
  v63_.v73 = 0;
  v63_.v70 = 0;
  v63_.v71 = 0;
  v63_.v68 = 0;
  v63_.v69 = 0;
  v63_.v66 = 0;
  v63_.v67 = 0;
  v63_.v64 = 0;
  v63_.v65 = 0;
  v62 = 0;
  v63_.v63 = 0;
  if ((int)v19 >= 1) {
    memcpy(&v62, a3, 8 * v19);
  }
  if (((*(__int64 (**)(_QWORD, __int64*, _QWORD, _QWORD, __int64))(
           **(_QWORD**)(a1 + 13888) + 32LL))(*(_QWORD*)(a1 + 13888), &v62,
                                             *(_QWORD*)(a1 + 40),
                                             (unsigned int)v19, 2) &
       1) == 0) {
    return 0;
  }
LABEL_25:
  v50 = v17 - v15;
  GameRoutine_29e590(a1 + 896, *(_QWORD*)(*(_QWORD*)(a1 + 48) + 16LL));
  *(_BYTE*)(a1 + 832) = 1;
  v51 = a7;
  v52 = a4;
  if (a5 == 0) {
  LABEL_26:
    if (*(_BYTE*)(a1 + 832) == 1) {
      v24 = *(_QWORD*)(a1 + 824);
      v22 = 0;
    }
    else {
      v22 = 0;
      v24 = 0;
    }
    goto LABEL_29;
  }
LABEL_16:
  v20 = *(_QWORD*)(a1 + 936);
  v21 = *(_QWORD*)(a1 + 952);
  if (v20 + a5 >= v21) {
    v22 = 0;
    while ((GameRoutine_29e4f0(a1 + 896, a1, *(_QWORD*)(a1 + 48)) & 1) != 0) {
      v23 = v20 - v21;
      v20 = *(_QWORD*)(a1 + 936);
      v21 = *(_QWORD*)(a1 + 952);
      ++v22;
      a5 += v23;
      if (v20 + a5 < v21) {
        goto LABEL_21;
      }
    }
    *(_BYTE*)(a1 + 833) = 1;
    *(_QWORD*)(a2 + 40) = 0;
    return 1;
  }
  v22 = 0;
LABEL_21:
  GameRoutine_29e5a0(a1 + 896, a5);
  StreamHeaderLoadTask_29db80(a1, a3);
  v24 = *(_QWORD*)(a1 + 936) -
        *(_QWORD*)(*(_QWORD*)(a1 + 48) + 56LL) * *(unsigned int*)(a1 + 792);
LABEL_29:
  v26 = *(_DWORD*)(a1 + 800);
  v27 = *(_DWORD*)(a1 + 792);
  if (v26 != 0) {
    v28 = v26 - *(unsigned __int8*)(a1 + 89);
  }
  else {
    v28 = 0;
  }
  if (v27 == v28) {
    v29 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 56LL))(
        *(_QWORD*)(a1 + 40));
    v27 = *(_DWORD*)(a1 + 792);
    *(_QWORD*)(a1 + 816) = v29;
  }
  v30 = *(_QWORD*)(a1 + 936);
  v31 = v27 == *(_DWORD*)(a1 + 796);
  v32 = 56;
  if (v31) {
    v32 = 80;
    v33 = 1;
  }
  else {
    v33 = 0;
  }
  v34 = *(_QWORD*)(*(_QWORD*)(a1 + 48) + v32);
  v35 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 56LL))(
      *(_QWORD*)(a1 + 40));
  if (v35 >= (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 64LL))(
                 *(_QWORD*)(a1 + 40))) {
    v36 = 0;
  }
  else {
    v36 = v34;
  }
  if (v36 != 0) {
    if (*(_QWORD*)(a1 + 13896) == 0) {
      return 0;
    }
    v37 = *(unsigned int*)(a1 + 80);
    v63_.v76 = 0;
    v63_.v77 = 0;
    v63_.v74 = 0;
    v63_.v75 = 0;
    v63_.v72 = 0;
    v63_.v73 = 0;
    v63_.v70 = 0;
    v63_.v71 = 0;
    v63_.v68 = 0;
    v63_.v69 = 0;
    v63_.v66 = 0;
    v63_.v67 = 0;
    v63_.v64 = 0;
    v63_.v65 = 0;
    v62 = 0;
    v63_.v63 = 0;
    if ((int)v37 >= 1) {
      memcpy(&v62, a3, 8 * v37);
    }
    if (((*(__int64 (**)(_QWORD, __int64*, _QWORD, _QWORD, _QWORD))(
             **(_QWORD**)(a1 + 13888) + 32LL))(*(_QWORD*)(a1 + 13888), &v62,
                                               *(_QWORD*)(a1 + 40),
                                               (unsigned int)v37, v33) &
         1) == 0) {
      return 0;
    }
    if (*(int*)(a1 + 80) >= 1) {
      v38 = 0;
      do {
        GameRoutine_28b750(*(_QWORD*)(a3 + 8 * v38++), 2 * v36);
      } while (v38 < *(int*)(a1 + 80));
    }
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 48) + 8LL) & 1) == 0) {
      v39 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 56LL))(
          *(_QWORD*)(a1 + 40));
      if (v39 >= (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 64LL))(
                     *(_QWORD*)(a1 + 40))) {
        *(_DWORD*)(a1 + 796) = *(_DWORD*)(a1 + 792);
      }
    }
  }
  GameRoutine_29e5a0(a1 + 896, v36);
  v40 = *(_DWORD*)(a1 + 792);
  v41 = *(_DWORD*)(a1 + 796);
  *(_BYTE*)(a1 + 832) = 0;
  *(_DWORD*)(a1 + 792) = ++v40;
  if (v40 > v41) {
    if (*(_BYTE*)(*(_QWORD*)(a1 + 48) + 8LL) == 1) {
      ++v22;
    }
    else {
      *(_BYTE*)(a1 + 833) = 1;
    }
  }
  *(_BYTE*)(a2 + 72) = 0;
  *(_QWORD*)(a2 + 40) = v36;
  *(_QWORD*)(a2 + 48) = v30;
  result = 1;
  *(_DWORD*)(a2 + 172) = v22;
  *(_DWORD*)(a2 + 32) = v52;
  *(_QWORD*)(a2 + 56) = v24;
  *(_QWORD*)(a2 + 64) = 2 * v36;
  *(_BYTE*)(a2 + 176) = *(_BYTE*)(a1 + 833);
  if (v14 != 0) {
    v57_.v59 = 0;
    v60 = nn_os_GetSystemTick(1);
    v42 = *(_QWORD*)(a1 + 13888);
    v57_.v57[1] = 0;
    v57_.v58 = 0;
    v57_.v57[0] = 0;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)v42 + 56LL))((void*)(v57_.v57), (__int64)v42);
    v62 = 1;
    v63_.v71 = 0;
    v63_.v72 = 0;
    v63_.v69 = 0;
    v63_.v70 = 0;
    v63_.v67 = 0;
    v63_.v68 = 0;
    v63_.v65 = 0;
    v63_.v66 = 0;
    v63_.v63 = 0;
    v63_.v64 = 0;
    v53_.v55 = 0;
    v53_.v56 = 0;
    v53_.v53 = 0;
    v53_.v54 = 0;
    v57_.v58 += v50;
    if (*(_QWORD*)(a1 + 776) == 0 || *(_QWORD*)(a1 + 784) == 0) {
      goto LABEL_74;
    }
    v43 = *(_QWORD*)(a1 + 40);
    if (v43 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v43 + 128LL))(v43) & 1) != 0) {
        v44 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 160LL))(
            *(_QWORD*)(a1 + 40));
        v45 = *(_QWORD*)(a1 + 40);
        v53_.v53 = v44;
        if (v45 != 0) {
        LABEL_62:
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v45 + 128LL))(v45) & 1) !=
              0) {
            v46 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 168LL))(
                *(_QWORD*)(a1 + 40));
          }
          else {
            v46 = 0;
          }
          v48 = *(_QWORD**)(a1 + 40);
          v53_.v54 = v46;
          if (v48 != nullptr &&
              ((unsigned int)X8CALL_X0(
                   _QWORD*,
                   (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
                       *v48 + 128LL))((void*)v48, v48)) &
               1) != 0) {
            v47 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 56LL))(
                *(_QWORD*)(a1 + 40));
          }
          else {
            v47 = 0;
          }
          goto LABEL_73;
        }
      }
      else {
        v45 = *(_QWORD*)(a1 + 40);
        v53_.v53 = 0;
        if (v45 != 0) {
          goto LABEL_62;
        }
      }
    }
    v47 = 0;
    v53_.v54 = 0;
  LABEL_73:
    v49 = *(_QWORD*)(a1 + 32);
    v53_.v55 = v47;
    v53_.v56 = v49;
  LABEL_74:
    GameRoutine_2b8d40((__int64)&v63_.v63, &SystemTickEv, &v60,
                       (__int64)v57_.v57, &v53_.v53);
    nn_atk_2b8e00(v51, &v62);
    return 1;
  }
  return result;
}

#pragma GCC visibility pop
