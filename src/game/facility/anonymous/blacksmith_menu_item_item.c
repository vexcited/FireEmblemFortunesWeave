#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1875d20(__int64, __int64, int, _QWORD*);
__int64 GameRoutine_187ca80(_QWORD);
extern __int64 game_TransporterConst_List_instance__ptr[6];
__int64 BlacksmithMenuItem_Item_Unknown25(__int64 a1);
__int64 BlacksmithMenuItem_Item_Unknown58(__int64 a1);
__int64 BlacksmithMenuItem_Item_Unknown70(__int64 a1);
__int64 GameRoutine_120d940(_QWORD, _QWORD);
__int64
game_facility_anonymous_BlacksmithMenuItem_Item_CanRefine_closure_Invoke(
    __int64 a1, unsigned int* a2);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 GameHr_157ada0(__int64*, __int64, unsigned __int16*, char);
__int64 GameRoutine_157ac20(__int64*, __int64, char, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Util_1581060(__int64*, __int64, unsigned __int16*, char,
                     unsigned __int8);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 (*GameData_20f9660[])();
extern __int64 ui_LayoutAccessor_empty_;
unsigned __int16* BlacksmithMenuUtil_187cca0(unsigned __int16* result, __int64);
__int64 game_facility_anonymous_BlacksmithMenuItem_Item_CanRefine(_QWORD* a1);

__int64 BlacksmithMenuItem_Item_Unknown25(__int64 a1)
{
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  GameRoutine_1875d20(*(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 112),
                      *(_DWORD*)(a1 + 40), (_QWORD*)(a1 + 96));
  return 9;
}

__int64 game_facility_anonymous_BlacksmithMenuItem_Item_CanRefine(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  unsigned __int16* v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  unsigned __int16* v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  char v16;
  char v17;
  __int64 v18;
  unsigned __int16* v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  atomic_ullong* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  atomic_ullong* v30;
  __int64* v31;
  const char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64* v38;
  struct {
    _QWORD v39[4];
    _QWORD* v40;
  } v39_;
  int v41;

  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v33 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v33);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  v5 = (unsigned __int16*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  v6 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  GameHr_157ada0(v4, 0, v5, v6 & 1);
  v7 = a1[7];
  if (v7 == 0) {
    goto LABEL_10;
  }
  v8 = std___1___shared_weak_count_lock(v7);
  if (v8 == 0) {
    goto LABEL_10;
  }
  v9 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 != nullptr) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v34 = v8;
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  std___1___shared_weak_count___release_weak(v34);
  if (v9 == nullptr) {
  LABEL_10:
    v9 = &ui_LayoutAccessor_empty_;
  }
LABEL_11:
  v10 = a1[14];
  v11 = (unsigned __int16*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  v12 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  Util_1581060(v9, v10, v11, v12 & 1, 0);
  v13 = a1[7];
  if (v13 == 0) {
    goto LABEL_15;
  }
  v14 = std___1___shared_weak_count_lock(v13);
  if (v14 == 0) {
    goto LABEL_15;
  }
  v15 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v15 != nullptr) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  v35 = v14;
  (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
  std___1___shared_weak_count___release_weak(v35);
  if (v15 == nullptr) {
  LABEL_15:
    v15 = &ui_LayoutAccessor_empty_;
  }
LABEL_16:
  v16 = *(_BYTE*)((*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1) + 3);
  v17 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  GameRoutine_157ac20(v15, (__int64)"IconEquip", v16 & 1, v17 & 1);
  v18 = *a1;
  v41 = 0;
  v19 = (unsigned __int16*)(*(__int64 (**)(_QWORD*))(v18 + 560))(a1);
  v39_.v39[0] = GameData_20f9660;
  v39_.v39[1] = a1;
  v39_.v40 = v39_.v39;
  v39_.v39[2] = &v41;
  BlacksmithMenuUtil_187cca0(v19, (__int64)v39_.v39);
  if (v39_.v40 == v39_.v39) {
    v20 = 32;
    goto LABEL_20;
  }
  if (v39_.v40 != nullptr) {
    v20 = 40;
  LABEL_20:
    (*(void (**)(__int64))(*v39_.v40 + v20))((__int64)v39_.v40);
  }
  v21 = v41;
  v22 = a1[7];
  if (v22 != 0) {
    v23 = std___1___shared_weak_count_lock(v22);
    if (v23 != 0) {
      v24 = v23;
      v25 = (atomic_ullong*)(v23 + 8);
      v26 = (__int64*)a1[6];
      if (atomic_fetch_add(v25, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v26 != nullptr) {
          goto LABEL_25;
        }
      }
      else {
        v36 = v26;
        (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
        std___1___shared_weak_count___release_weak(v24);
        v26 = v36;
        if (v36 != nullptr) {
        LABEL_25:
          if (v21 >= 1) {
            goto LABEL_26;
          }
        LABEL_40:
          v32 = "State_Off";
          return LayoutAccessor_1562cf0((__int64)v26, v32);
        }
      }
    }
  }
  v26 = &ui_LayoutAccessor_empty_;
  if (v21 < 1) {
    goto LABEL_40;
  }
LABEL_26:
  LayoutAccessor_1562cf0((__int64)v26, "State_On");
  v27 = a1[7];
  if (v27 == 0) {
    goto LABEL_30;
  }
  v28 = std___1___shared_weak_count_lock(v27);
  if (v28 == 0) {
    goto LABEL_30;
  }
  v29 = v28;
  v30 = (atomic_ullong*)(v28 + 8);
  v31 = (__int64*)a1[6];
  if (atomic_fetch_add(v30, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v38 = v31;
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    std___1___shared_weak_count___release_weak(v29);
    v31 = v38;
    if (v38 != nullptr) {
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  if (v31 == nullptr) {
  LABEL_30:
    v31 = &ui_LayoutAccessor_empty_;
  }
LABEL_31:
  v26 = LayoutAccessor_155fbe0(v31, "L_State");
  v32 = "Default";
  return LayoutAccessor_1562cf0((__int64)v26, v32);
}

__int64 BlacksmithMenuItem_Item_Unknown58(__int64 a1)
{
  __int64 v1;

  v1 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  return GameRoutine_187ca80(v1);
}

__int64 BlacksmithMenuItem_Item_Unknown70(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 112);
  v2 = *(int*)(a1 + 40);
  if (v1 != 0) {
    return v1 + 8 * v2 + 828;
  }
  else {
    return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                     game_TransporterConst_List_instance__ptr
                                         [0] +
                                 8LL) +
                      8LL) +
           12LL * (int)v2 + 4;
  }
}

__int64

game_facility_anonymous_BlacksmithMenuItem_Item_CanRefine_closure_Invoke(
    __int64 a1, unsigned int* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 result;

  v3 = *a2;
  v4 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 560LL))(
      *(_QWORD*)(a1 + 8));
  result = GameRoutine_120d940(v4, v3);
  if ((result & 1) != 0) {
    ++**(_DWORD**)(a1 + 16);
  }
  return result;
}

#pragma GCC visibility pop
