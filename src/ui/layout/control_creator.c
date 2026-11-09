#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 DrawInfo_576900(_QWORD, _QWORD);
__int64 DrawInfo_576950(_QWORD);
__int64 DrawInfo_5769a0(_QWORD, _QWORD);
__int64 GameRoutine_1363060();
__int64 GameRoutine_136b660(_QWORD, _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_55db20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_579280(_QWORD, _QWORD);
__int64 GameRoutine_5d570(_QWORD);
__int64 GameRoutine_615f60(_QWORD);
__int64 LayoutEx_Unknown11(_QWORD, float);
__int64 LayoutEx_Unknown9(_QWORD);
__int64 MultiArcResourceAccessor_5740a0(_QWORD, _QWORD);
__int64 MultiArcResourceAccessor_Unknown4(_QWORD, _QWORD, _QWORD);
__int64 MultiArcResourceAccessor_Unknown7(_QWORD, _QWORD);
__int64 Pane_58f7c0(_QWORD, _QWORD, _QWORD);
__int64 Pane_58fac0(_QWORD, _QWORD);
__int64 Pane_5902c0(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_2130ea8;
extern _UNKNOWN** GameData_2130eb8;
extern __int64 as_g_base_frame_counter;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_2130ea0;
extern __int64* game_g_frame_clock_ptr[3];
extern int GameData_22416f8;
extern int* GameData_2132268[2];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 ControlCreator_1362940(__int64 a1);
__int64 ControlCreator_1362b00(_QWORD* a1);
__int64 ControlCreator_1362b40(__int64 result);
_BYTE* ControlCreator_1363080(_BYTE* result, unsigned int a2);
__int64 ControlCreator_13633c0(__int64 result);

__int64 ControlCreator_1362940(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned __int8 explicit;
  __int64* v7;
  __int64* v8;
  float v10;
  float v11;
  float v12;
  __int64 v13;
  int v14;
  __int64 v15;
  _BYTE v17[4];
  float v18[2];
  _BYTE v19[8];

  v1 = *(_QWORD*)(a1 + 40);
  v2 = a1 + 32;
  if (v1 == a1 + 32) {
    v4 = 0;
  }
  else {
    v4 = 0;
    do {
      v5 = ControlCreator_1362940(v1 - 8);
      v1 = *(_QWORD*)(v1 + 8);
      v4 += v5;
    } while (v1 != v2);
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                                  memory_order_acquire);
  v7 = GameData_2130ea0;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_2130ea8) != 0) {
    *v7 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release(GameData_2130ea8);
  }
  v8 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
  if (v8 == v7) {
    goto LABEL_14;
  }
  do {
    v8 = (__int64*)*v8;
  } while (v8 != v7 && v8 != nullptr);
  if (v8 != nullptr) {
  LABEL_14:
    GameRoutine_190a0c0(v19, v18, v17, a1, " ");
    v10 = v18[1];
    v11 = v18[0] * 0.6;
    v12 = *(float*)GameData_2132268[0];
    v13 = Pane_58fac0(a1, "AutoFitLower");
    if (v13 != 0) {
      v14 = *(unsigned __int8*)(v13 + 10);
      if (v14 == 2) {
        v12 = *(float*)(v13 + *(unsigned int*)(v13 + 4));
      }
      else if (v14 == 1) {
        v12 = (float)*(int*)(v13 + *(unsigned int*)(v13 + 4)) * 0.01;
      }
    }
    LODWORD(v15) = (int)(float)(*(float*)(a1 + 84) / v10);
    if ((int)v15 <= 1) {
      v15 = 1;
    }
    else {
      v15 = (unsigned int)v15;
    }
    v4 += ((int)(float)(*(float*)(a1 + 80) / (float)(v11 * v12)) * v15) << 6;
  }
  return v4;
}

__int64 ControlCreator_1362b00(_QWORD* a1)
{
  *a1 = GameRoutine_615f60(*(_QWORD*)(*game_g_frame_clock_ptr[0] + 552));
  return 1;
}

