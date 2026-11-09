#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fdc1d8[36])();
extern __int64 (*game_zview_Hitbox_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Hitbox_Destructor(__int64 result);

__int64 Hitbox_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
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
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char v36;

  v1 = result;
  *(_QWORD*)result = game_zview_Hitbox_vtable;
  if ((*(_BYTE*)(result + 233) & 1) == 0) {
    v2 = *(_QWORD*)(result + 288);
    v3 = *(_QWORD*)(result + 296);
    while (v2 != v3) {
      result = *(_QWORD*)(v2 + 32);
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
      }
      v2 += 48;
    }
    *(_BYTE*)(v1 + 233) = 1;
  }
  v4 = *(_QWORD*)(v1 + 288);
  v5 = fw_memory_g_heap_manager_ptr;
  if (v4 == 0) {
    goto LABEL_21;
  }
  v6 = *(_QWORD*)(v1 + 296);
  if (v4 == v6) {
  LABEL_18:
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v10 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v10, v4);
    goto LABEL_21;
  }
  do {
    result = *(_QWORD*)(v6 - 16);
    v8 = v6 - 48;
    if (v6 - 48 == result) {
      v7 = 32;
    LABEL_12:
      result = (*(__int64 (**)(void))(*(_QWORD*)result + v7))();
      goto LABEL_13;
    }
    if (result != 0) {
      v7 = 40;
      goto LABEL_12;
    }
  LABEL_13:
    v6 = v8;
  } while (v8 != v4);
  v9 = *(_QWORD*)(v1 + 288);
  *(_QWORD*)(v1 + 296) = v4;
  v4 = v9;
  if (v9 != 0) {
    goto LABEL_18;
  }

LABEL_21:
  v11 = *(_QWORD*)(v1 + 264);
  if (v11 == 0) {
    goto LABEL_34;
  }
  v12 = *(_QWORD*)(v1 + 272);
  if (v11 == v12) {
  LABEL_31:
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v16 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v16, v11);
    goto LABEL_34;
  }
  while (2) {
    result = *(_QWORD*)(v12 - 16);
    v14 = v12 - 48;
    if (v12 - 48 == result) {
      v13 = 32;
      goto LABEL_25;
    }
    if (result != 0) {
      v13 = 40;
    LABEL_25:
      result = (*(__int64 (**)(void))(*(_QWORD*)result + v13))();
    }
    v12 = v14;
    if (v14 != v11) {
      continue;
    }
    break;
  }
  v15 = *(_QWORD*)(v1 + 264);
  *(_QWORD*)(v1 + 272) = v11;
  v11 = v15;
  if (v15 != 0) {
    goto LABEL_31;
  }

LABEL_34:
  v17 = *(_QWORD*)(v1 + 240);
  if (v17 == 0) {
    goto LABEL_47;
  }
  v18 = *(_QWORD*)(v1 + 248);
  if (v17 == v18) {
  LABEL_44:
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v22 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v22, v17);
    goto LABEL_47;
  }
  while (2) {
    result = *(_QWORD*)(v18 - 16);
    v20 = v18 - 48;
    if (v18 - 48 == result) {
      v19 = 32;
      goto LABEL_38;
    }
    if (result != 0) {
      v19 = 40;
    LABEL_38:
      result = (*(__int64 (**)(void))(*(_QWORD*)result + v19))();
    }
    v18 = v20;
    if (v20 != v17) {
      continue;
    }
    break;
  }
  v21 = *(_QWORD*)(v1 + 240);
  *(_QWORD*)(v1 + 248) = v17;
  v17 = v21;
  if (v21 != 0) {
    goto LABEL_44;
  }

LABEL_47:
  v23 = *(_QWORD*)(v1 + 208);
  if (v23 != 0) {
    v24 = *(_QWORD*)v5;
    *(_QWORD*)(v1 + 216) = v23;
    v25 = 128;
    if (*(_QWORD*)(v24 + 200) == 0) {
      v25 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v24 + v25, v23);
  }
  v26 = *(_QWORD*)(v1 + 184);
  if (v26 != 0) {
    v27 = *(_QWORD*)(v1 + 192);
    if (v26 == v27) {
      goto LABEL_64;
    }
    do {
      v28 = *(unsigned int*)(v27 - 16);
      if ((_DWORD)v28 != -1) {
        result = ((__int64 (*)(char*, __int64))GameData_1fdc1d8[v28])(
            &v36, v27 - 112);
      }
      v29 = *(_BYTE*)(v27 - 160);
      *(_DWORD*)(v27 - 16) = -1;
      if ((v29 & 1) != 0) {
        v30 = *(_QWORD*)(v27 - 144);
        if (v30 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v31 = 128;
          }
          else {
            v31 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v31, v30);
        }
      }
      v27 -= 160;
    } while (v27 != v26);
    v32 = *(_QWORD*)(v1 + 184);
    *(_QWORD*)(v1 + 192) = v26;
    v26 = v32;
    if (v32 != 0) {
    LABEL_64:
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v33 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v33, v26);
    }
  }
  if ((*(_BYTE*)(v1 + 128) & 1) != 0) {
    v34 = *(_QWORD*)(v1 + 144);
    if (v34 != 0) {
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v35 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v35, v34);
    }
  }
  return result;
}

#pragma GCC visibility pop
