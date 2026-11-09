#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fc1848[])();
extern __int64 (*GameData_1fc22d8[])();
extern __int64 (*gfxa_CharaSilhouetteSetting_vtable[])();
extern __int64 GameData_212e528[3];
extern __int64 GameData_212e530[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e548[27];
_QWORD* CharaSilhouetteSetting_Destructor(_QWORD* result);

_QWORD* CharaSilhouetteSetting_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
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
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;

  v1 = result[294];
  v2 = result;
  *result = gfxa_CharaSilhouetteSetting_vtable;
  result[288] = GameData_1fc22d8;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[295] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = GameData_212e530[0];
  v2[288] = GameData_212e530[0] + 16;
  if ((v2[289] & 1) != 0) {
    v7 = v2[291];
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v8 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v7);
    }
  }
  v9 = GameData_212e528[0];
  v10 = v2[284];
  v2[278] = GameData_212e528[0] + 16;
  if (v10 != 0) {
    v11 = *(_QWORD*)v3;
    v2[285] = v10;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v11 + v12, v10);
  }
  v2[278] = v6 + 16;
  if ((v2[279] & 1) != 0) {
    v13 = v2[281];
    if (v13 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v14 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14, v13);
    }
  }
  v15 = v2[274];
  v2[268] = v9 + 16;
  if (v15 != 0) {
    v16 = *(_QWORD*)v3;
    v2[275] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v16 + v17, v15);
  }
  v2[268] = v6 + 16;
  if ((v2[269] & 1) != 0) {
    v18 = v2[271];
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v19 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v19, v18);
    }
  }
  v20 = v2[264];
  v2[258] = v9 + 16;
  if (v20 != 0) {
    v21 = *(_QWORD*)v3;
    v2[265] = v20;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v21 + v22, v20);
  }
  v2[258] = v6 + 16;
  if ((v2[259] & 1) != 0) {
    v23 = v2[261];
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v24 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24, v23);
    }
  }
  v25 = v2[252];
  v2[242] = GameData_1fc1848;
  if (v25 != 0) {
    v26 = *(_QWORD*)v3;
    v2[253] = v25;
    v27 = 128;
    if (*(_QWORD*)(v26 + 200) == 0) {
      v27 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v26 + v27, v25);
  }
  v2[242] = v6 + 16;
  if ((v2[243] & 1) != 0) {
    v28 = v2[245];
    if (v28 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v29 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v29, v28);
    }
  }
  v30 = v2[238];
  v2[232] = v9 + 16;
  if (v30 != 0) {
    v31 = *(_QWORD*)v3;
    v2[239] = v30;
    v32 = 128;
    if (*(_QWORD*)(v31 + 200) == 0) {
      v32 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v31 + v32, v30);
  }
  v2[232] = v6 + 16;
  if ((v2[233] & 1) != 0) {
    v33 = v2[235];
    if (v33 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v34 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v34, v33);
    }
  }
  v35 = v2[226];
  v2[216] = GameData_1fc1848;
  if (v35 != 0) {
    v36 = *(_QWORD*)v3;
    v2[227] = v35;
    v37 = 128;
    if (*(_QWORD*)(v36 + 200) == 0) {
      v37 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v36 + v37, v35);
  }
  v2[216] = v6 + 16;
  if ((v2[217] & 1) != 0) {
    v38 = v2[219];
    if (v38 != 0) {
      v39 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v39 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v39, v38);
    }
  }
  v40 = v2[212];
  v2[206] = v9 + 16;
  if (v40 != 0) {
    v41 = *(_QWORD*)v3;
    v2[213] = v40;
    v42 = 128;
    if (*(_QWORD*)(v41 + 200) == 0) {
      v42 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v41 + v42, v40);
  }
  v2[206] = v6 + 16;
  if ((v2[207] & 1) != 0) {
    v43 = v2[209];
    if (v43 != 0) {
      v44 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v44 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v44, v43);
    }
  }
  v45 = v2[200];
  v2[190] = GameData_1fc1848;
  if (v45 != 0) {
    v46 = *(_QWORD*)v3;
    v2[201] = v45;
    v47 = 128;
    if (*(_QWORD*)(v46 + 200) == 0) {
      v47 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v46 + v47, v45);
  }
  v2[190] = v6 + 16;
  if ((v2[191] & 1) != 0) {
    v48 = v2[193];
    if (v48 != 0) {
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v49 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v49, v48);
    }
  }
  v50 = v2[186];
  v2[180] = v9 + 16;
  if (v50 != 0) {
    v51 = *(_QWORD*)v3;
    v2[187] = v50;
    v52 = 128;
    if (*(_QWORD*)(v51 + 200) == 0) {
      v52 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v51 + v52, v50);
  }
  v2[180] = v6 + 16;
  if ((v2[181] & 1) != 0) {
    v53 = v2[183];
    if (v53 != 0) {
      v54 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v54 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v54, v53);
    }
  }
  v55 = v2[174];
  v2[164] = GameData_1fc1848;
  if (v55 != 0) {
    v56 = *(_QWORD*)v3;
    v2[175] = v55;
    v57 = 128;
    if (*(_QWORD*)(v56 + 200) == 0) {
      v57 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v56 + v57, v55);
  }
  v2[164] = v6 + 16;
  if ((v2[165] & 1) != 0) {
    v58 = v2[167];
    if (v58 != 0) {
      v59 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v59 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v59, v58);
    }
  }
  v60 = v2[160];
  v2[154] = v9 + 16;
  if (v60 != 0) {
    v61 = *(_QWORD*)v3;
    v2[161] = v60;
    v62 = 128;
    if (*(_QWORD*)(v61 + 200) == 0) {
      v62 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v61 + v62, v60);
  }
  v2[154] = v6 + 16;
  if ((v2[155] & 1) != 0) {
    v63 = v2[157];
    if (v63 != 0) {
      v64 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v64 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v64, v63);
    }
  }
  v65 = v2[148];
  v2[138] = GameData_1fc1848;
  if (v65 != 0) {
    v66 = *(_QWORD*)v3;
    v2[149] = v65;
    v67 = 128;
    if (*(_QWORD*)(v66 + 200) == 0) {
      v67 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v66 + v67, v65);
  }
  v2[138] = v6 + 16;
  if ((v2[139] & 1) != 0) {
    v68 = v2[141];
    if (v68 != 0) {
      v69 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v69 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v69, v68);
    }
  }
  v70 = v2[134];
  v2[128] = v9 + 16;
  if (v70 != 0) {
    v71 = *(_QWORD*)v3;
    v2[135] = v70;
    v72 = 128;
    if (*(_QWORD*)(v71 + 200) == 0) {
      v72 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v71 + v72, v70);
  }
  v2[128] = v6 + 16;
  if ((v2[129] & 1) != 0) {
    v73 = v2[131];
    if (v73 != 0) {
      v74 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v74 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v74, v73);
    }
  }
  v75 = v2[122];
  v2[112] = GameData_1fc1848;
  if (v75 != 0) {
    v76 = *(_QWORD*)v3;
    v2[123] = v75;
    v77 = 128;
    if (*(_QWORD*)(v76 + 200) == 0) {
      v77 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v76 + v77, v75);
  }
  v2[112] = v6 + 16;
  if ((v2[113] & 1) != 0) {
    v78 = v2[115];
    if (v78 != 0) {
      v79 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v79 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v79, v78);
    }
  }
  v80 = v2[108];
  v2[102] = v9 + 16;
  if (v80 != 0) {
    v81 = *(_QWORD*)v3;
    v2[109] = v80;
    v82 = 128;
    if (*(_QWORD*)(v81 + 200) == 0) {
      v82 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v81 + v82, v80);
  }
  v2[102] = v6 + 16;
  if ((v2[103] & 1) != 0) {
    v83 = v2[105];
    if (v83 != 0) {
      v84 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v84 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v84, v83);
    }
  }
  v85 = v2[96];
  v2[86] = GameData_1fc1848;
  if (v85 != 0) {
    v86 = *(_QWORD*)v3;
    v2[97] = v85;
    v87 = 128;
    if (*(_QWORD*)(v86 + 200) == 0) {
      v87 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v86 + v87, v85);
  }
  v2[86] = v6 + 16;
  if ((v2[87] & 1) != 0) {
    v88 = v2[89];
    if (v88 != 0) {
      v89 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v89 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v89, v88);
    }
  }
  v90 = v2[82];
  v2[76] = v9 + 16;
  if (v90 != 0) {
    v91 = *(_QWORD*)v3;
    v2[83] = v90;
    v92 = 128;
    if (*(_QWORD*)(v91 + 200) == 0) {
      v92 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v91 + v92, v90);
  }
  v2[76] = v6 + 16;
  if ((v2[77] & 1) != 0) {
    v93 = v2[79];
    if (v93 != 0) {
      v94 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v94 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v94, v93);
    }
  }
  v95 = v2[70];
  v2[60] = GameData_1fc1848;
  if (v95 != 0) {
    v96 = *(_QWORD*)v3;
    v2[71] = v95;
    v97 = 128;
    if (*(_QWORD*)(v96 + 200) == 0) {
      v97 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v96 + v97, v95);
  }
  v2[60] = v6 + 16;
  if ((v2[61] & 1) != 0) {
    v98 = v2[63];
    if (v98 != 0) {
      v99 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v99 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v99, v98);
    }
  }
  v100 = v2[56];
  v2[50] = v9 + 16;
  if (v100 != 0) {
    v101 = *(_QWORD*)v3;
    v2[57] = v100;
    v102 = 128;
    if (*(_QWORD*)(v101 + 200) == 0) {
      v102 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v101 + v102, v100);
  }
  v2[50] = v6 + 16;
  if ((v2[51] & 1) != 0) {
    v103 = v2[53];
    if (v103 != 0) {
      v104 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v104 = 56;
      }
      result =
          (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v104, v103);
    }
  }
  v105 = v2[44];
  v2[34] = GameData_1fc1848;
  if (v105 != 0) {
    v106 = *(_QWORD*)v3;
    v2[45] = v105;
    v107 = 128;
    if (*(_QWORD*)(v106 + 200) == 0) {
      v107 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v106 + v107, v105);
  }
  v2[34] = v6 + 16;
  if ((v2[35] & 1) != 0) {
    v108 = v2[37];
    if (v108 != 0) {
      v109 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v109 = 56;
      }
      result =
          (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v109, v108);
    }
  }
  v110 = v2[30];
  v2[24] = v9 + 16;
  if (v110 != 0) {
    v111 = *(_QWORD*)v3;
    v2[31] = v110;
    v112 = 128;
    if (*(_QWORD*)(v111 + 200) == 0) {
      v112 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v111 + v112, v110);
  }
  v2[24] = v6 + 16;
  if ((v2[25] & 1) != 0) {
    v113 = v2[27];
    if (v113 != 0) {
      v114 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v114 = 56;
      }
      result =
          (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v114, v113);
    }
  }
  v115 = v2[18];
  v2[8] = GameData_1fc1848;
  if (v115 != 0) {
    v116 = *(_QWORD*)v3;
    v2[19] = v115;
    v117 = 128;
    if (*(_QWORD*)(v116 + 200) == 0) {
      v117 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v116 + v117, v115);
  }
  v2[8] = v6 + 16;
  if ((v2[9] & 1) != 0) {
    v118 = v2[11];
    if (v118 != 0) {
      v119 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v119 = 56;
      }
      result =
          (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v119, v118);
    }
  }
  v120 = v2[4];
  *v2 = GameData_212e548[0] + 2;
  if (v120 != 0) {
    v121 = *(_QWORD*)v3;
    v2[5] = v120;
    v122 = 128;
    if (*(_QWORD*)(v121 + 200) == 0) {
      v122 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v121 + v122, v120);
  }
  if ((v2[1] & 1) != 0) {
    v123 = v2[3];
    if (v123 != 0) {
      v124 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v124 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v124, v123);
    }
  }
  return result;
}

#pragma GCC visibility pop
