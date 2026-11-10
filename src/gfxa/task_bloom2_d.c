#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 gxc_NvnStateCache_BindBlendState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindDepthStencilState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindMultisampleState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindPolygonState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(_QWORD);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e778[2];
extern _UNKNOWN** GameData_212e780;
extern int GameData_21fdeb8;
extern int GameData_21fdee0;
extern int GameData_21fdeec;
extern int GameData_21fdef4;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 gfxa_TaskBloom2D_Impl_EntryElement2D_lambda0_Invoke(
    _QWORD* a1, _QWORD* a2, __int64 a3, __int64 a4, __int64* a5);

__int64 gfxa_TaskBloom2D_Impl_EntryElement2D_lambda0_Invoke(
    _QWORD* a1, _QWORD* a2, __int64 a3, __int64 a4, __int64* a5)
{
  _QWORD* v5;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  _QWORD* v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  int v30;
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
  int v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 (**v58)(__int64);
  unsigned int v59;
  __int64 (**v60)(__int64);
  __int64 v61;
  __int64 v62;
  unsigned int v63;
  unsigned int v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 (**v68)(__int64);
  unsigned int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned int v77;
  __int64 v78;
  __int64 (**v79)(__int64);
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 (**v86)(__int64);
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned int v90;
  void (**v91)(__int64, __int64);
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned int v95;
  __int64 v96;
  unsigned int v97;
  __int64 v98;
  void (**v99)(__int64, __int64);
  __int64 v100;
  unsigned int v101;
  unsigned int v102;
  __int64 v103;
  __int64 v104;
  char* v105;
  __int64 v106;
  __int64 v107;
  void (**v108)(__int64, __int64);
  __int64* v109;
  __int64 (**v110)(__int64);
  unsigned int v111;
  __int64 v112;
  __int64 (**v113)(__int64);
  unsigned int v114;
  __int64 v115;
  __int64 v116;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  _QWORD* v124;
  __int64 v125;
  _QWORD* v126;
  __int64 v127;
  _QWORD v128[3];
  int v129;
  __int64 v130;
  int v131;
  __int64 v132;
  int v133;
  __int64 v134;
  int v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  _QWORD v143[2];
  _QWORD v144[2];
  int v145;
  __int64 v146;
  int v147;
  __int64 v148;
  int v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  _QWORD v157[2];

  v5 = (_QWORD*)a1[3];
  v120 = a5[1];
  v121 = *a5;
  v7 = (__int64*)a1[1];
  v124 = (_QWORD*)a1[2];
  v8 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5[1] + 16LL))(v5[1]);
  v150 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
  v151 = v9;
  v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5[2] + 16LL))(v5[2]);
  v152 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
  v153 = v11;
  v12 = &v153;
  v13 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5[3] + 16LL))(v5[3]);
  v154 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 32LL))(v13);
  v155 = v14;
  v15 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5[4] + 16LL))(v5[4]);
  v156 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 32LL))(v15);
  v157[0] = v16;
  v17 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5[1] + 16LL))(v5[1]);
  v119 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 40LL))(v17);
  v143[1] = v119;
  v18 = (__int64*)v5[2];
  v19 = v144;
  v20 = *v18;
  LODWORD(v144[0]) = v21;
  v22 = (*(__int64 (**)(__int64*))(v20 + 16))(v18);
  v144[1] = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 40LL))(v22);
  v23 = v5[3];
  v145 = v24;
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
  v146 = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 40LL))(v25);
  v26 = v5[4];
  v147 = v27;
  v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
  v148 = (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 40LL))(v28);
  v29 = v5[5];
  v149 = v30;
  v31 = (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
  v136 = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 32LL))(v31);
  v137 = v32;
  v33 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5[6] + 16LL))(v5[6]);
  v138 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 32LL))(v33);
  v139 = v34;
  v35 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5[7] + 16LL))(v5[7]);
  v140 = (*(__int64 (**)(__int64))(*(_QWORD*)v35 + 32LL))(v35);
  v141 = v36;
  v37 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5[8] + 16LL))(v5[8]);
  v142 = (*(__int64 (**)(__int64))(*(_QWORD*)v37 + 32LL))(v37);
  v143[0] = v38;
  v39 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5[5] + 16LL))(v5[5]);
  v128[2] = (*(__int64 (**)(__int64))(*(_QWORD*)v39 + 40LL))(v39);
  v40 = v5[6];
  v129 = v41;
  v42 = (*(__int64 (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
  v130 = (*(__int64 (**)(__int64))(*(_QWORD*)v42 + 40LL))(v42);
  v43 = v5[7];
  v131 = v44;
  v45 = (*(__int64 (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
  v132 = (*(__int64 (**)(__int64))(*(_QWORD*)v45 + 40LL))(v45);
  v46 = v5[8];
  v133 = v47;
  v126 = v5;
  v48 = (*(__int64 (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
  v49 = (*(__int64 (**)(__int64))(*(_QWORD*)v48 + 40LL))(v48);
  v50 = *v7;
  v134 = v49;
  v51 = a2[1];
  v135 = v52;
  v118 = *(_QWORD*)(v50 + 13312);
  gxc_NvnStateCache_Reset(v51);
  gxc_NvnStateCache_SetCommandList(a2[1], *a2);
  v53 = a2[1];
  gxc_NvnStateCache_BindDepthStencilState(v53, (unsigned int)GameData_21fdeb8);
  gxc_NvnStateCache_BindBlendState(v53, (unsigned int)GameData_21fdee0);
  gxc_NvnStateCache_BindPolygonState(v53, (unsigned int)GameData_21fdf08);
  gxc_NvnStateCache_BindMultisampleState(v53, (unsigned int)GameData_21fdf14);
  gxc_NvnStateCache_ClearCommandList(a2[1]);
  v54 = &v7[2 * *((int*)v7 + 66)];
  (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
      *(_QWORD*)*a2 + 224LL))(*a2, 2, 0, v54[34], v54[35]);
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a2 + 264LL))(*a2, 1);
  v55 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v5 + 16LL))(*v5);
  v56 = (*(__int64 (**)(__int64))(*(_QWORD*)v55 + 32LL))(v55);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v56, v57);
  v58 = (__int64 (**)(__int64))GameData_212e778[0];
  v59 = (*(__int64 (**)(__int64))GameData_212e778[0])(v56);
  v60 = (__int64 (**)(__int64))GameData_212e780;
  LODWORD(v56) = ((__int64 (*)(__int64))*GameData_212e780)(v56);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, v59, (unsigned int)v56);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, v59, (unsigned int)v56);
  v61 = *a2;
  v128[0] = 0;
  v128[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v61 + 144LL))(v61, 0, v128);
  v62 = v150;
  v63 = (*v58)(v150);
  v64 = (*v60)(v62);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, v63, v64);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, v63, v64);
  v122 = v151;
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v62);
  v65 = *a2;
  v128[0] = 0;
  v128[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v65 + 144LL))(v65, 0, v128);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v136,
                                                                 v137);
  v66 = *a2;
  v128[0] = 0;
  v128[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v66 + 144LL))(v66, 0, v128);
  v67 = v152;
  v68 = v58;
  LODWORD(v58) = (*v58)(v152);
  v69 = (*v60)(v67);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, (unsigned int)v58, v69);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, (unsigned int)v58, v69);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v67,
                                                                 v153);
  v70 = *a2;
  v128[0] = 0;
  v128[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v70 + 144LL))(v70, 0, v128);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v138,
                                                                 v139);
  v71 = *a2;
  v128[0] = 0;
  v128[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v71 + 144LL))(v71, 0, v128);
  v72 = v154;
  LODWORD(v58) = (*v68)(v154);
  v73 = (*v60)(v72);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, (unsigned int)v58, v73);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, (unsigned int)v58, v73);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v72,
                                                                 v155);
  v74 = *a2;
  v128[0] = 0;
  v128[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v74 + 144LL))(v74, 0, v128);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v140,
                                                                 v141);
  v75 = *a2;
  v128[0] = 0;
  v128[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v75 + 144LL))(v75, 0, v128);
  v76 = v156;
  LODWORD(v58) = (*v68)(v156);
  v77 = (*v60)(v76);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, (unsigned int)v58, v77);
  v78 = v77;
  v79 = v60;
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, (unsigned int)v58, v78);
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 96LL))(*a2, v76,
                                                                v157[0]);
  v80 = *a2;
  v128[0] = 0;
  v128[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v80 + 144LL))(v80, 0, v128);
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 96LL))(*a2, v142,
                                                                v143[0]);
  v81 = *a2;
  v128[0] = 0;
  v128[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v81 + 144LL))(v81, 0, v128);
  v82 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v126 + 16LL))(*v126);
  v83 = (*(__int64 (**)(__int64))(*(_QWORD*)v82 + 32LL))(v82);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v83, v84);
  LODWORD(v58) = (*v68)(v83);
  LODWORD(v83) = (*v60)(v83);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, (unsigned int)v58, (unsigned int)v83);
  v85 = (unsigned int)v58;
  v86 = v68;
  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, v85, (unsigned int)v83);
  v87 = 3;
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
      *a2, 3, *(_QWORD*)(v7[17] + 144));
  v88 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v124 + 16LL))(*v124);
  v89 = (*(__int64 (**)(__int64))(*(_QWORD*)v88 + 40LL))(v88);
  (*(void (**)(_QWORD, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a2 + 248LL))(*a2, 2, 0, v89, v90, *((unsigned int*)v7 + 32));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 272LL))(*a2, 3, 0);
  v91 = (void (**)(__int64, __int64))GameData_212e738;
  ((void (*)(__int64, __int64))*GameData_212e738)(*a2 + 8LL, 18);
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
      *a2, 3, *(_QWORD*)(v7[25] + 144));
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v62,
                                                                 v122);
  LODWORD(v68) = (*v68)(v62);
  LODWORD(v62) = (*v79)(v62);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, (unsigned int)v68, (unsigned int)v62);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, (unsigned int)v68, (unsigned int)v62);
  v92 = *a2;
  v93 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v126 + 16LL))(*v126);
  v94 = (*(__int64 (**)(__int64))(*(_QWORD*)v93 + 40LL))(v93);
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v92 + 248LL))(v92, 2, 0, v94, v95, *((unsigned int*)v7 + 32));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 272LL))(*a2, 3, 0);
  (*v91)(*a2 + 8LL, 18);
  do {
    v96 = *(v12 - 1);
    (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v96,
                                                                   *v12);
    v97 = (*v86)(v96);
    LODWORD(v96) = (*v79)(v96);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 72LL))(*a2, 0, 0, v97, (unsigned int)v96);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 88LL))(*a2, 0, 0, v97, (unsigned int)v96);
    (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 248LL))(*a2, 2, 0, *(v19 - 1), *v19,
                                *((unsigned int*)v7 + 32));
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 272LL))(*a2, 3, 0);
    (*v91)(*a2 + 8LL, 18);
    --v87;
    v19 += 2;
    v12 += 2;
  } while (v87 != 0);
  v98 = 0;
  v127 = 0;
  v99 = v91;
  while (1) {
    v100 = *(_QWORD*)((char*)&v143[-1] + v98);
    v101 = (*v86)(v100);
    v102 = (*v79)(v100);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 72LL))(*a2, 0, 0, v101, v102);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 88LL))(*a2, 0, 0, v101, v102);
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
        *a2, 3, *(_QWORD*)(v7[21] + 144));
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 96LL))(
        *a2, v100, *(_QWORD*)((char*)v143 + v98));
    v103 = *(__int64*)((char*)&v148 + v98);
    v125 = *(__int64*)((char*)&v148 + v98 + 8);
    (*(void (**)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD*)*a2 + 248LL))(
        *a2, 2, 0, v103);
    v104 = (__int64)&v7[2 * SLODWORD(v7[v127 + 82]) + v127];
    (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 224LL))(*a2, 2, 1, *(_QWORD*)(v104 + 664),
                                *(_QWORD*)(v104 + 672));
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 272LL))(*a2, 3, 0);
    (*v99)(*a2 + 8LL, 18);
    v105 = (char*)v157 + v98;
    (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 96LL))(
        *a2, *(_QWORD*)((char*)&v157[-1] + v98), *(_QWORD*)((char*)v157 + v98));
    (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 248LL))(*a2, 2, 0, *(__int64*)((char*)&v134 + v98),
                                *(__int64*)((char*)&v134 + v98 + 8),
                                *((unsigned int*)v7 + 32));
    v106 = (__int64)&v7[2 * SLODWORD(v7[v127 + 89]) + v127];
    (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 224LL))(*a2, 2, 1, *(_QWORD*)(v106 + 720),
                                *(_QWORD*)(v106 + 728));
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 272LL))(*a2, 3, 0);
    if (v127 == -42) {
      break;
    }
    (*v99)(*a2 + 8LL, 18);
    v107 = *((_QWORD*)v105 - 3);
    v108 = v99;
    v109 = v7;
    v110 = v86;
    v111 = (*v86)(v107);
    v123 = v103;
    v112 = v98;
    v113 = v79;
    v114 = (*v79)(v107);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 72LL))(*a2, 0, 0, v111, v114);
    v115 = v111;
    v86 = v110;
    v7 = v109;
    v99 = v108;
    v116 = v114;
    v79 = v113;
    (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
        *(_QWORD*)*a2 + 88LL))(*a2, 0, 0, v115, v116);
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
        *a2, 3, *(_QWORD*)(v7[27] + 144));
    gxc_NvnStateCache_SetCommandList(a2[1], *a2);
    gxc_NvnStateCache_BindBlendState(a2[1], (unsigned int)GameData_21fdef4);
    gxc_NvnStateCache_ClearCommandList(a2[1]);
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 96LL))(
        *a2, v107, *((_QWORD*)v105 - 2));
    (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
        *(_QWORD*)*a2 + 248LL))(*a2, 2, 0, v123, v125,
                                *((unsigned int*)v7 + 32));
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 272LL))(*a2, 3, 0);
    (*v108)(*a2 + 8LL, 18);
    v98 = v112 - 16;
    v127 -= 14;
  }
  (*v99)(*a2 + 8LL, 18);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v121,
                                                                 v120);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, (unsigned int)v118, HIDWORD(v118));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, (unsigned int)v118, HIDWORD(v118));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
      *a2, 3, *(_QWORD*)(v7[29] + 144));
  gxc_NvnStateCache_SetCommandList(a2[1], *a2);
  gxc_NvnStateCache_BindBlendState(a2[1], (unsigned int)GameData_21fdeec);
  gxc_NvnStateCache_ClearCommandList(a2[1]);
  (*(void (**)(_QWORD, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a2 + 248LL))(*a2, 2, 0, v119, v144[0],
                              *((unsigned int*)v7 + 32));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 272LL))(*a2, 3, 0);
  return gxc_NvnStateCache_Reset(a2[1]);
}

#pragma GCC visibility pop
