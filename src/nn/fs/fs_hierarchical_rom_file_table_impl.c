#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_11f810(__int64, _DWORD*, _DWORD*, unsigned int, __int64,
                          __int64, __int64);
__int64 SdkRoutine_11fba0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_11fca0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_11ffa0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_fs_HierarchicalRomFileTable_CheckSameEntryExists_plt(_QWORD, _QWORD,
                                                                _QWORD);
__int64 nn_fs_HierarchicalRomFileTable_FindPathRecursive_plt(_QWORD, _QWORD,
                                                             _QWORD, _QWORD,
                                                             _QWORD);
__int64 nn_fs_IStorage_CheckAccessRange_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_detail_Allocate_plt(_QWORD);
__int64 nn_fs_detail_Deallocate_plt(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak_plt(_QWORD);
__int64 strncmp_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_HierarchicalRomFileTable_Format(_QWORD* a1, _QWORD* a2);
__int64 nn_fs_HierarchicalRomFileTable_Initialize(__int64 a1, __int64 a2,
                                                  __int64 a3, __int64 a4,
                                                  __int64 a5);
__int64 nn_fs_HierarchicalRomFileTable_CreateDirectory(void* this_,
                                                       unsigned int* a2,
                                                       const char* a3);
__int64 fs_hierarchical_rom_file_table_11fa00(__int64* a1, unsigned int* a2,
                                              unsigned int* a3, _DWORD* a4,
                                              _DWORD* a5, unsigned int a6,
                                              __int64 a7, __int64 a8);
__int64 fs_hierarchical_rom_file_table_11fda0(__int64 a1, _DWORD* a2,
                                              _DWORD* a3, unsigned int a4,
                                              __int64 a5, __int64 a6,
                                              __int64 a7);

__int64 nn_fs_HierarchicalRomFileTable_Format(_QWORD* a1, _QWORD* a2)
{
  __int64 v3;
  __int64 result;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  int v19;
  int v20;

  v3 = a1[1];
  result = 3533826;
  if (v3 == 0) {
    return result;
  }
  v6 = a1[2];
  v5 = a1[3];
  v7 = a1[6];
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  v19 = -1;
  if ((v5 & 0x3FFFFFFFCLL) == 0) {
    result = 0;
    if (v7 == 0) {
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v9 = (unsigned int)(v5 >> 2);
  v10 = 0;
  while (1) {
    result = nn_fs_IStorage_CheckAccessRange_plt(v10, 4, v5);
    if ((_DWORD)result != 0) {
      break;
    }
    result = (*(__int64 (**)(__int64, __int64, int*, __int64))(
        *(_QWORD*)v3 + 24LL))(v3, v6, &v19, 4);
    if ((_DWORD)result != 0) {
      break;
    }
    --v9;
    v6 += 4;
    v10 += 4;
    if (v9 == 0) {
      result = 0;
      break;
    }
  }
  if (v7 != 0) {
  LABEL_13:
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v11 = result;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_plt(v7);
      result = v11;
    }
  }
LABEL_15:
  if ((_DWORD)result != 0) {
    return result;
  }
  v12 = a2[1];
  result = 3533826;
  if (v12 == 0) {
    return result;
  }
  v14 = a2[2];
  v13 = a2[3];
  v15 = a2[6];
  if (v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                              memory_order_relaxed);
  }
  v20 = -1;
  if ((v13 & 0x3FFFFFFFCLL) == 0) {
    result = 0;
    if (v15 == 0) {
      return result;
    }
    goto LABEL_28;
  }
  v16 = (unsigned int)(v13 >> 2);
  v17 = 0;
  while (1) {
    result = nn_fs_IStorage_CheckAccessRange_plt(v17, 4, v13);
    if ((_DWORD)result != 0) {
      break;
    }
    result = (*(__int64 (**)(__int64, __int64, int*, __int64))(
        *(_QWORD*)v12 + 24LL))(v12, v14, &v20, 4);
    if ((_DWORD)result != 0) {
      break;
    }
    --v16;
    v14 += 4;
    v17 += 4;
    if (v16 == 0) {
      result = 0;
      break;
    }
  }
  if (v15 != 0) {
  LABEL_28:
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v18 = result;
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak_plt(v15);
      return v18;
    }
  }
  return result;
}

