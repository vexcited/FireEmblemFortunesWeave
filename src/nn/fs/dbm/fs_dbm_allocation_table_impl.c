#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_fs_IStorage_CheckAccessRange_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_dbm_AllocationTable_UpdateChain_plt(_QWORD, _QWORD, _QWORD,
                                                  _QWORD, _QWORD, _QWORD);
__int64 nn_fs_dbm_AllocationTable_UpdateNext_plt(_QWORD, _QWORD, _QWORD);
__int64 fs_dbm_allocation_table_bdb70(_QWORD* a1, __int64 a2, __int64 a3,
                                      __int64 a4);
__int64 nn_fs_dbm_AllocationTable_Expand(_QWORD* a1, int a2, unsigned int a3);
__int64 fs_dbm_allocation_table_bde40(_QWORD* a1, __int64 a2, __int64 a3,
                                      __int64 a4);
__int64 nn_fs_dbm_AllocationTable_Split(void* this_, unsigned int* a2, int a3,
                                        unsigned int a4);

__int64 fs_dbm_allocation_table_bdb70(_QWORD* a1, __int64 a2, __int64 a3,
                                      __int64 a4)
{
  __int64 result;

  if (a1[1] == 0) {
    return 3533826;
  }
  if (a4 == 0) {
    return 0;
  }
  if (a3 == 0) {
    return 3104258;
  }
  result = nn_fs_IStorage_CheckAccessRange_plt(a2, a4, a1[3]);
  if ((_DWORD)result == 0) {
    return (*(__int64 (**)(_QWORD, __int64, __int64, __int64))(
        *(_QWORD*)a1[1] + 24LL))(a1[1], a1[2] + a2, a3, a4);
  }
  return result;
}

__int64 nn_fs_dbm_AllocationTable_Expand(_QWORD* a1, int a2, unsigned int a3)
{
  unsigned int v3;
  unsigned int v7;
  unsigned int v8;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    _BYTE v16[4];
    unsigned int v17;
  } v16_;

  v3 = 3533826;
  if (a1[1] == 0) {
    return v3;
  }
  v7 = nn_fs_IStorage_CheckAccessRange_plt(0, 8, a1[3]);
  if (v7 != 0) {
    return v7;
  }
  v7 = (*(__int64 (**)(_QWORD, _QWORD, _BYTE*, __int64))(
      *(_QWORD*)a1[1] + 16LL))(a1[1], a1[2], v16_.v16, 8);
  if (v7 != 0) {
    return v7;
  }
  v15 = 0x80000000LL;
  v8 = v16_.v17;
  if (a3 - a2 > 1) {
    v8 = v16_.v17 | 0x80000000;
  }
  HIDWORD(v15) = v8;
  if (a1[1] == 0) {
    return v3;
  }
  v7 = nn_fs_IStorage_CheckAccessRange_plt(8LL * (unsigned int)(a2 + 1), 8,
                                           a1[3]);
  if (v7 != 0) {
    return v7;
  }
  v7 = (*(__int64 (**)(_QWORD, __int64, __int64*, __int64))(
      *(_QWORD*)a1[1] + 24LL))(a1[1], a1[2] + 8LL * (unsigned int)(a2 + 1),
                               &v15, 8);
  if (v7 != 0) {
    return v7;
  }
  v10 = a2 + 2;
  LODWORD(v15) = (a2 + 1) | 0x80000000;
  HIDWORD(v15) = a3;
  if (a2 + 2 > a3) {
  LABEL_16:
    if (v16_.v17 == 0) {
      goto LABEL_23;
    }
    if (a1[1] == 0) {
      return v3;
    }
    v11 = 8LL * v16_.v17;
    v7 = nn_fs_IStorage_CheckAccessRange_plt(v11, 8, a1[3]);
    if (v7 == 0) {
      v7 = (*(__int64 (**)(_QWORD, __int64, __int64*, __int64))(
          *(_QWORD*)a1[1] + 16LL))(a1[1], a1[2] + v11, &v15, 8);
      if (v7 == 0) {
        v12 = a1[1];
        LODWORD(v15) = a2 + 1;
        if (v12 == 0) {
          return v3;
        }
        v13 = 8LL * v16_.v17;
        v7 = nn_fs_IStorage_CheckAccessRange_plt(v13, 8, a1[3]);
        if (v7 == 0) {
          v7 = (*(__int64 (**)(_QWORD, __int64, __int64*, __int64))(
              *(_QWORD*)a1[1] + 24LL))(a1[1], a1[2] + v13, &v15, 8);
          if (v7 == 0) {
          LABEL_23:
            v14 = a1[1];
            v16_.v17 = a2 + 1;
            if (v14 == 0) {
              return v3;
            }
            v7 = nn_fs_IStorage_CheckAccessRange_plt(0, 8, a1[3]);
            if (v7 == 0) {
              return (*(unsigned int (**)(_QWORD, _QWORD, _BYTE*, __int64))(
                  *(_QWORD*)a1[1] + 24LL))(a1[1], a1[2], v16_.v16, 8);
            }
          }
        }
      }
    }
    return v7;
  }
  while (a1[1] != 0) {
    v7 = nn_fs_IStorage_CheckAccessRange_plt(8LL * v10, 8, a1[3]);
    if (v7 != 0) {
      return v7;
    }
    v7 = (*(__int64 (**)(_QWORD, __int64, __int64*, __int64))(
        *(_QWORD*)a1[1] + 24LL))(a1[1], a1[2] + 8LL * v10, &v15, 8);
    if (v7 != 0) {
      return v7;
    }
    if (++v10 > a3) {
      goto LABEL_16;
    }
  }
  return v3;
}

