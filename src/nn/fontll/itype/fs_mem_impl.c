#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CACHE_ENTRY_free_plt(_QWORD, _QWORD);
__int64 any_used_lfnt_table_ptrs_plt(_QWORD, _QWORD, _QWORD);
__int64 delete_fs_cache_plt(_QWORD, _QWORD);
__int64 delete_key_plt(_QWORD, _QWORD);
__int64 delete_lfnt_plt(_QWORD, _QWORD);
__int64 fs__free_plt(_QWORD, _QWORD);
__int64 fs_mem_455100_alt1(_QWORD, _QWORD) __asm__("fs_mem_455100");
__int64 kill_fntset_plt(_QWORD, _QWORD);
__int64 squeeze_table_ptrs_plt(_QWORD, _QWORD);
__int64 unload_cmap_cache_plt(_QWORD, _QWORD);
__int64 unload_fnt_plt(_QWORD, _QWORD);
__int64 kill_fntset(__int64 a1, __int64 a2);
__int64 get_some_back(__int64 a1);
__int64 fs_mem_455100(__int64 a1, char a2);

__int64 kill_fntset(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  unsigned int i;
  __int64 v6;
  int v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  bool v14;
  int v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;

  if (*(_WORD*)(a2 + 32) != 0) {
    v4 = *(_QWORD**)(a2 + 40);
    for (i = 0; i < *(unsigned __int16*)(a2 + 32); ++i) {
      v6 = v4[7];
      v7 = *(_DWORD*)(v6 + 52) - 1;
      *(_DWORD*)(v6 + 52) = v7;
      if (v7 == 0) {
        v8 = *(_QWORD**)(*(_QWORD*)(a1 + 128) + 8LL);
        if (v8 != nullptr) {
          v9 = nullptr;
          while (1) {
            while (1) {
              v10 = (_QWORD*)v8[36];
              if (*v8 == v6) {
                break;
              }
              v9 = v8;
              v8 = (_QWORD*)v8[36];
              if (v10 == nullptr) {
                goto LABEL_3;
              }
            }
            v11 = *(_QWORD*)(a1 + 128);
            if (*(_QWORD**)(v11 + 8) != v8) {
              break;
            }
            *(_QWORD*)(v11 + 8) = v10;
            delete_fs_cache_plt(a1, v8);
            v12 = v8[5];
            if (v12 != 0) {
              goto LABEL_16;
            }
          LABEL_23:
            fs__free_plt(a1, v8);
            v8 = v10;
            if (v10 == nullptr) {
              goto LABEL_3;
            }
          }
          if (v9 != nullptr) {
            v9[36] = v10;
          }
          delete_fs_cache_plt(a1, v8);
          v12 = v8[5];
          if (v12 == 0) {
            goto LABEL_23;
          }
        LABEL_16:
          v13 = *(unsigned __int8*)(*v8 + 65LL);
          v14 = v13 > 7;
          v15 = (1 << v13) & 0x83;
          if (v14 || v15 == 0) {
            v18 = *(_QWORD*)(v12 + 16);
            if (v18 != 0) {
              fs__free_plt(a1, v18);
            }
          }
          else {
            delete_key_plt(a1, *(_QWORD*)(v12 + 16));
          }
          v17 = v8[5];
          if (v17 != 0) {
            fs__free_plt(a1, v17);
          }
          goto LABEL_23;
        }
      LABEL_3:
        delete_lfnt_plt(a1, v6);
      }
      *v4 = 0;
      v4 += 9;
    }
  }
  v19 = *(_QWORD*)(a2 + 40);
  if (v19 != 0) {
    fs__free_plt(a1, v19);
  }
  if (*(_QWORD*)a2 != 0) {
    fs__free_plt(a1, *(_QWORD*)a2);
  }
  v20 = *(_QWORD*)(a2 + 8);
  if (v20 != 0) {
    fs__free_plt(a1, v20);
  }
  v21 = *(_QWORD*)(a2 + 88);
  if (v21 != 0) {
    fs__free_plt(a1, v21);
  }
  v22 = *(_QWORD*)(a2 + 96);
  if (v22 != 0) {
    fs__free_plt(a1, v22);
  }
  v23 = *(_QWORD*)(a2 + 104);
  if (v23 != 0) {
    fs__free_plt(a1, v23);
  }
  v24 = *(_QWORD*)(a2 + 112);
  if (v24 != 0) {
    fs__free_plt(a1, v24);
  }
  v25 = *(__int64**)(a1 + 128);
  v26 = *v25;
  if (*v25 == a2) {
    *v25 = *(_QWORD*)(a2 + 136);
  }
  else {
    do {
      v27 = v26;
      v26 = *(_QWORD*)(v26 + 136);
    } while (v26 != a2);
    *(_QWORD*)(v27 + 136) = *(_QWORD*)(a2 + 136);
  }
  return fs__free_plt(a1, a2);
}

