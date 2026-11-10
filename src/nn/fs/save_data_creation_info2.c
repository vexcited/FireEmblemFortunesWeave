#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
bool nn_fs_125640(__int64);
__int64 nn_fs_SaveDataCreationInfo2_Make(__int64 a1, __int64* a2, __int64 a3,
                                         unsigned __int64 a4, __int64 a5,
                                         __int64 a6, int a7, char a8, char a9,
                                         __int64* a10);

__int64 nn_fs_SaveDataCreationInfo2_Make(__int64 a1, __int64* a2, __int64 a3,
                                         unsigned __int64 a4, __int64 a5,
                                         __int64 a6, int a7, char a8, char a9,
                                         __int64* a10)
{
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
  struct {
    int v31;
    char gap12_[4];
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    unsigned __int64 v41;
    __int64 v42;
    __int64 v43;
    int v44;
    char v45;
    char v46;
    char gap118_[50];
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
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
    __int64 v62;
  } v31_;

  memset_plt((void*)&v31_.v31, nullptr, 512, a4);
  v31_.v40 = a3;
  v31_.v41 = a4;
  v31_.v42 = a5;
  v31_.v43 = a6;
  v31_.v44 = a7;
  v31_.v45 = a8;
  v31_.v46 = a9;
  v31_.v31 = 0x10000;
  v18 = a2[5];
  v31_.v36 = a2[4];
  v31_.v37 = v18;
  v19 = a2[7];
  v31_.v38 = a2[6];
  v31_.v39 = v19;
  v20 = a2[1];
  v31_.v32 = *a2;
  v31_.v33 = v20;
  v21 = a2[3];
  v31_.v34 = a2[2];
  v31_.v35 = v21;
  if (a10 != nullptr) {
    v22 = a10[13];
    v31_.v59 = a10[12];
    v31_.v60 = v22;
    v23 = a10[15];
    v31_.v61 = a10[14];
    v31_.v62 = v23;
    v24 = a10[9];
    v31_.v55 = a10[8];
    v31_.v56 = v24;
    v25 = a10[11];
    v31_.v57 = a10[10];
    v31_.v58 = v25;
    v26 = a10[5];
    v31_.v51 = a10[4];
    v31_.v52 = v26;
    v27 = a10[7];
    v31_.v53 = a10[6];
    v31_.v54 = v27;
    v28 = a10[1];
    v31_.v47 = *a10;
    v31_.v48 = v28;
    v29 = a10[3];
    v31_.v49 = a10[2];
    v31_.v50 = v29;
  }
  if (!nn_fs_125640((__int64)&v31_.v31)) {
    return 3072514;
  }
  memcpy_plt(a1, &v31_.v31, 512);
  return 0;
}

#pragma GCC visibility pop
