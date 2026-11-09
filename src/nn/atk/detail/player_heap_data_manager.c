#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_286260(_QWORD, _QWORD);
__int64 SoundArchiveLoader_Destructor(_QWORD);
extern __int64* GameData_2135270;
__int64 PlayerHeapDataManager_Destructor(__int64 a1);
__int64 PlayerHeapDataManager_2915a0(__int64 result, __int64 a2);
__int64 PlayerHeapDataManager_Unknown2(__int64 result);
__int64 PlayerHeapDataManager_Unknown3(__int64 a1, int a2, __int64 a3);
__int64 PlayerHeapDataManager_2918b0(__int64 a1, int a2, __int64 a3);
__int64 PlayerHeapDataManager_Unknown4(__int64 a1, int a2);
__int64 PlayerHeapDataManager_291c30(__int64 a1, int a2);

__int64 PlayerHeapDataManager_Destructor(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  char v3;

  v1 = GameData_2135270 + 2;
  *(_QWORD*)(a1 + 24) = GameData_2135270 + 10;
  v2 = a1 + 24;
  v3 = *(_BYTE*)(a1 + 705);
  *(_QWORD*)a1 = v1;
  if ((v3 & 1) == 0) {
    *(_WORD*)(a1 + 704) = 256;
    GameRoutine_286260(a1 + 24, 0);
  }
  return SoundArchiveLoader_Destructor(v2);
}

__int64 PlayerHeapDataManager_2915a0(__int64 result, __int64 a2)
{
  if ((*(_BYTE*)(result + 704) & 1) == 0) {
    *(_QWORD*)(result + 568) = 0;
    *(_QWORD*)(result + 584) = 0;
    *(_QWORD*)(result + 600) = 0;
    *(_QWORD*)(result + 616) = 0;
    *(_QWORD*)(result + 632) = 0;
    *(_QWORD*)(result + 648) = 0;
    *(_QWORD*)(result + 664) = 0;
    *(_QWORD*)(result + 680) = 0;
    *(_WORD*)(result + 704) = 1;
    *(_DWORD*)(result + 560) = -1;
    *(_DWORD*)(result + 576) = -1;
    *(_DWORD*)(result + 592) = -1;
    *(_DWORD*)(result + 608) = -1;
    *(_DWORD*)(result + 624) = -1;
    *(_DWORD*)(result + 640) = -1;
    *(_DWORD*)(result + 656) = -1;
    *(_DWORD*)(result + 672) = -1;
    *(_DWORD*)(result + 688) = -1;
    *(_QWORD*)(result + 696) = 0;
    return GameRoutine_286260(result + 24, a2);
  }
  return result;
}

__int64 PlayerHeapDataManager_Unknown2(__int64 result)
{
  *(_QWORD*)(result + 568) = 0;
  *(_QWORD*)(result + 584) = 0;
  *(_QWORD*)(result + 600) = 0;
  *(_QWORD*)(result + 616) = 0;
  *(_QWORD*)(result + 632) = 0;
  *(_QWORD*)(result + 648) = 0;
  *(_QWORD*)(result + 664) = 0;
  *(_QWORD*)(result + 680) = 0;
  *(_QWORD*)(result + 696) = 0;
  *(_DWORD*)(result + 560) = -1;
  *(_DWORD*)(result + 576) = -1;
  *(_DWORD*)(result + 592) = -1;
  *(_DWORD*)(result + 608) = -1;
  *(_DWORD*)(result + 624) = -1;
  *(_DWORD*)(result + 640) = -1;
  *(_DWORD*)(result + 656) = -1;
  *(_DWORD*)(result + 672) = -1;
  *(_DWORD*)(result + 688) = -1;
  return result;
}