__int64 get_some_back(__int64 a1)
{
  __int64* v1;
  __int64 i;
  _QWORD* v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  bool j;
  int v13;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  bool v26;
  int v27;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  int v39;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  unsigned int v45;
  int v46;
  __int64 v48;

  v1 = *(__int64**)(a1 + 128);
  for (i = *v1; i != 0; i = *(_QWORD*)(i + 136)) {
    if (*(_DWORD*)(i + 120) == 0 && *(_DWORD*)(i + 124) == 0) {
      kill_fntset_plt(a1, i);
      return 1;
    }
  }
  v4 = v1 + 6;
  v5 = 0;
  v6 = 0;
  do {
    v7 = v4[v5];
    if (v7 != 0) {
      v8 = *(_QWORD*)(v7 + 40);
      v9 = *(_DWORD*)(v8 + 56);
      v10 = v8;
      for (j = v9 != 0; v10 != v7 && v13 != 0; j = v13 != 0) {
        v10 = *(_QWORD*)(v10 + 40);
        v13 = *(_DWORD*)(v10 + 56);
      }
      if (!j) {
        v15 = *(_QWORD*)(v10 + 40);
        if (v15 == v10) {
          v4[v5] = 0;
          v16 = *(_QWORD*)(v10 + 24);
          v17 = *(_DWORD*)(v16 + 280);
          if (v17 == 0) {
          LABEL_27:
            v18 = *(_QWORD*)(v10 + 16);
            if (v18 != 0) {
              fs__free_plt(a1, v18);
            }
            CACHE_ENTRY_free_plt(a1, v10);
            ++v6;
            goto LABEL_8;
          }
        }
        else if (v10 == v7) {
          v19 = *(_QWORD*)(v10 + 48);
          v4[v5] = v19;
          *(_QWORD*)(v19 + 40) = *(_QWORD*)(v10 + 40);
          v16 = *(_QWORD*)(v10 + 24);
          v17 = *(_DWORD*)(v16 + 280);
          if (v17 == 0) {
            goto LABEL_27;
          }
        }
        else if (v10 == v8) {
          *(_QWORD*)(v7 + 40) = v15;
          *(_QWORD*)(*(_QWORD*)(v10 + 40) + 48LL) = 0;
          v16 = *(_QWORD*)(v10 + 24);
          v17 = *(_DWORD*)(v16 + 280);
          if (v17 == 0) {
            goto LABEL_27;
          }
        }
        else {
          *(_QWORD*)(*(_QWORD*)(v10 + 48) + 40LL) = v15;
          *(_QWORD*)(*(_QWORD*)(v10 + 40) + 48LL) = *(_QWORD*)(v10 + 48);
          v16 = *(_QWORD*)(v10 + 24);
          v17 = *(_DWORD*)(v16 + 280);
          if (v17 == 0) {
            goto LABEL_27;
          }
        }
        *(_DWORD*)(v16 + 280) = v17 - 1;
        goto LABEL_27;
      }
    }
  LABEL_8:
    ++v5;
  } while (v5 != 1021);
  if (v6 != 0) {
    return v6;
  }
  v20 = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 8LL);
  if (v20 == 0) {
    goto LABEL_59;
  }
  v6 = 0;
  v21 = 0;
  while (2) {
    while (1) {
      v22 = v20;
      v20 = *(_QWORD*)(v20 + 288);
      if (*(_DWORD*)(v22 + 276) == 0 && *(_DWORD*)(v22 + 284) == 0 &&
          *(_DWORD*)(v22 + 280) == 0) {
        break;
      }
      v21 = v22;
      if (v20 == 0) {
        goto LABEL_58;
      }
    }
    delete_fs_cache_plt(a1, v22);
    v23 = *(_QWORD*)(a1 + 128);
    if (*(_QWORD*)(v23 + 8) == v22) {
      *(_QWORD*)(v23 + 8) = *(_QWORD*)(v22 + 288);
      v24 = *(_QWORD*)(v22 + 40);
      if (v24 == 0) {
        goto LABEL_54;
      }
      goto LABEL_47;
    }
    if (v21 != 0) {
      *(_QWORD*)(v21 + 288) = v20;
    }
    v24 = *(_QWORD*)(v22 + 40);
    if (v24 != 0) {
    LABEL_47:
      v25 = *(unsigned __int8*)(*(_QWORD*)v22 + 65LL);
      v26 = v25 > 7;
      v27 = (1 << v25) & 0x83;
      if (v26 || v27 == 0) {
        v30 = *(_QWORD*)(v24 + 16);
        if (v30 != 0) {
          fs__free_plt(a1, v30);
        }
      }
      else {
        delete_key_plt(a1, *(_QWORD*)(v24 + 16));
      }
      v29 = *(_QWORD*)(v22 + 40);
      if (v29 != 0) {
        fs__free_plt(a1, v29);
      }
    }
  LABEL_54:
    fs__free_plt(a1, v22);
    ++v6;
    if (v20 != 0) {
      continue;
    }
    break;
  }
