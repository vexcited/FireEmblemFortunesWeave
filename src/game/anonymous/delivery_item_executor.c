#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_89cb30(PSEUDO_X8);
__int64 GameRoutine_1262240(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12623a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_8f7120(_QWORD, _QWORD, _QWORD);
__int64 game_UnitItemList_Sort(_QWORD, _QWORD, _QWORD);
extern __int64 game_TransporterConst_List_instance__ptr[6];
__int64 DeliveryItemExecutor_Destructor(__int64 a1, unsigned __int16* a2);
__int64 DeliveryItemExecutor_DeletingDestructor(__int64 a1, __int64 a2,
                                                unsigned int a3);
__int64 DeliveryItemExecutor_1261a00(_QWORD* a1);
__int64 DeliveryItemExecutor_Unknown6(__int64 result);
bool DeliveryItemExecutor_Unknown4(__int64 a1);

__int64 DeliveryItemExecutor_Destructor(__int64 a1, unsigned __int16* a2)
{
  __int64 v3;

  v3 = GameRoutine_1262240(a1 + 16, a2 + 2, a2[1]);
  GameRoutine_12623a0(v3, 0, *a2);
  return 0;
}

__int64 DeliveryItemExecutor_DeletingDestructor(__int64 a1, __int64 a2,
                                                unsigned int a3)
{
  __int64 v5;

  v5 = GameRoutine_1262240(a1 + 16, a2 + 8LL * (int)a3 + 828, 1);
  GameRoutine_12623a0(v5, a2, a3);
  return 0;
}

bool DeliveryItemExecutor_Unknown4(__int64 a1)
{
  __int64* v1;

  v1 = (__int64*)(a1 + 32);
  do {
    v1 = (__int64*)*v1;
  } while (v1 != nullptr && *((_DWORD*)v1 + 6) >= *(_DWORD*)(a1 + 8));
  return v1 == nullptr;
}

__int64 DeliveryItemExecutor_1261a00(_QWORD* a1)
{
  __int64 result;
  _QWORD* i;
  __int64 v4;
  char v5;
  int v6;

  result = (*(__int64 (**)(_QWORD*))(*a1 + 48LL))(a1);
  for (i = (_QWORD*)a1[9]; i != nullptr; i = (_QWORD*)*i) {
    v4 = i[2];
    v5 = game_UnitItemList_Sort(v4 + 828, 0, 6);
    result = game_UnitItemList_Sort(v4 + 828, 6, 24);
    if ((v5 & 1) != 0 || (result & 1) != 0) {
      v6 = *(_DWORD*)(v4 + 416);
      if ((v6 & 0x10000000) == 0) {
        *(_DWORD*)(v4 + 416) = v6 | 0x10000000;
        GameRoutine_6c51e0(v4);
        GameRoutine_6c6da0(v4);
        result = GameRoutine_6c6ec0(v4);
        *(_DWORD*)(v4 + 416) &= ~0x10000000u;
      }
    }
  }
  return result;
}

__int64 DeliveryItemExecutor_Unknown6(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v11;
  __int64 v12;
  unsigned int* v13;
  unsigned int* v14;
  int v15;
  unsigned int* v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;

  v1 = *(_QWORD**)(result + 32);
  if (v1 != nullptr) {
    v2 = result;
    v3 = game_TransporterConst_List_instance__ptr[0];
    do {
      v4 = (_QWORD*)v1[4];
      v5 = (_QWORD*)v1[5];
      if (v4 != v5) {
        v6 = *(_DWORD*)(v2 + 8);
        do {
          if (*v4 != 0) {
            v7 = v4[1];
            v8 = v4[2];
            v9 = (unsigned __int64)(v8 - v7) >> 2;
            if (v8 != v7 && (int)v9 >= 1) {
              v11 = v7 + 4;
              do {
                v12 = *v4 + 8LL * *(int*)(v11 - 4);
                if (*(_WORD*)(v12 + 828) != 0) {
                  *(_QWORD*)(v12 + 828) = 0;
                  result = GameRoutine_8f7120(v2 + 56, v4, v4);
                  if (v6 < 2) {
                    goto LABEL_4;
                  }
                  LODWORD(v9) = v9 - 1;
                  --v6;
                }
                if (v11 == v8) {
                  break;
                }
                v11 += 4;
              } while ((int)v9 > 0);
            }
          }
          else {
            v13 = (unsigned int*)v4[1];
            v14 = (unsigned int*)v4[2];
            if (v13 != v14) {
              v15 = 0;
              v16 = (unsigned int*)v4[1];
              do {
                if ((*v16 & 0x80000000) != 0) {
                  v17 = 0;
                }
                else {
                  v17 =
                      *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 +
                                                                 8LL) +
                                                      8LL) +
                                           12LL * *v16 + 2);
                }
                v15 += v17;
                ++v16;
              } while (v16 != v14);
              if (v15 != 0) {
                do {
                  result = *v13;
                  if ((result & 0x80000000) == 0) {
                    v18 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 8LL) +
                          12LL * (unsigned int)result;
                    v19 = *(unsigned __int16*)(v18 + 2);
                    if (*(_WORD*)(v18 + 2) != 0) {
                      v20 = v6 - v19;
                      if (v6 < v19) {
                        result = (__int64)X8CALL_X0(
                            _QWORD*, GameRoutine_89cb30((void*)&v21));
                        goto LABEL_4;
                      }
                      result = (__int64)X8CALL_X0(
                          _QWORD*, GameRoutine_89cb30((void*)&v21));
                      v6 = v20;
                      if (v20 == 0) {
                        goto LABEL_4;
                      }
                    }
                  }
                  ++v13;
                } while (v13 != v14);
              }
            }
          }
          if (v6 < 1) {
            break;
          }
          v4 += 4;
        } while (v4 != v5);
      }
    LABEL_4:
      v1 = (_QWORD*)*v1;
    } while (v1 != nullptr);
  }
  return result;
}

#pragma GCC visibility pop