__int64 ControlCreator_1362b40(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  int v21;
  __int64 v22;
  char* v23;
  char* v24;
  unsigned __int64 v25;
  __int64 v26;
  char* v27;
  char* v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  int v32;
  __int64 v33;
  char* v34;
  char* v35;
  unsigned __int64 v36;
  __int64 v37;
  char* v38;
  char* v39;
  __int64 v40;

  if (*(_BYTE*)(result + 24) == 1) {
    v1 = result;
    v2 = *game_g_frame_clock_ptr[0];
    v3 = GameData_2130eb8;
    GameRoutine_55db20(result + 1760, *game_g_frame_clock_ptr[0] + 568,
                       *GameData_2130eb8, 0);
    GameRoutine_55db20(v1 + 1872, v2 + 568, *v3, 0);
    GameRoutine_5d570(v1 + 1840);
    GameRoutine_5d570(v1 + 1952);
    v5 = *(_QWORD*)(v1 + 2304);
    *(_QWORD*)(v1 + 624) = 0;
    *(_QWORD*)(v1 + 616) = 0;
    *(_QWORD*)(v1 + 2304) = 0;
    if (v5 != 0) {
      v6 = *(_QWORD*)(v1 + 2352);
      v40 = v5;
      if (v6 == 0) {
        GameRoutine_60a310(0, v4);
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v6 + 48LL))(v6, &v40);
    }
    if (*(_QWORD*)(v1 + 2288) != 0) {
      v7 = *(_QWORD**)(v1 + 2280);
      v8 = *(_QWORD**)(*(_QWORD*)(v1 + 2272) + 8LL);
      *(_QWORD*)(*v7 + 8LL) = v8;
      *v8 = *v7;
      *(_QWORD*)(v1 + 2288) = 0;
      if (v7 != (_QWORD*)(v1 + 2272)) {
        v9 = fw_memory_g_heap_manager_ptr;
        do {
          v11 = (_QWORD*)v7[1];
          v12 = v7[3];
          if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            std___1___shared_weak_count___release_weak(v12);
          }
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v10);
          v7 = v11;
        } while (v11 != (_QWORD*)(v1 + 2272));
      }
    }
    GameRoutine_579280(v1 + 152, v2 + 568);
    v13 = *(__int64**)(v1 + 56);
    v14 = *(__int64**)(v1 + 64);
    *(_BYTE*)(v1 + 24) = 0;
    while (v13 != v14) {
      v15 = *v13++;
      MultiArcResourceAccessor_5740a0(v1 + 80, v15 + 32);
    }
    v16 = *(_QWORD*)(v1 + 32);
    v17 = *(_QWORD*)(v1 + 40);
    while (v16 != v17) {
      if (*(_DWORD*)(*(_QWORD*)v16 + 16LL) != 1) {
        MultiArcResourceAccessor_5740a0(v1 + 80, *(_QWORD*)v16 + 32LL);
      }
      v16 += 8;
    }
    GameRoutine_136b660(ui_Manager_instance_ + 1264, v1 + 80);
    MultiArcResourceAccessor_Unknown4(v1 + 80, GameRoutine_1363060, 0);
    result = MultiArcResourceAccessor_Unknown7(v1 + 80, v2 + 568);
    v18 = *(__int64**)(v1 + 56);
    v19 = *(__int64**)(v1 + 64);
    while (v18 != v19) {
      v20 = *v18;
      v21 = *(_DWORD*)(*v18 + 16) - 1;
      *(_DWORD*)(*v18 + 16) = v21;
      if (v21 != 0) {
        goto LABEL_23;
      }
      v22 = ui_Manager_instance_;
      v23 = *(char**)(ui_Manager_instance_ + 1088);
      v24 = *(char**)(ui_Manager_instance_ + 1096);
      if (v23 == v24) {
        goto LABEL_42;
      }
      v25 = v24 - v23 - 8;
      if ((~(_BYTE)v25 & 0x18) != 0) {
        v26 = ((unsigned __int8)((unsigned int)v25 >> 3) + 1) & 3;
        while (*(_QWORD*)v23 != v20) {
          v23 += 8;
          if (--v26 == 0) {
            goto LABEL_31;
          }
        }
      LABEL_42:
        if (v23 != v24) {
        LABEL_43:
          v28 = v23 + 8;
          if (v23 + 8 != v24) {
            do {
              if (*(_QWORD*)v28 != v20) {
                *(_QWORD*)v23 = *(_QWORD*)v28;
                v23 += 8;
              }
              v28 += 8;
            } while (v28 != v24);
            v24 = *(char**)(v22 + 1096);
          }
        }
      LABEL_49:
        if (v23 != v24) {
          *(_QWORD*)(v22 + 1096) = v23;
        }
        goto LABEL_51;
      }
    LABEL_31:
      if (v25 >= 0x18) {
        v23 += 16;
        while (1) {
          if (*((_QWORD*)v23 - 2) == v20) {
            v23 -= 16;
            if (v23 != v24) {
              goto LABEL_43;
            }
            goto LABEL_49;
          }
          if (*((_QWORD*)v23 - 1) == v20) {
            v23 -= 8;
            goto LABEL_42;
          }
          if (*(_QWORD*)v23 == v20) {
            goto LABEL_42;
          }
          if (*((_QWORD*)v23 + 1) == v20) {
            break;
          }
          v27 = v23 + 16;
          v23 += 32;
          if (v27 == v24) {
            goto LABEL_51;
          }
        }
        v23 += 8;
        if (v23 != v24) {
          goto LABEL_43;
        }
        goto LABEL_49;
      }
    LABEL_51:
      if (v20 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
      }
    LABEL_23:
      ++v18;
    }
    v29 = *(__int64**)(v1 + 32);
    v30 = *(__int64**)(v1 + 40);
    while (1) {
      if (v29 == v30) {
        return result;
      }
      v31 = *v29;
      v32 = *(_DWORD*)(*v29 + 16) - 1;
      *(_DWORD*)(*v29 + 16) = v32;
      if (v32 == 0) {
        break;
      }
    LABEL_56:
      ++v29;
    }
    v33 = ui_Manager_instance_;
    v34 = *(char**)(ui_Manager_instance_ + 1088);
    v35 = *(char**)(ui_Manager_instance_ + 1096);
    if (v34 != v35) {
      v36 = v35 - v34 - 8;
      if ((~(_BYTE)v36 & 0x18) == 0) {
      LABEL_64:
        if (v36 < 0x18) {
        LABEL_84:
          if (v31 != 0) {
            result = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
          }
          goto LABEL_56;
        }
        v34 += 16;
        while (1) {
          if (*((_QWORD*)v34 - 2) == v31) {
            v34 -= 16;
            if (v34 != v35) {
              goto LABEL_76;
            }
            goto LABEL_82;
          }
          if (*((_QWORD*)v34 - 1) == v31) {
            v34 -= 8;
            goto LABEL_75;
          }
          if (*(_QWORD*)v34 == v31) {
            goto LABEL_75;
          }
          if (*((_QWORD*)v34 + 1) == v31) {
            break;
          }
          v38 = v34 + 16;
          v34 += 32;
          if (v38 == v35) {
            goto LABEL_84;
          }
        }
        v34 += 8;
        if (v34 != v35) {
          goto LABEL_76;
        }
      LABEL_82:
        if (v34 != v35) {
          *(_QWORD*)(v33 + 1096) = v34;
        }
        goto LABEL_84;
      }
      v37 = ((unsigned __int8)((unsigned int)v36 >> 3) + 1) & 3;
      while (*(_QWORD*)v34 != v31) {
        v34 += 8;
        if (--v37 == 0) {
          goto LABEL_64;
        }
      }
    }
  LABEL_75:
    if (v34 != v35) {
    LABEL_76:
      v39 = v34 + 8;
      if (v34 + 8 != v35) {
        do {
          if (*(_QWORD*)v39 != v31) {
            *(_QWORD*)v34 = *(_QWORD*)v39;
            v34 += 8;
          }
          v39 += 8;
        } while (v39 != v35);
        v35 = *(char**)(v33 + 1096);
      }
    }
    goto LABEL_82;
  }
  return result;
}