__int64 fs_dbm_allocation_table_bde40(_QWORD* a1, __int64 a2, __int64 a3,
                                      __int64 a4)
{
  __int64 result;

  if (a1[1] == 0) {
    return 3533826;
  }
  if (a4 == 0) {
    return 0;
  }
  if (a3 == 0) {
    return 3104258;
  }
  result = nn_fs_IStorage_CheckAccessRange_plt(a2, a4, a1[3]);
  if ((_DWORD)result == 0) {
    return (*(__int64 (**)(_QWORD, __int64, __int64, __int64))(
        *(_QWORD*)a1[1] + 16LL))(a1[1], a1[2] + a2, a3, a4);
  }
  return result;
}

__int64 nn_fs_dbm_AllocationTable_Split(void* this_, unsigned int* a2, int a3,
                                        unsigned int a4)
{
  unsigned int v4;
  unsigned int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  bool v19;
  unsigned int v20;
  struct {
    unsigned int v24;
    unsigned int v25;
    char gap32_[4];
    unsigned int v26;
  } v24_;
  unsigned int v27;

  v4 = 2419714;
  if (a3 == 0x80000000) {
    return v4;
  }
  v7 = 0;
  v8 = a3;
  do {
    while (1) {
      if (v8 + 1 == *((_DWORD*)this_ + 14)) {
        v9 = 8;
      }
      else {
        v9 = 16;
      }
      if (*((_QWORD*)this_ + 1) == 0) {
        return 3533826;
      }
      v10 = 8LL * ((v8 + 1) & 0x7FFFFFFF);
      v11 = nn_fs_IStorage_CheckAccessRange_plt(v10, v9, *((_QWORD*)this_ + 3));
      if (v11 != 0) {
        return v11;
      }
      v11 = (*(__int64 (**)(_QWORD, __int64, unsigned int*, __int64))(
          **((_QWORD**)this_ + 1) + 16LL))(
          *((_QWORD*)this_ + 1), *((_QWORD*)this_ + 2) + v10, &v24_.v24, v9);
      if (v11 != 0) {
        return v11;
      }
      if ((v24_.v25 & 0x80000000) == 0) {
        break;
      }
      v7 += v24_.v26 - v8;
      v8 = (v24_.v25 & 0x7FFFFFFF) - 1;
      if ((v24_.v25 & 0x7FFFFFFF) == 0) {
        goto LABEL_13;
      }
    }
    if (v24_.v24 > 0x80000000) {
      return 2418690;
    }
    ++v7;
    v8 = (v24_.v25 & 0x7FFFFFFF) - 1;
  } while ((v24_.v25 & 0x7FFFFFFF) != 0);
LABEL_13:
  v12 = a4;
  if (a4 == 0 || a4 >= v7) {
    return v4;
  }
  if (a3 == -1) {
  LABEL_16:
    v13 = 0x7FFFFFFF;
  LABEL_17:
    v4 = 0;
    *a2 = v13;
    return v4;
  }
  v14 = a3 + 1;
  while (1) {
    if (v14 == *((_DWORD*)this_ + 14)) {
      v15 = 8;
    }
    else {
      v15 = 16;
    }
    if (*((_QWORD*)this_ + 1) == 0) {
      return 3533826;
    }
    v16 = 8LL * (v14 & 0x7FFFFFFF);
    v11 = nn_fs_IStorage_CheckAccessRange_plt(v16, v15, *((_QWORD*)this_ + 3));
    if (v11 != 0) {
      return v11;
    }
    v11 = (*(__int64 (**)(_QWORD, __int64, unsigned int*, __int64))(
        **((_QWORD**)this_ + 1) + 16LL))(
        *((_QWORD*)this_ + 1), *((_QWORD*)this_ + 2) + v16, &v24_.v24, v15);
    if (v11 != 0) {
      return v11;
    }
    if ((v24_.v25 & 0x80000000) == 0) {
      break;
    }
    v17 = v24_.v26;
    v18 = v24_.v26 - v14 + 1;
    v19 = v12 >= v18;
    v20 = v12 - v18;
    if (!v19) {
      if (v12 != 0) {
        v11 = nn_fs_dbm_AllocationTable_UpdateChain_plt(
            this_, (unsigned int)(a3 + 1), v14, v12 + v14 - 1, v24_.v24, 0);
        if (v11 != 0) {
          return v11;
        }
      }
      else {
        v11 = nn_fs_dbm_AllocationTable_UpdateNext_plt(this_, v24_.v24, 0);
        if (v11 != 0) {
          return v11;
        }
      }
      v14 += v12;
      v11 = nn_fs_dbm_AllocationTable_UpdateChain_plt(
          this_, v14, v14, v17, 0x80000000LL, v24_.v25 & 0x7FFFFFFF);
      if (v11 == 0) {
        goto LABEL_46;
      }
      return v11;
    }
    v14 = v24_.v25 & 0x7FFFFFFF;
    v12 = v20;
  LABEL_20:
    if (v14 == 0) {
      goto LABEL_16;
    }
  }
  if (v12 != 0) {
    --v12;
    v14 = v24_.v25;
    goto LABEL_20;
  }
  v11 = nn_fs_dbm_AllocationTable_UpdateNext_plt(this_, v24_.v24, 0);
  if (v11 == 0) {
    if (*((_QWORD*)this_ + 1) == 0) {
      return 3533826;
    }
    v11 = nn_fs_IStorage_CheckAccessRange_plt(8LL * (v14 & 0x7FFFFFFF), 8,
                                              *((_QWORD*)this_ + 3));
    if (v11 == 0) {
      v11 = (*(__int64 (**)(_QWORD, __int64, unsigned int*, __int64))(
          **((_QWORD**)this_ + 1) + 16LL))(
          *((_QWORD*)this_ + 1), *((_QWORD*)this_ + 2) + v16, &v27, 8);
      if (v11 == 0) {
        v27 = 0x80000000;
        v11 = 3533826;
        if (*((_QWORD*)this_ + 1) != 0) {
          v11 = nn_fs_IStorage_CheckAccessRange_plt(8LL * (v14 & 0x7FFFFFFF), 8,
                                                    *((_QWORD*)this_ + 3));
          if (v11 == 0) {
            v11 = (*(__int64 (**)(_QWORD, __int64, unsigned int*, __int64))(
                **((_QWORD**)this_ + 1) + 24LL))(
                *((_QWORD*)this_ + 1), *((_QWORD*)this_ + 2) + v16, &v27, 8);
            if (v11 == 0) {
            LABEL_46:
              v13 = v14 - 1;
              goto LABEL_17;
            }
          }
        }
      }
    }
  }
  return v11;
}

#pragma GCC visibility pop
