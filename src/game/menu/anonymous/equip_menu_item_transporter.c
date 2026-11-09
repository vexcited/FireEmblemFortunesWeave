#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_157b5c0(__int64 result, unsigned __int16*);
extern __int64 GameData_21c99b8;
extern __int64 game_TransporterConst_List_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
__int64 EquipMenuItem_Transporter_Unknown58(__int64 a1);
__int64 EquipMenuItem_Transporter_Unknown70(__int64 a1);

__int64 EquipMenuItem_Transporter_Unknown58(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  unsigned __int16* v13;

  v1 = *(_QWORD*)(a1 + 88);
  v2 = *(int*)(a1 + 40);
  if (v1 != 0) {
    v3 = v1 + 8 * v2;
    v4 = *(unsigned __int16*)(v3 + 828);
    if (*(_WORD*)(v3 + 828) == 0) {
      return 0;
    }
    v5 = v3 + 828;
  }
  else {
    v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                   game_TransporterConst_List_instance__ptr[0] +
                               8LL) +
                    8LL) +
         12LL * (int)v2;
    v7 = *(unsigned __int16*)(v6 + 4);
    v5 = v6 + 4;
    v4 = v7;
    if (v7 == 0) {
      return 0;
    }
  }
  if ((*(_BYTE*)(v5 + 3) & 0x10) == 0) {
    v8 = *(_QWORD*)(GameData_21c99b8 + 64);
    v9 = *(_QWORD*)(v8 + 8LL * v4);
    if ((*(_BYTE*)(v9 + 336) & 4) == 0 &&
        ((1LL << *(_BYTE*)(v9 + 72)) & 0xE01F) != 0) {
      if (*(_DWORD*)(a1 + 116) != 2) {
        goto LABEL_15;
      }
      if (v1 != 0) {
        v10 = *(unsigned __int8*)(*(_QWORD*)(v8 +
                                             8LL * *(unsigned __int16*)(v1 +
                                                                        8 * v2 +
                                                                        828)) +
                                  72LL);
        if (v10 <= 7) {
          v11 = *(_QWORD*)(a1 + 104);
        LABEL_16:
          v13 = (unsigned __int16*)(v1 + 8 * v2 + 828);
          return GameRoutine_157b5c0(v11, v13);
        }
      }
      else {
        v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                        game_TransporterConst_List_instance__ptr
                                            [0] +
                                    8LL) +
                         8LL);
        v10 = *(
            unsigned __int8*)(*(_QWORD*)(v8 +
                                         8LL *
                                             *(unsigned __int16*)(v12 +
                                                                  12LL *
                                                                      (int)v2 +
                                                                  4)) +
                              72LL);
        if (v10 <= 7) {
          v11 = *(_QWORD*)(a1 + 104);
          goto LABEL_20;
        }
      }
      if (v10 == 13) {
      LABEL_15:
        v11 = *(_QWORD*)(a1 + 104);
        if (v1 != 0) {
          goto LABEL_16;
        }
        v12 = *(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ + 8) +
                         8LL);
      LABEL_20:
        v13 = (unsigned __int16*)(v12 + 12LL * (int)v2 + 4);
        return GameRoutine_157b5c0(v11, v13);
      }
    }
  }
  return 0;
}

__int64 EquipMenuItem_Transporter_Unknown70(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 88);
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

#pragma GCC visibility pop