LABEL_58:
  if (v6 != 0) {
    return v6;
  }
LABEL_59:
  v31 = fs_mem_455100_alt1(a1, 1);
  if (v31 != 0) {
    return v31;
  }
  v33 = *(_QWORD*)(a1 + 128);
  v34 = *(_QWORD*)(v33 + 16840);
  if (v34 != 0 && *(_DWORD*)(v34 + 14384) == 0) {
    v42 = *(_QWORD*)(v34 + 14344);
    if (v42 != 0) {
      fs__free_plt(a1, v42);
    }
    fs__free_plt(a1, v34);
    v6 = 1;
    *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16840LL) = 0;
  }
  else {
    v35 = *(_QWORD*)(v33 + 16);
    if (v35 == 0) {
      goto LABEL_88;
    }
    v6 = 0;
    do {
      if (*(_QWORD*)(v35 + 40) != 0) {
        unload_cmap_cache_plt(a1, v35);
        ++v6;
      }
      v35 = *(_QWORD*)(v35 + 80);
    } while (v35 != 0);
    if (v6 == 0) {
    LABEL_88:
      v31 = fs_mem_455100_alt1(a1, 0);
      if (v31 != 0) {
        return v31;
      }
      v36 = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 8LL);
      if (v36 == 0) {
        return 0;
      }
      v6 = 0;
      do {
        if (v36 != *(_QWORD*)(a1 + 56) && *(_DWORD*)(v36 + 276) == 0) {
          v37 = *(_QWORD*)(v36 + 40);
          if (v37 != 0) {
            v38 = *(unsigned __int8*)(*(_QWORD*)v36 + 65LL);
            v26 = v38 > 7;
            v39 = (1 << v38) & 0x83;
            if (v26 || v39 == 0) {
              v41 = *(_QWORD*)(v37 + 16);
              if (v41 != 0) {
                fs__free_plt(a1, v41);
              }
            }
            else {
              delete_key_plt(a1, *(_QWORD*)(v37 + 16));
            }
            fs__free_plt(a1, v37);
            ++v6;
            *(_QWORD*)(v36 + 40) = 0;
          }
        }
        v36 = *(_QWORD*)(v36 + 288);
      } while (v36 != 0);
      if (v6 == 0) {
        v43 = *(_QWORD**)(*(_QWORD*)(a1 + 128) + 8LL);
        if (v43 != nullptr) {
          v6 = 0;
          do {
            if (v43 != *(_QWORD**)(a1 + 56)) {
              v44 = v43[5];
              if (v44 != 0) {
                v45 = *(unsigned __int8*)(*v43 + 65LL);
                v26 = v45 > 7;
                v46 = (1 << v45) & 0x83;
                if (v26 || v46 == 0) {
                  v48 = *(_QWORD*)(v44 + 16);
                  if (v48 != 0) {
                    fs__free_plt(a1, v48);
                  }
                }
                else {
                  delete_key_plt(a1, *(_QWORD*)(v44 + 16));
                }
                fs__free_plt(a1, v44);
                ++v6;
                v43[5] = 0;
              }
            }
            v43 = (_QWORD*)v43[36];
          } while (v43 != nullptr);
          return v6;
        }
        return 0;
      }
    }
  }
  return v6;
}