__int64 nn_fs_HierarchicalRomFileTable_Initialize(__int64 a1, __int64 a2,
                                                  __int64 a3, __int64 a4,
                                                  __int64 a5)
{
  __int64 v5;
  __int64 result;
  unsigned __int64 v8;
  __int64 v9;
  char v10;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  char v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;

  v5 = *(_QWORD*)(a2 + 8);
  result = 3533826;
  if (v5 != 0) {
    v9 = *(_QWORD*)(a2 + 16);
    v8 = *(_QWORD*)(a2 + 24);
    v10 = *(_BYTE*)(a2 + 32);
    v13 = *(_QWORD*)(a2 + 40);
    v14 = *(_QWORD*)(a2 + 48);
    if (v14 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
    }
    v15 = *(_QWORD*)(a3 + 8);
    v16 = *(_QWORD*)(a3 + 16);
    v17 = *(_QWORD*)(a3 + 24);
    v18 = *(_BYTE*)(a3 + 32);
    v19 = *(_QWORD*)(a3 + 40);
    v20 = *(_QWORD*)(a3 + 48);
    if (v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                memory_order_relaxed);
    }
    *(_QWORD*)(a1 + 16) = v5;
    *(_QWORD*)(a1 + 24) = v9;
    *(_QWORD*)(a1 + 32) = v8;
    *(_BYTE*)(a1 + 40) = v10;
    if (v14 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
    }
    v21 = *(_QWORD*)(a1 + 56);
    v22 = (unsigned int)(v8 >> 2);
    *(_QWORD*)(a1 + 48) = v13;
    *(_QWORD*)(a1 + 56) = v14;
    if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v39 = v17;
      v40 = v19;
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      std___1___shared_weak_count___release_weak_plt(v21);
      v17 = v39;
      v19 = v40;
      result = 3533826;
    }
    *(_QWORD*)a1 = v22;
    *(_QWORD*)(a1 + 72) = v15;
    *(_QWORD*)(a1 + 80) = v16;
    *(_QWORD*)(a1 + 88) = v17;
    *(_BYTE*)(a1 + 96) = v18;
    if (v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                memory_order_relaxed);
    }
    v23 = *(_QWORD*)(a1 + 112);
    *(_QWORD*)(a1 + 104) = v19;
    *(_QWORD*)(a1 + 112) = v20;
    if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      std___1___shared_weak_count___release_weak_plt(v23);
      result = 3533826;
    }
    if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak_plt(v20);
      result = 3533826;
    }
    if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak_plt(v14);
      result = 3533826;
    }
    v24 = *(_QWORD*)(a4 + 8);
    if (v24 != 0) {
      v26 = *(_QWORD*)(a4 + 16);
      v25 = *(_QWORD*)(a4 + 24);
      v27 = *(_BYTE*)(a4 + 32);
      v28 = *(_QWORD*)(a4 + 40);
      v29 = *(_QWORD*)(a4 + 48);
      if (v29 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                  memory_order_relaxed);
      }
      v30 = *(_QWORD*)(a5 + 8);
      v31 = *(_QWORD*)(a5 + 16);
      v32 = *(_QWORD*)(a5 + 24);
      v33 = *(_BYTE*)(a5 + 32);
      v35 = *(_QWORD*)(a5 + 40);
      v34 = *(_QWORD*)(a5 + 48);
      if (v34 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                                  memory_order_relaxed);
      }
      *(_QWORD*)(a1 + 152) = v24;
      *(_QWORD*)(a1 + 160) = v26;
      *(_QWORD*)(a1 + 168) = v25;
      *(_BYTE*)(a1 + 176) = v27;
      if (v29 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                  memory_order_relaxed);
      }
      v36 = *(_QWORD*)(a1 + 192);
      v37 = (unsigned int)(v25 >> 2);
      *(_QWORD*)(a1 + 184) = v28;
      *(_QWORD*)(a1 + 192) = v29;
      if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
        std___1___shared_weak_count___release_weak_plt(v36);
      }
      *(_QWORD*)(a1 + 136) = v37;
      *(_QWORD*)(a1 + 208) = v30;
      *(_QWORD*)(a1 + 216) = v31;
      *(_QWORD*)(a1 + 224) = v32;
      *(_BYTE*)(a1 + 232) = v33;
      if (v34 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                                  memory_order_relaxed);
      }
      v38 = *(_QWORD*)(a1 + 248);
      *(_QWORD*)(a1 + 240) = v35;
      *(_QWORD*)(a1 + 248) = v34;
      if (v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
        std___1___shared_weak_count___release_weak_plt(v38);
      }
      if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
        std___1___shared_weak_count___release_weak_plt(v34);
      }
      if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
        std___1___shared_weak_count___release_weak_plt(v29);
      }
      return 0;
    }
  }
  return result;
}

