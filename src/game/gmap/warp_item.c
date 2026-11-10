#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14d5420(void);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_ae4100(_QWORD, _QWORD, _QWORD);
__int64 Impl_13261c0(_QWORD);
__int64 Impl_132a360(_QWORD);
__int64 ProcGmapExWarpList_1690440(_QWORD);
__int64 ProcGmapWarpList_168ca80(_QWORD);
__int64 ProcGmapWarpList_168cf20(_QWORD);
extern __int64 GameData_21316c8;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21ca080;
__int64 WarpItem_Unknown25(_QWORD* a1);

__int64 WarpItem_Unknown25(_QWORD* a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  int v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v21;
  int v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  int v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64* v36;
  __int64* v37;
  _QWORD* v38;
  __int64 v39;
  int v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64* v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if ((v3 & 0x80000000) == 0) {
    while (v4 != v5) {
      v7 = (__int64*)*v4++;
      v6 = v7;
      if (*((_DWORD*)v7 + 21) == v3) {
        goto LABEL_10;
      }
    }
  LABEL_9:
    v6 = nullptr;
    goto LABEL_10;
  }
  if (v4 == v5) {
    goto LABEL_9;
  }
  while (1) {
    v6 = (__int64*)*v4;
    if (*(_QWORD*)(*v4 + 96) == 0 && v6[69] == 0) {
      break;
    }
    if (++v4 == v5) {
      goto LABEL_9;
    }
  }
LABEL_10:
  v9 = *((_DWORD*)v6 + 135);
  v10 = __OFSUB__(v9, 1);
  v11 = (unsigned int)(v9 - 1);
  if (((v11 & 0x80000000) != 0LL) == v10) {
    v12 = v6[3];
    v13 = v6[4] - v12;
    v14 = (__int64*)(v12 + 8LL * (unsigned int)v11);
    if (v11 < v13 >> 3) {
      v6 = v14;
    }
  }
  v15 = *v6;
  v16 = (*(__int64 (**)(_QWORD*))(*a1 + 24LL))(a1);
  if (GameRoutine_ae4100(0, v15, v16) == 0) {
    v21 = *(_QWORD*)(GameData_21c96e8 + 8);
    v22 = *(_DWORD*)(v21 + 56);
    v23 = *(__int64**)(v21 + 8);
    v24 = *(__int64**)(v21 + 16);
    if (v22 < 0) {
      if (v23 != v24) {
        while (1) {
          v25 = *v23;
          if (*(_QWORD*)(*v23 + 96) == 0 && *(_QWORD*)(v25 + 552) == 0) {
            break;
          }
          if (++v23 == v24) {
            goto LABEL_33;
          }
        }
      LABEL_34:
        v27 = *(_DWORD*)(v25 + 540);
        v10 = __OFSUB__(v27, 1);
        v28 = (unsigned int)(v27 - 1);
        if (((v28 & 0x80000000) != 0LL) == v10) {
          v29 = *(_QWORD*)(v25 + 24);
          v30 = *(_QWORD*)(v25 + 32) - v29;
          v31 = v29 + 8LL * (unsigned int)v28;
          if (v28 < v30 >> 3) {
            v25 = v31;
          }
        }
        if ((Impl_132a360(*(_QWORD*)v25) & 1) != 0) {
          v32 = a1[1];
          if (*(_QWORD*)(v32 + 152) != 0) {
            v33 = *(_QWORD*)(v32 + 152);
          }
          else {
            v33 = a1[1];
          }
          ProcGmapExWarpList_1690440(v33);
          return 9;
        }
        v34 = *(_QWORD*)(GameData_21c96e8 + 8);
        v35 = *(_DWORD*)(v34 + 56);
        v36 = *(__int64**)(v34 + 8);
        v37 = *(__int64**)(v34 + 16);
        if (v35 < 0) {
          for (; v36 != v37; ++v36) {
            v38 = (_QWORD*)*v36;
            if (*(_QWORD*)(*v36 + 96) == 0 && v38[69] == 0) {
              goto LABEL_53;
            }
          }
        }
        else {
          while (v36 != v37) {
            v39 = *v36++;
            v38 = (_QWORD*)v39;
            if (*(_DWORD*)(v39 + 84) == v35) {
              goto LABEL_53;
            }
          }
        }
        v38 = nullptr;
      LABEL_53:
        v40 = *((_DWORD*)v38 + 135);
        v10 = __OFSUB__(v40, 1);
        v41 = (unsigned int)(v40 - 1);
        if (((v41 & 0x80000000) != 0LL) == v10) {
          v42 = v38[3];
          v43 = v38[4] - v42;
          v44 = (_QWORD*)(v42 + 8LL * (unsigned int)v41);
          if (v41 < v43 >> 3) {
            v38 = v44;
          }
        }
        v45 = *v38;
        if (*(_QWORD*)(*v38 + 120LL) == 0 ||
            (unsigned __int8)Impl_13261c0(*v38) != 2 &&
                (unsigned __int8)Impl_13261c0(v45) != 0 ||
            (v46 = *(__int64**)(GameData_21ca080 + 64),
             v47 = *(__int64**)(GameData_21ca080 + 72), v46 == v47)) {
        LABEL_62:
          v49 = a1[1];
          if (*(_QWORD*)(v49 + 152) != 0) {
            v50 = *(_QWORD*)(v49 + 152);
          }
          else {
            v50 = a1[1];
          }
          ProcGmapWarpList_168cf20(v50);
        }
        else {
          while (1) {
            v48 = *v46++;
            if (*(_QWORD*)(v45 + 120) == *(_QWORD*)(v48 + 192)) {
              break;
            }
            if (v46 == v47) {
              goto LABEL_62;
            }
          }
          v51 = a1[1];
          if (*(_QWORD*)(v51 + 152) != 0) {
            v52 = *(_QWORD*)(v51 + 152);
          }
          else {
            v52 = a1[1];
          }
          ProcGmapWarpList_168ca80(v52);
        }
        return 9;
      }
    }
    else {
      while (v23 != v24) {
        v26 = *v23++;
        v25 = v26;
        if (*(_DWORD*)(v26 + 84) == v22) {
          goto LABEL_34;
        }
      }
    }
  LABEL_33:
    v25 = 0;
    goto LABEL_34;
  }
  v17 = (*(__int64 (**)(_QWORD*))(*a1 + 24LL))(a1);
  v18 = (__int64*)GameData_21316c8;
  v19 = *(_QWORD*)GameData_21316c8;
  if (v17 != 0 && v19 != 0) {
    GameRoutine_60a020(v19 + 240, v17);
    v19 = *v18;
  }
  if (v19 != 0) {
    GameRoutine_14d5420();
  }
  return 2;
}

#pragma GCC visibility pop