__int64 fs_mem_455100(__int64 a1, char a2)
{
  __int64 v2;
  unsigned int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  _QWORD* i;
  int v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v2 = **(_QWORD**)(a1 + 128);
  if (v2 != 0) {
    v5 = 0;
    while (1) {
      v5 += squeeze_table_ptrs_plt(a1, v2);
      if ((a2 == 0 || *(_DWORD*)(v2 + 120) == 0) && *(_WORD*)(v2 + 32) != 0) {
        break;
      }
    LABEL_3:
      v2 = *(_QWORD*)(v2 + 136);
      if (v2 == 0) {
        return v5;
      }
    }
    v6 = *(_QWORD*)(v2 + 40);
    v7 = 0;
    while (1) {
      v8 = *(_QWORD*)(v6 + 56);
      if (v8 == 0 || (unsigned __int8)any_used_lfnt_table_ptrs_plt(
                         a1, v2, *(_QWORD*)(v6 + 56)) != 0) {
        goto LABEL_10;
      }
      if (a2 != 0) {
        v9 = **(_QWORD**)(a1 + 128);
        if (v9 != 0) {
          while (*(_DWORD*)(v9 + 120) == 0 || *(_WORD*)(v9 + 32) == 0) {
          LABEL_21:
            v9 = *(_QWORD*)(v9 + 136);
            if (v9 == 0) {
              goto LABEL_15;
            }
          }
          v11 = 0;
          v12 = (__int64*)(*(_QWORD*)(v9 + 40) + 56LL);
          while (1) {
            v13 = *v12;
            v12 += 9;
            if (v13 == v8) {
              goto LABEL_10;
            }
            if (++v11 >= (unsigned int)*(unsigned __int16*)(v9 + 32)) {
              goto LABEL_21;
            }
          }
        }
      }
    LABEL_15:
      if (*(_DWORD*)(v8 + 52) != 0) {
        if (*(_BYTE*)(v8 + 64) != 0 || v8 == *(_QWORD*)(a1 + 48) ||
            *(_QWORD*)(v8 + 56) == 0) {
          goto LABEL_10;
        }
        unload_fnt_plt(a1, v8);
        for (i = *(_QWORD**)(*(_QWORD*)(a1 + 128) + 8LL); i != nullptr;
             i = (_QWORD*)i[36]) {
          if (*i == v8) {
            v14 = i[5];
            if (v14 != 0) {
              v15 = *(_QWORD*)(v14 + 16);
              if (v15 != 0) {
                *(_QWORD*)(v15 + 8) = 0;
              }
            }
          }
        }
      }
      else {
        delete_lfnt_plt(a1, v8);
      }
      ++v5;
    LABEL_10:
      v6 += 72;
      if (++v7 >= (unsigned int)*(unsigned __int16*)(v2 + 32)) {
        goto LABEL_3;
      }
    }
  }
  return 0;
}

#pragma GCC visibility pop
