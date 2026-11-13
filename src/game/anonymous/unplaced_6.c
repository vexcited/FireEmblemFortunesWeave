#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 DeliveryKindExecutor_12634c0(__int64 result, int*, __int64**,
                                     unsigned __int64, int*, signed __int64);
__int64 GameConverge_8e7ca0(__int64, unsigned __int64*);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 game_anonymous_19b9520(_QWORD*);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
bool DeliveryKindExecutor_12638e0(_QWORD*, int, int);
bool GameRoutine_19bc360(__int64);
char* GameRoutine_6e7840(char*, char*, char*);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
int strcmp(const char*, const char*);
unsigned __int64 GameRoutine_682bc0(_QWORD*, __int64);
unsigned __int64 ProcAfterEpisodeSeq_19bac40(unsigned __int64 result);
void __attribute__((noreturn)) String_60a250(const char*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_anonymous_1263ac0(__int64 result, int* a2, __int64** a3,
                               unsigned __int64 a4, int* a5);
__int64 game_anonymous_1263ea0(__int64 result, int* a2, int* a3, _QWORD** a4,
                               __int64 a5, __int64 a6, __int64 a7, __int64 a8);
__int64 game_anonymous_19bc420(__int64 a1, unsigned __int64 a2, const char* a3);

__int64 game_anonymous_1263ac0(__int64 result, int* a2, __int64** a3,
                               unsigned __int64 a4, int* a5)
{
  int* v5;
  int* v8;
  int v9;
  int* v10;
  int* v11;
  int* v12;
  int v13;
  int* v14;
  __int64* v15;
  unsigned __int64 v16;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64** v22;
  __int64* v23;
  int* v24;
  int v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64** v29;
  __int64* v30;
  unsigned int v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  int* v36;
  __int64 v37;
  int* v38;
  int* v39;
  __int64 v40;
  int v41;
  __int64 v42;
  int v43;
  int v44;

  if (a4 != 0) {
    v5 = a5;
    v8 = (int*)result;
    if (a4 == 2) {
      result = ((__int64 (*)(_QWORD*, int, int))DeliveryKindExecutor_12638e0)(
          *a3, *(a2 - 1), *(_DWORD*)result);
      if ((result & 1) != 0) {
        *v5 = *(a2 - 1);
        v9 = *v8;
      }
      else {
        *v5 = *v8;
        v9 = *(a2 - 1);
      }
      v5[1] = v9;
    }
    else {
      if (a4 == 1) {
        *a5 = *(_DWORD*)result;
        return result;
      }
      if ((__int64)a4 > 8) {
        v34 = a4 >> 1;
        v36 = (int*)(result + 4 * (a4 >> 1));
        v37 = 4 * (a4 >> 1);
        DeliveryKindExecutor_12634c0(result, v36, a3, v34, a5, v34);
        result = DeliveryKindExecutor_12634c0((__int64)v36, a2, a3, a4 - v34,
                                              &v5[v34], a4 - v34);
        if (v37 != 0) {
          v38 = v36;
          while (v38 != a2) {
            result =
                ((__int64 (*)(_QWORD*, int, int))DeliveryKindExecutor_12638e0)(
                    *a3, *v38, *v8);
            if ((result & 1) != 0) {
              v39 = v38;
            }
            else {
              v39 = v8;
            }
            if ((result & 1) != 0) {
              v40 = 4;
            }
            else {
              v40 = 0;
            }
            v41 = *v39;
            v38 = (int*)((char*)v38 + v40);
            if ((result & 1) != 0) {
              v42 = 0;
            }
            else {
              v42 = 4;
            }
            v8 = (int*)((char*)v8 + v42);
            *v5++ = v41;
            if (v8 == v36) {
              goto LABEL_83;
            }
          }
          while (v8 != v36) {
            v43 = *v8++;
            *v5++ = v43;
          }
        }
        else {
          v38 = v36;
        LABEL_83:
          while (v38 != a2) {
            v44 = *v38++;
            *v5++ = v44;
          }
        }
      }
      else if ((int*)result != a2) {
        v10 = (int*)(result + 4);
        *a5 = *(_DWORD*)result;
        if ((int*)(result + 4) != a2) {
          v11 = a5;
          v12 = a5;
          do {
            v13 = *v12++;
            result =
                ((__int64 (*)(_QWORD*, int, int))DeliveryKindExecutor_12638e0)(
                    *a3, *v10, v13);
            if ((result & 1) == 0) {
              *v12 = *v10;
              goto LABEL_12;
            }
            v11[1] = *v11;
            v14 = v5;
            if (v11 == v5) {
              goto LABEL_61;
            }
            while (2) {
              v15 = *a3;
              v16 = (*a3)[1];
              if (v16 == 0 || (*a3)[3] == 0) {
                goto LABEL_85;
              }
              v18 = *v10;
              v19 = v16 - 1;
              if ((v16 & (v16 - 1)) != 0) {
                v20 = *v10;
                if (v16 <= v18) {
                  v20 = v18 % v16;
                }
              }
              else {
                v20 = v19 & v18;
              }
              v21 = *v15;
              v22 = *(__int64***)(*v15 + 8 * v20);
              if (v22 == nullptr || (v23 = *v22, *v22 == nullptr)) {
              LABEL_85:
                String_60a250("unordered_map::at: key not found");
              }
              v24 = v11 - 1;
              v25 = *(v11 - 1);
              if ((v16 & v19) == 0) {
                while (1) {
                  v27 = v23[1];
                  if (v27 == v18) {
                    if (*((_DWORD*)v23 + 4) == (_DWORD)v18) {
                      goto LABEL_38;
                    }
                  }
                  else if ((v27 & v19) != v20) {
                    goto LABEL_85;
                  }
                  v23 = (__int64*)*v23;
                  if (v23 == nullptr) {
                    goto LABEL_85;
                  }
                }
              }
              while (1) {
                v26 = v23[1];
                if (v26 == v18) {
                  break;
                }
                if (v26 >= v16) {
                  v26 %= v16;
                }
                if (v26 != v20) {
                  goto LABEL_85;
                }
              LABEL_28:
                v23 = (__int64*)*v23;
                if (v23 == nullptr) {
                  goto LABEL_85;
                }
              }
              if (*((_DWORD*)v23 + 4) != (_DWORD)v18) {
                goto LABEL_28;
              }
            LABEL_38:
              if ((v16 & v19) != 0) {
                v28 = v25;
                if (v16 <= v25) {
                  v28 = v25 % v16;
                }
              }
              else {
                v28 = v19 & v25;
              }
              v29 = *(__int64***)(v21 + 8 * v28);
              if (v29 == nullptr) {
                goto LABEL_85;
              }
              v30 = *v29;
              if (v30 == nullptr) {
                goto LABEL_85;
              }
              v31 = *((_DWORD*)v23 + 7);
              if ((v16 & v19) == 0) {
                while (1) {
                  v33 = v30[1];
                  if (v33 == v25) {
                    if (*((_DWORD*)v30 + 4) == v25) {
                      goto LABEL_57;
                    }
                  }
                  else if ((v33 & v19) != v28) {
                    goto LABEL_85;
                  }
                  v30 = (__int64*)*v30;
                  if (v30 == nullptr) {
                    goto LABEL_85;
                  }
                }
              }
              while (2) {
                v32 = v30[1];
                if (v32 != v25) {
                  if (v32 >= v16) {
                    v32 %= v16;
                  }
                  if (v32 != v28) {
                    goto LABEL_85;
                  }
                LABEL_47:
                  v30 = (__int64*)*v30;
                  if (v30 == nullptr) {
                    goto LABEL_85;
                  }
                  continue;
                }
                break;
              }
              if (*((_DWORD*)v30 + 4) != v25) {
                goto LABEL_47;
              }
            LABEL_57:
              if (v31 < *((_DWORD*)v30 + 7)) {
                *v11-- = v25;
                if (v24 == v5) {
                  v14 = v5;
                  goto LABEL_61;
                }
                continue;
              }
              break;
            }
            v14 = v11;
          LABEL_61:
            *v14 = *v10;
          LABEL_12:
            ++v10;
            v11 = v12;
          } while (v10 != a2);
        }
      }
    }
  }
  return result;
}

__int64 game_anonymous_1263ea0(__int64 result, int* a2, int* a3, _QWORD** a4,
                               __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v10;
  int* v15;
  __int64 v16;
  int* v17;
  unsigned __int64 v18;
  int* v19;
  int* v20;
  int v21;
  __int64 v22;
  _QWORD* v23;
  unsigned __int64 v24;
  int* v25;
  int* v26;
  int v27;
  char* v28;
  __int64 v29;
  int* v30;
  __int64 v31;
  __int64 v32;
  int* v33;
  __int64 v34;
  int* v35;
  int* v36;
  __int64 v37;
  int* v38;
  int* v39;
  int v40;
  int* v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  int* v54;

  if (a6 != 0) {
    v10 = a6;
    v15 = (int*)result;
    while (a5 > a8 && v10 > a8) {
      if (a5 == 0) {
        return result;
      }
      while (1) {
        result = ((__int64 (*)(_QWORD*, int, int))DeliveryKindExecutor_12638e0)(
            *a4, *a2, *v15);
        if ((result & 1) != 0) {
          break;
        }
        ++v15;
        if (--a5 == 0) {
          return result;
        }
      }
      v54 = a3;
      if (a5 >= v10) {
        if (a5 == 1) {
          v45 = *v15;
          *v15 = *a2;
          *a2 = v45;
          return result;
        }
        v22 = a5 / 2;
        v17 = &v15[a5 / 2];
        if (a3 != a2) {
          v50 = v10;
          v23 = *a4;
          v24 = a3 - a2;
          a3 = a2;
          v48 = a7;
          do {
            v25 = &a3[v24 >> 1];
            v27 = *v25;
            v26 = v25 + 1;
            if (DeliveryKindExecutor_12638e0(v23, v27, *v17)) {
              a3 = v26;
              v24 += ~(v24 >> 1);
            }
            else {
              v24 >>= 1;
            }
          } while (v24 != 0);
          a7 = v48;
          v10 = v50;
          v22 = a5 / 2;
        }
        v16 = a3 - a2;
      }
      else {
        v16 = v10 / 2;
        a3 = &a2[v10 / 2];
        if (v15 == a2) {
          v17 = a2;
        }
        else {
          v52 = v10 / 2;
          v49 = v10;
          v51 = a8;
          v17 = v15;
          v18 = a2 - v15;
          do {
            v19 = &v17[v18 >> 1];
            v21 = *v19;
            v20 = v19 + 1;
            if (DeliveryKindExecutor_12638e0(*a4, *a3, v21)) {
              v18 >>= 1;
            }
            else {
              v17 = v20;
              v18 += ~(v18 >> 1);
            }
          } while (v18 != 0);
          v10 = v49;
          a8 = v51;
          v16 = v52;
        }
        v22 = v17 - v15;
      }
      a5 -= v22;
      v10 -= v16;
      v28 = (char*)a2;
      v29 = v22;
      v30 = (int*)GameRoutine_6e7840((char*)v17, v28, (char*)a3);
      v31 = v29;
      v32 = v29 + v16;
      v33 = v30;
      if (v32 >= a5 + v10) {
        v53 = v31;
        result =
            game_anonymous_1263ea0((__int64)v30, a3, v54, a4, a5, v10, a7, a8);
        a5 = v53;
        a3 = v17;
        v10 = v16;
        v54 = v33;
      }
      else {
        result = game_anonymous_1263ea0((__int64)v15, v17, v30, a4, v31, v16,
                                        a7, a8);
        v15 = v33;
      }
      a2 = a3;
      a3 = v54;
      if (v10 == 0) {
        return result;
      }
    }
    if (a5 <= v10) {
      if (v15 != a2) {
        v37 = -a7;
        v38 = (int*)a7;
        v39 = v15;
        do {
          v40 = *v39++;
          v37 -= 4;
          *v38++ = v40;
        } while (v39 != a2);
        while (a2 != a3) {
          result =
              ((__int64 (*)(_QWORD*, int, int))DeliveryKindExecutor_12638e0)(
                  *a4, *a2, *(_DWORD*)a7);
          if ((result & 1) != 0) {
            v41 = a2;
          }
          else {
            v41 = (int*)a7;
          }
          if ((result & 1) != 0) {
            v42 = 4;
          }
          else {
            v42 = 0;
          }
          v43 = *v41;
          a2 = (int*)((char*)a2 + v42);
          if ((result & 1) != 0) {
            v44 = 0;
          }
          else {
            v44 = 4;
          }
          a7 += v44;
          *v15++ = v43;
          if (v38 == (int*)a7) {
            return result;
          }
        }
        return memmove((__int64)v15, a7, -(a7 + v37));
      }
    }
    else if (a2 != a3) {
      v34 = 0;
      do {
        *(_DWORD*)(a7 + v34 * 4) = a2[v34];
        ++v34;
      } while (&a2[v34] != a3);
      v35 = (int*)(a7 + v34 * 4);
      while (a2 != v15) {
        result = ((__int64 (*)(_QWORD*, int, int))DeliveryKindExecutor_12638e0)(
            *a4, *(v35 - 1), *(a2 - 1));
        if ((result & 1) != 0) {
          v36 = a2;
        }
        else {
          v36 = v35;
        }
        if ((result & 1) != 0) {
          --a2;
        }
        else {
          --v35;
        }
        *--a3 = *(v36 - 1);
        if (v35 == (int*)a7) {
          return result;
        }
      }
      if ((int*)a7 != v35) {
        v46 = 0x3FFFFFFFFFFFFFFFLL;
        do {
          v47 = *--v35;
          a3[v46--] = v47;
        } while (v35 != (int*)a7);
      }
    }
  }
  return result;
}

__int64 game_anonymous_19bc420(__int64 a1, unsigned __int64 a2, const char* a3)
{
  __int64 result;
  unsigned __int64** v7;
  unsigned __int64** v8;
  unsigned __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64** v31;
  unsigned __int64* v32;
  unsigned __int64** v33;
  __int64 v34;
  unsigned __int64* v35;
  unsigned __int64** v36;
  unsigned __int64* v37;
  unsigned __int64** v38;
  unsigned __int64** v39;
  unsigned __int64* v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64** v45;
  __int64 v46;
  __int64 v47;
  const char* v48;
  struct {
    unsigned __int64* v49;
    unsigned __int64** v50;
    __int64 v51;
  } v49_;

  result = ((__int64 (*)(__int64))GameRoutine_19bc360)(a2);
  if ((result & 1) == 0) {
    v7 = *(unsigned __int64***)(a1 + 168);
    v8 = (unsigned __int64**)(a1 + 160);
    if (v7 != (unsigned __int64**)(a1 + 160)) {
      while (1) {
        v9 = v7[2];
        if (*v9 != 0) {
          v10 = game_GameModeData_instance_;
          GameRoutine_682bc0(&v49_.v49, *(_QWORD*)(*v9 + 32));
          result = GameConverge_8e7ca0(*(_QWORD*)(v10 + 176), v49_.v49);
          if (((result & 1) == 0 || v9[2] != 0) && *(_OWORD*)(v9 + 1) != 0) {
            result = strcmp(*(const char**)(*v9 + 32), a3);
            if ((_DWORD)result == 0) {
              break;
            }
          }
        }
        v7 = (unsigned __int64**)v7[1];
        if (v7 == v8) {
          return result;
        }
      }
      v12 = (__int64)v7[2];
      v11 = (__int64)v7[3];
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v12 != 0) {
        result = ((__int64 (*)(__int64))GameRoutine_19bc360)(v12);
        if ((result & 1) == 0) {
          v14 = *(_QWORD*)(v12 + 8);
          v13 = *(_QWORD*)(v12 + 16);
          *(_QWORD*)(a2 + 88) = *(_QWORD*)v12;
          *(_QWORD*)(a2 + 96) = v14;
          *(_QWORD*)(a2 + 104) = v13;
          if (a2 + 88 != v12) {
            v15 = *(unsigned __int8*)(v12 + 24);
            if ((*(_BYTE*)(a2 + 112) & 1) != 0) {
              v18 = (v15 & 1) == 0;
              v19 = v15 >> 1;
              if (v18) {
                v20 = v12 + 25;
              }
              else {
                v20 = *(_QWORD*)(v12 + 40);
              }
              if (v18) {
                v21 = v19;
              }
              else {
                v21 = *(_QWORD*)(v12 + 32);
              }
              SpineModel_64dde0((__int64*)(a2 + 112), v20, v21);
            }
            else if ((v15 & 1) != 0) {
              GameRoutine_64df20((_QWORD*)(a2 + 112), *(_QWORD*)(v12 + 40),
                                 *(_QWORD*)(v12 + 32));
            }
            else {
              v16 = *(_QWORD*)(v12 + 24);
              v17 = *(_QWORD*)(v12 + 40);
              *(_QWORD*)(a2 + 120) = *(_QWORD*)(v12 + 32);
              *(_QWORD*)(a2 + 128) = v17;
              *(_QWORD*)(a2 + 112) = v16;
            }
            v22 = (__int64*)(a2 + 136);
            v23 = *(unsigned __int8*)(v12 + 48);
            if ((*(_BYTE*)(a2 + 136) & 1) != 0) {
              v26 = (v23 & 1) == 0;
              v27 = v23 >> 1;
              if (v26) {
                v28 = v12 + 49;
              }
              else {
                v28 = *(_QWORD*)(v12 + 64);
              }
              if (v26) {
                v29 = v27;
              }
              else {
                v29 = *(_QWORD*)(v12 + 56);
              }
              SpineModel_64dde0(v22, v28, v29);
            }
            else if ((v23 & 1) != 0) {
              GameRoutine_64df20(v22, *(_QWORD*)(v12 + 64),
                                 *(_QWORD*)(v12 + 56));
            }
            else {
              v24 = *(_QWORD*)(v12 + 48);
              v25 = *(_QWORD*)(v12 + 64);
              *(_QWORD*)(a2 + 144) = *(_QWORD*)(v12 + 56);
              *(_QWORD*)(a2 + 152) = v25;
              *v22 = v24;
            }
          }
          v30 = *(_QWORD*)(v12 + 80);
          *(_QWORD*)(a2 + 160) = *(_QWORD*)(v12 + 72);
          *(_QWORD*)(a2 + 168) = v30;
          v31 = *(unsigned __int64***)(a1 + 168);
          v49_.v49 = (unsigned __int64*)&v49_.v49;
          v49_.v50 = &v49_.v49;
          v49_.v51 = 0;
          if (v31 != v8) {
            if (&v49_.v49 != v8) {
              v32 = (unsigned __int64*)&v49_.v49;
              while (1) {
                if (v31[2] == (unsigned __int64*)v12) {
                  v33 = v31;
                  do {
                    v33 = (unsigned __int64**)v33[1];
                  } while (v33 != v8 && v33[2] == (unsigned __int64*)v12);
                  if (v31 != v33) {
                    v32 = *v33;
                    v34 = 1;
                    if (v31 != (unsigned __int64**)*v33) {
                      v35 = (unsigned __int64*)v31;
                      do {
                        v35 = (unsigned __int64*)v35[1];
                        ++v34;
                      } while (v35 != v32);
                    }
                    *(_QWORD*)(a1 + 176) -= v34;
                    v49_.v51 += v34;
                    v36 = (unsigned __int64**)v32[1];
                    (*v31)[1] = (unsigned __int64)v36;
                    *v36 = *v31;
                    v37 = v49_.v49;
                    v49_.v49[1] = (unsigned __int64)v31;
                    *v31 = v37;
                    v49_.v49 = v32;
                    v32[1] = (unsigned __int64)&v49_.v49;
                  }
                  if (v33 == v8) {
                    goto LABEL_42;
                  }
                }
                else {
                  v33 = v31;
                }
                v33 = (unsigned __int64**)v33[1];
              LABEL_42:
                v31 = v33;
                if (v33 == v8) {
                  goto LABEL_66;
                }
              }
            }
            v32 = (unsigned __int64*)&v49_.v49;
            while (1) {
              if (v31[2] == (unsigned __int64*)v12) {
                v38 = v31;
                do {
                  v38 = (unsigned __int64**)v38[1];
                } while (v38 != &v49_.v49 && v38[2] == (unsigned __int64*)v12);
                if (v31 != v38) {
                  v32 = *v38;
                  v39 = (unsigned __int64**)(*v38)[1];
                  (*v31)[1] = (unsigned __int64)v39;
                  *v39 = *v31;
                  v40 = v49_.v49;
                  v49_.v49[1] = (unsigned __int64)v31;
                  *v31 = v40;
                  v49_.v49 = v32;
                  v32[1] = (unsigned __int64)&v49_.v49;
                }
                if (v38 == &v49_.v49) {
                  goto LABEL_57;
                }
              }
              else {
                v38 = v31;
              }
              v38 = (unsigned __int64**)v38[1];
            LABEL_57:
              v31 = v38;
              if (v38 == &v49_.v49) {
              LABEL_66:
                if (v49_.v51 != 0) {
                  v41 = (__int64)v49_.v50;
                  v42 = (_QWORD*)v32[1];
                  (*v49_.v50)[1] = (unsigned __int64)v42;
                  *v42 = *(_QWORD*)v41;
                  v49_.v51 = 0;
                  if ((unsigned __int64**)v41 != &v49_.v49) {
                    v43 = fw_memory_g_heap_manager_ptr;
                    do {
                      v45 = *(unsigned __int64***)(v41 + 8);
                      v46 = *(_QWORD*)(v41 + 24);
                      if (v46 != 0 &&
                          atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        v47 = v41;
                        (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
                        std___1___shared_weak_count___release_weak(v46);
                        v41 = v47;
                      }
                      if (*(_QWORD*)(*(_QWORD*)v43 + 200LL) != 0) {
                        v44 = 128;
                      }
                      else {
                        v44 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*(_QWORD*)v43 + v44, v41);
                      v41 = (__int64)v45;
                    } while (v45 != &v49_.v49);
                  }
                }
                break;
              }
            }
          }
          ProcAfterEpisodeSeq_19bac40(a2);
          ProcAfterEpisodeSeq_19bac40(a2 + 88);
          v48 = (const char*)game_anonymous_19b9520((_QWORD*)a2);
          result = GameRoutine_60a020(a2 + 176, v48);
        }
      }
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        return std___1___shared_weak_count___release_weak(v11);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