_BYTE* ControlCreator_1363080(_BYTE* result, unsigned int a2)
{
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  unsigned int v6;
  __int64 v7;
  _BYTE* v8;
  int v9;
  __int64 v10;
  int v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _BYTE* v17;
  _BYTE v18[40];
  __int64 v19;
  __int64 v20;

  if (result[24] == 1) {
    if (result[2376] != 0) {
      ++result[2376];
    }
    else if (result[2368] == 1) {
      v19 = v2;
      v20 = v3;
      v4 = result;
      LayoutEx_Unknown11(result + 152,
                         *(float*)(as_g_base_frame_counter + 104));
      ControlCreator_1363220(*((_QWORD*)v4 + 22));
      v6 = a2;
      DrawInfo_576900(v4 + 256, a2);
      (*(void (**)(_BYTE*, _BYTE*, _QWORD))(*((_QWORD*)v4 + 19) + 184LL))(
          v4 + 152, v4 + 256, 0);
      v7 = *((_QWORD*)v4 + 22);
      v8 = v4;
      if (v7 != 0) {
        Pane_5902c0(v18, v4 + 256, v4 + 152);
        Pane_58f7c0(v7, v18, 0);
        v8 = v4;
      }
      v9 = *((_DWORD*)v8 + 440);
      v10 = *((_QWORD*)v8 + 221);
      v11 = v9 & 2;
      if (v10 != 0 || (v9 & 2) != 0) {
        if ((v9 & 1) != 0) {
          v13 = atomic_load(*((unsigned __int64**)v8 + 228));
          v14 = atomic_load(*((unsigned __int64**)v8 + 229));
          v12 = v14 + v13;
          v10 = *((_QWORD*)v8 + 221);
          v11 = *((_DWORD*)v8 + 440) & 2;
        }
        else {
          v12 = *((_QWORD*)v8 + 229) + *((_QWORD*)v8 + 228);
        }
        v8[1864] = v12 > *((_QWORD*)v8 + 223);
        if (v10 != 0 || v11 != 0) {
          if ((v8[1872] & 1) != 0) {
            v15 = atomic_load(*((unsigned __int64**)v8 + 242));
            v16 = atomic_load(*((unsigned __int64**)v8 + 243));
          }
          else {
            v15 = *((_QWORD*)v8 + 242);
            v16 = *((_QWORD*)v8 + 243);
          }
          v8[1976] = v16 + v15 > *((_QWORD*)v8 + 237);
        }
      }
      v17 = v8;
      DrawInfo_576950(v8 + 256);
      return (_BYTE*)DrawInfo_5769a0(v17 + 256, v6);
    }
  }
  return result;
}

