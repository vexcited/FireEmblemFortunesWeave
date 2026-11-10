#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetTranslate(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
__n128 ui_LayoutAccessor_SetPaneSize(_QWORD, _QWORD, float, float);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212fc70[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
float ui_LayoutAccessor_GetTranslate(_QWORD);
__int64 game_menu_SubMenu_OnBuild_lambda1_Invoke(__int64 a1, __int64* a2);

__int64 game_menu_SubMenu_OnBuild_lambda1_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  atomic_ullong* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  atomic_ullong* v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  atomic_ullong* v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  atomic_ullong* v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  float v32;
  float v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  atomic_ullong* v37;
  __int64* v38;
  __int64* v39;
  float v40;
  float v41;
  float v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  atomic_ullong* v46;
  __int64* v47;
  __int64* v48;
  __int64* v50;
  float v51[3];

  v2 = *a2;
  v4 = *(_QWORD*)(*a2 + 56);
  if (v4 == 0) {
    goto LABEL_5;
  }
  v5 = std___1___shared_weak_count_lock(v4);
  if (v5 == 0) {
    goto LABEL_5;
  }
  v6 = v5;
  v7 = (atomic_ullong*)(v5 + 8);
  v8 = *(__int64**)(v2 + 48);
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v50 = v8;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    v8 = v50;
    if (v50 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v8 == nullptr) {
  LABEL_5:
    v8 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v9 = ui_LayoutAccessor_FindPane(v8, "Frm");
  if (v9 != 0) {
    v10 = __dynamic_cast(v9, GameData_212d670[0], GameData_212fc70[0], 0);
    if (v10 != 0) {
      v11 = *(float*)(a1 + 8);
      v12 = *(float*)(v10 + 84);
      v13 = *(_QWORD*)(v2 + 56);
      if (v13 == 0) {
        goto LABEL_13;
      }
      v14 = std___1___shared_weak_count_lock(v13);
      if (v14 == 0) {
        goto LABEL_13;
      }
      v15 = v14;
      v16 = (atomic_ullong*)(v14 + 8);
      v17 = *(__int64**)(v2 + 48);
      if (atomic_fetch_add(v16, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v18 = v17;
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak(v15);
        v17 = v18;
      }
      if (v17 == nullptr) {
      LABEL_13:
        v17 = ui_LayoutAccessor_empty__ptr[0];
      }
      ui_LayoutAccessor_SetPaneSize(v17, "Frm", v11, v12);
      v19 = *(_QWORD*)(v2 + 56);
      if (v19 == 0) {
        goto LABEL_19;
      }
      v20 = std___1___shared_weak_count_lock(v19);
      if (v20 == 0) {
        goto LABEL_19;
      }
      v21 = v20;
      v22 = (atomic_ullong*)(v20 + 8);
      v23 = *(__int64**)(v2 + 48);
      if (atomic_fetch_add(v22, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v24 = v23;
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        std___1___shared_weak_count___release_weak(v21);
        v23 = v24;
      }
      if (v23 == nullptr) {
      LABEL_19:
        v23 = ui_LayoutAccessor_empty__ptr[0];
      }
      ui_LayoutAccessor_SetPaneSize(v23, "Overlay", v11, v12);
      v25 = *(_QWORD*)(v2 + 56);
      if (v25 == 0) {
        goto LABEL_25;
      }
      v26 = std___1___shared_weak_count_lock(v25);
      if (v26 == 0) {
        goto LABEL_25;
      }
      v27 = v26;
      v28 = (atomic_ullong*)(v26 + 8);
      v29 = *(__int64**)(v2 + 48);
      if (atomic_fetch_add(v28, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v30 = v29;
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        std___1___shared_weak_count___release_weak(v27);
        v29 = v30;
      }
      if (v29 == nullptr) {
      LABEL_25:
        v29 = ui_LayoutAccessor_empty__ptr[0];
      }
      v31 = ui_LayoutAccessor_FindPane(v29, "A_Contents");
      if (v31 != 0) {
        v32 = (float)*(int*)(a1 + 12);
        v33 = *(float*)(v31 + 80) * 0.5f;
        *(_BYTE*)(v31 + 88) |= 0x10u;
        *(float*)(v31 + 48) = v33 + (float)(v32 * 0.5f);
      }
      v34 = *(_QWORD*)(v2 + 56);
      if (v34 == 0) {
        goto LABEL_33;
      }
      v35 = std___1___shared_weak_count_lock(v34);
      if (v35 == 0) {
        goto LABEL_33;
      }
      v36 = v35;
      v37 = (atomic_ullong*)(v35 + 8);
      v38 = *(__int64**)(v2 + 48);
      if (atomic_fetch_add(v37, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v39 = v38;
        (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
        std___1___shared_weak_count___release_weak(v36);
        v38 = v39;
      }
      if (v38 == nullptr) {
      LABEL_33:
        v38 = ui_LayoutAccessor_empty__ptr[0];
      }
      ui_LayoutAccessor_GetTranslate(v38);
      v40 = *(float*)(a1 + 8);
      v51[1] = v41;
      v51[2] = v42;
      v43 = *(_QWORD*)(v2 + 56);
      v51[0] = v40 * -0.5f;
      if (v43 == 0) {
        goto LABEL_39;
      }
      v44 = std___1___shared_weak_count_lock(v43);
      if (v44 == 0) {
        goto LABEL_39;
      }
      v45 = v44;
      v46 = (atomic_ullong*)(v44 + 8);
      v47 = *(__int64**)(v2 + 48);
      if (atomic_fetch_add(v46, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v48 = v47;
        (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
        std___1___shared_weak_count___release_weak(v45);
        v47 = v48;
      }
      if (v47 == nullptr) {
      LABEL_39:
        v47 = ui_LayoutAccessor_empty__ptr[0];
      }
      ui_LayoutAccessor_SetTranslate(v47, v51);
    }
  }
  return 0;
}

#pragma GCC visibility pop
