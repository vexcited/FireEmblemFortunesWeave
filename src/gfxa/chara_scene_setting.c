#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fc1458[])();
extern __int64 (*GameData_1fc1848[])();
extern __int64 (*GameData_1fc22d8[])();
extern __int64 (*GameData_1fc23d8[])();
extern __int64 (*gfx_settings_BaseParamInstance_vtable)();
extern __int64 (*gfx_settings_ParamSet_vtable[])();
extern __int64 (*gfxa_CharaSceneSetting_vtable[])();
extern __int64 fw_memory_g_heap_manager;
_QWORD* CharaSceneSetting_Destructor(_QWORD* result);

_QWORD* CharaSceneSetting_Destructor(_QWORD* result)
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
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;

  v1 = result[373];
  v2 = result;
  *result = gfxa_CharaSceneSetting_vtable;
  result[368] = GameData_1fc23d8;
  if (v1 != 0) {
    v3 = fw_memory_g_heap_manager;
    result[374] = v1;
    v4 = 128;
    if (*(_QWORD*)(v3 + 200) == 0) {
      v4 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v3 + v4, v1);
  }
  v2[368] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[369] & 1) != 0) {
    v5 = v2[371];
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v6 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v6, v5);
    }
  }
  v7 = v2[364];
  v2[358] = GameData_1fc1458;
  if (v7 != 0) {
    v8 = fw_memory_g_heap_manager;
    v2[365] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v8 + v9, v7);
  }
  v2[358] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[359] & 1) != 0) {
    v10 = v2[361];
    if (v10 != 0) {
      v11 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v11 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v11, v10);
    }
  }
  v12 = v2[354];
  v2[348] = GameData_1fc1458;
  if (v12 != 0) {
    v13 = fw_memory_g_heap_manager;
    v2[355] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v13 + v14, v12);
  }
  v2[348] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[349] & 1) != 0) {
    v15 = v2[351];
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v16 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v16, v15);
    }
  }
  v17 = v2[344];
  v2[338] = GameData_1fc1458;
  if (v17 != 0) {
    v18 = fw_memory_g_heap_manager;
    v2[345] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v18 + v19, v17);
  }
  v2[338] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[339] & 1) != 0) {
    v20 = v2[341];
    if (v20 != 0) {
      v21 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v21 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v21, v20);
    }
  }
  v22 = v2[334];
  v2[328] = GameData_1fc1458;
  if (v22 != 0) {
    v23 = fw_memory_g_heap_manager;
    v2[335] = v22;
    v24 = 128;
    if (*(_QWORD*)(v23 + 200) == 0) {
      v24 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v23 + v24, v22);
  }
  v2[328] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[329] & 1) != 0) {
    v25 = v2[331];
    if (v25 != 0) {
      v26 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v26 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v26, v25);
    }
  }
  v27 = v2[324];
  v2[318] = GameData_1fc1458;
  if (v27 != 0) {
    v28 = fw_memory_g_heap_manager;
    v2[325] = v27;
    v29 = 128;
    if (*(_QWORD*)(v28 + 200) == 0) {
      v29 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v28 + v29, v27);
  }
  v2[318] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[319] & 1) != 0) {
    v30 = v2[321];
    if (v30 != 0) {
      v31 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v31 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v31, v30);
    }
  }
  v32 = v2[314];
  v2[308] = GameData_1fc1458;
  if (v32 != 0) {
    v33 = fw_memory_g_heap_manager;
    v2[315] = v32;
    v34 = 128;
    if (*(_QWORD*)(v33 + 200) == 0) {
      v34 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v33 + v34, v32);
  }
  v2[308] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[309] & 1) != 0) {
    v35 = v2[311];
    if (v35 != 0) {
      v36 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v36 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v36, v35);
    }
  }
  v37 = v2[302];
  v2[292] = GameData_1fc1848;
  if (v37 != 0) {
    v38 = fw_memory_g_heap_manager;
    v2[303] = v37;
    v39 = 128;
    if (*(_QWORD*)(v38 + 200) == 0) {
      v39 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v38 + v39, v37);
  }
  v2[292] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[293] & 1) != 0) {
    v40 = v2[295];
    if (v40 != 0) {
      v41 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v41 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v41, v40);
    }
  }
  v42 = v2[288];
  v2[282] = GameData_1fc1458;
  if (v42 != 0) {
    v43 = fw_memory_g_heap_manager;
    v2[289] = v42;
    v44 = 128;
    if (*(_QWORD*)(v43 + 200) == 0) {
      v44 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v43 + v44, v42);
  }
  v2[282] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[283] & 1) != 0) {
    v45 = v2[285];
    if (v45 != 0) {
      v46 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v46 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v46, v45);
    }
  }
  v47 = v2[278];
  v2[272] = GameData_1fc1458;
  if (v47 != 0) {
    v48 = fw_memory_g_heap_manager;
    v2[279] = v47;
    v49 = 128;
    if (*(_QWORD*)(v48 + 200) == 0) {
      v49 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v48 + v49, v47);
  }
  v2[272] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[273] & 1) != 0) {
    v50 = v2[275];
    if (v50 != 0) {
      v51 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v51 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v51, v50);
    }
  }
  v52 = v2[266];
  v2[256] = GameData_1fc1848;
  if (v52 != 0) {
    v53 = fw_memory_g_heap_manager;
    v2[267] = v52;
    v54 = 128;
    if (*(_QWORD*)(v53 + 200) == 0) {
      v54 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v53 + v54, v52);
  }
  v2[256] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[257] & 1) != 0) {
    v55 = v2[259];
    if (v55 != 0) {
      v56 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v56 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v56, v55);
    }
  }
  v57 = v2[251];
  v2[245] = GameData_1fc1458;
  if (v57 != 0) {
    v58 = fw_memory_g_heap_manager;
    v2[252] = v57;
    v59 = 128;
    if (*(_QWORD*)(v58 + 200) == 0) {
      v59 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v58 + v59, v57);
  }
  v2[245] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[246] & 1) != 0) {
    v60 = v2[248];
    if (v60 != 0) {
      v61 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v61 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v61, v60);
    }
  }
  v62 = v2[241];
  v2[235] = GameData_1fc1458;
  if (v62 != 0) {
    v63 = fw_memory_g_heap_manager;
    v2[242] = v62;
    v64 = 128;
    if (*(_QWORD*)(v63 + 200) == 0) {
      v64 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v63 + v64, v62);
  }
  v2[235] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[236] & 1) != 0) {
    v65 = v2[238];
    if (v65 != 0) {
      v66 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v66 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v66, v65);
    }
  }
  v67 = v2[231];
  v2[225] = GameData_1fc1458;
  if (v67 != 0) {
    v68 = fw_memory_g_heap_manager;
    v2[232] = v67;
    v69 = 128;
    if (*(_QWORD*)(v68 + 200) == 0) {
      v69 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v68 + v69, v67);
  }
  v2[225] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[226] & 1) != 0) {
    v70 = v2[228];
    if (v70 != 0) {
      v71 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v71 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v71, v70);
    }
  }
  v72 = v2[221];
  v2[215] = GameData_1fc1458;
  if (v72 != 0) {
    v73 = fw_memory_g_heap_manager;
    v2[222] = v72;
    v74 = 128;
    if (*(_QWORD*)(v73 + 200) == 0) {
      v74 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v73 + v74, v72);
  }
  v2[215] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[216] & 1) != 0) {
    v75 = v2[218];
    if (v75 != 0) {
      v76 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v76 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v76, v75);
    }
  }
  v77 = v2[211];
  v2[206] = GameData_1fc23d8;
  if (v77 != 0) {
    v78 = fw_memory_g_heap_manager;
    v2[212] = v77;
    v79 = 128;
    if (*(_QWORD*)(v78 + 200) == 0) {
      v79 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v78 + v79, v77);
  }
  v2[206] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[207] & 1) != 0) {
    v80 = v2[209];
    if (v80 != 0) {
      v81 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v81 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v81, v80);
    }
  }
  v82 = v2[202];
  v2[196] = GameData_1fc1458;
  if (v82 != 0) {
    v83 = fw_memory_g_heap_manager;
    v2[203] = v82;
    v84 = 128;
    if (*(_QWORD*)(v83 + 200) == 0) {
      v84 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v83 + v84, v82);
  }
  v2[196] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[197] & 1) != 0) {
    v85 = v2[199];
    if (v85 != 0) {
      v86 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v86 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v86, v85);
    }
  }
  v87 = v2[192];
  v2[186] = GameData_1fc1458;
  if (v87 != 0) {
    v88 = fw_memory_g_heap_manager;
    v2[193] = v87;
    v89 = 128;
    if (*(_QWORD*)(v88 + 200) == 0) {
      v89 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v88 + v89, v87);
  }
  v2[186] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[187] & 1) != 0) {
    v90 = v2[189];
    if (v90 != 0) {
      v91 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v91 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v91, v90);
    }
  }
  v92 = v2[182];
  v2[176] = GameData_1fc1458;
  if (v92 != 0) {
    v93 = fw_memory_g_heap_manager;
    v2[183] = v92;
    v94 = 128;
    if (*(_QWORD*)(v93 + 200) == 0) {
      v94 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v93 + v94, v92);
  }
  v2[176] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[177] & 1) != 0) {
    v95 = v2[179];
    if (v95 != 0) {
      v96 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v96 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v96, v95);
    }
  }
  v97 = v2[172];
  v2[166] = GameData_1fc1458;
  if (v97 != 0) {
    v98 = fw_memory_g_heap_manager;
    v2[173] = v97;
    v99 = 128;
    if (*(_QWORD*)(v98 + 200) == 0) {
      v99 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v98 + v99, v97);
  }
  v2[166] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[167] & 1) != 0) {
    v100 = v2[169];
    if (v100 != 0) {
      v101 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v101 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v101, v100);
    }
  }
  v102 = v2[162];
  v2[156] = GameData_1fc1458;
  if (v102 != 0) {
    v103 = fw_memory_g_heap_manager;
    v2[163] = v102;
    v104 = 128;
    if (*(_QWORD*)(v103 + 200) == 0) {
      v104 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v103 + v104, v102);
  }
  v2[156] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[157] & 1) != 0) {
    v105 = v2[159];
    if (v105 != 0) {
      v106 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v106 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v106, v105);
    }
  }
  v107 = v2[150];
  v2[140] = GameData_1fc1848;
  if (v107 != 0) {
    v108 = fw_memory_g_heap_manager;
    v2[151] = v107;
    v109 = 128;
    if (*(_QWORD*)(v108 + 200) == 0) {
      v109 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v108 + v109, v107);
  }
  v2[140] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[141] & 1) != 0) {
    v110 = v2[143];
    if (v110 != 0) {
      v111 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v111 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v111, v110);
    }
  }
  v112 = v2[136];
  v2[130] = GameData_1fc1458;
  if (v112 != 0) {
    v113 = fw_memory_g_heap_manager;
    v2[137] = v112;
    v114 = 128;
    if (*(_QWORD*)(v113 + 200) == 0) {
      v114 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v113 + v114, v112);
  }
  v2[130] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[131] & 1) != 0) {
    v115 = v2[133];
    if (v115 != 0) {
      v116 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v116 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v116, v115);
    }
  }
  v117 = v2[124];
  v2[114] = GameData_1fc1848;
  if (v117 != 0) {
    v118 = fw_memory_g_heap_manager;
    v2[125] = v117;
    v119 = 128;
    if (*(_QWORD*)(v118 + 200) == 0) {
      v119 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v118 + v119, v117);
  }
  v2[114] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[115] & 1) != 0) {
    v120 = v2[117];
    if (v120 != 0) {
      v121 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v121 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v121, v120);
    }
  }
  v122 = v2[109];
  v2[103] = GameData_1fc1458;
  if (v122 != 0) {
    v123 = fw_memory_g_heap_manager;
    v2[110] = v122;
    v124 = 128;
    if (*(_QWORD*)(v123 + 200) == 0) {
      v124 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v123 + v124, v122);
  }
  v2[103] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[104] & 1) != 0) {
    v125 = v2[106];
    if (v125 != 0) {
      v126 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v126 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v126, v125);
    }
  }
  v127 = v2[99];
  v2[93] = GameData_1fc22d8;
  if (v127 != 0) {
    v128 = fw_memory_g_heap_manager;
    v2[100] = v127;
    v129 = 128;
    if (*(_QWORD*)(v128 + 200) == 0) {
      v129 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v128 + v129, v127);
  }
  v2[93] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[94] & 1) != 0) {
    v130 = v2[96];
    if (v130 != 0) {
      v131 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v131 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v131, v130);
    }
  }
  v132 = v2[89];
  v2[83] = GameData_1fc1458;
  if (v132 != 0) {
    v133 = fw_memory_g_heap_manager;
    v2[90] = v132;
    v134 = 128;
    if (*(_QWORD*)(v133 + 200) == 0) {
      v134 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v133 + v134, v132);
  }
  v2[83] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[84] & 1) != 0) {
    v135 = v2[86];
    if (v135 != 0) {
      v136 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v136 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v136, v135);
    }
  }
  v137 = v2[79];
  v2[73] = GameData_1fc1458;
  if (v137 != 0) {
    v138 = fw_memory_g_heap_manager;
    v2[80] = v137;
    v139 = 128;
    if (*(_QWORD*)(v138 + 200) == 0) {
      v139 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v138 + v139, v137);
  }
  v2[73] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[74] & 1) != 0) {
    v140 = v2[76];
    if (v140 != 0) {
      v141 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v141 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v141, v140);
    }
  }
  v142 = v2[69];
  v2[63] = GameData_1fc1458;
  if (v142 != 0) {
    v143 = fw_memory_g_heap_manager;
    v2[70] = v142;
    v144 = 128;
    if (*(_QWORD*)(v143 + 200) == 0) {
      v144 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v143 + v144, v142);
  }
  v2[63] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[64] & 1) != 0) {
    v145 = v2[66];
    if (v145 != 0) {
      v146 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v146 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v146, v145);
    }
  }
  v147 = v2[59];
  v2[53] = GameData_1fc1458;
  if (v147 != 0) {
    v148 = fw_memory_g_heap_manager;
    v2[60] = v147;
    v149 = 128;
    if (*(_QWORD*)(v148 + 200) == 0) {
      v149 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v148 + v149, v147);
  }
  v2[53] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[54] & 1) != 0) {
    v150 = v2[56];
    if (v150 != 0) {
      v151 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v151 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v151, v150);
    }
  }
  v152 = v2[49];
  v2[44] = GameData_1fc23d8;
  if (v152 != 0) {
    v153 = fw_memory_g_heap_manager;
    v2[50] = v152;
    v154 = 128;
    if (*(_QWORD*)(v153 + 200) == 0) {
      v154 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v153 + v154, v152);
  }
  v2[44] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[45] & 1) != 0) {
    v155 = v2[47];
    if (v155 != 0) {
      v156 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v156 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v156, v155);
    }
  }
  v157 = v2[38];
  v2[28] = GameData_1fc1848;
  if (v157 != 0) {
    v158 = fw_memory_g_heap_manager;
    v2[39] = v157;
    v159 = 128;
    if (*(_QWORD*)(v158 + 200) == 0) {
      v159 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v158 + v159, v157);
  }
  v2[28] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[29] & 1) != 0) {
    v160 = v2[31];
    if (v160 != 0) {
      v161 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v161 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v161, v160);
    }
  }
  v162 = v2[23];
  v2[17] = GameData_1fc1458;
  if (v162 != 0) {
    v163 = fw_memory_g_heap_manager;
    v2[24] = v162;
    v164 = 128;
    if (*(_QWORD*)(v163 + 200) == 0) {
      v164 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v163 + v164, v162);
  }
  v2[17] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[18] & 1) != 0) {
    v165 = v2[20];
    if (v165 != 0) {
      v166 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v166 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v166, v165);
    }
  }
  v167 = v2[13];
  v2[7] = GameData_1fc22d8;
  if (v167 != 0) {
    v168 = fw_memory_g_heap_manager;
    v2[14] = v167;
    v169 = 128;
    if (*(_QWORD*)(v168 + 200) == 0) {
      v169 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v168 + v169, v167);
  }
  v2[7] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[8] & 1) != 0) {
    v170 = v2[10];
    if (v170 != 0) {
      v171 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v171 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v171, v170);
    }
  }
  v172 = v2[4];
  *v2 = gfx_settings_ParamSet_vtable;
  if (v172 != 0) {
    v173 = fw_memory_g_heap_manager;
    v2[5] = v172;
    v174 = 128;
    if (*(_QWORD*)(v173 + 200) == 0) {
      v174 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v173 + v174, v172);
  }
  if ((v2[1] & 1) != 0) {
    v175 = v2[3];
    if (v175 != 0) {
      v176 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v176 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v176, v175);
    }
  }
  return result;
}

#pragma GCC visibility pop