__int64 ControlCreator_13633c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  unsigned int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  unsigned __int64 v22;
  _QWORD* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  _BYTE v32[40];
  __int64 v33;
  __int64 v34;

  if (*(_BYTE*)(result + 24) == 1) {
    v33 = v1;
    v34 = v2;
    v3 = *(_QWORD**)(result + 2400);
    v4 = result;
    if (*(_QWORD*)(result + 2408) >= 0x80u && v3 != nullptr) {
      v12 = (_QWORD*)(result + 2400);
      v13 = fw_memory_g_heap_manager_ptr;
      while (1) {
        while (1) {
          v14 = v3[5];
          if (v14 == 0 || *(_QWORD*)(v14 + 8) == -1) {
            break;
          }
          v3 = (_QWORD*)*v3;
          if (v3 == nullptr) {
            goto LABEL_7;
          }
        }
        v15 = *(_QWORD*)(v4 + 2392);
        v16 = v3[1];
        v17 = v15 - 1;
        if ((v15 & (v15 - 1)) != 0) {
          if (v16 >= v15) {
            v16 %= v15;
          }
        }
        else {
          v16 &= v17;
        }
        v18 = *(_QWORD*)(v4 + 2384);
        v19 = (_QWORD*)*v3;
        v20 = *(_QWORD**)(v18 + 8 * v16);
        do {
          v21 = v20;
          v20 = (_QWORD*)*v20;
        } while (v20 != v3);
        if (v21 != v12) {
          v22 = v21[1];
          if ((v15 & v17) != 0) {
            if (v22 >= v15) {
              v22 %= v15;
            }
          }
          else {
            v22 &= v17;
          }
          v23 = (_QWORD*)*v3;
          if (v22 == v16) {
            goto LABEL_35;
          }
        }
        if (v19 == nullptr) {
          break;
        }
        v24 = v19[1];
        if ((v15 & v17) != 0) {
          if (v24 >= v15) {
            v24 %= v15;
          }
        }
        else {
          v24 &= v17;
        }
        v23 = (_QWORD*)*v3;
        if (v24 != v16) {
          break;
        }
      LABEL_36:
        v25 = v23[1];
        if ((v15 & v17) != 0) {
          if (v25 >= v15) {
            v25 %= v15;
          }
          if (v25 == v16) {
            goto LABEL_41;
          }
        }
        else {
          v25 &= v17;
          if (v25 == v16) {
            goto LABEL_41;
          }
        }
        *(_QWORD*)(*(_QWORD*)(v4 + 2384) + 8 * v25) = v21;
        v23 = (_QWORD*)*v3;
      LABEL_41:
        *v21 = v23;
        *v3 = 0;
        --*(_QWORD*)(v4 + 2408);
        v26 = v3[5];
        if (v26 != 0) {
          std___1___shared_weak_count___release_weak(v26);
        }
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
          v27 = 128;
        }
        else {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v27);
        v3 = v19;
        if (v19 == nullptr) {
          goto LABEL_7;
        }
      }
      *(_QWORD*)(v18 + 8 * v16) = 0;
      v23 = (_QWORD*)*v3;
    LABEL_35:
      if (v23 == nullptr) {
        goto LABEL_41;
      }
      goto LABEL_36;
    }
  LABEL_7:
    LayoutEx_Unknown9(v4 + 152);
    v6 = GameData_22416f8;
    DrawInfo_576900(v4 + 256, (unsigned int)GameData_22416f8);
    (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)(v4 + 152) + 184LL))(
        v4 + 152, v4 + 256, 0);
    v7 = *(_QWORD*)(v4 + 176);
    if (v7 != 0) {
      Pane_5902c0(v32, v4 + 256, v4 + 152);
      Pane_58f7c0(v7, v32, 0);
    }
    v8 = *(_DWORD*)(v4 + 1760);
    v9 = *(_QWORD*)(v4 + 1768);
    v10 = v8 & 2;
    if (v9 != 0 || (v8 & 2) != 0) {
      if ((v8 & 1) != 0) {
        v28 = atomic_load(*(unsigned __int64**)(v4 + 1824));
        v29 = atomic_load(*(unsigned __int64**)(v4 + 1832));
        v11 = v29 + v28;
        v9 = *(_QWORD*)(v4 + 1768);
        v10 = *(_DWORD*)(v4 + 1760) & 2;
      }
      else {
        v11 = *(_QWORD*)(v4 + 1832) + *(_QWORD*)(v4 + 1824);
      }
      *(_BYTE*)(v4 + 1864) = v11 > *(_QWORD*)(v4 + 1784);
      if (v9 != 0 || v10 != 0) {
        if ((*(_BYTE*)(v4 + 1872) & 1) != 0) {
          v30 = atomic_load(*(unsigned __int64**)(v4 + 1936));
          v31 = atomic_load(*(unsigned __int64**)(v4 + 1944));
        }
        else {
          v30 = *(_QWORD*)(v4 + 1936);
          v31 = *(_QWORD*)(v4 + 1944);
        }
        *(_BYTE*)(v4 + 1976) = v31 + v30 > *(_QWORD*)(v4 + 1896);
      }
    }
    DrawInfo_576950(v4 + 256);
    return DrawInfo_5769a0(v4 + 256, v6);
  }
  return result;
}

#pragma GCC visibility pop