__int64 nn_fs_HierarchicalRomFileTable_CreateDirectory(void* this_,
                                                       unsigned int* a2,
                                                       const char* a3)
{
  __int64 result;
  unsigned int v6;
  __int64 v7;
  unsigned __int8* i;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  int v24;
  struct {
    __int64 v25;
    unsigned __int8* v26;
    unsigned __int64 v27;
  } v25_;
  struct {
    __int64 v28;
    int v29;
  } v28_;
  __int128 v30;
  __int64 v31;

  v28_.v29 = 0;
  v25_.v27 = 0;
  v28_.v28 = 0;
  v25_.v25 = 0;
  v25_.v26 = nullptr;
  result = nn_fs_HierarchicalRomFileTable_FindPathRecursive_plt(
      this_, &v25_.v25, &v28_.v28, 1, a3);
  if ((_DWORD)result == 0) {
    result = nn_fs_HierarchicalRomFileTable_CheckSameEntryExists_plt(
        this_, &v25_.v25, 4047874);
    if ((_DWORD)result == 0) {
      v22 = 0;
      v23 = -1;
      v24 = -1;
      v6 = v25_.v25 ^ 0x75BCD15;
      if (v25_.v27 != 0) {
        v7 = v25_.v27 & 7;
        for (i = v25_.v26; v7 != 0; v6 = v9 ^ __ROR4__(v6, 5)) {
          v9 = *i++;
          --v7;
        }
        if (v25_.v27 >= 8) {
          do {
            v10 =
                i[6] ^
                __ROR4__(
                    i[5] ^
                        __ROR4__(
                            i[4] ^
                                __ROR4__(
                                    i[3] ^
                                        __ROR4__(
                                            i[2] ^
                                                __ROR4__(
                                                    i[1] ^ __ROR4__(
                                                               *i ^ __ROR4__(v6,
                                                                             5),
                                                               5),
                                                    5),
                                            5),
                                    5),
                            5),
                    5);
            v11 = i[7];
            i += 8;
            v6 = v11 ^ __ROR4__(v10, 5);
          } while (i != &v25_.v26[v25_.v27]);
        }
      }
      LODWORD(result) =
          SdkRoutine_11f810((__int64)this_, &v22, &v25_.v25, v6,
                            (__int64)v25_.v26, v25_.v27, (__int64)&v23);
      if ((_DWORD)result != 0) {
        if ((result & 0x3FFFFF) == 0x3DC602) {
          return 4048898;
        }
        else {
          return (unsigned int)result;
        }
      }
      else {
        v12 = v22;
        result = 3533826;
        *a2 = v22;
        v13 = HIDWORD(v28_.v28);
        if (HIDWORD(v28_.v28) == -1) {
          HIDWORD(v28_.v28) = v12;
          if (*((_QWORD*)this_ + 9) != 0) {
            v13 = (unsigned int)v25_.v25;
            result = nn_fs_IStorage_CheckAccessRange_plt(
                (unsigned int)v25_.v25, 24, *((_QWORD*)this_ + 11));
            if ((_DWORD)result == 0) {
              v14 = *((_QWORD*)this_ + 9);
              v15 = *((_QWORD*)this_ + 10);
              v31 = 0;
              v30 = (__typeof__(v30)){0};
              result = (*(__int64 (**)(__int64, __int64, __int128*, __int64))(
                  *(_QWORD*)v14 + 16LL))(v14, v15 + v13, &v30, 24);
              if ((_DWORD)result == 0) {
                *(_QWORD*)((char*)&v30 + 4) = v28_.v28;
                HIDWORD(v30) = v28_.v29;
                result = 3533826;
                if (*((_QWORD*)this_ + 9) != 0) {
                LABEL_26:
                  result = nn_fs_IStorage_CheckAccessRange_plt(
                      v13, 24, *((_QWORD*)this_ + 11));
                  if ((_DWORD)result == 0) {
                    return (
                        *(__int64 (**)(_QWORD, __int64, __int128*, __int64))(
                            **((_QWORD**)this_ + 9) + 24LL))(
                        *((_QWORD*)this_ + 9), *((_QWORD*)this_ + 10) + v13,
                        &v30, 24);
                  }
                }
              }
            }
          }
        }
        else {
          v16 = *((_QWORD*)this_ + 9);
          v31 = 0;
          v30 = (__typeof__(v30)){0};
          if (v16 != 0) {
            while (1) {
              result = nn_fs_IStorage_CheckAccessRange_plt(
                  v13, 24, *((_QWORD*)this_ + 11));
              if ((_DWORD)result != 0) {
                break;
              }
              result = (*(__int64 (**)(_QWORD, __int64, __int128*, __int64))(
                  **((_QWORD**)this_ + 9) + 16LL))(*((_QWORD*)this_ + 9),
                                                   *((_QWORD*)this_ + 10) + v13,
                                                   &v30, 24);
              if ((_DWORD)result != 0) {
                break;
              }
              if (DWORD1(v30) == -1) {
                if (*((_QWORD*)this_ + 9) == 0) {
                  return 3533826;
                }
                v18 = *((_QWORD*)&v30 + 1);
                v19 = v22;
                result = nn_fs_IStorage_CheckAccessRange_plt(
                    v13, 24, *((_QWORD*)this_ + 11));
                if ((_DWORD)result != 0) {
                  return result;
                }
                v20 = *((_QWORD*)this_ + 9);
                v21 = *((_QWORD*)this_ + 10);
                v31 = 0;
                v30 = (__typeof__(v30)){0};
                result = (*(__int64 (**)(__int64, __int64, __int128*, __int64))(
                    *(_QWORD*)v20 + 16LL))(v20, v21 + v13, &v30, 24);
                if ((_DWORD)result != 0) {
                  return result;
                }
                DWORD1(v30) = v19;
                *((_QWORD*)&v30 + 1) = v18;
                result = 3533826;
                if (*((_QWORD*)this_ + 9) == 0) {
                  return result;
                }
                goto LABEL_26;
              }
              v17 = *((_QWORD*)this_ + 9);
              v31 = 0;
              v13 = DWORD1(v30);
              v30 = (__typeof__(v30)){0};
              if (v17 == 0) {
                return 3533826;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 fs_hierarchical_rom_file_table_11fa00(__int64* a1, unsigned int* a2,
                                              unsigned int* a3, _DWORD* a4,
                                              _DWORD* a5, unsigned int a6,
                                              __int64 a7, __int64 a8)
{
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  unsigned int v23;
  bool v24;
  __int64 v26;
  unsigned int v27;

  *a2 = 0;
  *a3 = 0;
  v8 = *a1;
  v9 = a1[2];
  v10 = 3533826;
  v27 = 0;
  if (v9 != 0) {
    v18 = 4 * (a6 % v8);
    v19 = nn_fs_IStorage_CheckAccessRange_plt(v18, 4, a1[4]);
    if (v19 != 0) {
      return v19;
    }
    v19 = (*(__int64 (**)(__int64, __int64, unsigned int*, __int64))(
        *(_QWORD*)a1[2] + 16LL))(a1[2], a1[3] + v18, &v27, 4);
    if (v19 != 0) {
      return v19;
    }
    else if (a1[9] != 0) {
      if (v27 == -1) {
        return 4045826;
      }
      else {
        v20 = nn_fs_detail_Allocate_plt(768);
        if (v20 != 0) {
          v21 = v27;
          v22 = v20;
          while (1) {
            v26 = 0;
            v23 = SdkRoutine_11fca0(a1, a4, v22, &v26, v21);
            if (v23 != 0) {
              break;
            }
            v24 = a8 == v26 && *a5 == *a4;
            if (v24 && (unsigned int)strncmp_plt(a7, v22, a8) == 0) {
              v10 = 0;
              *a2 = v21;
              goto LABEL_19;
            }
            *a3 = v21;
            v21 = a4[4];
            if (v21 == -1) {
              v10 = 4045826;
              goto LABEL_19;
            }
          }
          v10 = v23;
        LABEL_19:
          nn_fs_detail_Deallocate_plt(v22, 768);
        }
        else {
          return 1752066;
        }
      }
    }
  }
  return v10;
}

__int64 fs_hierarchical_rom_file_table_11fda0(__int64 a1, _DWORD* a2,
                                              _DWORD* a3, unsigned int a4,
                                              __int64 a5, __int64 a6,
                                              __int64 a7)
{
  unsigned int v14;
  unsigned int v15;
  int v16;
  __int64 result;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[4];
  __int64 v22;

  v22 = 0;
  memset(v21, 0, sizeof(v21));
  v14 = ((__int64 (*)(__int64, char*, __int64*, _QWORD*, _DWORD*, _QWORD,
                      __int64, __int64))SdkRoutine_11ffa0)(
      a1, (char*)&v22 + 4, &v22, v21, a3, a4, a5, a6);
  if (v14 == 0) {
    return 4047874;
  }
  v15 = v14;
  v16 = v14 & 0x3FFFFF;
  result = 3533826;
  if (v16 != 4045826) {
    return v15;
  }
  if (*(_QWORD*)(a1 + 72) != 0) {
    v18 = *(_QWORD*)(a1 + 120);
    v19 = v18 + (unsigned int)a6;
    if ((unsigned __int64)(v19 + 32) <= *(_QWORD*)(a1 + 88)) {
      HIDWORD(v22) = 0;
      *(_QWORD*)(a1 + 120) = (v19 + 35) & 0xFFFFFFFFFFFFFFFCLL;
      result = SdkRoutine_11fba0(a1, (char*)&v22 + 4, (unsigned int)v18, a4);
      if ((_DWORD)result == 0) {
        LODWORD(v21[0]) = *a3;
        v20 = *(_QWORD*)(a7 + 8);
        *(_QWORD*)((char*)v21 + 4) = *(_QWORD*)a7;
        *(_QWORD*)((char*)&v21[1] + 4) = v20;
        HIDWORD(v21[2]) = *(_DWORD*)(a7 + 16);
        v21[3] = __PAIR64__(a6, HIDWORD(v22));
        if (*(_QWORD*)(a1 + 72) != 0) {
          result = nn_fs_IStorage_CheckAccessRange_plt((unsigned int)v18, 32,
                                                       *(_QWORD*)(a1 + 88));
          if ((_DWORD)result == 0) {
            result = (*(__int64 (**)(_QWORD, _QWORD, _QWORD*, __int64))(
                **(_QWORD**)(a1 + 72) + 24LL))(
                *(_QWORD*)(a1 + 72), *(_QWORD*)(a1 + 80) + (unsigned int)v18,
                v21, 32);
            if ((_DWORD)result == 0) {
              result = 3533826;
              if (a5 == 0 || a6 == 0 ||
                  *(_QWORD*)(a1 + 72) != 0 &&
                      (_DWORD)(result = nn_fs_IStorage_CheckAccessRange_plt(
                                   (unsigned int)v18 + 32LL, a6,
                                   *(_QWORD*)(a1 + 88))) == 0 &&
                      (_DWORD)(result = (*(__int64 (**)(_QWORD, __int64,
                                                        __int64, __int64))(
                                   **(_QWORD**)(a1 + 72) + 24LL))(
                                   *(_QWORD*)(a1 + 72),
                                   *(_QWORD*)(a1 + 80) + (unsigned int)v18 +
                                       32LL,
                                   a5, a6)) == 0) {
                *a2 = v18;
                result = 0;
                ++*(_DWORD*)(a1 + 128);
              }
            }
          }
        }
        else {
          return 3533826;
        }
      }
    }
    else {
      return 4048386;
    }
  }
  return result;
}

#pragma GCC visibility pop