__int64 PlayerHeapDataManager_Unknown3(__int64 a1, int a2, __int64 a3)
{
  int v3;
  __int64 v4;
  __int64 result;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;

  v3 = *(_DWORD*)(a1 + 560);
  v4 = a1 + 560;
  if (v3 == a2) {
    result = *(_QWORD*)(a1 + 568);
    *(_QWORD*)(v4 + 8) = a3;
  }
  else {
    v6 = *(_DWORD*)(a1 + 576);
    if (v6 == a2) {
      v7 = a1 + 576;
      result = *(_QWORD*)(a1 + 584);
      *(_QWORD*)(v7 + 8) = a3;
    }
    else {
      v8 = *(_DWORD*)(a1 + 592);
      if (v8 == a2) {
        v9 = a1 + 592;
        result = *(_QWORD*)(a1 + 600);
        *(_QWORD*)(v9 + 8) = a3;
      }
      else {
        v10 = *(_DWORD*)(a1 + 608);
        if (v10 == a2) {
          v11 = a1 + 608;
          result = *(_QWORD*)(a1 + 616);
          *(_QWORD*)(v11 + 8) = a3;
        }
        else {
          v12 = *(_DWORD*)(a1 + 624);
          if (v12 == a2) {
            v13 = a1 + 624;
            result = *(_QWORD*)(a1 + 632);
            *(_QWORD*)(v13 + 8) = a3;
          }
          else {
            v14 = *(_DWORD*)(a1 + 640);
            if (v14 == a2) {
              v15 = a1 + 640;
              result = *(_QWORD*)(a1 + 648);
              *(_QWORD*)(v15 + 8) = a3;
            }
            else {
              v16 = *(_DWORD*)(a1 + 656);
              if (v16 == a2) {
                v17 = a1 + 656;
                result = *(_QWORD*)(a1 + 664);
                *(_QWORD*)(v17 + 8) = a3;
              }
              else {
                v18 = *(_DWORD*)(a1 + 672);
                if (v18 == a2) {
                  v19 = a1 + 672;
                  result = *(_QWORD*)(a1 + 680);
                  *(_QWORD*)(v19 + 8) = a3;
                }
                else {
                  v20 = *(_DWORD*)(a1 + 688);
                  if (v20 == a2) {
                    v21 = a1 + 688;
                    result = *(_QWORD*)(a1 + 696);
                    *(_QWORD*)(v21 + 8) = a3;
                  }
                  else if (v3 == -1) {
                    *(_DWORD*)v4 = a2;
                    *(_QWORD*)(a1 + 568) = a3;
                    return 0;
                  }
                  else if (v6 == -1) {
                    *(_DWORD*)(a1 + 576) = a2;
                    *(_QWORD*)(a1 + 584) = a3;
                    return 0;
                  }
                  else if (v8 == -1) {
                    *(_DWORD*)(a1 + 592) = a2;
                    *(_QWORD*)(a1 + 600) = a3;
                    return 0;
                  }
                  else if (v10 == -1) {
                    *(_DWORD*)(a1 + 608) = a2;
                    *(_QWORD*)(a1 + 616) = a3;
                    return 0;
                  }
                  else if (v12 == -1) {
                    *(_DWORD*)(a1 + 624) = a2;
                    *(_QWORD*)(a1 + 632) = a3;
                    return 0;
                  }
                  else if (v14 == -1) {
                    *(_DWORD*)(a1 + 640) = a2;
                    *(_QWORD*)(a1 + 648) = a3;
                    return 0;
                  }
                  else if (v16 == -1) {
                    *(_DWORD*)(a1 + 656) = a2;
                    *(_QWORD*)(a1 + 664) = a3;
                    return 0;
                  }
                  else if (v18 == -1) {
                    *(_DWORD*)(a1 + 672) = a2;
                    *(_QWORD*)(a1 + 680) = a3;
                    return 0;
                  }
                  else {
                    if (v20 == -1) {
                      *(_DWORD*)(a1 + 688) = a2;
                      *(_QWORD*)(a1 + 696) = a3;
                    }
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 PlayerHeapDataManager_2918b0(__int64 a1, int a2, __int64 a3)
{
  int v3;
  __int64 v4;
  __int64 result;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;

  v3 = *(_DWORD*)(a1 + 536);
  v4 = a1 + 536;
  if (v3 == a2) {
    result = *(_QWORD*)(a1 + 544);
    *(_QWORD*)(v4 + 8) = a3;
  }
  else {
    v6 = *(_DWORD*)(a1 + 552);
    if (v6 == a2) {
      v7 = a1 + 552;
      result = *(_QWORD*)(a1 + 560);
      *(_QWORD*)(v7 + 8) = a3;
    }
    else {
      v8 = *(_DWORD*)(a1 + 568);
      if (v8 == a2) {
        v9 = a1 + 568;
        result = *(_QWORD*)(a1 + 576);
        *(_QWORD*)(v9 + 8) = a3;
      }
      else {
        v10 = *(_DWORD*)(a1 + 584);
        if (v10 == a2) {
          v11 = a1 + 584;
          result = *(_QWORD*)(a1 + 592);
          *(_QWORD*)(v11 + 8) = a3;
        }
        else {
          v12 = *(_DWORD*)(a1 + 600);
          if (v12 == a2) {
            v13 = a1 + 600;
            result = *(_QWORD*)(a1 + 608);
            *(_QWORD*)(v13 + 8) = a3;
          }
          else {
            v14 = *(_DWORD*)(a1 + 616);
            if (v14 == a2) {
              v15 = a1 + 616;
              result = *(_QWORD*)(a1 + 624);
              *(_QWORD*)(v15 + 8) = a3;
            }
            else {
              v16 = *(_DWORD*)(a1 + 632);
              if (v16 == a2) {
                v17 = a1 + 632;
                result = *(_QWORD*)(a1 + 640);
                *(_QWORD*)(v17 + 8) = a3;
              }
              else {
                v18 = *(_DWORD*)(a1 + 648);
                if (v18 == a2) {
                  v19 = a1 + 648;
                  result = *(_QWORD*)(a1 + 656);
                  *(_QWORD*)(v19 + 8) = a3;
                }
                else {
                  v20 = *(_DWORD*)(a1 + 664);
                  if (v20 == a2) {
                    v21 = a1 + 664;
                    result = *(_QWORD*)(a1 + 672);
                    *(_QWORD*)(v21 + 8) = a3;
                  }
                  else if (v3 == -1) {
                    *(_DWORD*)v4 = a2;
                    *(_QWORD*)(a1 + 544) = a3;
                    return 0;
                  }
                  else if (v6 == -1) {
                    *(_DWORD*)(a1 + 552) = a2;
                    *(_QWORD*)(a1 + 560) = a3;
                    return 0;
                  }
                  else if (v8 == -1) {
                    *(_DWORD*)(a1 + 568) = a2;
                    *(_QWORD*)(a1 + 576) = a3;
                    return 0;
                  }
                  else if (v10 == -1) {
                    *(_DWORD*)(a1 + 584) = a2;
                    *(_QWORD*)(a1 + 592) = a3;
                    return 0;
                  }
                  else if (v12 == -1) {
                    *(_DWORD*)(a1 + 600) = a2;
                    *(_QWORD*)(a1 + 608) = a3;
                    return 0;
                  }
                  else if (v14 == -1) {
                    *(_DWORD*)(a1 + 616) = a2;
                    *(_QWORD*)(a1 + 624) = a3;
                    return 0;
                  }
                  else if (v16 == -1) {
                    *(_DWORD*)(a1 + 632) = a2;
                    *(_QWORD*)(a1 + 640) = a3;
                    return 0;
                  }
                  else if (v18 == -1) {
                    *(_DWORD*)(a1 + 648) = a2;
                    *(_QWORD*)(a1 + 656) = a3;
                    return 0;
                  }
                  else {
                    if (v20 == -1) {
                      *(_DWORD*)(a1 + 664) = a2;
                      *(_QWORD*)(a1 + 672) = a3;
                    }
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 PlayerHeapDataManager_Unknown4(__int64 a1, int a2)
{
  if (*(_DWORD*)(a1 + 560) == a2) {
    return *(_QWORD*)(a1 + 568);
  }
  if (*(_DWORD*)(a1 + 576) == a2) {
    return *(_QWORD*)(a1 + 584);
  }
  if (*(_DWORD*)(a1 + 592) == a2) {
    return *(_QWORD*)(a1 + 600);
  }
  if (*(_DWORD*)(a1 + 608) == a2) {
    return *(_QWORD*)(a1 + 616);
  }
  if (*(_DWORD*)(a1 + 624) == a2) {
    return *(_QWORD*)(a1 + 632);
  }
  if (*(_DWORD*)(a1 + 640) == a2) {
    return *(_QWORD*)(a1 + 648);
  }
  if (*(_DWORD*)(a1 + 656) == a2) {
    return *(_QWORD*)(a1 + 664);
  }
  if (*(_DWORD*)(a1 + 672) == a2) {
    return *(_QWORD*)(a1 + 680);
  }
  if (*(_DWORD*)(a1 + 688) == a2) {
    return *(_QWORD*)(a1 + 696);
  }
  return 0;
}

__int64 PlayerHeapDataManager_291c30(__int64 a1, int a2)
{
  if (*(_DWORD*)(a1 + 536) == a2) {
    return *(_QWORD*)(a1 + 544);
  }
  if (*(_DWORD*)(a1 + 552) == a2) {
    return *(_QWORD*)(a1 + 560);
  }
  if (*(_DWORD*)(a1 + 568) == a2) {
    return *(_QWORD*)(a1 + 576);
  }
  if (*(_DWORD*)(a1 + 584) == a2) {
    return *(_QWORD*)(a1 + 592);
  }
  if (*(_DWORD*)(a1 + 600) == a2) {
    return *(_QWORD*)(a1 + 608);
  }
  if (*(_DWORD*)(a1 + 616) == a2) {
    return *(_QWORD*)(a1 + 624);
  }
  if (*(_DWORD*)(a1 + 632) == a2) {
    return *(_QWORD*)(a1 + 640);
  }
  if (*(_DWORD*)(a1 + 648) == a2) {
    return *(_QWORD*)(a1 + 656);
  }
  if (*(_DWORD*)(a1 + 664) == a2) {
    return *(_QWORD*)(a1 + 672);
  }
  return 0;
}

#pragma GCC visibility pop
