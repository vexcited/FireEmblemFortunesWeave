#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
struct PseudoSret {
  _QWORD words[3];
};

extern int16x8_t SdkData_bcb9e0;
extern char SdkData_c1d7a4[25];
extern _DWORD SdkData_c1d910[3];
extern float SdkData_c1f948[1447];
extern int* SdkData_e877c0;
__int64 SdkRoutine_242a60(_QWORD);
__int64 SdkRoutine_242c00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_242e60(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_2e2790(_QWORD);
__int64 SdkRoutine_2e2950(_QWORD);
__int64 SdkRoutine_375f60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_42f340(_QWORD);
__int64 SdkRoutine_433470(_QWORD);
__int64 SdkRoutine_433960(_QWORD);
__int64 SdkRoutine_857100(_QWORD, _QWORD);
__int64 SdkRoutine_857150(_QWORD);
__int64 SdkRoutine_858db0(_QWORD);
__int64 SdkRoutine_85a870(_QWORD);
__int64 SdkRoutine_85a880(_QWORD, _QWORD);
struct PseudoSret SdkRoutine_85a9c0(void);
__int64 SdkRoutine_862970(_QWORD);
__int64 SdkRoutine_862aa0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_863030(void);
__int64 SdkRoutine_863040(_QWORD);
__int64 SdkRoutine_863050(_QWORD);
__int64 SdkRoutine_863060(_QWORD);
__int64 SdkRoutine_863070(_QWORD);
__int64 SdkRoutine_863080(_QWORD);
__int64 SdkRoutine_863090(_QWORD);
__int64 SdkRoutine_8630a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_863470(_QWORD, _QWORD);
__int64 SdkRoutine_863590(_QWORD);
__int64 SdkRoutine_867500(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_869560(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_869570(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_869c30(_QWORD);
__int64 SdkRoutine_869c80(_QWORD);

int16x8_t* SdkHr_5f0cc(int16x8_t* a1)
{
  int16x8_t* v1;
  int16x8_t v2;
  int16x8_t v3;
  int16x8_t v4;
  int16x8_t v5;
  int16x8_t v6;
  int16x8_t v7;
  int16x8_t v8;
  int16x8_t v9;
  int32x4_t v10;
  int32x4_t v11;
  int32x4_t v12;
  int32x4_t v13;
  int32x4_t v14;
  int32x4_t v15;
  int32x4_t v16;
  int32x4_t v17;
  int64x2_t v18;
  int64x2_t v19;
  int64x2_t v20;
  int64x2_t v21;
  int64x2_t v22;
  int64x2_t v23;
  int64x2_t v24;
  int64x2_t v25;
  int16x8_t v26;
  int16x8_t v27;
  int16x8_t v28;
  int16x8_t v29;
  int16x8_t v30;
  int16x8_t v31;
  int16x8_t v32;
  int16x8_t v33;
  int16x8_t v34;
  int16x8_t v35;
  int16x8_t v36;
  int16x8_t v37;
  int16x8_t v38;
  int16x8_t v39;
  int16x8_t v40;
  int16x8_t v41;
  int16x8_t v42;
  int16x8_t v43;
  int16x8_t v44;
  int16x8_t v45;
  int16x8_t v46;
  int16x8_t v47;
  int16x8_t v48;
  int32x4_t v49;
  int32x4_t v50;
  int16x8_t v51;
  int16x8_t v52;
  int16x8_t v53;
  int16x8_t v54;
  int16x8_t v55;
  int16x8_t v56;
  int32x4_t v57;
  int32x4_t v58;
  int32x4_t v59;
  int32x4_t v60;
  int32x4_t v61;
  int32x4_t v62;
  int32x4_t v63;
  int32x4_t v64;
  int32x4_t v65;
  int32x4_t v66;
  int32x4_t v67;
  int32x4_t v68;
  int16x8_t v69;
  int16x8_t v70;
  int16x8_t v71;
  int16x8_t v72;
  int32x4_t v73;
  int32x4_t v74;
  int32x4_t v75;
  int32x4_t v76;
  int32x4_t v77;
  int32x4_t v78;
  int32x4_t v79;
  int32x4_t v80;
  int64x2_t v81;
  int64x2_t v82;
  int64x2_t v83;
  int64x2_t v84;
  int64x2_t v85;
  int64x2_t v86;
  int64x2_t v87;
  int64x2_t v88;
  int16x8_t v89;
  int16x8_t v90;
  int16x8_t v91;
  int16x8_t v92;
  int16x8_t v93;
  int16x8_t v94;
  int16x8_t v95;
  int16x8_t v96;
  int16x8_t v97;
  int16x8_t v98;
  int16x8_t v99;
  int16x8_t v100;
  int16x8_t v101;
  int16x8_t v102;
  int16x8_t v103;
  int16x8_t v104;
  int16x8_t v105;
  int16x8_t v106;
  int16x8_t v107;
  int16x8_t v108;
  int16x8_t v109;
  int16x8_t v110;
  int16x8_t v111;
  int32x4_t v112;
  int32x4_t v113;
  int32x4_t v114;
  int32x4_t v115;
  int16x8_t v116;
  int16x8_t v117;
  int16x8_t v118;
  int16x8_t v119;
  int16x8_t v120;
  int32x4_t v121;
  int32x4_t v122;
  int32x4_t v123;
  int32x4_t v124;
  int32x4_t v125;
  int32x4_t v126;
  int32x4_t v127;
  int32x4_t v128;
  int32x4_t v129;
  int32x4_t v130;
  int32x4_t v131;
  int32x4_t v132;
  int16x8_t* result;

  v2 = *a1;
  v3 = a1[1];
  v4 = a1[2];
  v5 = a1[3];
  v1 = a1 + 4;
  v6 = *v1;
  v7 = v1[1];
  v8 = v1[2];
  v9 = v1[3];
  v1 -= 4;
  v10 = vtrn1q_s16(v2, v3);
  v11 = vtrn1q_s16(v4, v5);
  v12 = vtrn1q_s16(v6, v7);
  v13 = vtrn1q_s16(v8, v9);
  v14 = vtrn2q_s16(v2, v3);
  v15 = vtrn2q_s16(v4, v5);
  v16 = vtrn2q_s16(v6, v7);
  v17 = vtrn2q_s16(v8, v9);
  v18 = vtrn1q_s32(v12, v13);
  v19 = vtrn2q_s32(v12, v13);
  v20 = vtrn1q_s32(v10, v11);
  v21 = vtrn2q_s32(v10, v11);
  v22 = vtrn1q_s32(v14, v15);
  v23 = vtrn2q_s32(v14, v15);
  v24 = vtrn2q_s32(v16, v17);
  v25 = vtrn1q_s32(v16, v17);
  v26 = vtrn2q_s64(v21, v19);
  v27 = vtrn1q_s64(v20, v18);
  v28 = vtrn1q_s64(v22, v25);
  v29 = vtrn2q_s64(v23, v24);
  v30 = vtrn1q_s64(v21, v19);
  v31 = vtrn2q_s64(v20, v18);
  v32 = vtrn1q_s64(v23, v24);
  v33 = vtrn2q_s64(v22, v25);
  v34 = vaddq_s16(v27, v29);
  v35 = vsubq_s16(v27, v29);
  v36 = vaddq_s16(v28, v26);
  v37 = vsubq_s16(v28, v26);
  v38 = vaddq_s16(v30, v33);
  v39 = vsubq_s16(v30, v33);
  v40 = vaddq_s16(v32, v31);
  v41 = vsubq_s16(v32, v31);
  v42 = vaddq_s16(v34, v40);
  v43 = vsubq_s16(v34, v40);
  v44 = vaddq_s16(v36, v38);
  v45 = vsubq_s16(v36, v38);
  v46 = vaddq_s16(v45, v43);
  v47 = vshlq_n_s16(vaddq_s16(v42, v44), 2u);
  v48 = vshlq_n_s16(vsubq_s16(v42, v44), 2u);
  v49 = vmull_lane_s16((int16x4_t)((uint64_t*)&v46)[0],
                       (int16x4_t)0x187E1151F384098ELL, 2);
  v50 = vmull_high_lane_s16(v46, (int16x4_t)0x187E1151F384098ELL, 2);
  v51 = vrshrn_high_n_s32(
      vrshrn_n_s32(vmlal_lane_s16(v49, (int16x4_t)((uint64_t*)&v43)[0],
                                  (int16x4_t)0x187E1151F384098ELL, 3),
                   0xBu),
      vmlal_high_lane_s16(v50, v43, (int16x4_t)0x187E1151F384098ELL, 3), 0xBu);
  v52 = vrshrn_high_n_s32(
      vrshrn_n_s32(vmlal_laneq_s16(v49, (int16x4_t)((uint64_t*)&v45)[0],
                                   SdkData_bcb9e0, 7),
                   0xBu),
      vmlal_high_laneq_s16(v50, v45, SdkData_bcb9e0, 7), 0xBu);
  v53 = vaddq_s16(v41, v35);
  v54 = vaddq_s16(v39, v37);
  v55 = vaddq_s16(v41, v37);
  v56 = vaddq_s16(v39, v35);
  v57 = vmlal_laneq_s16(
      vmull_laneq_s16((int16x4_t)((uint64_t*)&v55)[0], SdkData_bcb9e0, 5),
      (int16x4_t)((uint64_t*)&v56)[0], SdkData_bcb9e0, 5);
  v58 = vmlal_high_laneq_s16(vmull_high_laneq_s16(v55, SdkData_bcb9e0, 5), v56,
                             SdkData_bcb9e0, 5);
  v59 = vmull_high_laneq_s16(v53, SdkData_bcb9e0, 4);
  v60 = vmull_high_lane_s16(v54, (int16x4_t)0x6254ADFD41B3C13BLL, 2);
  v61 = vmull_high_lane_s16(v55, (int16x4_t)0x6254ADFD41B3C13BLL, 0);
  v62 = vmull_high_lane_s16(v56, (int16x4_t)0x187E1151F384098ELL, 1);
  v63 = vmull_laneq_s16((int16x4_t)((uint64_t*)&v53)[0], SdkData_bcb9e0, 4);
  v64 = vmull_lane_s16((int16x4_t)((uint64_t*)&v54)[0],
                       (int16x4_t)0x6254ADFD41B3C13BLL, 2);
  v65 = vaddq_s32(vmull_lane_s16((int16x4_t)((uint64_t*)&v55)[0],
                                 (int16x4_t)0x6254ADFD41B3C13BLL, 0),
                  v57);
  v66 = vaddq_s32(v61, v58);
  v67 = vaddq_s32(vmull_lane_s16((int16x4_t)((uint64_t*)&v56)[0],
                                 (int16x4_t)0x187E1151F384098ELL, 1),
                  v57);
  v68 = vaddq_s32(v62, v58);
  v69 = vrshrn_high_n_s32(
      vrshrn_n_s32(vaddq_s32(vaddq_s32(vmull_lane_s16(
                                           (int16x4_t)((uint64_t*)&v41)[0],
                                           (int16x4_t)0x187E1151F384098ELL, 0),
                                       v63),
                             v65),
                   0xBu),
      vaddq_s32(vaddq_s32(vmull_high_lane_s16(
                              v41, (int16x4_t)0x187E1151F384098ELL, 0),
                          v59),
                v66),
      0xBu);
  v70 = vrshrn_high_n_s32(
      vrshrn_n_s32(vaddq_s32(vaddq_s32(vmull_lane_s16(
                                           (int16x4_t)((uint64_t*)&v39)[0],
                                           (int16x4_t)0x6254ADFD41B3C13BLL, 1),
                                       v64),
                             v67),
                   0xBu),
      vaddq_s32(vaddq_s32(vmull_high_lane_s16(
                              v39, (int16x4_t)0x6254ADFD41B3C13BLL, 1),
                          v60),
                v68),
      0xBu);
  v71 = vrshrn_high_n_s32(
      vrshrn_n_s32(vaddq_s32(vaddq_s32(vmull_lane_s16(
                                           (int16x4_t)((uint64_t*)&v37)[0],
                                           (int16x4_t)0x6254ADFD41B3C13BLL, 3),
                                       v65),
                             v64),
                   0xBu),
      vaddq_s32(vaddq_s32(vmull_high_lane_s16(
                              v37, (int16x4_t)0x6254ADFD41B3C13BLL, 3),
                          v66),
                v60),
      0xBu);
  v72 = vrshrn_high_n_s32(
      vrshrn_n_s32(
          vaddq_s32(vaddq_s32(vmull_laneq_s16((int16x4_t)((uint64_t*)&v35)[0],
                                              SdkData_bcb9e0, 6),
                              v67),
                    v63),
          0xBu),
      vaddq_s32(vaddq_s32(vmull_high_laneq_s16(v35, SdkData_bcb9e0, 6), v68),
                v59),
      0xBu);
  v73 = vtrn1q_s16(v47, v72);
  v74 = vtrn1q_s16(v51, v71);
  v75 = vtrn1q_s16(v48, v70);
  v76 = vtrn1q_s16(v52, v69);
  v77 = vtrn2q_s16(v47, v72);
  v78 = vtrn2q_s16(v51, v71);
  v79 = vtrn2q_s16(v48, v70);
  v80 = vtrn2q_s16(v52, v69);
  v81 = vtrn1q_s32(v75, v76);
  v82 = vtrn2q_s32(v75, v76);
  v83 = vtrn1q_s32(v73, v74);
  v84 = vtrn2q_s32(v73, v74);
  v85 = vtrn1q_s32(v77, v78);
  v86 = vtrn2q_s32(v77, v78);
  v87 = vtrn2q_s32(v79, v80);
  v88 = vtrn1q_s32(v79, v80);
  v89 = vtrn2q_s64(v84, v82);
  v90 = vtrn1q_s64(v83, v81);
  v91 = vtrn1q_s64(v85, v88);
  v92 = vtrn2q_s64(v86, v87);
  v93 = vtrn1q_s64(v84, v82);
  v94 = vtrn2q_s64(v83, v81);
  v95 = vtrn1q_s64(v86, v87);
  v96 = vtrn2q_s64(v85, v88);
  v97 = vaddq_s16(v90, v92);
  v98 = vsubq_s16(v90, v92);
  v99 = vaddq_s16(v91, v89);
  v100 = vsubq_s16(v91, v89);
  v101 = vaddq_s16(v93, v96);
  v102 = vsubq_s16(v93, v96);
  v103 = vaddq_s16(v95, v94);
  v104 = vsubq_s16(v95, v94);
  v105 = vaddq_s16(v97, v103);
  v106 = vsubq_s16(v97, v103);
  v107 = vaddq_s16(v99, v101);
  v108 = vsubq_s16(v99, v101);
  v109 = vaddq_s16(v108, v106);
  v110 = vrshrq_n_s16(vaddq_s16(v105, v107), 2u);
  v111 = vrshrq_n_s16(vsubq_s16(v105, v107), 2u);
  v112 = vmull_lane_s16((int16x4_t)((uint64_t*)&v109)[0],
                        (int16x4_t)0x187E1151F384098ELL, 2);
  v113 = vmull_high_lane_s16(v109, (int16x4_t)0x187E1151F384098ELL, 2);
  v114 = vmlal_lane_s16(v112, (int16x4_t)((uint64_t*)&v106)[0],
                        (int16x4_t)0x187E1151F384098ELL, 3);
  v115 = vmlal_high_lane_s16(v113, v106, (int16x4_t)0x187E1151F384098ELL, 3);
  v116 = vrshrn_high_n_s32(
      vrshrn_n_s32(vmlal_laneq_s16(v112, (int16x4_t)((uint64_t*)&v108)[0],
                                   SdkData_bcb9e0, 7),
                   0xFu),
      vmlal_high_laneq_s16(v113, v108, SdkData_bcb9e0, 7), 0xFu);
  v117 = vaddq_s16(v104, v98);
  v118 = vaddq_s16(v102, v100);
  v119 = vaddq_s16(v104, v100);
  v120 = vaddq_s16(v102, v98);
  v121 = vmlal_laneq_s16(
      vmull_laneq_s16((int16x4_t)((uint64_t*)&v119)[0], SdkData_bcb9e0, 5),
      (int16x4_t)((uint64_t*)&v120)[0], SdkData_bcb9e0, 5);
  v122 = vmlal_high_laneq_s16(vmull_high_laneq_s16(v119, SdkData_bcb9e0, 5),
                              v120, SdkData_bcb9e0, 5);
  v123 = vmull_high_laneq_s16(v117, SdkData_bcb9e0, 4);
  v124 = vmull_high_lane_s16(v118, (int16x4_t)0x6254ADFD41B3C13BLL, 2);
  v125 = vmull_high_lane_s16(v119, (int16x4_t)0x6254ADFD41B3C13BLL, 0);
  v126 = vmull_high_lane_s16(v120, (int16x4_t)0x187E1151F384098ELL, 1);
  v127 = vmull_laneq_s16((int16x4_t)((uint64_t*)&v117)[0], SdkData_bcb9e0, 4);
  v128 = vmull_lane_s16((int16x4_t)((uint64_t*)&v118)[0],
                        (int16x4_t)0x6254ADFD41B3C13BLL, 2);
  v129 = vaddq_s32(vmull_lane_s16((int16x4_t)((uint64_t*)&v119)[0],
                                  (int16x4_t)0x6254ADFD41B3C13BLL, 0),
                   v121);
  v130 = vaddq_s32(v125, v122);
  v131 = vaddq_s32(vmull_lane_s16((int16x4_t)((uint64_t*)&v120)[0],
                                  (int16x4_t)0x187E1151F384098ELL, 1),
                   v121);
  v132 = vaddq_s32(v126, v122);
  *v1 = v110;
  v1[1] = vrshrn_high_n_s32(
      vrshrn_n_s32(
          vaddq_s32(vaddq_s32(vmull_laneq_s16((int16x4_t)((uint64_t*)&v98)[0],
                                              SdkData_bcb9e0, 6),
                              v131),
                    v127),
          0xFu),
      vaddq_s32(vaddq_s32(vmull_high_laneq_s16(v98, SdkData_bcb9e0, 6), v132),
                v123),
      0xFu);
  v1[2] = vrshrn_high_n_s32(vrshrn_n_s32(v114, 0xFu), v115, 0xFu);
  v1[3] = vrshrn_high_n_s32(
      vrshrn_n_s32(vaddq_s32(vaddq_s32(vmull_lane_s16(
                                           (int16x4_t)((uint64_t*)&v100)[0],
                                           (int16x4_t)0x6254ADFD41B3C13BLL, 3),
                                       v129),
                             v128),
                   0xFu),
      vaddq_s32(vaddq_s32(vmull_high_lane_s16(
                              v100, (int16x4_t)0x6254ADFD41B3C13BLL, 3),
                          v130),
                v124),
      0xFu);
  result = v1 + 4;
  *result = v111;
  result[1] = vrshrn_high_n_s32(
      vrshrn_n_s32(vaddq_s32(vaddq_s32(vmull_lane_s16(
                                           (int16x4_t)((uint64_t*)&v102)[0],
                                           (int16x4_t)0x6254ADFD41B3C13BLL, 1),
                                       v128),
                             v131),
                   0xFu),
      vaddq_s32(vaddq_s32(vmull_high_lane_s16(
                              v102, (int16x4_t)0x6254ADFD41B3C13BLL, 1),
                          v124),
                v132),
      0xFu);
  result[2] = v116;
  result[3] = vrshrn_high_n_s32(
      vrshrn_n_s32(vaddq_s32(vaddq_s32(vmull_lane_s16(
                                           (int16x4_t)((uint64_t*)&v104)[0],
                                           (int16x4_t)0x187E1151F384098ELL, 0),
                                       v127),
                             v129),
                   0xFu),
      vaddq_s32(vaddq_s32(vmull_high_lane_s16(
                              v104, (int16x4_t)0x187E1151F384098ELL, 0),
                          v123),
                v130),
      0xFu);
  return result;
}

int16x8_t* SdkHr_5f450(int16x8_t* a1)
{
  int16x8_t* v1;
  int16x8_t v2;
  int16x8_t v3;
  int16x8_t v4;
  int16x8_t v5;
  int16x8_t v6;
  int16x8_t v7;
  int16x8_t v8;
  int16x8_t v9;
  __int64 v10;
  int16x8_t* v11;
  int32x4_t v12;
  int32x4_t v13;
  int32x4_t v14;
  int32x4_t v15;
  int32x4_t v16;
  int32x4_t v17;
  int32x4_t v18;
  int32x4_t v19;
  int64x2_t v20;
  int64x2_t v21;
  int64x2_t v22;
  int64x2_t v23;
  int64x2_t v24;
  int64x2_t v25;
  int64x2_t v26;
  int64x2_t v27;
  int16x8_t v28;
  int16x8_t v29;
  int16x8_t v30;
  int16x8_t v31;
  int16x8_t v32;
  int16x8_t v33;
  int16x8_t v34;
  int16x8_t v35;
  int16x8_t v36;
  int16x8_t v37;
  int16x8_t v38;
  int16x8_t v39;
  int16x8_t v40;
  int16x8_t v41;
  int16x8_t v42;
  int16x8_t v43;
  int16x8_t v44;
  int16x8_t v45;
  int16x8_t v46;
  int16x8_t v47;
  int16x8_t v48;
  int16x8_t v49;
  int16x8_t v50;
  int16x8_t v51;
  int16x8_t v52;
  int16x8_t v53;
  int16x8_t v54;
  int16x8_t v55;
  int16x8_t* result;

  v2 = *a1;
  v3 = a1[1];
  v4 = a1[2];
  v5 = a1[3];
  v1 = a1 + 4;
  v6 = *v1;
  v7 = v1[1];
  v8 = v1[2];
  v9 = v1[3];
  v10 = 2;
  v11 = v1 - 4;
  do {
    v12 = vtrn1q_s16(v2, v3);
    v13 = vtrn1q_s16(v4, v5);
    v14 = vtrn1q_s16(v6, v7);
    v15 = vtrn1q_s16(v8, v9);
    v16 = vtrn2q_s16(v2, v3);
    v17 = vtrn2q_s16(v4, v5);
    v18 = vtrn2q_s16(v6, v7);
    v19 = vtrn2q_s16(v8, v9);
    v20 = vtrn1q_s32(v14, v15);
    v21 = vtrn2q_s32(v14, v15);
    v22 = vtrn1q_s32(v12, v13);
    v23 = vtrn2q_s32(v12, v13);
    v24 = vtrn1q_s32(v16, v17);
    v25 = vtrn2q_s32(v16, v17);
    v26 = vtrn2q_s32(v18, v19);
    v27 = vtrn1q_s32(v18, v19);
    v28 = vtrn2q_s64(v23, v21);
    v29 = vtrn1q_s64(v22, v20);
    v30 = vtrn1q_s64(v24, v27);
    v31 = vtrn2q_s64(v25, v26);
    v32 = vtrn1q_s64(v23, v21);
    v33 = vtrn2q_s64(v22, v20);
    v34 = vtrn1q_s64(v25, v26);
    v35 = vtrn2q_s64(v24, v27);
    --v10;
    v36 = vaddq_s16(v34, v33);
    v37 = vsubq_s16(v32, v35);
    v38 = vaddq_s16(v32, v35);
    v39 = vsubq_s16(v30, v28);
    v40 = vaddq_s16(v30, v28);
    v41 = vsubq_s16(v29, v31);
    v42 = vaddq_s16(v29, v31);
    v43 = vsubq_s16(v42, v36);
    v44 = vaddq_s16(v40, v38);
    v45 = vaddq_s16(v42, v36);
    v46 = vqdmulhq_lane_s16(vaddq_s16(vsubq_s16(v40, v38), v43),
                            (int16x4_t)0x27005A8045803100LL, 2);
    v47 = vaddq_s16(vsubq_s16(v34, v33), v37);
    v2 = vaddq_s16(v45, v44);
    v6 = vsubq_s16(v45, v44);
    v48 = vaddq_s16(v37, v39);
    v49 = vaddq_s16(v39, v41);
    v50 = vqdmulhq_lane_s16(v48, (int16x4_t)0x27005A8045803100LL, 2);
    v4 = vaddq_s16(v43, v46);
    v51 = vqdmulhq_lane_s16(vsubq_s16(v47, v49),
                            (int16x4_t)0x27005A8045803100LL, 0);
    v8 = vsubq_s16(v43, v46);
    v52 = vaddq_s16(v41, v50);
    v53 = vsubq_s16(v41, v50);
    v54 = vaddq_s16(vqdmulhq_lane_s16(v47, (int16x4_t)0x27005A8045803100LL, 1),
                    v51);
    v55 = vaddq_s16(vaddq_s16(v49, v51),
                    vqdmulhq_lane_s16(v49, (int16x4_t)0x27005A8045803100LL, 3));
    v7 = vaddq_s16(v53, v54);
    v5 = vsubq_s16(v53, v54);
    v3 = vaddq_s16(v52, v55);
    v9 = vsubq_s16(v52, v55);
  } while (v10 != 0);
  *v11 = v2;
  v11[1] = v3;
  v11[2] = v4;
  v11[3] = v5;
  result = v11 + 4;
  *result = v6;
  result[1] = v7;
  result[2] = v8;
  result[3] = v9;
  return result;
}

int16x8_t* SdkHr_5f56c(int16x8_t* result, uint16x8_t* a2, int16x8_t* a3)
{
  __int64 v3;
  int16x8_t* v4;
  int16x8_t* v5;
  int16x8_t v6;
  int16x8_t v7;
  int16x8_t v8;
  int16x8_t v9;
  int16x8_t v10;
  int16x8_t v11;
  int16x8_t v12;
  int16x8_t v13;
  uint16x8_t v14;
  uint16x8_t v15;
  uint16x8_t v16;
  uint16x8_t v17;
  uint16x8_t v18;
  uint16x8_t v19;
  uint16x8_t v20;
  uint16x8_t v21;
  int16x8_t v22;
  int16x8_t v23;
  int16x8_t v24;
  int16x8_t v25;
  int8x16_t v26;
  int8x16_t v27;
  int8x16_t v28;
  int8x16_t v29;

  v3 = 2;
  v4 = a2 + 8;
  v5 = a2 + 24;
  do {
    --v3;
    v6 = *a3;
    v7 = a3[1];
    v8 = a3[2];
    v9 = a3[3];
    a3 += 4;
    v10 = *v4;
    v11 = v4[1];
    v12 = v4[2];
    v13 = v4[3];
    v4 += 4;
    v14 = *a2;
    v15 = a2[1];
    v16 = a2[2];
    v17 = a2[3];
    a2 += 4;
    v18 = vaddq_s16(vabsq_s16(v6), v10);
    v19 = vaddq_s16(vabsq_s16(v7), v11);
    v20 = vaddq_s16(vabsq_s16(v8), v12);
    v21 = vaddq_s16(vabsq_s16(v9), v13);
    v22 = *v5;
    v23 = v5[1];
    v24 = v5[2];
    v25 = v5[3];
    v5 += 4;
    v26 = vshrq_n_s16(v6, 0xFu);
    v27 = vshrq_n_s16(v7, 0xFu);
    v28 = vshrq_n_s16(v8, 0xFu);
    v29 = vshrq_n_s16(v9, 0xFu);
    *result = vsubq_s16(
        veorq_s8(vshlq_u16(vshrn_high_n_s32(
                               vshrn_n_s32(
                                   vmull_u16((uint16x4_t)((uint64_t*)&v18)[0],
                                             (uint16x4_t)((uint64_t*)&v14)[0]),
                                   0x10u),
                               vmull_high_u16(v18, v14), 0x10u),
                           vnegq_s16(v22)),
                 v26),
        v26);
    result[1] = vsubq_s16(
        veorq_s8(vshlq_u16(vshrn_high_n_s32(
                               vshrn_n_s32(
                                   vmull_u16((uint16x4_t)((uint64_t*)&v19)[0],
                                             (uint16x4_t)((uint64_t*)&v15)[0]),
                                   0x10u),
                               vmull_high_u16(v19, v15), 0x10u),
                           vnegq_s16(v23)),
                 v27),
        v27);
    result[2] = vsubq_s16(
        veorq_s8(vshlq_u16(vshrn_high_n_s32(
                               vshrn_n_s32(
                                   vmull_u16((uint16x4_t)((uint64_t*)&v20)[0],
                                             (uint16x4_t)((uint64_t*)&v16)[0]),
                                   0x10u),
                               vmull_high_u16(v20, v16), 0x10u),
                           vnegq_s16(v24)),
                 v28),
        v28);
    result[3] = vsubq_s16(
        veorq_s8(vshlq_u16(vshrn_high_n_s32(
                               vshrn_n_s32(
                                   vmull_u16((uint16x4_t)((uint64_t*)&v21)[0],
                                             (uint16x4_t)((uint64_t*)&v17)[0]),
                                   0x10u),
                               vmull_high_u16(v21, v17), 0x10u),
                           vnegq_s16(v25)),
                 v29),
        v29);
    result += 4;
  } while (v3 != 0);
  return result;
}

__int64 SdkHr_128c50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  _QWORD* v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  _QWORD* v10;
  unsigned int v11;
  __int64 v12;
  _QWORD v13[5];
  _QWORD v14[2];
  __int64 vars0;

  v3 = *(_QWORD*)(a1 + 8);
  v14[0] = a2;
  v14[1] = a3;
  v4 = (*(unsigned int (**)(__int64, _QWORD*))(*(_QWORD*)v3 + 32LL))(v3, v14);
  if ((SdkRoutine_85a870(v4) & 1) == 0) {
    if ((_DWORD)v4 != 0) {
      return (unsigned int)v4;
    }
    return 0;
  }
  SdkRoutine_85a880(v4, "Push");
  LODWORD(v14[0]) = v4;
  if ((_DWORD)v4 == 0) {
    return 0;
  }
  v6 = (_QWORD*)SdkRoutine_858db0(v14);
  v13[1] = &vars0;
  v13[2] = v7;
  v13[3] = v4;
  v13[4] = v4;
  v9 = v8;
  v10 = v6;
  *v6 = 0;
  v12 = 0;
  *(struct PseudoSret*)(&v12) = SdkRoutine_85a9c0();
  v13[0] = v10;
  v11 = (*(__int64 (**)(__int64, _QWORD*, _QWORD))(*(_QWORD*)v12 + 488LL))(
      v12, v13, v9);
  SdkRoutine_85a870(v11);
  SdkRoutine_85a880(v11, "SaveDataTransferManagerForSaveDataRepair");
  LODWORD(v13[0]) = v11;
  if (v11 != 0) {
    SdkRoutine_858db0(v13);
    __udf(0);
  }
  result = v12;
  if (v12 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  return result;
}

__int64 SdkHr_1a51a0(__int64 a1, __int64 a2, _DWORD* a3)
{
  __int64 result;
  int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned int v11;
  unsigned __int64 v12;
  int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  unsigned __int64 v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;

  result = (unsigned int)a3[1];
  v4 = result - *a3;
  if ((_DWORD)result != *a3) {
    v5 = v4 + 1;
    if (v4 == -1) {
      v19 = *(_QWORD*)(a2 + 2496);
      v20 = (v19 + 1) % 0x270uLL;
      v21 = *(_DWORD*)(a2 + 4 * v20);
      if ((v21 & 1) != 0) {
        v22 = -1727483681;
      }
      else {
        v22 = 0;
      }
      *(_DWORD*)(a2 + 4 * v19) =
          v22 ^ *(_DWORD*)(a2 + 4 * ((v19 + 397) % 0x270uLL)) ^
          ((v21 & 0x7FFFFFFE | *(_DWORD*)(a2 + 4 * v19) & 0x80000000) >> 1);
      v23 = *(_DWORD*)(a2 + 4LL * *(_QWORD*)(a2 + 2496));
      *(_QWORD*)(a2 + 2496) = v20;
      v24 = ((v23 ^ (v23 >> 11)) << 7) & 0x9D2C5680 ^ v23 ^ (v23 >> 11);
      return (v24 << 15) & 0xEFC60000 ^ v24 ^
             (((v24 << 15) & 0xEFC60000 ^ v24) >> 18);
    }
    else {
      v6 = __clz(v5);
      v7 = 31;
      if (((v5 << v6) & 0x7FFFFFFF) != 0) {
        v7 = 32;
      }
      v8 = v7 - v6;
      v9 = (v8 + 31) >> 5;
      v10 = *(_QWORD*)(a2 + 2496);
      if (v9 <= v8) {
        v11 = 0xFFFFFFFF >> -(char)((unsigned int)v8 / (unsigned int)v9);
      }
      else {
        v11 = 0;
      }
      do {
        v12 = (v10 + 1) % 0x270;
        v13 = *(_DWORD*)(a2 + 4 * v12);
        v14 = v13 & 0x7FFFFFFE | *(_DWORD*)(a2 + 4 * v10) & 0x80000000;
        if ((v13 & 1) != 0) {
          v15 = -1727483681;
        }
        else {
          v15 = 0;
        }
        *(_DWORD*)(a2 + 4 * v10) =
            v15 ^ *(_DWORD*)(a2 + 4 * ((v10 + 397) % 0x270)) ^ (v14 >> 1);
        v16 = *(_DWORD*)(a2 + 4LL * *(_QWORD*)(a2 + 2496));
        *(_QWORD*)(a2 + 2496) = v12;
        v17 = ((v16 ^ (v16 >> 11)) << 7) & 0x9D2C5680 ^ v16 ^ (v16 >> 11);
        v18 = ((v17 << 15) & 0xEFC60000 ^ v17 ^
               (((v17 << 15) & 0xEFC60000 ^ v17) >> 18)) &
              v11;
        v10 = v12;
      } while (v18 >= v5);
      return *a3 + v18;
    }
  }
  return result;
}

float* SdkHr_212d40(float* result, const float* a2, int a3, unsigned int a4)
{
  int v4;
  __int64 v5;
  int32x4_t v6;
  unsigned int v7;
  const float* v8;
  int32x4_t v9;
  int32x4_t v10;
  const float* v11;
  unsigned int v12;
  const float* v13;
  int32x4_t v14;
  const float* v15;
  int32x4_t v16;
  int32x4_t v17;
  const float* v18;
  int32x4_t v19;
  float* v20;
  float32x4x2_t v21;
  float32x4x2_t v22;
  float32x4x2_t v23;
  float32x4x2_t v24;
  float32x4x2_t v25;
  float32x4x2_t v26;
  float32x4x2_t v27;
  float32x4x2_t v28;
  float32x4x2_t v29;
  float32x4x2_t v30;
  float32x4x2_t v31;
  float32x4x2_t v32;
  float32x4x2_t v33;
  float32x4x2_t v34;
  float32x4x2_t v35;
  float32x4x2_t v36;
  float32x4x2_t v37;

  if (a3 >= 1) {
    v4 = a3 & 3;
    v5 = (__int64)(int)(a4 + (a4 >> 31)) >> 1;
    if ((a3 & 3) != 0) {
      ((uint64_t*)&v6)[0] = 0x4000000040000000LL;
      ((uint64_t*)&v6)[1] = 0x4000000040000000LL;
      v7 = a3 & 0xFFFFFFFC;
      do {
        v8 = &a2[8 * v5];
        v26 = vld2q_f32(a2);
        a2 += 8;
        --v4;
        v31 = vld2q_f32(v8);
        v9 = vqrdmulhq_s32(v31.val[0], v6);
        v31.val[0] = vqrdmulhq_s32(v31.val[1], v6);
        v31.val[1] = vqrdmulhq_s32(v26.val[0], v6);
        v26.val[0] = vqrdmulhq_s32(v26.val[1], v6);
        v36.val[0] = vaddq_s32(v31.val[1], v9);
        v36.val[1] = vaddq_s32(v26.val[0], v31.val[0]);
        vst2q_f32(result, v36);
        v21.val[0] = vsubq_s32(v31.val[1], v9);
        v21.val[1] = vsubq_s32(v26.val[0], v31.val[0]);
        vst2q_f32(result + 8, v21);
        result += 16;
      } while (v4 != 0);
      if ((unsigned int)a3 < 4) {
        return result;
      }
    }
    else {
      v7 = a3;
      if ((unsigned int)a3 < 4) {
        return result;
      }
    }
    ((uint64_t*)&v10)[0] = 0x4000000040000000LL;
    ((uint64_t*)&v10)[1] = 0x4000000040000000LL;
    v11 = &a2[8 * v5];
    v12 = v7 - 1;
    v13 = a2 + 16;
    do {
      v12 -= 4;
      v27 = vld2q_f32(v13 - 16);
      v32 = vld2q_f32(v11);
      v14 = vqrdmulhq_s32(v32.val[0], v10);
      v32.val[0] = vqrdmulhq_s32(v32.val[1], v10);
      v32.val[1] = vqrdmulhq_s32(v27.val[0], v10);
      v27.val[0] = vqrdmulhq_s32(v27.val[1], v10);
      v37.val[0] = vaddq_s32(v32.val[1], v14);
      v37.val[1] = vaddq_s32(v27.val[0], v32.val[0]);
      vst2q_f32(result, v37);
      v22.val[0] = vsubq_s32(v32.val[1], v14);
      v22.val[1] = vsubq_s32(v27.val[0], v32.val[0]);
      vst2q_f32(result + 8, v22);
      v28 = vld2q_f32(v13 - 8);
      v33 = vld2q_f32(v11 + 8);
      v15 = v13;
      v13 += 32;
      v16 = vqrdmulhq_s32(v33.val[0], v10);
      v33.val[0] = vqrdmulhq_s32(v33.val[1], v10);
      v33.val[1] = vqrdmulhq_s32(v28.val[0], v10);
      v28.val[0] = vqrdmulhq_s32(v28.val[1], v10);
      v37.val[0] = vaddq_s32(v33.val[1], v16);
      v37.val[1] = vaddq_s32(v28.val[0], v33.val[0]);
      vst2q_f32(result + 16, v37);
      v23.val[0] = vsubq_s32(v33.val[1], v16);
      v23.val[1] = vsubq_s32(v28.val[0], v33.val[0]);
      vst2q_f32(result + 24, v23);
      v29 = vld2q_f32(v15);
      v34 = vld2q_f32(v11 + 16);
      v17 = vqrdmulhq_s32(v34.val[0], v10);
      v34.val[0] = vqrdmulhq_s32(v34.val[1], v10);
      v34.val[1] = vqrdmulhq_s32(v29.val[0], v10);
      v29.val[0] = vqrdmulhq_s32(v29.val[1], v10);
      v37.val[0] = vaddq_s32(v34.val[1], v17);
      v37.val[1] = vaddq_s32(v29.val[0], v34.val[0]);
      vst2q_f32(result + 32, v37);
      v24.val[0] = vsubq_s32(v34.val[1], v17);
      v24.val[1] = vsubq_s32(v29.val[0], v34.val[0]);
      vst2q_f32(result + 40, v24);
      v18 = v11 + 24;
      v11 += 32;
      v30 = vld2q_f32(v15 + 8);
      v35 = vld2q_f32(v18);
      v19 = vqrdmulhq_s32(v35.val[0], v10);
      v35.val[0] = vqrdmulhq_s32(v35.val[1], v10);
      v35.val[1] = vqrdmulhq_s32(v30.val[0], v10);
      v30.val[0] = vqrdmulhq_s32(v30.val[1], v10);
      v37.val[0] = vaddq_s32(v35.val[1], v19);
      v37.val[1] = vaddq_s32(v30.val[0], v35.val[0]);
      vst2q_f32(result + 48, v37);
      v20 = result + 56;
      result += 64;
      v25.val[0] = vsubq_s32(v35.val[1], v19);
      v25.val[1] = vsubq_s32(v30.val[0], v35.val[0]);
      vst2q_f32(v20, v25);
    } while (v12 < 0xFFFFFFFE);
  }
  return result;
}

float* SdkHr_213000(float* result, const float* a2, int a3, int a4)
{
  int v4;
  int v5;
  __int64 v6;
  float32x4_t v7;
  const float* v8;
  int32x4_t v9;
  int32x4_t v10;
  int32x4_t v11;
  int32x4_t v12;
  int32x4_t v13;
  float* v14;
  float32x4_t v15;
  const float* v16;
  unsigned int v17;
  const float* v18;
  const float* v19;
  int32x4_t v20;
  float32x4_t v21;
  bool v22;
  int32x4_t v23;
  int32x4_t v24;
  int32x4_t v25;
  int32x4_t v26;
  int32x4_t v27;
  int32x4_t v28;
  float* v29;
  float32x4x2_t v30;
  float32x4x2_t v31;
  float32x4x2_t v32;
  float32x4x2_t v33;
  float32x4x2_t v34;
  float32x4x2_t v35;
  float32x4x2_t v36;
  float32x4x2_t v37;
  float32x4x2_t v38;
  float32x4x2_t v39;
  float32x4x2_t v40;

  v4 = a3 - 1;
  if (a3 >= 1) {
    v5 = a4 / 3;
    v6 = a4 / 3;
    if ((a3 & 1) != 0) {
      ((uint64_t*)&v7)[0] = 0xAAAAAAAAAAAAAAAALL;
      ((uint64_t*)&v7)[1] = 0xAAAAAAAAAAAAAAAALL;
      v8 = &a2[8 * v5];
      v30 = vld2q_f32(a2);
      a2 += 8;
      v31 = vld2q_f32(v8);
      v34 = vld2q_f32(&v8[8 * v5]);
      v9 = vnegq_f32(v7);
      v10 = vdupq_n_s32(0x9126145F);
      v11 = vqrdmulhq_s32(v34.val[0], v9);
      v34.val[0] = vqrdmulhq_s32(v34.val[1], v9);
      v34.val[1] = vqrdmulhq_s32(v31.val[0], v9);
      v31.val[0] = vqrdmulhq_s32(v31.val[1], v9);
      v31.val[1] = vqrdmulhq_s32(v30.val[0], v9);
      v30.val[0] = vqrdmulhq_s32(v30.val[1], v9);
      v30.val[1] = vaddq_s32(v34.val[1], v11);
      v12 = vaddq_s32(v31.val[0], v34.val[0]);
      v34.val[1] = vqrdmulhq_s32(v10, vsubq_s32(v34.val[1], v11));
      v31.val[0] = vqrdmulhq_s32(v10, vsubq_s32(v31.val[0], v34.val[0]));
      v39.val[0] = vaddq_s32(v31.val[1], v30.val[1]);
      v39.val[1] = vaddq_s32(v30.val[0], v12);
      v34.val[0] = vsubq_s32(v31.val[1], vshrq_n_s32(v30.val[1], 1u));
      v13 = vsubq_s32(v30.val[0], vshrq_n_s32(v12, 1u));
      vst2q_f32(result, v39);
      v30.val[0] = vaddq_s32(v31.val[0], v34.val[0]);
      v31.val[0] = vsubq_s32(v34.val[0], v31.val[0]);
      v31.val[1] = vaddq_s32(v34.val[1], v13);
      v30.val[1] = vsubq_s32(v13, v34.val[1]);
      vst2q_f32(result + 8, v31);
      v14 = result + 16;
      result += 24;
      vst2q_f32(v14, v30);
      if (a3 == 1) {
        return result;
      }
    }
    else {
      v4 = a3;
      if (a3 == 1) {
        return result;
      }
    }
    ((uint64_t*)&v15)[0] = 0xAAAAAAAAAAAAAAAALL;
    ((uint64_t*)&v15)[1] = 0xAAAAAAAAAAAAAAAALL;
    v16 = a2 + 8;
    v17 = v4 - 1;
    v18 = &a2[16 * v6 + 8];
    v19 = &a2[8 * v6 + 8];
    v20 = vdupq_n_s32(0x9126145F);
    v21 = vnegq_f32(v15);
    do {
      v22 = v17 >= 2;
      v17 -= 2;
      v32 = vld2q_f32(v16 - 8);
      v35 = vld2q_f32(v19 - 8);
      v37 = vld2q_f32(v18 - 8);
      v23 = vqrdmulhq_s32(v37.val[0], v21);
      v37.val[0] = vqrdmulhq_s32(v37.val[1], v21);
      v37.val[1] = vqrdmulhq_s32(v35.val[0], v21);
      v35.val[0] = vqrdmulhq_s32(v35.val[1], v21);
      v35.val[1] = vqrdmulhq_s32(v32.val[0], v21);
      v32.val[0] = vqrdmulhq_s32(v32.val[1], v21);
      v32.val[1] = vaddq_s32(v37.val[1], v23);
      v24 = vaddq_s32(v35.val[0], v37.val[0]);
      v37.val[1] = vqrdmulhq_s32(v20, vsubq_s32(v37.val[1], v23));
      v35.val[0] = vqrdmulhq_s32(v20, vsubq_s32(v35.val[0], v37.val[0]));
      v40.val[0] = vaddq_s32(v35.val[1], v32.val[1]);
      v40.val[1] = vaddq_s32(v32.val[0], v24);
      v37.val[0] = vsubq_s32(v35.val[1], vshrq_n_s32(v32.val[1], 1u));
      v25 = vsubq_s32(v32.val[0], vshrq_n_s32(v24, 1u));
      vst2q_f32(result, v40);
      v32.val[0] = vaddq_s32(v35.val[0], v37.val[0]);
      v35.val[0] = vsubq_s32(v37.val[0], v35.val[0]);
      v35.val[1] = vaddq_s32(v37.val[1], v25);
      v32.val[1] = vsubq_s32(v25, v37.val[1]);
      vst2q_f32(result + 8, v35);
      vst2q_f32(result + 16, v32);
      v36 = vld2q_f32(v19);
      v38 = vld2q_f32(v18);
      v33 = vld2q_f32(v16);
      v18 += 16;
      v19 += 16;
      v16 += 16;
      v26 = vqrdmulhq_s32(v38.val[0], v21);
      v38.val[0] = vqrdmulhq_s32(v38.val[1], v21);
      v38.val[1] = vqrdmulhq_s32(v36.val[0], v21);
      v36.val[0] = vqrdmulhq_s32(v36.val[1], v21);
      v36.val[1] = vqrdmulhq_s32(v33.val[0], v21);
      v33.val[0] = vqrdmulhq_s32(v33.val[1], v21);
      v33.val[1] = vaddq_s32(v38.val[1], v26);
      v27 = vaddq_s32(v36.val[0], v38.val[0]);
      v38.val[1] = vqrdmulhq_s32(v20, vsubq_s32(v38.val[1], v26));
      v36.val[0] = vqrdmulhq_s32(v20, vsubq_s32(v36.val[0], v38.val[0]));
      v40.val[0] = vaddq_s32(v36.val[1], v33.val[1]);
      v40.val[1] = vaddq_s32(v33.val[0], v27);
      v38.val[0] = vsubq_s32(v36.val[1], vshrq_n_s32(v33.val[1], 1u));
      v28 = vsubq_s32(v33.val[0], vshrq_n_s32(v27, 1u));
      vst2q_f32(result + 24, v40);
      v33.val[0] = vaddq_s32(v36.val[0], v38.val[0]);
      v36.val[0] = vsubq_s32(v38.val[0], v36.val[0]);
      v36.val[1] = vaddq_s32(v38.val[1], v28);
      v33.val[1] = vsubq_s32(v28, v38.val[1]);
      vst2q_f32(result + 32, v36);
      v29 = result + 40;
      result += 48;
      vst2q_f32(v29, v33);
    } while (v22);
  }
  return result;
}

float* SdkHr_213220(float* result, const float* a2, int a3, int a4)
{
  float32x4_t v4;
  int32x4_t v5;
  int32x4_t v6;
  float32x4_t v7;
  unsigned int v8;
  int32x4_t v9;
  __int64 v10;
  int32x4_t v11;
  const float* v12;
  const float* v13;
  const float* v14;
  int32x4_t v15;
  int32x4_t v16;
  int32x4_t v17;
  int32x4_t v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  float* v22;
  float32x4x2_t v23;
  float32x4x2_t v24;
  float32x4x2_t v25;
  float32x4x2_t v26;
  float32x4x2_t v27;
  float32x4x2_t v28;
  float32x4x2_t v29;
  float32x4x2_t v30;
  float32x4x2_t v31;
  float32x4x2_t v32;

  if (a3 >= 1) {
    ((uint64_t*)&v4)[0] = 0x9999999999999999LL;
    ((uint64_t*)&v4)[1] = 0x9999999999999999LL;
    v5 = vdupq_n_s32(0x278DDE6Eu);
    v6 = vdupq_n_s32(0x98722192);
    v7 = vnegq_f32(v4);
    v8 = a3 + 1;
    v9 = vdupq_n_s32(0x8643C7B3);
    v10 = 8LL * (a4 / 5);
    v11 = vdupq_n_s32(0xB4C373EE);
    do {
      v12 = &a2[v10];
      v26 = vld2q_f32(a2);
      a2 += 8;
      --v8;
      v27 = vld2q_f32(v12);
      v13 = &v12[v10];
      v28 = vld2q_f32(v13);
      v14 = &v13[v10];
      v29 = vld2q_f32(v14);
      v30 = vld2q_f32(&v14[v10]);
      v15 = vqrdmulhq_s32(v30.val[0], v7);
      v30.val[0] = vqrdmulhq_s32(v30.val[1], v7);
      v30.val[1] = vqrdmulhq_s32(v29.val[0], v7);
      v29.val[0] = vqrdmulhq_s32(v29.val[1], v7);
      v29.val[1] = vqrdmulhq_s32(v28.val[0], v7);
      v28.val[0] = vqrdmulhq_s32(v28.val[1], v7);
      v28.val[1] = vqrdmulhq_s32(v27.val[0], v7);
      v27.val[0] = vqrdmulhq_s32(v27.val[1], v7);
      v27.val[1] = vqrdmulhq_s32(v26.val[0], v7);
      v26.val[0] = vqrdmulhq_s32(v26.val[1], v7);
      v26.val[1] = vaddq_s32(v28.val[1], v15);
      v16 = vsubq_s32(v28.val[1], v15);
      v28.val[1] = vaddq_s32(v29.val[1], v30.val[1]);
      v17 = vaddq_s32(v27.val[0], v30.val[0]);
      v27.val[0] = vsubq_s32(v27.val[0], v30.val[0]);
      v30.val[0] = vaddq_s32(v28.val[0], v29.val[0]);
      v28.val[0] = vsubq_s32(v28.val[0], v29.val[0]);
      v29.val[1] = vsubq_s32(v29.val[1], v30.val[1]);
      v30.val[1] = vqrdmulhq_s32(v5, v26.val[1]);
      v31.val[0] = vaddq_s32(v26.val[1], vaddq_s32(v28.val[1], v27.val[1]));
      v18 = vaddq_s32(v26.val[0], vqrdmulhq_s32(v6, v30.val[0]));
      v19 = vaddq_s32(vqrdmulhq_s32(v11, v28.val[0]),
                      vqrdmulhq_s32(v9, v27.val[0]));
      v31.val[1] = vaddq_s32(v17, vaddq_s32(v30.val[0], v26.val[0]));
      vst2q_f32(result, v31);
      v26.val[1] =
          vaddq_s32(vqrdmulhq_s32(v6, v26.val[1]),
                    vaddq_s32(v27.val[1], vqrdmulhq_s32(v5, v28.val[1])));
      v29.val[0] = vaddq_s32(
          v30.val[1], vaddq_s32(v27.val[1], vqrdmulhq_s32(v6, v28.val[1])));
      v26.val[0] =
          vaddq_s32(vqrdmulhq_s32(v6, v17),
                    vaddq_s32(v26.val[0], vqrdmulhq_s32(v5, v30.val[0])));
      v30.val[1] = vaddq_s32(vqrdmulhq_s32(v5, v17), v18);
      v20 = vaddq_s32(vqrdmulhq_s32(v11, v29.val[1]), vqrdmulhq_s32(v9, v16));
      v32.val[0] = vsubq_s32(v29.val[0], v19);
      v27.val[0] = vsubq_s32(vqrdmulhq_s32(v9, v28.val[0]),
                             vqrdmulhq_s32(v11, v27.val[0]));
      v32.val[1] = vaddq_s32(v20, v30.val[1]);
      v21 = vsubq_s32(vqrdmulhq_s32(v11, v16), vqrdmulhq_s32(v9, v29.val[1]));
      vst2q_f32(result + 8, v32);
      v23.val[0] = vaddq_s32(v27.val[0], v26.val[1]);
      v23.val[1] = vaddq_s32(v21, v26.val[0]);
      vst2q_f32(result + 16, v23);
      v24.val[0] = vsubq_s32(v26.val[1], v27.val[0]);
      v24.val[1] = vsubq_s32(v26.val[0], v21);
      vst2q_f32(result + 24, v24);
      v22 = result + 32;
      result += 40;
      v25.val[0] = vaddq_s32(v19, v29.val[0]);
      v25.val[1] = vsubq_s32(v30.val[1], v20);
      vst2q_f32(v22, v25);
    } while (v8 > 1);
  }
  return result;
}

float* SdkHr_214040(float* result, const float* a2, int a3, unsigned int a4)
{
  int v4;
  __int64 v5;
  unsigned int v6;
  const float* v7;
  const float* v8;
  unsigned int v9;
  const float* v10;
  const float* v11;
  const float* v12;
  float* v13;
  float32x4x2_t v14;
  float32x4x2_t v15;
  float32x4x2_t v16;
  float32x4x2_t v17;
  float32x4x2_t v18;
  float32x4x2_t v19;
  float32x4x2_t v20;
  float32x4x2_t v21;
  float32x4x2_t v22;
  float32x4x2_t v23;
  float32x4x2_t v24;
  float32x4x2_t v25;
  float32x4x2_t v26;
  float32x4x2_t v27;

  if (a3 >= 1) {
    v4 = a3 & 3;
    v5 = (__int64)(int)(a4 + (a4 >> 31)) >> 1;
    if ((a3 & 3) != 0) {
      v6 = a3 & 0xFFFFFFFC;
      do {
        v7 = &a2[8 * v5];
        v14 = vld2q_f32(a2);
        a2 += 8;
        --v4;
        v19 = vld2q_f32(v7);
        v24.val[0] = vaddq_s32(v19.val[0], v14.val[0]);
        v24.val[1] = vaddq_s32(v19.val[1], v14.val[1]);
        v26.val[0] = vsubq_s32(v14.val[0], v19.val[0]);
        v26.val[1] = vsubq_s32(v14.val[1], v19.val[1]);
        vst2q_f32(result, v24);
        vst2q_f32(result + 8, v26);
        result += 16;
      } while (v4 != 0);
      if ((unsigned int)a3 < 4) {
        return result;
      }
    }
    else {
      v6 = a3;
      if ((unsigned int)a3 < 4) {
        return result;
      }
    }
    v8 = &a2[8 * v5];
    v9 = v6 - 1;
    v10 = a2 + 16;
    do {
      v9 -= 4;
      v15 = vld2q_f32(v10 - 16);
      v20 = vld2q_f32(v8);
      v25.val[0] = vaddq_s32(v20.val[0], v15.val[0]);
      v25.val[1] = vaddq_s32(v20.val[1], v15.val[1]);
      v27.val[0] = vsubq_s32(v15.val[0], v20.val[0]);
      v27.val[1] = vsubq_s32(v15.val[1], v20.val[1]);
      vst2q_f32(result, v25);
      vst2q_f32(result + 8, v27);
      v16 = vld2q_f32(v10 - 8);
      v21 = vld2q_f32(v8 + 8);
      v25.val[0] = vaddq_s32(v21.val[0], v16.val[0]);
      v25.val[1] = vaddq_s32(v21.val[1], v16.val[1]);
      v27.val[0] = vsubq_s32(v16.val[0], v21.val[0]);
      v27.val[1] = vsubq_s32(v16.val[1], v21.val[1]);
      vst2q_f32(result + 16, v25);
      vst2q_f32(result + 24, v27);
      v11 = v10;
      v10 += 32;
      v17 = vld2q_f32(v11);
      v22 = vld2q_f32(v8 + 16);
      v25.val[0] = vaddq_s32(v22.val[0], v17.val[0]);
      v25.val[1] = vaddq_s32(v22.val[1], v17.val[1]);
      v27.val[0] = vsubq_s32(v17.val[0], v22.val[0]);
      v27.val[1] = vsubq_s32(v17.val[1], v22.val[1]);
      vst2q_f32(result + 32, v25);
      vst2q_f32(result + 40, v27);
      v18 = vld2q_f32(v11 + 8);
      v12 = v8 + 24;
      v8 += 32;
      v23 = vld2q_f32(v12);
      v25.val[0] = vaddq_s32(v23.val[0], v18.val[0]);
      v25.val[1] = vaddq_s32(v23.val[1], v18.val[1]);
      v27.val[0] = vsubq_s32(v18.val[0], v23.val[0]);
      v27.val[1] = vsubq_s32(v18.val[1], v23.val[1]);
      vst2q_f32(result + 48, v25);
      v13 = result + 56;
      result += 64;
      vst2q_f32(v13, v27);
    } while (v9 < 0xFFFFFFFE);
  }
  return result;
}

float* SdkHr_2141a0(float* result, const float* a2, int a3, int a4)
{
  int v4;
  int v5;
  __int64 v6;
  const float* v7;
  const float* v8;
  int32x4_t v9;
  int32x4_t v10;
  int32x4_t v11;
  float* v12;
  const float* v13;
  unsigned int v14;
  const float* v15;
  const float* v16;
  const float* v17;
  bool v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  float* v25;
  float32x4x2_t v26;
  float32x4x2_t v27;
  float32x4x2_t v28;
  float32x4x2_t v29;
  float32x4x2_t v30;
  float32x4x2_t v31;
  float32x4x2_t v32;
  float32x4x2_t v33;
  float32x4x2_t v34;
  float32x4x2_t v35;
  float32x4x2_t v36;
  float32x4x2_t v37;
  float32x4x2_t v38;
  float32x4x2_t v39;
  float32x4x2_t v40;
  float32x4x2_t v41;
  float32x4x2_t v42;
  float32x4x2_t v43;
  float32x4x2_t v44;
  float32x4x2_t v45;

  v4 = a3 - 1;
  if (a3 >= 1) {
    v5 = a4 + 3;
    if (a4 >= 0) {
      v5 = a4;
    }
    v6 = (__int64)v5 >> 2;
    if ((a3 & 1) != 0) {
      v7 = &a2[8 * v6];
      v32 = vld2q_f32(a2);
      a2 += 8;
      v35 = vld2q_f32(v7);
      v8 = &v7[8 * v6];
      v38 = vld2q_f32(v8);
      v41 = vld2q_f32(&v8[8 * v6]);
      v9 = vaddq_s32(v38.val[0], v32.val[0]);
      v10 = vaddq_s32(v38.val[1], v32.val[1]);
      v11 = vsubq_s32(v32.val[0], v38.val[0]);
      v32.val[0] = vsubq_s32(v32.val[1], v38.val[1]);
      v32.val[1] = vaddq_s32(v41.val[0], v35.val[0]);
      v38.val[0] = vaddq_s32(v41.val[1], v35.val[1]);
      v38.val[1] = vsubq_s32(v35.val[0], v41.val[0]);
      v35.val[0] = vsubq_s32(v35.val[1], v41.val[1]);
      v44.val[0] = vaddq_s32(v32.val[1], v9);
      v44.val[1] = vaddq_s32(v38.val[0], v10);
      v41.val[0] = vsubq_s32(v9, v32.val[1]);
      v41.val[1] = vsubq_s32(v10, v38.val[0]);
      vst2q_f32(result, v44);
      v26.val[0] = vaddq_s32(v35.val[0], v11);
      v26.val[1] = vsubq_s32(v32.val[0], v38.val[1]);
      vst2q_f32(result + 8, v26);
      vst2q_f32(result + 16, v41);
      v12 = result + 24;
      result += 32;
      v27.val[0] = vsubq_s32(v11, v35.val[0]);
      v27.val[1] = vaddq_s32(v38.val[1], v32.val[0]);
      vst2q_f32(v12, v27);
      if (a3 == 1) {
        return result;
      }
    }
    else {
      v4 = a3;
      if (a3 == 1) {
        return result;
      }
    }
    v13 = a2 + 8;
    v14 = v4 - 1;
    v15 = &a2[24 * (int)v6 + 8];
    v16 = &a2[16 * v6 + 8];
    v17 = &a2[8 * v6 + 8];
    do {
      v18 = v14 >= 2;
      v14 -= 2;
      v33 = vld2q_f32(v13 - 8);
      v36 = vld2q_f32(v17 - 8);
      v39 = vld2q_f32(v16 - 8);
      v19 = vaddq_s32(v39.val[0], v33.val[0]);
      v42 = vld2q_f32(v15 - 8);
      v20 = vaddq_s32(v39.val[1], v33.val[1]);
      v21 = vsubq_s32(v33.val[0], v39.val[0]);
      v33.val[0] = vsubq_s32(v33.val[1], v39.val[1]);
      v33.val[1] = vaddq_s32(v42.val[0], v36.val[0]);
      v39.val[0] = vaddq_s32(v42.val[1], v36.val[1]);
      v39.val[1] = vsubq_s32(v36.val[0], v42.val[0]);
      v36.val[0] = vsubq_s32(v36.val[1], v42.val[1]);
      v42.val[0] = vaddq_s32(v33.val[1], v19);
      v42.val[1] = vaddq_s32(v39.val[0], v20);
      v45.val[0] = vsubq_s32(v19, v33.val[1]);
      v45.val[1] = vsubq_s32(v20, v39.val[0]);
      vst2q_f32(result, v42);
      vst2q_f32(result + 16, v45);
      v28.val[0] = vsubq_s32(v21, v36.val[0]);
      v28.val[1] = vaddq_s32(v39.val[1], v33.val[0]);
      vst2q_f32(result + 24, v28);
      v29.val[0] = vaddq_s32(v36.val[0], v21);
      v29.val[1] = vsubq_s32(v33.val[0], v39.val[1]);
      vst2q_f32(result + 8, v29);
      v34 = vld2q_f32(v13);
      v13 += 16;
      v37 = vld2q_f32(v17);
      v17 += 16;
      v40 = vld2q_f32(v16);
      v16 += 16;
      v22 = vaddq_s32(v40.val[0], v34.val[0]);
      v43 = vld2q_f32(v15);
      v23 = vaddq_s32(v40.val[1], v34.val[1]);
      v24 = vsubq_s32(v34.val[0], v40.val[0]);
      v34.val[0] = vsubq_s32(v34.val[1], v40.val[1]);
      v34.val[1] = vaddq_s32(v43.val[0], v37.val[0]);
      v40.val[0] = vaddq_s32(v43.val[1], v37.val[1]);
      v15 += 16;
      v40.val[1] = vsubq_s32(v37.val[0], v43.val[0]);
      v37.val[0] = vsubq_s32(v37.val[1], v43.val[1]);
      v43.val[0] = vaddq_s32(v34.val[1], v22);
      v43.val[1] = vaddq_s32(v40.val[0], v23);
      vst2q_f32(result + 32, v43);
      v43.val[0] = vsubq_s32(v22, v34.val[1]);
      v43.val[1] = vsubq_s32(v23, v40.val[0]);
      v30.val[0] = vaddq_s32(v37.val[0], v24);
      v30.val[1] = vsubq_s32(v34.val[0], v40.val[1]);
      vst2q_f32(result + 40, v30);
      vst2q_f32(result + 48, v43);
      v25 = result + 56;
      result += 64;
      v31.val[0] = vsubq_s32(v24, v37.val[0]);
      v31.val[1] = vaddq_s32(v40.val[1], v34.val[0]);
      vst2q_f32(v25, v31);
    } while (v18);
  }
  return result;
}

float* SdkHr_214380(float* result, const float* a2, int a3, int a4)
{
  int v4;
  int v5;
  __int64 v6;
  const float* v7;
  int32x4_t v8;
  int32x4_t v9;
  int32x4_t v10;
  int32x4_t v11;
  int32x4_t v12;
  float* v13;
  const float* v14;
  unsigned int v15;
  const float* v16;
  const float* v17;
  int32x4_t v18;
  bool v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  float* v25;
  float32x4x2_t v26;
  float32x4x2_t v27;
  float32x4x2_t v28;
  float32x4x2_t v29;
  float32x4x2_t v30;
  float32x4x2_t v31;
  float32x4x2_t v32;
  float32x4x2_t v33;
  float32x4x2_t v34;
  float32x4x2_t v35;
  float32x4x2_t v36;

  v4 = a3 - 1;
  if (a3 >= 1) {
    v5 = a4 / 3;
    v6 = a4 / 3;
    if ((a3 & 1) != 0) {
      v7 = &a2[8 * v5];
      v27 = vld2q_f32(a2);
      a2 += 8;
      v30 = vld2q_f32(v7);
      v33 = vld2q_f32(&v7[8 * v5]);
      v8 = vaddq_s32(v33.val[0], v30.val[0]);
      v9 = vaddq_s32(v33.val[1], v30.val[1]);
      v10 = vsubq_s32(v30.val[0], v33.val[0]);
      v30.val[0] = vsubq_s32(v30.val[1], v33.val[1]);
      v33.val[1] = vdupq_n_s32(0x9126145F);
      v30.val[1] = vshrq_n_s32(v8, 1u);
      v11 = vqrdmulhq_s32(v33.val[1], v10);
      v30.val[0] = vqrdmulhq_s32(v33.val[1], v30.val[0]);
      v33.val[1] = vaddq_s32(v8, v27.val[0]);
      v12 = vaddq_s32(v9, v27.val[1]);
      v30.val[1] = vsubq_s32(v27.val[0], v30.val[1]);
      v33.val[0] = vsubq_s32(v27.val[1], vshrq_n_s32(v9, 1u));
      v27.val[0] = vaddq_s32(v30.val[0], v30.val[1]);
      v30.val[0] = vsubq_s32(v30.val[1], v30.val[0]);
      v30.val[1] = vaddq_s32(v11, v33.val[0]);
      v27.val[1] = vsubq_s32(v33.val[0], v11);
      v26.val[0] = v33.val[1];
      v26.val[1] = v12;
      vst2q_f32(result, v26);
      vst2q_f32(result + 8, v30);
      v13 = result + 16;
      result += 24;
      vst2q_f32(v13, v27);
      if (a3 == 1) {
        return result;
      }
    }
    else {
      v4 = a3;
      if (a3 == 1) {
        return result;
      }
    }
    v14 = a2 + 8;
    v15 = v4 - 1;
    v16 = &a2[16 * v6 + 8];
    v17 = &a2[8 * v6 + 8];
    v18 = vdupq_n_s32(0x9126145F);
    do {
      v19 = v15 >= 2;
      v15 -= 2;
      v28 = vld2q_f32(v14 - 8);
      v31 = vld2q_f32(v17 - 8);
      v34 = vld2q_f32(v16 - 8);
      v20 = vaddq_s32(v34.val[0], v31.val[0]);
      v21 = vaddq_s32(v34.val[1], v31.val[1]);
      v22 = vsubq_s32(v31.val[0], v34.val[0]);
      v31.val[0] = vsubq_s32(v31.val[1], v34.val[1]);
      v34.val[1] = vqrdmulhq_s32(v18, v22);
      v31.val[0] = vqrdmulhq_s32(v18, v31.val[0]);
      v36.val[0] = vaddq_s32(v20, v28.val[0]);
      v36.val[1] = vaddq_s32(v21, v28.val[1]);
      v31.val[1] = vsubq_s32(v28.val[0], vshrq_n_s32(v20, 1u));
      v34.val[0] = vsubq_s32(v28.val[1], vshrq_n_s32(v21, 1u));
      vst2q_f32(result, v36);
      v28.val[0] = vaddq_s32(v31.val[0], v31.val[1]);
      v31.val[0] = vsubq_s32(v31.val[1], v31.val[0]);
      v31.val[1] = vaddq_s32(v34.val[1], v34.val[0]);
      v28.val[1] = vsubq_s32(v34.val[0], v34.val[1]);
      vst2q_f32(result + 8, v31);
      vst2q_f32(result + 16, v28);
      v32 = vld2q_f32(v17);
      v35 = vld2q_f32(v16);
      v29 = vld2q_f32(v14);
      v16 += 16;
      v17 += 16;
      v14 += 16;
      v23 = vaddq_s32(v35.val[0], v32.val[0]);
      v24 = vaddq_s32(v35.val[1], v32.val[1]);
      v36.val[0] = vsubq_s32(v32.val[0], v35.val[0]);
      v32.val[0] = vsubq_s32(v32.val[1], v35.val[1]);
      v35.val[1] = vqrdmulhq_s32(v18, v36.val[0]);
      v32.val[0] = vqrdmulhq_s32(v18, v32.val[0]);
      v36.val[0] = vaddq_s32(v23, v29.val[0]);
      v36.val[1] = vaddq_s32(v24, v29.val[1]);
      v32.val[1] = vsubq_s32(v29.val[0], vshrq_n_s32(v23, 1u));
      v35.val[0] = vsubq_s32(v29.val[1], vshrq_n_s32(v24, 1u));
      vst2q_f32(result + 24, v36);
      v29.val[0] = vaddq_s32(v32.val[0], v32.val[1]);
      v32.val[0] = vsubq_s32(v32.val[1], v32.val[0]);
      v32.val[1] = vaddq_s32(v35.val[1], v35.val[0]);
      v29.val[1] = vsubq_s32(v35.val[0], v35.val[1]);
      vst2q_f32(result + 32, v32);
      v25 = result + 40;
      result += 48;
      vst2q_f32(v25, v29);
    } while (v19);
  }
  return result;
}

float* SdkHr_214560(float* result, const float* a2, int a3, int a4)
{
  int32x4_t v4;
  int32x4_t v5;
  unsigned int v6;
  int32x4_t v7;
  __int64 v8;
  int32x4_t v9;
  const float* v10;
  const float* v11;
  const float* v12;
  int32x4_t v13;
  int32x4_t v14;
  int32x4_t v15;
  int32x4_t v16;
  int32x4_t v17;
  int32x4_t v18;
  int32x4_t v19;
  float* v20;
  float32x4x2_t v21;
  float32x4x2_t v22;
  float32x4x2_t v23;
  float32x4x2_t v24;
  float32x4x2_t v25;
  float32x4x2_t v26;
  float32x4x2_t v27;
  float32x4x2_t v28;
  float32x4x2_t v29;

  if (a3 >= 1) {
    v4 = vdupq_n_s32(0x278DDE6Eu);
    v5 = vdupq_n_s32(0x98722192);
    v6 = a3 + 1;
    v7 = vdupq_n_s32(0x8643C7B3);
    v8 = 8LL * (a4 / 5);
    v9 = vdupq_n_s32(0xB4C373EE);
    do {
      v10 = &a2[v8];
      v24 = vld2q_f32(a2);
      a2 += 8;
      --v6;
      v25 = vld2q_f32(v10);
      v11 = &v10[v8];
      v26 = vld2q_f32(v11);
      v12 = &v11[v8];
      v27 = vld2q_f32(v12);
      v28 = vld2q_f32(&v12[v8]);
      v13 = vaddq_s32(v28.val[0], v25.val[0]);
      v14 = vaddq_s32(v28.val[1], v25.val[1]);
      v15 = vsubq_s32(v25.val[0], v28.val[0]);
      v25.val[0] = vsubq_s32(v25.val[1], v28.val[1]);
      v25.val[1] = vaddq_s32(v27.val[0], v26.val[0]);
      v28.val[0] = vaddq_s32(v27.val[1], v26.val[1]);
      v28.val[1] = vsubq_s32(v26.val[0], v27.val[0]);
      v26.val[0] = vsubq_s32(v26.val[1], v27.val[1]);
      v26.val[1] = vaddq_s32(vaddq_s32(v25.val[1], v24.val[0]), v13);
      v16 = vaddq_s32(v24.val[1], vqrdmulhq_s32(v5, v28.val[0]));
      v17 = vaddq_s32(vqrdmulhq_s32(v9, v26.val[0]),
                      vqrdmulhq_s32(v7, v25.val[0]));
      v27.val[1] = vaddq_s32(v24.val[0], vqrdmulhq_s32(v5, v25.val[1]));
      v25.val[1] = vaddq_s32(v24.val[0], vqrdmulhq_s32(v4, v25.val[1]));
      v24.val[0] = vaddq_s32(v24.val[1], vqrdmulhq_s32(v4, v28.val[0]));
      v21.val[0] = v26.val[1];
      v21.val[1] = vaddq_s32(vaddq_s32(v28.val[0], v24.val[1]), v14);
      vst2q_f32(result, v21);
      v27.val[1] = vaddq_s32(vqrdmulhq_s32(v4, v13), v27.val[1]);
      v25.val[1] = vaddq_s32(vqrdmulhq_s32(v5, v13), v25.val[1]);
      v24.val[1] = vsubq_s32(vqrdmulhq_s32(v7, v26.val[0]),
                             vqrdmulhq_s32(v9, v25.val[0]));
      v18 = vaddq_s32(vqrdmulhq_s32(v4, v14), v16);
      v19 = vaddq_s32(vqrdmulhq_s32(v9, v28.val[1]), vqrdmulhq_s32(v7, v15));
      v24.val[0] = vaddq_s32(vqrdmulhq_s32(v5, v14), v24.val[0]);
      v25.val[0] =
          vsubq_s32(vqrdmulhq_s32(v9, v15), vqrdmulhq_s32(v7, v28.val[1]));
      v29.val[0] = vsubq_s32(v27.val[1], v17);
      v26.val[0] = vsubq_s32(v25.val[1], v24.val[1]);
      v29.val[1] = vaddq_s32(v19, v18);
      v26.val[1] = vsubq_s32(v24.val[0], v25.val[0]);
      vst2q_f32(result + 8, v29);
      v22.val[0] = vaddq_s32(v24.val[1], v25.val[1]);
      v22.val[1] = vaddq_s32(v25.val[0], v24.val[0]);
      vst2q_f32(result + 16, v22);
      vst2q_f32(result + 24, v26);
      v20 = result + 32;
      result += 40;
      v23.val[0] = vaddq_s32(v17, v27.val[1]);
      v23.val[1] = vsubq_s32(v18, v19);
      vst2q_f32(v20, v23);
    } while (v6 > 1);
  }
  return result;
}

float* SdkHr_215f20(float* result, const float* a2, int a3, unsigned int a4)
{
  int v4;
  __int64 v5;
  const float* v6;
  int32x4_t v7;
  int32x4_t v8;
  const float* v9;
  unsigned int v10;
  const float* v11;
  bool v12;
  float* v13;
  float32x4x2_t v14;
  float32x4x2_t v15;
  float32x4x2_t v16;
  float32x4x2_t v17;
  float32x4x2_t v18;
  float32x4x2_t v19;
  float32x4x2_t v20;
  float32x4x2_t v21;
  float32x4x2_t v22;
  float32x4x2_t v23;

  v4 = a3 - 1;
  if (a3 >= 1) {
    v5 = (__int64)(int)(a4 + (a4 >> 31)) >> 1;
    if ((a3 & 1) != 0) {
      v6 = &a2[8 * v5];
      v14 = vld2q_f32(a2);
      a2 += 8;
      ((uint64_t*)&v7)[0] = 0x4000000040000000LL;
      ((uint64_t*)&v7)[1] = 0x4000000040000000LL;
      v17 = vld2q_f32(v6);
      v14.val[0] = vqrdmulhq_s32(v14.val[0], v7);
      v17.val[0] = vqrdmulhq_s32(v17.val[0], v7);
      v14.val[1] = vqrdmulhq_s32(vnegq_s32(v14.val[1]), v7);
      v17.val[1] = vqrdmulhq_s32(vnegq_s32(v17.val[1]), v7);
      v20.val[0] = vaddq_s32(v14.val[0], v17.val[0]);
      v20.val[1] = vnegq_s32(vaddq_s32(v17.val[1], v14.val[1]));
      v22.val[0] = vsubq_s32(v14.val[0], v17.val[0]);
      v22.val[1] = vsubq_s32(v17.val[1], v14.val[1]);
      vst2q_f32(result, v20);
      vst2q_f32(result + 8, v22);
      result += 16;
      if (a3 == 1) {
        return result;
      }
    }
    else {
      v4 = a3;
      if (a3 == 1) {
        return result;
      }
    }
    ((uint64_t*)&v8)[0] = 0x4000000040000000LL;
    ((uint64_t*)&v8)[1] = 0x4000000040000000LL;
    v9 = a2 + 8;
    v10 = v4 - 1;
    v11 = &a2[8 * v5 + 8];
    do {
      v12 = v10 >= 2;
      v10 -= 2;
      v15 = vld2q_f32(v9 - 8);
      v18 = vld2q_f32(v11 - 8);
      v15.val[0] = vqrdmulhq_s32(v15.val[0], v8);
      v18.val[0] = vqrdmulhq_s32(v18.val[0], v8);
      v15.val[1] = vqrdmulhq_s32(vnegq_s32(v15.val[1]), v8);
      v18.val[1] = vqrdmulhq_s32(vnegq_s32(v18.val[1]), v8);
      v21.val[0] = vaddq_s32(v15.val[0], v18.val[0]);
      v23.val[0] = vsubq_s32(v15.val[0], v18.val[0]);
      v23.val[1] = vsubq_s32(v18.val[1], v15.val[1]);
      v21.val[1] = vnegq_s32(vaddq_s32(v18.val[1], v15.val[1]));
      vst2q_f32(result, v21);
      vst2q_f32(result + 8, v23);
      v16 = vld2q_f32(v9);
      v19 = vld2q_f32(v11);
      v11 += 16;
      v9 += 16;
      v19.val[0] = vqrdmulhq_s32(v19.val[0], v8);
      v16.val[0] = vqrdmulhq_s32(v16.val[0], v8);
      v19.val[1] = vqrdmulhq_s32(vnegq_s32(v19.val[1]), v8);
      v16.val[1] = vqrdmulhq_s32(vnegq_s32(v16.val[1]), v8);
      v21.val[0] = vaddq_s32(v16.val[0], v19.val[0]);
      v23.val[0] = vsubq_s32(v16.val[0], v19.val[0]);
      v23.val[1] = vsubq_s32(v19.val[1], v16.val[1]);
      v21.val[1] = vnegq_s32(vaddq_s32(v19.val[1], v16.val[1]));
      vst2q_f32(result + 16, v21);
      v13 = result + 24;
      result += 32;
      vst2q_f32(v13, v23);
    } while (v12);
  }
  return result;
}

float* SdkHr_2171a0(float* result, const float* a2, int a3, int a4)
{
  int v4;
  int v5;
  __int64 v6;
  const float* v7;
  const float* v8;
  int32x4_t v9;
  int32x4_t v10;
  int32x4_t v11;
  float* v12;
  const float* v13;
  unsigned int v14;
  const float* v15;
  const float* v16;
  const float* v17;
  bool v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  float* v25;
  float32x4x2_t v26;
  float32x4x2_t v27;
  float32x4x2_t v28;
  float32x4x2_t v29;
  float32x4x2_t v30;
  float32x4x2_t v31;
  float32x4x2_t v32;
  float32x4x2_t v33;
  float32x4x2_t v34;
  float32x4x2_t v35;
  float32x4x2_t v36;
  float32x4x2_t v37;
  float32x4x2_t v38;
  float32x4x2_t v39;
  float32x4x2_t v40;
  float32x4x2_t v41;
  float32x4x2_t v42;
  float32x4x2_t v43;
  float32x4x2_t v44;
  float32x4x2_t v45;

  v4 = a3 - 1;
  if (a3 >= 1) {
    v5 = a4 + 3;
    if (a4 >= 0) {
      v5 = a4;
    }
    v6 = (__int64)v5 >> 2;
    if ((a3 & 1) != 0) {
      v7 = &a2[8 * v6];
      v32 = vld2q_f32(a2);
      a2 += 8;
      v35 = vld2q_f32(v7);
      v8 = &v7[8 * v6];
      v38 = vld2q_f32(v8);
      v41 = vld2q_f32(&v8[8 * v6]);
      v9 = vaddq_s32(v38.val[0], v32.val[0]);
      v10 = vaddq_s32(v38.val[1], v32.val[1]);
      v11 = vsubq_s32(v32.val[0], v38.val[0]);
      v32.val[0] = vsubq_s32(v38.val[1], v32.val[1]);
      v32.val[1] = vaddq_s32(v41.val[0], v35.val[0]);
      v38.val[0] = vaddq_s32(v41.val[1], v35.val[1]);
      v38.val[1] = vsubq_s32(v35.val[0], v41.val[0]);
      v35.val[0] = vsubq_s32(v41.val[1], v35.val[1]);
      v41.val[0] = vsubq_s32(v9, v32.val[1]);
      v41.val[1] = vsubq_s32(v10, v38.val[0]);
      v44.val[0] = vaddq_s32(v32.val[1], v9);
      v44.val[1] = vaddq_s32(v38.val[0], v10);
      vst2q_f32(result, v44);
      v26.val[0] = vaddq_s32(v35.val[0], v11);
      v26.val[1] = vsubq_s32(v38.val[1], v32.val[0]);
      vst2q_f32(result + 8, v26);
      vst2q_f32(result + 16, v41);
      v12 = result + 24;
      result += 32;
      v27.val[0] = vsubq_s32(v11, v35.val[0]);
      v27.val[1] = vnegq_s32(vaddq_s32(v32.val[0], v38.val[1]));
      vst2q_f32(v12, v27);
      if (a3 == 1) {
        return result;
      }
    }
    else {
      v4 = a3;
      if (a3 == 1) {
        return result;
      }
    }
    v13 = a2 + 8;
    v14 = v4 - 1;
    v15 = &a2[24 * (int)v6 + 8];
    v16 = &a2[16 * v6 + 8];
    v17 = &a2[8 * v6 + 8];
    do {
      v18 = v14 >= 2;
      v14 -= 2;
      v33 = vld2q_f32(v13 - 8);
      v36 = vld2q_f32(v17 - 8);
      v39 = vld2q_f32(v16 - 8);
      v42 = vld2q_f32(v15 - 8);
      v19 = vaddq_s32(v39.val[0], v33.val[0]);
      v20 = vaddq_s32(v39.val[1], v33.val[1]);
      v21 = vsubq_s32(v33.val[0], v39.val[0]);
      v33.val[0] = vsubq_s32(v39.val[1], v33.val[1]);
      v33.val[1] = vaddq_s32(v42.val[0], v36.val[0]);
      v39.val[0] = vaddq_s32(v42.val[1], v36.val[1]);
      v39.val[1] = vsubq_s32(v36.val[0], v42.val[0]);
      v36.val[0] = vsubq_s32(v42.val[1], v36.val[1]);
      v42.val[0] = vsubq_s32(v19, v33.val[1]);
      v42.val[1] = vsubq_s32(v20, v39.val[0]);
      v45.val[0] = vaddq_s32(v33.val[1], v19);
      v45.val[1] = vaddq_s32(v39.val[0], v20);
      vst2q_f32(result, v45);
      v28.val[0] = vaddq_s32(v36.val[0], v21);
      v28.val[1] = vsubq_s32(v39.val[1], v33.val[0]);
      vst2q_f32(result + 8, v28);
      vst2q_f32(result + 16, v42);
      v29.val[0] = vsubq_s32(v21, v36.val[0]);
      v29.val[1] = vnegq_s32(vaddq_s32(v33.val[0], v39.val[1]));
      vst2q_f32(result + 24, v29);
      v34 = vld2q_f32(v13);
      v37 = vld2q_f32(v17);
      v40 = vld2q_f32(v16);
      v43 = vld2q_f32(v15);
      v15 += 16;
      v16 += 16;
      v17 += 16;
      v13 += 16;
      v22 = vaddq_s32(v40.val[0], v34.val[0]);
      v23 = vaddq_s32(v40.val[1], v34.val[1]);
      v24 = vsubq_s32(v34.val[0], v40.val[0]);
      v34.val[0] = vsubq_s32(v40.val[1], v34.val[1]);
      v34.val[1] = vaddq_s32(v43.val[0], v37.val[0]);
      v40.val[0] = vaddq_s32(v43.val[1], v37.val[1]);
      v40.val[1] = vsubq_s32(v37.val[0], v43.val[0]);
      v37.val[0] = vsubq_s32(v43.val[1], v37.val[1]);
      v43.val[0] = vsubq_s32(v22, v34.val[1]);
      v43.val[1] = vsubq_s32(v23, v40.val[0]);
      v45.val[0] = vaddq_s32(v34.val[1], v22);
      v45.val[1] = vaddq_s32(v40.val[0], v23);
      vst2q_f32(result + 32, v45);
      v30.val[0] = vaddq_s32(v37.val[0], v24);
      v30.val[1] = vsubq_s32(v40.val[1], v34.val[0]);
      vst2q_f32(result + 40, v30);
      vst2q_f32(result + 48, v43);
      v25 = result + 56;
      result += 64;
      v31.val[0] = vsubq_s32(v24, v37.val[0]);
      v31.val[1] = vnegq_s32(vaddq_s32(v34.val[0], v40.val[1]));
      vst2q_f32(v25, v31);
    } while (v18);
  }
  return result;
}

float* SdkHr_217380(float* result, const float* a2, int a3, int a4)
{
  int v4;
  int v5;
  __int64 v6;
  const float* v7;
  int32x4_t v8;
  int32x4_t v9;
  int32x4_t v10;
  float* v11;
  const float* v12;
  unsigned int v13;
  const float* v14;
  const float* v15;
  int32x4_t v16;
  bool v17;
  int32x4_t v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  float* v25;
  float32x4x2_t v26;
  float32x4x2_t v27;
  float32x4x2_t v28;
  float32x4x2_t v29;
  float32x4x2_t v30;
  float32x4x2_t v31;
  float32x4x2_t v32;
  float32x4x2_t v33;
  float32x4x2_t v34;
  float32x4x2_t v35;
  float32x4x2_t v36;
  float32x4x2_t v37;
  float32x4x2_t v38;
  float32x4x2_t v39;

  v4 = a3 - 1;
  if (a3 >= 1) {
    v5 = a4 / 3;
    v6 = a4 / 3;
    if ((a3 & 1) != 0) {
      v7 = &a2[8 * v5];
      v28 = vld2q_f32(a2);
      a2 += 8;
      v31 = vld2q_f32(v7);
      v34 = vld2q_f32(&v7[8 * v5]);
      v8 = vaddq_s32(v34.val[1], v31.val[1]);
      v9 = vaddq_s32(v34.val[0], v31.val[0]);
      v10 = vsubq_s32(v31.val[0], v34.val[0]);
      v31.val[0] = vsubq_s32(v34.val[1], v31.val[1]);
      v34.val[0] = vdupq_n_s32(0x9126145F);
      v34.val[1] = vqrdmulhq_s32(v34.val[0], v10);
      v31.val[0] = vqrdmulhq_s32(v34.val[0], v31.val[0]);
      v39.val[0] = vaddq_s32(v9, v28.val[0]);
      v39.val[1] = vaddq_s32(v8, v28.val[1]);
      v31.val[1] = vsubq_s32(v28.val[0], vshrq_n_s32(v9, 1u));
      v28.val[1] = vsraq_n_s32(v28.val[1], vnegq_s32(v8), 1u);
      v37.val[0] = vaddq_s32(v31.val[0], v31.val[1]);
      v31.val[0] = vsubq_s32(v31.val[1], v31.val[0]);
      vst2q_f32(result, v39);
      v31.val[1] = vsubq_s32(v28.val[1], v34.val[1]);
      v37.val[1] = vaddq_s32(v28.val[1], v34.val[1]);
      vst2q_f32(result + 8, v31);
      v11 = result + 16;
      result += 24;
      vst2q_f32(v11, v37);
      if (a3 == 1) {
        return result;
      }
    }
    else {
      v4 = a3;
      if (a3 == 1) {
        return result;
      }
    }
    v12 = a2 + 8;
    v13 = v4 - 1;
    v14 = &a2[16 * v6 + 8];
    v15 = &a2[8 * v6 + 8];
    v16 = vdupq_n_s32(0x9126145F);
    do {
      v17 = v13 >= 2;
      v13 -= 2;
      v29 = vld2q_f32(v12 - 8);
      v32 = vld2q_f32(v15 - 8);
      v35 = vld2q_f32(v14 - 8);
      v18 = vaddq_s32(v35.val[1], v32.val[1]);
      v19 = vaddq_s32(v35.val[0], v32.val[0]);
      v20 = vsubq_s32(v32.val[0], v35.val[0]);
      v32.val[0] = vsubq_s32(v35.val[1], v32.val[1]);
      v32.val[1] = vshrq_n_s32(v19, 1u);
      v35.val[0] = vqrdmulhq_s32(v16, v20);
      v32.val[0] = vqrdmulhq_s32(v16, v32.val[0]);
      v35.val[1] = vaddq_s32(v19, v29.val[0]);
      v21 = vaddq_s32(v18, v29.val[1]);
      v32.val[1] = vsubq_s32(v29.val[0], v32.val[1]);
      v29.val[1] = vsraq_n_s32(v29.val[1], vnegq_s32(v18), 1u);
      v26.val[0] = v35.val[1];
      v26.val[1] = v21;
      vst2q_f32(result, v26);
      v38.val[0] = vaddq_s32(v32.val[0], v32.val[1]);
      v32.val[0] = vsubq_s32(v32.val[1], v32.val[0]);
      v32.val[1] = vsubq_s32(v29.val[1], v35.val[0]);
      v38.val[1] = vaddq_s32(v29.val[1], v35.val[0]);
      vst2q_f32(result + 8, v32);
      vst2q_f32(result + 16, v38);
      v33 = vld2q_f32(v15);
      v36 = vld2q_f32(v14);
      v30 = vld2q_f32(v12);
      v14 += 16;
      v15 += 16;
      v12 += 16;
      v38.val[0] = vaddq_s32(v36.val[1], v33.val[1]);
      v22 = vaddq_s32(v36.val[0], v33.val[0]);
      v23 = vsubq_s32(v33.val[0], v36.val[0]);
      v33.val[0] = vsubq_s32(v36.val[1], v33.val[1]);
      v33.val[1] = vshrq_n_s32(v22, 1u);
      v36.val[0] = vqrdmulhq_s32(v16, v23);
      v33.val[0] = vqrdmulhq_s32(v16, v33.val[0]);
      v36.val[1] = vaddq_s32(v22, v30.val[0]);
      v24 = vaddq_s32(v38.val[0], v30.val[1]);
      v33.val[1] = vsubq_s32(v30.val[0], v33.val[1]);
      v30.val[1] = vsraq_n_s32(v30.val[1], vnegq_s32(v38.val[0]), 1u);
      v27.val[0] = v36.val[1];
      v27.val[1] = v24;
      vst2q_f32(result + 24, v27);
      v38.val[0] = vaddq_s32(v33.val[0], v33.val[1]);
      v33.val[0] = vsubq_s32(v33.val[1], v33.val[0]);
      v33.val[1] = vsubq_s32(v30.val[1], v36.val[0]);
      v38.val[1] = vaddq_s32(v30.val[1], v36.val[0]);
      vst2q_f32(result + 32, v33);
      v25 = result + 40;
      result += 48;
      vst2q_f32(v25, v38);
    } while (v17);
  }
  return result;
}

float* SdkHr_217560(float* result, const float* a2, int a3, int a4)
{
  int32x4_t v4;
  int32x4_t v5;
  unsigned int v6;
  int32x4_t v7;
  __int64 v8;
  int32x4_t v9;
  const float* v10;
  const float* v11;
  const float* v12;
  int32x4_t v13;
  int32x4_t v14;
  int32x4_t v15;
  int32x4_t v16;
  int32x4_t v17;
  int32x4_t v18;
  int32x4_t v19;
  float* v20;
  float32x4x2_t v21;
  float32x4x2_t v22;
  float32x4x2_t v23;
  float32x4x2_t v24;
  float32x4x2_t v25;
  float32x4x2_t v26;
  float32x4x2_t v27;
  float32x4x2_t v28;
  float32x4x2_t v29;
  float32x4x2_t v30;

  if (a3 >= 1) {
    v4 = vdupq_n_s32(0x278DDE6Eu);
    v5 = vdupq_n_s32(0x98722192);
    v6 = a3 + 1;
    v7 = vdupq_n_s32(0x8643C7B3);
    v8 = 8LL * (a4 / 5);
    v9 = vdupq_n_s32(0xB4C373EE);
    do {
      v10 = &a2[v8];
      v23 = vld2q_f32(a2);
      a2 += 8;
      --v6;
      v24 = vld2q_f32(v10);
      v11 = &v10[v8];
      v26 = vld2q_f32(v11);
      v12 = &v11[v8];
      v27 = vld2q_f32(v12);
      v13 = vsubq_s32(v26.val[0], v27.val[0]);
      v28 = vld2q_f32(&v12[v8]);
      v14 = vaddq_s32(v28.val[0], v24.val[0]);
      v15 = vaddq_s32(v28.val[1], v24.val[1]);
      v16 = vsubq_s32(v24.val[0], v28.val[0]);
      v24.val[0] = vsubq_s32(v28.val[1], v24.val[1]);
      v28.val[0] = vaddq_s32(v27.val[0], v26.val[0]);
      v28.val[1] = vaddq_s32(v27.val[1], v26.val[1]);
      v26.val[0] = vsubq_s32(v27.val[1], v26.val[1]);
      v17 = vnegq_s32(v28.val[1]);
      v27.val[1] = vaddq_s32(v28.val[1], v23.val[1]);
      v28.val[1] = vqrdmulhq_s32(v5, v28.val[0]);
      v24.val[1] = vnegq_s32(v15);
      v26.val[1] = vaddq_s32(vaddq_s32(v28.val[0], v23.val[0]), v14);
      v27.val[0] = vaddq_s32(v27.val[1], v15);
      v28.val[0] = vaddq_s32(v23.val[0], vqrdmulhq_s32(v4, v28.val[0]));
      v18 = vaddq_s32(vqrdmulhq_s32(v9, v26.val[0]),
                      vqrdmulhq_s32(v7, v24.val[0]));
      v27.val[1] =
          vaddq_s32(vqrdmulhq_s32(v4, v14), vaddq_s32(v23.val[0], v28.val[1]));
      v19 = vaddq_s32(vqrdmulhq_s32(v9, v13), vqrdmulhq_s32(v7, v16));
      v21.val[0] = v26.val[1];
      v21.val[1] = v27.val[0];
      vst2q_f32(result, v21);
      v30.val[0] = vsubq_s32(v27.val[1], v18);
      v25.val[0] = vaddq_s32(v18, v27.val[1]);
      v23.val[0] =
          vaddq_s32(vsubq_s32(vqrdmulhq_s32(v5, v24.val[1]), v23.val[1]),
                    vqrdmulhq_s32(v4, v17));
      v28.val[1] =
          vaddq_s32(vsubq_s32(vqrdmulhq_s32(v4, v24.val[1]), v23.val[1]),
                    vqrdmulhq_s32(v5, v17));
      v27.val[1] = vaddq_s32(vqrdmulhq_s32(v5, v14), v28.val[0]);
      v23.val[1] = vsubq_s32(vqrdmulhq_s32(v7, v26.val[0]),
                             vqrdmulhq_s32(v9, v24.val[0]));
      v25.val[1] = vsubq_s32(v19, v28.val[1]);
      v24.val[0] = vsubq_s32(vqrdmulhq_s32(v9, v16), vqrdmulhq_s32(v7, v13));
      v30.val[1] = vnegq_s32(vaddq_s32(v28.val[1], v19));
      v29.val[0] = vaddq_s32(v23.val[1], v27.val[1]);
      vst2q_f32(result + 8, v30);
      v29.val[1] = vnegq_s32(vaddq_s32(v23.val[0], v24.val[0]));
      vst2q_f32(result + 16, v29);
      v22.val[0] = vsubq_s32(v27.val[1], v23.val[1]);
      v22.val[1] = vsubq_s32(v24.val[0], v23.val[0]);
      vst2q_f32(result + 24, v22);
      v20 = result + 32;
      result += 40;
      vst2q_f32(v20, v25);
    } while (v6 > 1);
  }
  return result;
}

__int64 SdkHr_239b20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int16 v10;
  __int16 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  unsigned int v16;
  float v17;
  float v18;
  float v19;
  float v20;
  unsigned int v21;
  __int64 v22;
  unsigned int v23;
  char v24;
  float v25;
  float v26;
  __int16 v27;
  char v28;
  char v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int16 v33;
  __int16 v34;
  __int16 v35;
  __int64 v36;
  __int64 v37;
  __int64 result;
  __int64 v39;
  __int16 v40;

  *(_WORD*)(a1 + 36) =
      *(_WORD*)(a1 + 36) & 0xFFFE | *(unsigned __int8*)(a3 + 9);
  *(_DWORD*)(a1 + 8) = *(_DWORD*)a3;
  *(_DWORD*)(a1 + 12) = *(_DWORD*)(a3 + 4);
  SdkRoutine_863030();
  v10 = *(_WORD*)(a1 + 36);
  *(_BYTE*)(a1 + 5) = *(_BYTE*)(a3 + 350);
  *(_DWORD*)(a1 + 28) = *(_DWORD*)(a3 + 16);
  *(_DWORD*)(a1 + 32) = *(_DWORD*)(a3 + 20);
  *(_DWORD*)a1 = *(_DWORD*)(a3 + 12);
  *(_BYTE*)(a1 + 38) = *(_BYTE*)(a3 + 11);
  *(_BYTE*)(a1 + 4) = *(_DWORD*)(a3 + 24);
  *(_DWORD*)(a1 + 44) = *(_DWORD*)(a3 + 28);
  *(_DWORD*)(a1 + 48) = *(_DWORD*)(a3 + 32);
  v11 = *(_WORD*)(a3 + 348);
  *(_WORD*)(a1 + 36) = v10 & 0xFBFF | (v11 << 8) & 0x400;
  if ((v11 & 4) != 0) {
    *(_QWORD*)(a1 + 120) = *(_QWORD*)(a1 + 76);
    *(_DWORD*)(a1 + 128) = *(_DWORD*)(a1 + 84);
    *(_QWORD*)(a1 + 132) = *(_QWORD*)(a1 + 88);
    v17 = vcvts_n_f32_s32(*(__int16*)(a3 + 38), 0xEu);
    v18 = vcvts_n_f32_s32(*(__int16*)(a3 + 40), 0xEu);
    v19 = vcvts_n_f32_s32(*(__int16*)(a3 + 42), 0xEu);
    v20 = vcvts_n_f32_s32(*(__int16*)(a3 + 44), 0xEu);
    v21 = *(__int16*)(a3 + 46);
    *(_BYTE*)(a1 + 72) = *(_BYTE*)(a3 + 36);
    v22 = *(_QWORD*)(a1 + 100);
    *(float*)(a1 + 76) = v17;
    *(float*)(a1 + 80) = v18;
    *(float*)(a1 + 84) = v19;
    *(float*)(a1 + 88) = v20;
    *(_QWORD*)(a1 + 140) = v22;
    LODWORD(v22) = *(_DWORD*)(a1 + 108);
    *(float*)(a1 + 92) = vcvts_n_f32_s32(v21, 0xEu);
    *(_DWORD*)(a1 + 148) = v22;
    *(_QWORD*)(a1 + 152) = *(_QWORD*)(a1 + 112);
  }
  else {
    v12 = vcvts_n_f32_s32(*(__int16*)(a3 + 38), 0xEu);
    v13 = vcvts_n_f32_s32(*(__int16*)(a3 + 40), 0xEu);
    v14 = vcvts_n_f32_s32(*(__int16*)(a3 + 42), 0xEu);
    v15 = vcvts_n_f32_s32(*(__int16*)(a3 + 44), 0xEu);
    v16 = *(__int16*)(a3 + 46);
    *(_BYTE*)(a1 + 72) = *(_BYTE*)(a3 + 36);
    *(float*)(a1 + 76) = v12;
    *(float*)(a1 + 80) = v13;
    *(float*)(a1 + 84) = v14;
    *(float*)(a1 + 88) = v15;
    *(float*)(a1 + 92) = vcvts_n_f32_s32(v16, 0xEu);
  }
  v23 = *(__int16*)(a3 + 56);
  v24 = *(_BYTE*)(a3 + 48);
  v25 = vcvts_n_f32_s32(*(__int16*)(a3 + 52), 0xEu);
  v26 = vcvts_n_f32_s32(*(__int16*)(a3 + 54), 0xEu);
  v27 = *(_WORD*)(a3 + 58);
  *(float*)(a1 + 100) = vcvts_n_f32_s32(*(__int16*)(a3 + 50), 0xEu);
  *(float*)(a1 + 104) = v25;
  *(_BYTE*)(a1 + 96) = v24;
  *(float*)(a1 + 108) = v26;
  *(float*)(a1 + 112) = vcvts_n_f32_s32(v23, 0xEu);
  *(float*)(a1 + 116) = vcvts_n_f32_s32(v27, 0xEu);
  if ((SdkRoutine_863040(a5) & 1) != 0) {
    v28 = *(_BYTE*)(a3 + 351);
  }
  else {
    v28 = 2;
  }
  *(_BYTE*)(a1 + 70) = v28;
  *(_DWORD*)(a1 + 40) = *(_DWORD*)(a3 + 60);
  *(_BYTE*)(a1 + 6) = *(_BYTE*)(a3 + 64);
  if ((SdkRoutine_863050(a5) & 1) != 0) {
    v29 = *(_BYTE*)(a3 + 345);
  }
  else {
    v29 = 0;
  }
  *(_BYTE*)(a1 + 39) += v29;
  *(_DWORD*)(a1 + 16) = *(_DWORD*)(a3 + 88);
  if ((SdkRoutine_862970(a5) & 1) != 0) {
    v30 = *(_DWORD*)(a3 + 92);
  }
  else {
    v30 = -1;
  }
  *(_DWORD*)(a1 + 64) = v30;
  v31 = *(_QWORD*)(a3 + 320);
  v32 = *(_QWORD*)(a3 + 328);
  *(_QWORD*)(a1 + 560) = *(_QWORD*)(a3 + 336);
  *(_QWORD*)(a1 + 552) = v32;
  *(_QWORD*)(a1 + 544) = v31;
  if ((SdkRoutine_863060(a5) & 1) != 0) {
    v33 = (*(_WORD*)(a3 + 348) & 1) << 8;
    if ((SdkRoutine_863070(a5) & 1) == 0) {
    LABEL_15:
      v34 = 0;
      goto LABEL_18;
    }
  }
  else {
    v33 = 0;
    if ((SdkRoutine_863070(a5) & 1) == 0) {
      goto LABEL_15;
    }
  }
  v34 = (*(_WORD*)(a3 + 348) << 8) & 0x200;
LABEL_18:
  v35 = v34 | v33 | *(_WORD*)(a1 + 36) & 0xFCFF;
  *(_WORD*)(a1 + 36) = v35;
  if (*(_BYTE*)(a3 + 344) == 1) {
    *(_WORD*)(a1 + 36) = v35 & 0xFFF7;
  }
  v36 = SdkRoutine_863080(a1 + 160);
  v37 = *(_QWORD*)(a3 + 72);
  if (v36 == v37) {
    result = SdkRoutine_863090(a1 + 160);
    v39 = *(_QWORD*)(a3 + 80);
    if (result == v39 && (*(_WORD*)(a1 + 36) & 0x10) == 0) {
      *(_DWORD*)a2 = 0;
      *(_QWORD*)(a2 + 8) = 0;
      return result;
    }
    v37 = *(_QWORD*)(a3 + 72);
  }
  else {
    v39 = *(_QWORD*)(a3 + 80);
  }
  result = SdkRoutine_8630a0(a4, a2, a1 + 160, v37, v39);
  if ((result & 1) != 0) {
    v40 = 0;
  }
  else {
    v40 = 16;
  }
  *(_WORD*)(a1 + 36) = *(_WORD*)(a1 + 36) & 0xFFEF | v40;
  return result;
}

__int64 SdkHr_242980(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5,
                     int a6)
{
  int v6;
  unsigned int v7;
  __int64 v12;
  __int64 v13;
  __int64 v15;
  _QWORD v16[4];

  v6 = *(char*)(a3 + 4);
  *(_DWORD*)(a1 + 36) = a6;
  *(_DWORD*)(a1 + 40) = v6;
  *(_WORD*)(a1 + 24) = a6 + a5;
  *(_DWORD*)(a1 + 28) = *(_DWORD*)a3;
  v7 = *(unsigned __int8*)(a3 + 5);
  if (v7 >= 3) {
    v15 = SdkRoutine_857150(a1);
    return SdkRoutine_242a60(v15);
  }
  else {
    *(_BYTE*)(a1 + 16) = v7;
    *(_DWORD*)(a1 + 32) = vcvts_n_s32_f32(*(float*)(a3 + 44), 0xFu);
    SdkRoutine_242a60(a3 + 192);
    SdkRoutine_242a60(a3 + 280);
    SdkRoutine_242a60(a3 + 368);
    SdkRoutine_242a60(a3 + 456);
    *(_QWORD*)(a1 + 240) = SdkRoutine_862aa0(a2, a4, 256);
    v12 = *(_QWORD*)(a3 + 168);
    v16[0] = *(_QWORD*)(a3 + 160);
    v16[1] = v12;
    v13 = *(_QWORD*)(a3 + 184);
    v16[2] = *(_QWORD*)(a3 + 176);
    v16[3] = v13;
    SdkRoutine_863590(v16);
    *(_WORD*)(a1 + 26) = *(_BYTE*)(a3 + 37) & 3;
    return a1;
  }
}

__int64 SdkHr_242b10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5,
                     int a6)
{
  int v6;
  unsigned int v7;
  __int64 v12;
  __int64 v13;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[4];

  v6 = *(char*)(a3 + 4);
  *(_DWORD*)(a1 + 36) = a6;
  *(_DWORD*)(a1 + 40) = v6;
  *(_WORD*)(a1 + 24) = a6 + a5;
  *(_DWORD*)(a1 + 28) = *(_DWORD*)a3;
  v7 = *(unsigned __int8*)(a3 + 5);
  if (v7 >= 3) {
    v15 = SdkRoutine_857150(a1);
    return SdkRoutine_242c00(v15, v16, v17, v18, v19, v20);
  }
  else {
    *(_BYTE*)(a1 + 16) = v7;
    *(_DWORD*)(a1 + 32) = vcvts_n_s32_f32(*(float*)(a3 + 44), 0xFu);
    SdkRoutine_242a60(a3 + 192);
    SdkRoutine_242a60(a3 + 280);
    SdkRoutine_242a60(a3 + 368);
    SdkRoutine_242a60(a3 + 456);
    *(_QWORD*)(a1 + 240) = SdkRoutine_862aa0(a2, a4, 256);
    v12 = *(_QWORD*)(a3 + 168);
    v21[0] = *(_QWORD*)(a3 + 160);
    v21[1] = v12;
    v13 = *(_QWORD*)(a3 + 184);
    v21[2] = *(_QWORD*)(a3 + 176);
    v21[3] = v13;
    *(_QWORD*)(a1 + 248) = SdkRoutine_863470(v21, 1);
    SdkRoutine_863590(v21);
    *(_WORD*)(a1 + 26) = *(_BYTE*)(a3 + 37) & 3;
    return a1;
  }
}

__int64 SdkHr_242c00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5,
                     int a6)
{
  int v6;
  unsigned int v7;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD v25[4];

  v6 = *(char*)(a3 + 4);
  *(_DWORD*)(a1 + 36) = a6;
  *(_DWORD*)(a1 + 40) = v6;
  *(_WORD*)(a1 + 24) = a6 + a5;
  *(_DWORD*)(a1 + 28) = *(_DWORD*)a3;
  v7 = *(unsigned __int8*)(a3 + 5);
  if (v7 >= 3) {
    v19 = SdkRoutine_857150(a1);
    return SdkRoutine_242e60(v19, v20, v21, v22, v23, v24);
  }
  else {
    *(_BYTE*)(a1 + 16) = v7;
    *(_DWORD*)(a1 + 32) = vcvts_n_s32_f32(*(float*)(a3 + 44), 0xFu);
    *(_QWORD*)(a1 + 48) = SdkRoutine_863470(a3 + 192, 1);
    *(_DWORD*)(a1 + 56) = SdkRoutine_863090(a3 + 192);
    *(_DWORD*)(a1 + 60) = *(_DWORD*)(a3 + 256);
    *(_DWORD*)(a1 + 64) = *(_DWORD*)(a3 + 260);
    *(_BYTE*)(a1 + 68) = *(_BYTE*)(a3 + 264);
    *(_BYTE*)(a1 + 69) = *(_BYTE*)(a3 + 265);
    v12 = SdkRoutine_863080(a3 + 224);
    if (v12 != 0) {
      *(_QWORD*)(a1 + 72) = SdkRoutine_863470(a3 + 224, 1);
      LODWORD(v12) = SdkRoutine_863090(a3 + 224);
    }
    else {
      *(_QWORD*)(a1 + 72) = 0;
    }
    *(_DWORD*)(a1 + 80) = v12;
    *(_QWORD*)(a1 + 88) = SdkRoutine_863470(a3 + 280, 1);
    *(_DWORD*)(a1 + 96) = SdkRoutine_863090(a3 + 280);
    *(_DWORD*)(a1 + 100) = *(_DWORD*)(a3 + 344);
    *(_DWORD*)(a1 + 104) = *(_DWORD*)(a3 + 348);
    *(_BYTE*)(a1 + 108) = *(_BYTE*)(a3 + 352);
    *(_BYTE*)(a1 + 109) = *(_BYTE*)(a3 + 353);
    v13 = SdkRoutine_863080(a3 + 312);
    if (v13 != 0) {
      *(_QWORD*)(a1 + 112) = SdkRoutine_863470(a3 + 312, 1);
      LODWORD(v13) = SdkRoutine_863090(a3 + 312);
    }
    else {
      *(_QWORD*)(a1 + 112) = 0;
    }
    *(_DWORD*)(a1 + 120) = v13;
    *(_QWORD*)(a1 + 128) = SdkRoutine_863470(a3 + 368, 1);
    *(_DWORD*)(a1 + 136) = SdkRoutine_863090(a3 + 368);
    *(_DWORD*)(a1 + 140) = *(_DWORD*)(a3 + 432);
    *(_DWORD*)(a1 + 144) = *(_DWORD*)(a3 + 436);
    *(_BYTE*)(a1 + 148) = *(_BYTE*)(a3 + 440);
    *(_BYTE*)(a1 + 149) = *(_BYTE*)(a3 + 441);
    v14 = SdkRoutine_863080(a3 + 400);
    if (v14 != 0) {
      *(_QWORD*)(a1 + 152) = SdkRoutine_863470(a3 + 400, 1);
      LODWORD(v14) = SdkRoutine_863090(a3 + 400);
    }
    else {
      *(_QWORD*)(a1 + 152) = 0;
    }
    *(_DWORD*)(a1 + 160) = v14;
    *(_QWORD*)(a1 + 168) = SdkRoutine_863470(a3 + 456, 1);
    *(_DWORD*)(a1 + 176) = SdkRoutine_863090(a3 + 456);
    *(_DWORD*)(a1 + 180) = *(_DWORD*)(a3 + 520);
    *(_DWORD*)(a1 + 184) = *(_DWORD*)(a3 + 524);
    *(_BYTE*)(a1 + 188) = *(_BYTE*)(a3 + 528);
    *(_BYTE*)(a1 + 189) = *(_BYTE*)(a3 + 529);
    v15 = SdkRoutine_863080(a3 + 488);
    if (v15 != 0) {
      *(_QWORD*)(a1 + 192) = SdkRoutine_863470(a3 + 488, 1);
      LODWORD(v15) = SdkRoutine_863090(a3 + 488);
    }
    else {
      *(_QWORD*)(a1 + 192) = 0;
    }
    *(_DWORD*)(a1 + 200) = v15;
    *(_QWORD*)(a1 + 208) = SdkRoutine_862aa0(a2, a4, 256);
    v16 = *(_QWORD*)(a3 + 168);
    v25[0] = *(_QWORD*)(a3 + 160);
    v25[1] = v16;
    v17 = *(_QWORD*)(a3 + 184);
    v25[2] = *(_QWORD*)(a3 + 176);
    v25[3] = v17;
    SdkRoutine_863590(v25);
    *(_WORD*)(a1 + 26) = *(_BYTE*)(a3 + 37) & 3;
    return a1;
  }
}

__int64 SdkHr_242e60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5,
                     __int16 a6)
{
  unsigned int v6;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v18[4];

  *(_WORD*)(a1 + 24) = a6 + a5;
  *(_DWORD*)(a1 + 28) = *(_DWORD*)a3;
  v6 = *(unsigned __int8*)(a3 + 5);
  if (v6 >= 3) {
    SdkRoutine_857150(a1);
    __udf(0);
  }
  *(_BYTE*)(a1 + 16) = v6;
  *(_DWORD*)(a1 + 32) = vcvts_n_s32_f32(*(float*)(a3 + 44), 0xFu);
  *(_QWORD*)(a1 + 40) = SdkRoutine_863470(a3 + 192, 1);
  *(_DWORD*)(a1 + 48) = SdkRoutine_863090(a3 + 192);
  *(_DWORD*)(a1 + 52) = *(_DWORD*)(a3 + 256);
  *(_DWORD*)(a1 + 56) = *(_DWORD*)(a3 + 260);
  *(_BYTE*)(a1 + 60) = *(_BYTE*)(a3 + 264);
  *(_BYTE*)(a1 + 61) = *(_BYTE*)(a3 + 265);
  v11 = SdkRoutine_863080(a3 + 224);
  if (v11 != 0) {
    *(_QWORD*)(a1 + 64) = SdkRoutine_863470(a3 + 224, 1);
    LODWORD(v11) = SdkRoutine_863090(a3 + 224);
  }
  else {
    *(_QWORD*)(a1 + 64) = 0;
  }
  *(_DWORD*)(a1 + 72) = v11;
  *(_QWORD*)(a1 + 80) = SdkRoutine_863470(a3 + 280, 1);
  *(_DWORD*)(a1 + 88) = SdkRoutine_863090(a3 + 280);
  *(_DWORD*)(a1 + 92) = *(_DWORD*)(a3 + 344);
  *(_DWORD*)(a1 + 96) = *(_DWORD*)(a3 + 348);
  *(_BYTE*)(a1 + 100) = *(_BYTE*)(a3 + 352);
  *(_BYTE*)(a1 + 101) = *(_BYTE*)(a3 + 353);
  v12 = SdkRoutine_863080(a3 + 312);
  if (v12 != 0) {
    *(_QWORD*)(a1 + 104) = SdkRoutine_863470(a3 + 312, 1);
    LODWORD(v12) = SdkRoutine_863090(a3 + 312);
  }
  else {
    *(_QWORD*)(a1 + 104) = 0;
  }
  *(_DWORD*)(a1 + 112) = v12;
  *(_QWORD*)(a1 + 120) = SdkRoutine_863470(a3 + 368, 1);
  *(_DWORD*)(a1 + 128) = SdkRoutine_863090(a3 + 368);
  *(_DWORD*)(a1 + 132) = *(_DWORD*)(a3 + 432);
  *(_DWORD*)(a1 + 136) = *(_DWORD*)(a3 + 436);
  *(_BYTE*)(a1 + 140) = *(_BYTE*)(a3 + 440);
  *(_BYTE*)(a1 + 141) = *(_BYTE*)(a3 + 441);
  v13 = SdkRoutine_863080(a3 + 400);
  if (v13 != 0) {
    *(_QWORD*)(a1 + 144) = SdkRoutine_863470(a3 + 400, 1);
    LODWORD(v13) = SdkRoutine_863090(a3 + 400);
  }
  else {
    *(_QWORD*)(a1 + 144) = 0;
  }
  *(_DWORD*)(a1 + 152) = v13;
  *(_QWORD*)(a1 + 160) = SdkRoutine_863470(a3 + 456, 1);
  *(_DWORD*)(a1 + 168) = SdkRoutine_863090(a3 + 456);
  *(_DWORD*)(a1 + 172) = *(_DWORD*)(a3 + 520);
  *(_DWORD*)(a1 + 176) = *(_DWORD*)(a3 + 524);
  *(_BYTE*)(a1 + 180) = *(_BYTE*)(a3 + 528);
  *(_BYTE*)(a1 + 181) = *(_BYTE*)(a3 + 529);
  v14 = SdkRoutine_863080(a3 + 488);
  if (v14 != 0) {
    *(_QWORD*)(a1 + 184) = SdkRoutine_863470(a3 + 488, 1);
    LODWORD(v14) = SdkRoutine_863090(a3 + 488);
  }
  else {
    *(_QWORD*)(a1 + 184) = 0;
  }
  *(_DWORD*)(a1 + 192) = v14;
  *(_QWORD*)(a1 + 200) = SdkRoutine_862aa0(a2, a4, 256);
  v15 = *(_QWORD*)(a3 + 168);
  v18[0] = *(_QWORD*)(a3 + 160);
  v18[1] = v15;
  v16 = *(_QWORD*)(a3 + 184);
  v18[2] = *(_QWORD*)(a3 + 176);
  v18[3] = v16;
  *(_QWORD*)(a1 + 208) = SdkRoutine_863470(v18, 1);
  SdkRoutine_863590(v18);
  *(_WORD*)(a1 + 26) = *(_BYTE*)(a3 + 37) & 3;
  return a1;
}

__int64 SdkHr_2e6880(__int64 result, int a2, int a3, __int64 a4, __int64 a5,
                     int a6)
{
  int v6;
  int v7;
  __int64 v8;
  int v9;
  signed int v10;
  unsigned int v11;
  char v12;
  bool v13;
  char v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  char v20;
  char v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  signed int v28;
  unsigned int v29;
  char v30;
  char v31;
  unsigned int v32;
  int v33;
  int v34;
  int v35;
  __int64 v36;
  int v37;
  signed int v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  int v46;
  int v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;

  if (a2 < 1) {
    if (a2 < a3) {
      v46 = 0;
      if (a6 <= 1) {
        v47 = 1;
      }
      else {
        v47 = a6;
      }
      do {
        LODWORD(v48) = a2;
        if ((((_BYTE)a3 - (_BYTE)a2) & 7) != 0) {
          v49 = ((_BYTE)a3 - (_BYTE)a2) & 7;
          v48 = a2;
          do {
            --v49;
            v50 = v48 + *(int*)(result + 8) * (__int64)v46;
            ++v48;
            *(_WORD*)(a5 + 2 * v50) = -14336;
          } while (v49 != 0);
        }
        if ((unsigned int)(a2 - a3) <= 0xFFFFFFF8) {
          v51 = 0;
          do {
            *(_WORD*)(a5 + 2 * ((int)v48 + v51 +
                                *(int*)(result + 8) * (__int64)v46)) = -14336;
            *(_WORD*)(a5 + 2 * ((int)v48 + 1 + v51 +
                                *(int*)(result + 8) * (__int64)v46)) = -14336;
            *(_WORD*)(a5 + 2 * ((int)v48 + 2 + v51 +
                                *(int*)(result + 8) * (__int64)v46)) = -14336;
            *(_WORD*)(a5 + 2 * ((int)v48 + 3 + v51 +
                                *(int*)(result + 8) * (__int64)v46)) = -14336;
            v52 = (int)v48 + 4 + v51 + *(int*)(result + 8) * (__int64)v46;
            v53 = v48 + v51;
            v51 += 8;
            *(_WORD*)(a5 + 2 * v52) = -14336;
            *(_WORD*)(a5 + 2LL * (v53 + v46 * *(_DWORD*)(result + 8) + 5)) =
                -14336;
            *(_WORD*)(a5 + 2LL * (v53 + v46 * *(_DWORD*)(result + 8) + 6)) =
                -14336;
            *(_WORD*)(a5 + 2LL * (v53 + v46 * *(_DWORD*)(result + 8) + 7)) =
                -14336;
          } while (a3 - (_DWORD)v48 != (_DWORD)v51);
        }
        ++v46;
      } while (v46 != v47);
    }
  }
  else {
    v6 = 0;
    if (a6 <= 1) {
      v7 = 1;
    }
    else {
      v7 = a6;
    }
    do {
      if (a2 == 1) {
        v8 = 0;
      }
      else {
        v8 = 0;
        do {
          v27 = v8 + v6 * *(_DWORD*)(result + 8);
          v28 = *(_DWORD*)(a4 + 4LL * v27);
          if (v28 != 0) {
            v29 = __clz(v28) ^ 0x1F;
            v30 = v29 - 15;
            v13 = v29 <= 0xF;
            v31 = 15 - v29;
            v32 = v29 << 10;
            v33 = v28 >> v30;
            v34 = v28 << v31;
            if (!v13) {
              v34 = v33;
            }
            v35 =
                v32 +
                (((unsigned __int16)(((unsigned int)((((unsigned __int16)(((unsigned int)(-2802 *
                                                                                          (((v34
                                                                                             << 16) +
                                                                                            0x40000000) >>
                                                                                           16)) >>
                                                                           16) +
                                                                          2545) *
                                                           (((v34 << 16) +
                                                             0x40000000) >>
                                                            15) -
                                                       341901312) >>
                                                      16) *
                                                     (((v34 << 16) +
                                                       0x40000000) >>
                                                      16)) >>
                                      15) +
                                     15746) *
                      (((v34 << 16) + 0x40000000) >> 15) -
                  445186048) >>
                 20) -
                13312;
          }
          else {
            LOWORD(v35) = -32767;
          }
          *(_WORD*)(a5 + 2LL * v27) = v35 - (SdkData_c1d7a4[v8] << 6);
          v36 = 2LL * ((int)v8 + v6 * *(_DWORD*)(result + 8));
          *(_WORD*)(a5 + v36) += 2048;
          v37 = v8 + v6 * *(_DWORD*)(result + 8) + 1;
          v38 = *(_DWORD*)(a4 + 4LL * v37);
          if (v38 != 0) {
            v19 = __clz(v38) ^ 0x1F;
            v20 = v19 - 15;
            v13 = v19 <= 0xF;
            v21 = 15 - v19;
            v22 = v19 << 10;
            v23 = v38 >> v20;
            v24 = v38 << v21;
            if (!v13) {
              v24 = v23;
            }
            v25 =
                v22 +
                (((unsigned __int16)(((unsigned int)((((unsigned __int16)(((unsigned int)(-2802 *
                                                                                          (((v24
                                                                                             << 16) +
                                                                                            0x40000000) >>
                                                                                           16)) >>
                                                                           16) +
                                                                          2545) *
                                                           (((v24 << 16) +
                                                             0x40000000) >>
                                                            15) -
                                                       341901312) >>
                                                      16) *
                                                     (((v24 << 16) +
                                                       0x40000000) >>
                                                      16)) >>
                                      15) +
                                     15746) *
                      (((v24 << 16) + 0x40000000) >> 15) -
                  445186048) >>
                 20) -
                13312;
          }
          else {
            LOWORD(v25) = -32767;
          }
          *(_WORD*)(a5 + 2LL * v37) = v25 - (SdkData_c1d7a4[v8 + 1] << 6);
          v26 = v8 + v6 * *(_DWORD*)(result + 8);
          v8 += 2;
          *(_WORD*)(a5 + 2LL * (v26 + 1)) += 2048;
        } while ((a2 & 0x7FFFFFFE) != v8);
      }
      if ((a2 & 1) != 0) {
        v9 = v8 + *(_DWORD*)(result + 8) * v6;
        v10 = *(_DWORD*)(a4 + 4LL * v9);
        if (v10 != 0) {
          v11 = __clz(v10) ^ 0x1F;
          v12 = v11 - 15;
          v13 = v11 <= 0xF;
          v14 = 15 - v11;
          v15 = v11 << 10;
          v16 = v10 >> v12;
          v17 = v10 << v14;
          if (!v13) {
            v17 = v16;
          }
          v18 =
              v15 +
              (((unsigned __int16)(((unsigned int)((((unsigned __int16)(((unsigned int)(-2802 *
                                                                                        (((v17
                                                                                           << 16) +
                                                                                          0x40000000) >>
                                                                                         16)) >>
                                                                         16) +
                                                                        2545) *
                                                         (((v17 << 16) +
                                                           0x40000000) >>
                                                          15) -
                                                     341901312) >>
                                                    16) *
                                                   (((v17 << 16) +
                                                     0x40000000) >>
                                                    16)) >>
                                    15) +
                                   15746) *
                    (((v17 << 16) + 0x40000000) >> 15) -
                445186048) >>
               20) -
              13312;
        }
        else {
          LOWORD(v18) = -32767;
        }
        *(_WORD*)(a5 + 2LL * v9) = v18 - (SdkData_c1d7a4[v8] << 6);
        v39 = 2LL * ((int)v8 + *(_DWORD*)(result + 8) * v6);
        *(_WORD*)(a5 + v39) += 2048;
      }
      if (a2 < a3) {
        LODWORD(v40) = a2;
        if ((((_BYTE)a3 - (_BYTE)a2) & 7) != 0) {
          v40 = a2;
          v41 = ((_BYTE)a3 - (_BYTE)a2) & 7;
          do {
            --v41;
            v42 = v40 + *(int*)(result + 8) * (__int64)v6;
            ++v40;
            *(_WORD*)(a5 + 2 * v42) = -14336;
          } while (v41 != 0);
        }
        if ((unsigned int)(a2 - a3) <= 0xFFFFFFF8) {
          v43 = 0;
          do {
            *(_WORD*)(a5 + 2 * ((int)v40 + v43 +
                                *(int*)(result + 8) * (__int64)v6)) = -14336;
            *(_WORD*)(a5 + 2 * ((int)v40 + 1 + v43 +
                                *(int*)(result + 8) * (__int64)v6)) = -14336;
            *(_WORD*)(a5 + 2 * ((int)v40 + 2 + v43 +
                                *(int*)(result + 8) * (__int64)v6)) = -14336;
            *(_WORD*)(a5 + 2 * ((int)v40 + 3 + v43 +
                                *(int*)(result + 8) * (__int64)v6)) = -14336;
            v44 = (int)v40 + 4 + v43 + *(int*)(result + 8) * (__int64)v6;
            v45 = v40 + v43;
            v43 += 8;
            *(_WORD*)(a5 + 2 * v44) = -14336;
            *(_WORD*)(a5 + 2LL * (v45 + v6 * *(_DWORD*)(result + 8) + 5)) =
                -14336;
            *(_WORD*)(a5 + 2LL * (v45 + v6 * *(_DWORD*)(result + 8) + 6)) =
                -14336;
            *(_WORD*)(a5 + 2LL * (v45 + v6 * *(_DWORD*)(result + 8) + 7)) =
                -14336;
          } while (a3 - (_DWORD)v40 != (_DWORD)v43);
        }
      }
      ++v6;
    } while (v6 != v7);
  }
  return result;
}

__int64 SdkHr_2e6d80(__int64 result, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  __int16 v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned __int64 v21;
  char v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  int v27;
  unsigned int v28;
  int v29;
  __int64 v30;
  char v31;
  __int64 v32;
  int v33;
  int v34;
  __int64 v35;
  char v36;
  __int64 v37;
  unsigned int v38;
  int v39;
  __int64 v40;
  unsigned int v41;
  __int64 v42;
  int v43;
  __int64 v44;
  _WORD* v45;
  unsigned int v46;
  _WORD* v47;
  unsigned int v48;
  _WORD* v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  __int16* v65;
  int v66;
  int v67;
  int v68;
  __int16* v69;
  unsigned int v70;
  int v71;
  int v72;
  int v73;
  unsigned int v74;
  __int16* v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  unsigned int v106;
  __int16* v107;
  int v108;
  __int16* v109;
  __int16* v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  __int16* v130;
  int v131;
  int v132;
  int v133;
  int v134;
  unsigned int v135;
  unsigned int v136;
  __int16* v137;
  int v138;
  __int16* v139;
  __int16* v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  unsigned int v157;
  __int64 v158;
  int v159;
  __int64 v160;
  __int64 v161;
  __int16* v162;
  int v163;
  __int16* v164;
  __int16* v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  int v184;
  __int16* v185;
  int v186;
  int v187;
  int v188;
  int v189;
  __int64 v190;
  int v191;
  __int16* v192;
  __int16* v193;
  int v194;
  int v195;
  int v196;
  int v197;
  int v198;
  int v199;
  int v200;
  int v201;
  int v202;
  int v203;
  int v204;
  int v205;
  int v206;
  int v207;
  int v208;
  int v209;
  _WORD* v210;
  unsigned int v211;
  _WORD* v212;
  unsigned int v213;
  _WORD* v214;
  int v215;
  int v216;
  int v217;
  int v218;
  int v219;
  int v220;
  int v221;
  int v222;
  int v223;
  int v224;
  int v225;
  int v226;
  int v227;
  int v228;
  int v229;
  __int16* v230;
  int v231;
  int v232;
  int v233;
  __int16* v234;
  unsigned int v235;
  int v236;
  int v237;
  int v238;
  int v239;
  __int16* v240;
  int v241;
  int v242;
  int v243;
  int v244;
  int v245;
  int v246;
  int v247;
  int v248;
  int v249;
  int v250;
  int v251;
  int v252;
  int v253;
  int v254;
  int v255;
  int v256;
  int v257;
  int v258;
  int v259;
  int v260;
  int v261;
  int v262;
  int v263;
  int v264;
  int v265;
  int v266;
  int v267;
  int v268;
  int v269;
  int v270;
  int v271;
  unsigned int v272;
  __int64 v273;
  __int64 v274;
  _WORD* v275;
  unsigned int v276;
  _WORD* v277;
  unsigned int v278;
  _WORD* v279;
  int v280;
  int v281;
  int v282;
  int v283;
  int v284;
  int v285;
  int v286;
  int v287;
  int v288;
  int v289;
  int v290;
  int v291;
  int v292;
  int v293;
  int v294;
  __int16* v295;
  int v296;
  int v297;
  int v298;
  __int16* v299;
  unsigned int v300;
  int v301;
  int v302;
  int v303;
  unsigned int v304;
  __int16* v305;
  int v306;
  int v307;
  int v308;
  int v309;
  int v310;
  int v311;
  int v312;
  int v313;
  int v314;
  int v315;
  int v316;
  int v317;
  int v318;
  int v319;
  int v320;
  int v321;
  int v322;
  int v323;
  int v324;
  int v325;
  int v326;
  int v327;
  int v328;
  int v329;
  int v330;
  int v331;
  int v332;
  int v333;
  int v334;
  int v335;
  unsigned int v336;
  unsigned int v337;

  if (a2 > 2 * a5 && a6 != 0) {
    v9 = result;
    v10 = (a2 << 16 >> 1) - (__int16)a2;
    v11 = a2 + SdkData_c1d910[a6 - 1] * a5;
    v12 = (v10 >> 16) * ((unsigned int)SdkRoutine_2e2790(v11) >> 16);
    v13 = (((unsigned int)(unsigned __int16)SdkRoutine_2e2790(v11) *
            (v10 >> 16)) >>
           15) +
          2 * v12;
    v14 = (__int16)(v13 + ((((int)SdkRoutine_2e2790(v11) >> 16) *
                            (unsigned int)(unsigned __int16)v10) >>
                           15));
    v15 = (unsigned int)(v14 * v14) >> 16;
    v16 = SdkRoutine_2e2950(v15);
    result = SdkRoutine_2e2950(v15 ^ 0x7FFF);
    if (a2 >= 8 * a4) {
      v17 = 0;
      v18 = a4;
      do {
        v19 = v17 + 2;
        ++v17;
        v20 = (a4 >> 2) + v18 * v19;
        v18 += a4;
      } while (v20 < a2);
    }
    else {
      v17 = 0;
    }
    if ((unsigned int)a4 >= 0x101) {
      LODWORD(v21) = a2 / (unsigned int)a4;
      if (a4 < 1) {
        return result;
      }
      goto LABEL_13;
    }
    v22 = __clz(a4 & -a4);
    v21 = ((unsigned int)SdkData_e877c0[(unsigned int)a4 >> -v22] *
           (unsigned __int64)((unsigned int)a2 >> ~v22)) >>
          32;
    if (a2 - a4 * (int)v21 >= (unsigned int)a4) {
      LODWORD(v21) = v21 + 1;
    }
    if (a4 >= 1) {
    LABEL_13:
      v23 = -v16;
      v24 = (unsigned int)(v21 - 3);
      v25 = (__int16)v16;
      v26 = (unsigned int)a4;
      v27 = (__int16)result;
      v28 = v21 - 2;
      v29 = v21 - v17;
      v30 = v17;
      v31 = 2 * v17;
      v32 = 2LL * (int)v21;
      v33 = v21 - 1;
      v34 = (__int16)-(__int16)result;
      v35 = 2 * v24;
      result = (unsigned int)(v21 + ~(2 * v17));
      if ((a3 & 0x80000000) == 0) {
        if (v17 != 0) {
          v36 = v21 - v31;
          v37 = v9 + v35;
          v38 = v33 - v17;
          v39 = v33 & 7;
          v40 = 0;
          v41 = v33 & 0xFFFFFFF8;
          v42 = v37 + 2;
          v43 = v36 & 7;
          v44 = v30;
          while (1) {
            v45 = (_WORD*)(v9 + 2 * v40 * (int)v21);
            if ((int)v21 >= 2) {
              LOWORD(v46) = *v45;
              if (v28 >= 7) {
                v48 = v41;
                v49 = (_WORD*)(v9 + 2 * v40 * (int)v21);
                v47 = v49;
                do {
                  v50 = (__int16)v49[1];
                  v48 -= 8;
                  v51 = (__int16)((v50 * v25 + (__int16)v46 * v34 + 0x4000) >>
                                  15);
                  *v49 =
                      (unsigned int)(v50 * v27 + (__int16)v46 * v25 + 0x4000) >>
                      15;
                  v52 = (__int16)v49[2];
                  v53 = (__int16)((v52 * v25 + v51 * v34 + 0x4000) >> 15);
                  v49[1] = (unsigned int)(v52 * v27 + v51 * v25 + 0x4000) >> 15;
                  v54 = (__int16)v49[3];
                  v55 = (__int16)((v54 * v25 + v53 * v34 + 0x4000) >> 15);
                  v49[2] = (unsigned int)(v54 * v27 + v53 * v25 + 0x4000) >> 15;
                  v56 = (__int16)v49[4];
                  v57 = (__int16)((v56 * v25 + v55 * v34 + 0x4000) >> 15);
                  v49[3] = (unsigned int)(v56 * v27 + v55 * v25 + 0x4000) >> 15;
                  v58 = (__int16)v49[5];
                  v59 = (__int16)((v58 * v25 + v57 * v34 + 0x4000) >> 15);
                  v49[4] = (unsigned int)(v58 * v27 + v57 * v25 + 0x4000) >> 15;
                  v60 = (__int16)v49[6];
                  v61 = (__int16)((v60 * v25 + v59 * v34 + 0x4000) >> 15);
                  v49[5] = (unsigned int)(v60 * v27 + v59 * v25 + 0x4000) >> 15;
                  v62 = (__int16)v49[7];
                  v63 = (__int16)v47[8];
                  v47 += 8;
                  v64 = (__int16)((v62 * v25 + v61 * v34 + 0x4000) >> 15);
                  v49[6] = (unsigned int)(v62 * v27 + v61 * v25 + 0x4000) >> 15;
                  v46 = (unsigned int)(v63 * v25 + v64 * v34 + 0x4000) >> 15;
                  *v47 = v46;
                  v49[7] = (unsigned int)(v63 * v27 + v64 * v25 + 0x4000) >> 15;
                  v49 = v47;
                } while (v48 != 0);
              }
              else {
                v47 = (_WORD*)(v9 + 2 * v40 * (int)v21);
              }
              if (v39 != 0) {
                v65 = v47 + 1;
                v66 = v39;
                do {
                  v67 = *v65;
                  v68 = (__int16)v46;
                  --v66;
                  v46 =
                      (unsigned int)(v67 * v25 + (__int16)v46 * v34 + 0x4000) >>
                      15;
                  *v65 = v46;
                  *(v65++ - 1) =
                      (unsigned int)(v67 * v27 + v68 * v25 + 0x4000) >> 15;
                } while (v66 != 0);
              }
            }
            if ((v24 & 0x80000000) == 0) {
              v69 = &v45[v24];
              LOWORD(v70) = *(_WORD*)(v42 + v32 * v40);
              if ((v28 & 7) == 0) {
                v72 = v21 - 3;
                v75 = &v45[v24];
                if ((unsigned int)v24 < 7) {
                  goto LABEL_34;
                }
              LABEL_32:
                v76 = v72 + 1;
                do {
                  v77 = *v75;
                  v76 -= 8;
                  v78 = (__int16)v70 * v25 + v77 * v34;
                  v79 = (__int16)v70 * v27 + v77 * v25;
                  v80 = *(v75 - 1);
                  v81 = (__int16)((v79 + 0x4000) >> 15);
                  v75[1] = (unsigned int)(v78 + 0x4000) >> 15;
                  v82 = v81 * v25 + v80 * v34;
                  v83 = v81 * v27 + v80 * v25;
                  v84 = *(v75 - 2);
                  v85 = (__int16)((v83 + 0x4000) >> 15);
                  *v75 = (unsigned int)(v82 + 0x4000) >> 15;
                  v86 = v85 * v25 + v84 * v34;
                  v87 = v85 * v27 + v84 * v25;
                  v88 = *(v75 - 3);
                  v89 = (__int16)((v87 + 0x4000) >> 15);
                  *(v75 - 1) = (unsigned int)(v86 + 0x4000) >> 15;
                  v90 = v89 * v25 + v88 * v34;
                  v91 = v89 * v27 + v88 * v25;
                  v92 = *(v75 - 4);
                  v93 = (__int16)((v91 + 0x4000) >> 15);
                  *(v75 - 2) = (unsigned int)(v90 + 0x4000) >> 15;
                  v94 = v93 * v25 + v92 * v34;
                  v95 = v93 * v27 + v92 * v25;
                  v96 = *(v75 - 5);
                  v97 = (__int16)((v95 + 0x4000) >> 15);
                  *(v75 - 3) = (unsigned int)(v94 + 0x4000) >> 15;
                  v98 = v97 * v25 + v96 * v34;
                  v99 = v97 * v27 + v96 * v25;
                  v100 = *(v75 - 6);
                  v101 = (__int16)((v99 + 0x4000) >> 15);
                  *(v75 - 4) = (unsigned int)(v98 + 0x4000) >> 15;
                  v102 = v101 * v25 + v100 * v34;
                  v103 = v101 * v27 + v100 * v25;
                  v104 = *(v75 - 7);
                  v105 = (__int16)((v103 + 0x4000) >> 15);
                  *(v75 - 5) = (unsigned int)(v102 + 0x4000) >> 15;
                  v106 = (unsigned int)(v105 * v25 + v104 * v34 + 0x4000) >> 15;
                  v70 = (unsigned int)(v105 * v27 + v104 * v25 + 0x4000) >> 15;
                  *(v75 - 6) = v106;
                  *(v75 - 7) = v70;
                  v75 -= 8;
                } while (v76 != 0);
                goto LABEL_34;
              }
              v71 = v28 & 7;
              v72 = v24;
              do {
                v73 = *v69;
                --v72;
                --v71;
                v74 = (unsigned int)((__int16)v70 * v25 + v73 * v34 + 0x4000) >>
                      15;
                v70 = (unsigned int)((__int16)v70 * v27 + v73 * v25 + 0x4000) >>
                      15;
                v75 = v69 - 1;
                v69[1] = v74;
                *v69-- = v70;
              } while (v71 != 0);
              if ((unsigned int)v24 >= 7) {
                goto LABEL_32;
              }
            }
          LABEL_34:
            if (v29 >= 1) {
              if (v38 >= 7) {
                v108 = v29 & 0x7FFFFFF8;
                v109 = (__int16*)(v9 + 2 * v40 * (int)v21);
                do {
                  v110 = &v109[v44];
                  v111 = *v109;
                  v108 -= 8;
                  v112 = v109[v44];
                  *v109 =
                      (unsigned int)(v112 * v25 + v111 * v27 + 0x4000) >> 15;
                  *v110 = (unsigned int)(v112 * v27 + v111 * (__int16)v23 +
                                         0x4000) >>
                          15;
                  v113 = v109[v44 + 1];
                  v114 = v109[1];
                  v109[1] =
                      (unsigned int)(v113 * v25 + v114 * v27 + 0x4000) >> 15;
                  v110[1] = (unsigned int)(v113 * v27 + v114 * (__int16)v23 +
                                           0x4000) >>
                            15;
                  v115 = v109[v44 + 2];
                  v116 = v109[2];
                  v109[2] =
                      (unsigned int)(v115 * v25 + v116 * v27 + 0x4000) >> 15;
                  v110[2] = (unsigned int)(v115 * v27 + v116 * (__int16)v23 +
                                           0x4000) >>
                            15;
                  v117 = v109[v44 + 3];
                  v118 = v109[3];
                  v109[3] =
                      (unsigned int)(v117 * v25 + v118 * v27 + 0x4000) >> 15;
                  v110[3] = (unsigned int)(v117 * v27 + v118 * (__int16)v23 +
                                           0x4000) >>
                            15;
                  v119 = v109[v44 + 4];
                  v120 = v109[4];
                  v109[4] =
                      (unsigned int)(v119 * v25 + v120 * v27 + 0x4000) >> 15;
                  v110[4] = (unsigned int)(v119 * v27 + v120 * (__int16)v23 +
                                           0x4000) >>
                            15;
                  v121 = v109[v44 + 5];
                  v122 = v109[5];
                  v109[5] =
                      (unsigned int)(v121 * v25 + v122 * v27 + 0x4000) >> 15;
                  v110[5] = (unsigned int)(v121 * v27 + v122 * (__int16)v23 +
                                           0x4000) >>
                            15;
                  v123 = v109[v44 + 6];
                  v124 = v109[6];
                  v109[6] =
                      (unsigned int)(v123 * v25 + v124 * v27 + 0x4000) >> 15;
                  v110[6] = (unsigned int)(v123 * v27 + v124 * (__int16)v23 +
                                           0x4000) >>
                            15;
                  v125 = v109[v44 + 7];
                  v126 = v109[7];
                  v110[7] = (unsigned int)(v125 * v27 + v126 * (__int16)v23 +
                                           0x4000) >>
                            15;
                  v107 = v109 + 8;
                  v109[7] =
                      (unsigned int)(v125 * v25 + v126 * v27 + 0x4000) >> 15;
                  v109 += 8;
                } while (v108 != 0);
              }
              else {
                v107 = (__int16*)(v9 + 2 * v40 * (int)v21);
              }
              if ((v29 & 7) != 0) {
                v127 = v29 & 7;
                do {
                  v128 = v107[v44];
                  v129 = *v107;
                  --v127;
                  v107[v44] = (unsigned int)(v128 * v27 + v129 * (__int16)v23 +
                                             0x4000) >>
                              15;
                  *v107++ =
                      (unsigned int)(v128 * v25 + v129 * v27 + 0x4000) >> 15;
                } while (v127 != 0);
              }
            }
            if ((result & 0x80000000) != 0) {
              goto LABEL_16;
            }
            v130 = &v45[result];
            if (v43 != 0) {
              v131 = v43;
              v132 = result;
              do {
                v133 = v130[v44];
                v134 = *v130;
                --v132;
                --v131;
                v135 =
                    (unsigned int)(v133 * v27 + v134 * (__int16)v23 + 0x4000) >>
                    15;
                v136 = (unsigned int)(v133 * v25 + v134 * v27 + 0x4000) >> 15;
                v137 = v130 - 1;
                v130[v44] = v135;
                *v130-- = v136;
              } while (v131 != 0);
              if ((unsigned int)result < 7) {
                goto LABEL_16;
              }
            LABEL_49:
              v138 = v132 + 1;
              v139 = v137 - 3;
              do {
                v140 = &v139[v44];
                v141 = v139[3];
                v138 -= 8;
                v142 = v139[v44 + 3];
                v139[3] =
                    (unsigned int)(v142 * v25 + v141 * v27 + 0x4000) >> 15;
                v140[3] =
                    (unsigned int)(v142 * v27 + v141 * (__int16)v23 + 0x4000) >>
                    15;
                v143 = v139[v44 + 2];
                v144 = v139[2];
                v139[2] =
                    (unsigned int)(v143 * v25 + v144 * v27 + 0x4000) >> 15;
                v140[2] =
                    (unsigned int)(v143 * v27 + v144 * (__int16)v23 + 0x4000) >>
                    15;
                v145 = v139[v44 + 1];
                v146 = v139[1];
                v139[1] =
                    (unsigned int)(v145 * v25 + v146 * v27 + 0x4000) >> 15;
                v140[1] =
                    (unsigned int)(v145 * v27 + v146 * (__int16)v23 + 0x4000) >>
                    15;
                v147 = v139[v44];
                v148 = *v139;
                *v139 = (unsigned int)(v147 * v25 + v148 * v27 + 0x4000) >> 15;
                *v140 =
                    (unsigned int)(v147 * v27 + v148 * (__int16)v23 + 0x4000) >>
                    15;
                v149 = v139[v44 - 1];
                v150 = *(v139 - 1);
                *(v139 - 1) =
                    (unsigned int)(v149 * v25 + v150 * v27 + 0x4000) >> 15;
                *(v140 - 1) =
                    (unsigned int)(v149 * v27 + v150 * (__int16)v23 + 0x4000) >>
                    15;
                v151 = v139[v44 - 2];
                v152 = *(v139 - 2);
                *(v139 - 2) =
                    (unsigned int)(v151 * v25 + v152 * v27 + 0x4000) >> 15;
                *(v140 - 2) =
                    (unsigned int)(v151 * v27 + v152 * (__int16)v23 + 0x4000) >>
                    15;
                v153 = v139[v44 - 3];
                v154 = *(v139 - 3);
                *(v139 - 3) =
                    (unsigned int)(v153 * v25 + v154 * v27 + 0x4000) >> 15;
                *(v140 - 3) =
                    (unsigned int)(v153 * v27 + v154 * (__int16)v23 + 0x4000) >>
                    15;
                v155 = v139[v44 - 4];
                v156 = *(v139 - 4);
                *(v140 - 4) =
                    (unsigned int)(v155 * v27 + v156 * (__int16)v23 + 0x4000) >>
                    15;
                *(v139 - 4) =
                    (unsigned int)(v155 * v25 + v156 * v27 + 0x4000) >> 15;
                v139 -= 8;
              } while (v138 != 0);
              goto LABEL_16;
            }
            v132 = result;
            v137 = v130;
            if ((unsigned int)result >= 7) {
              goto LABEL_49;
            }
          LABEL_16:
            if (++v40 == v26) {
              return result;
            }
          }
        }
        result = v33 & 7;
        v272 = v33 & 0xFFFFFFF8;
        v273 = 0;
        v274 = v9 + v35 + 2;
        while (1) {
          v275 = (_WORD*)(v9 + 2 * v273 * (int)v21);
          if ((int)v21 >= 2) {
            LOWORD(v276) = *v275;
            if (v28 >= 7) {
              v278 = v272;
              v279 = (_WORD*)(v9 + 2 * v273 * (int)v21);
              v277 = v279;
              do {
                v280 = (__int16)v279[1];
                v278 -= 8;
                v281 = (__int16)((v280 * v25 + (__int16)v276 * v34 + 0x4000) >>
                                 15);
                *v279 =
                    (unsigned int)(v280 * v27 + (__int16)v276 * v25 + 0x4000) >>
                    15;
                v282 = (__int16)v279[2];
                v283 = (__int16)((v282 * v25 + v281 * v34 + 0x4000) >> 15);
                v279[1] =
                    (unsigned int)(v282 * v27 + v281 * v25 + 0x4000) >> 15;
                v284 = (__int16)v279[3];
                v285 = (__int16)((v284 * v25 + v283 * v34 + 0x4000) >> 15);
                v279[2] =
                    (unsigned int)(v284 * v27 + v283 * v25 + 0x4000) >> 15;
                v286 = (__int16)v279[4];
                v287 = (__int16)((v286 * v25 + v285 * v34 + 0x4000) >> 15);
                v279[3] =
                    (unsigned int)(v286 * v27 + v285 * v25 + 0x4000) >> 15;
                v288 = (__int16)v279[5];
                v289 = (__int16)((v288 * v25 + v287 * v34 + 0x4000) >> 15);
                v279[4] =
                    (unsigned int)(v288 * v27 + v287 * v25 + 0x4000) >> 15;
                v290 = (__int16)v279[6];
                v291 = (__int16)((v290 * v25 + v289 * v34 + 0x4000) >> 15);
                v279[5] =
                    (unsigned int)(v290 * v27 + v289 * v25 + 0x4000) >> 15;
                v292 = (__int16)v279[7];
                v293 = (__int16)v277[8];
                v277 += 8;
                v294 = (__int16)((v292 * v25 + v291 * v34 + 0x4000) >> 15);
                v279[6] =
                    (unsigned int)(v292 * v27 + v291 * v25 + 0x4000) >> 15;
                v276 = (unsigned int)(v293 * v25 + v294 * v34 + 0x4000) >> 15;
                *v277 = v276;
                v279[7] =
                    (unsigned int)(v293 * v27 + v294 * v25 + 0x4000) >> 15;
                v279 = v277;
              } while (v278 != 0);
            }
            else {
              v277 = (_WORD*)(v9 + 2 * v273 * (int)v21);
            }
            if ((_DWORD)result != 0) {
              v295 = v277 + 1;
              v296 = result;
              do {
                v297 = *v295;
                v298 = (__int16)v276;
                --v296;
                v276 =
                    (unsigned int)(v297 * v25 + (__int16)v276 * v34 + 0x4000) >>
                    15;
                *v295 = v276;
                *(v295++ - 1) =
                    (unsigned int)(v297 * v27 + v298 * v25 + 0x4000) >> 15;
              } while (v296 != 0);
            }
          }
          if ((v24 & 0x80000000) == 0) {
            v299 = &v275[v24];
            LOWORD(v300) = *(_WORD*)(v274 + v32 * v273);
            if ((v28 & 7) != 0) {
              break;
            }
            v302 = v21 - 3;
            v305 = &v275[v24];
            if ((unsigned int)v24 >= 7) {
              goto LABEL_107;
            }
          }
        LABEL_91:
          if (++v273 == v26) {
            return result;
          }
        }
        v301 = v28 & 7;
        v302 = v24;
        do {
          v303 = *v299;
          --v302;
          --v301;
          v304 =
              (unsigned int)((__int16)v300 * v25 + v303 * v34 + 0x4000) >> 15;
          v300 =
              (unsigned int)((__int16)v300 * v27 + v303 * v25 + 0x4000) >> 15;
          v305 = v299 - 1;
          v299[1] = v304;
          *v299-- = v300;
        } while (v301 != 0);
        if ((unsigned int)v24 < 7) {
          goto LABEL_91;
        }
      LABEL_107:
        v306 = v302 + 1;
        do {
          v307 = *v305;
          v306 -= 8;
          v308 = (__int16)v300 * v25 + v307 * v34;
          v309 = (__int16)v300 * v27 + v307 * v25;
          v310 = *(v305 - 1);
          v311 = (__int16)((v309 + 0x4000) >> 15);
          v305[1] = (unsigned int)(v308 + 0x4000) >> 15;
          v312 = v311 * v25 + v310 * v34;
          v313 = v311 * v27 + v310 * v25;
          v314 = *(v305 - 2);
          v315 = (__int16)((v313 + 0x4000) >> 15);
          *v305 = (unsigned int)(v312 + 0x4000) >> 15;
          v316 = v315 * v25 + v314 * v34;
          v317 = v315 * v27 + v314 * v25;
          v318 = *(v305 - 3);
          v319 = (__int16)((v317 + 0x4000) >> 15);
          *(v305 - 1) = (unsigned int)(v316 + 0x4000) >> 15;
          v320 = v319 * v25 + v318 * v34;
          v321 = v319 * v27 + v318 * v25;
          v322 = *(v305 - 4);
          v323 = (__int16)((v321 + 0x4000) >> 15);
          *(v305 - 2) = (unsigned int)(v320 + 0x4000) >> 15;
          v324 = v323 * v25 + v322 * v34;
          v325 = v323 * v27 + v322 * v25;
          v326 = *(v305 - 5);
          v327 = (__int16)((v325 + 0x4000) >> 15);
          *(v305 - 3) = (unsigned int)(v324 + 0x4000) >> 15;
          v328 = v327 * v25 + v326 * v34;
          v329 = v327 * v27 + v326 * v25;
          v330 = *(v305 - 6);
          v331 = (__int16)((v329 + 0x4000) >> 15);
          *(v305 - 4) = (unsigned int)(v328 + 0x4000) >> 15;
          v332 = v331 * v25 + v330 * v34;
          v333 = v331 * v27 + v330 * v25;
          v334 = *(v305 - 7);
          v335 = (__int16)((v333 + 0x4000) >> 15);
          *(v305 - 5) = (unsigned int)(v332 + 0x4000) >> 15;
          v336 = (unsigned int)(v335 * v25 + v334 * v34 + 0x4000) >> 15;
          v300 = (unsigned int)(v335 * v27 + v334 * v25 + 0x4000) >> 15;
          *(v305 - 6) = v336;
          *(v305 - 7) = v300;
          v305 -= 8;
        } while (v306 != 0);
        goto LABEL_91;
      }
      v157 = v33 - v17;
      v158 = 0;
      v159 = v33 & 7;
      v337 = v33 & 0xFFFFFFF8;
      v160 = v17;
      do {
        v161 = v158 * (int)v21;
        if (v17 != 0) {
          if (v29 >= 1) {
            if (v157 >= 7) {
              v163 = v29 & 0x7FFFFFF8;
              v164 = (__int16*)(v9 + 2 * v161);
              do {
                v165 = &v164[v160];
                v166 = *v164;
                v163 -= 8;
                v167 = v164[v17];
                *v164 =
                    (unsigned int)(v167 * (__int16)v23 + v166 * v27 + 0x4000) >>
                    15;
                *v165 = (unsigned int)(v167 * v27 + v166 * v25 + 0x4000) >> 15;
                v168 = v164[v160 + 1];
                v169 = v164[1];
                v164[1] =
                    (unsigned int)(v168 * (__int16)v23 + v169 * v27 + 0x4000) >>
                    15;
                v165[1] =
                    (unsigned int)(v168 * v27 + v169 * v25 + 0x4000) >> 15;
                v170 = v164[v160 + 2];
                v171 = v164[2];
                v164[2] =
                    (unsigned int)(v170 * (__int16)v23 + v171 * v27 + 0x4000) >>
                    15;
                v165[2] =
                    (unsigned int)(v170 * v27 + v171 * v25 + 0x4000) >> 15;
                v172 = v164[v160 + 3];
                v173 = v164[3];
                v164[3] =
                    (unsigned int)(v172 * (__int16)v23 + v173 * v27 + 0x4000) >>
                    15;
                v165[3] =
                    (unsigned int)(v172 * v27 + v173 * v25 + 0x4000) >> 15;
                v174 = v164[v160 + 4];
                v175 = v164[4];
                v164[4] =
                    (unsigned int)(v174 * (__int16)v23 + v175 * v27 + 0x4000) >>
                    15;
                v165[4] =
                    (unsigned int)(v174 * v27 + v175 * v25 + 0x4000) >> 15;
                v176 = v164[v160 + 5];
                v177 = v164[5];
                v164[5] =
                    (unsigned int)(v176 * (__int16)v23 + v177 * v27 + 0x4000) >>
                    15;
                v165[5] =
                    (unsigned int)(v176 * v27 + v177 * v25 + 0x4000) >> 15;
                v178 = v164[v160 + 6];
                v179 = v164[6];
                v164[6] =
                    (unsigned int)(v178 * (__int16)v23 + v179 * v27 + 0x4000) >>
                    15;
                v165[6] =
                    (unsigned int)(v178 * v27 + v179 * v25 + 0x4000) >> 15;
                v180 = v164[v160 + 7];
                v181 = v164[7];
                v165[7] =
                    (unsigned int)(v180 * v27 + v181 * v25 + 0x4000) >> 15;
                v162 = v164 + 8;
                v164[7] =
                    (unsigned int)(v180 * (__int16)v23 + v181 * v27 + 0x4000) >>
                    15;
                v164 += 8;
              } while (v163 != 0);
            }
            else {
              v162 = (__int16*)(v9 + 2 * v161);
            }
            if ((v29 & 7) != 0) {
              v182 = v29 & 7;
              do {
                v183 = v162[v17];
                v184 = *v162;
                --v182;
                v162[v17] =
                    (unsigned int)(v183 * v27 + v184 * v25 + 0x4000) >> 15;
                *v162++ =
                    (unsigned int)(v183 * (__int16)v23 + v184 * v27 + 0x4000) >>
                    15;
              } while (v182 != 0);
            }
          }
          if ((result & 0x80000000) == 0) {
            v185 = (__int16*)(v9 + 2 * v161 + 2 * result);
            if ((((_BYTE)v21 - v31) & 7) != 0) {
              v186 = ((_BYTE)v21 - v31) & 7;
              v187 = v21 + ~(2 * v17);
              do {
                v188 = v185[v17];
                v189 = *v185;
                --v187;
                --v186;
                v185[v17] =
                    (unsigned int)(v188 * v27 + v189 * v25 + 0x4000) >> 15;
                v190 = (__int64)(v185 - 1);
                *v185-- =
                    (unsigned int)(v188 * (__int16)v23 + v189 * v27 + 0x4000) >>
                    15;
              } while (v186 != 0);
              if ((unsigned int)result < 7) {
                goto LABEL_72;
              }
            LABEL_70:
              v191 = v187 + 1;
              v192 = (__int16*)(v190 - 6);
              do {
                v193 = &v192[v160];
                v194 = v192[3];
                v191 -= 8;
                v195 = v192[v160 + 3];
                v192[3] =
                    (unsigned int)(v195 * (__int16)v23 + v194 * v27 + 0x4000) >>
                    15;
                v193[3] =
                    (unsigned int)(v195 * v27 + v194 * v25 + 0x4000) >> 15;
                v196 = v192[v160 + 2];
                v197 = v192[2];
                v192[2] =
                    (unsigned int)(v196 * (__int16)v23 + v197 * v27 + 0x4000) >>
                    15;
                v193[2] =
                    (unsigned int)(v196 * v27 + v197 * v25 + 0x4000) >> 15;
                v198 = v192[v160 + 1];
                v199 = v192[1];
                v192[1] =
                    (unsigned int)(v198 * (__int16)v23 + v199 * v27 + 0x4000) >>
                    15;
                v193[1] =
                    (unsigned int)(v198 * v27 + v199 * v25 + 0x4000) >> 15;
                v200 = v192[v17];
                v201 = *v192;
                *v192 =
                    (unsigned int)(v200 * (__int16)v23 + v201 * v27 + 0x4000) >>
                    15;
                *v193 = (unsigned int)(v200 * v27 + v201 * v25 + 0x4000) >> 15;
                v202 = v192[v160 - 1];
                v203 = *(v192 - 1);
                *(v192 - 1) =
                    (unsigned int)(v202 * (__int16)v23 + v203 * v27 + 0x4000) >>
                    15;
                *(v193 - 1) =
                    (unsigned int)(v202 * v27 + v203 * v25 + 0x4000) >> 15;
                v204 = v192[v160 - 2];
                v205 = *(v192 - 2);
                *(v192 - 2) =
                    (unsigned int)(v204 * (__int16)v23 + v205 * v27 + 0x4000) >>
                    15;
                *(v193 - 2) =
                    (unsigned int)(v204 * v27 + v205 * v25 + 0x4000) >> 15;
                v206 = v192[v160 - 3];
                v207 = *(v192 - 3);
                *(v192 - 3) =
                    (unsigned int)(v206 * (__int16)v23 + v207 * v27 + 0x4000) >>
                    15;
                *(v193 - 3) =
                    (unsigned int)(v206 * v27 + v207 * v25 + 0x4000) >> 15;
                v208 = v192[v160 - 4];
                v209 = *(v192 - 4);
                *(v192 - 4) =
                    (unsigned int)(v208 * (__int16)v23 + v209 * v27 + 0x4000) >>
                    15;
                v192 -= 8;
                *(v193 - 4) =
                    (unsigned int)(v208 * v27 + v209 * v25 + 0x4000) >> 15;
              } while (v191 != 0);
              goto LABEL_72;
            }
            v187 = v21 + ~(2 * v17);
            v190 = v9 + 2 * v161 + 2 * result;
            if ((unsigned int)result >= 7) {
              goto LABEL_70;
            }
          }
        }
      LABEL_72:
        v210 = (_WORD*)(v9 + 2 * v161);
        if ((int)v21 >= 2) {
          LOWORD(v211) = *v210;
          if (v28 >= 7) {
            v213 = v337;
            v214 = v210;
            v212 = v210;
            do {
              v215 = (__int16)v214[1];
              v213 -= 8;
              v216 =
                  (__int16)((v215 * v25 + (__int16)v211 * v27 + 0x4000) >> 15);
              *v214 =
                  (unsigned int)(v215 * v34 + (__int16)v211 * v25 + 0x4000) >>
                  15;
              v217 = (__int16)v214[2];
              v218 = (__int16)((v217 * v25 + v216 * v27 + 0x4000) >> 15);
              v214[1] = (unsigned int)(v217 * v34 + v216 * v25 + 0x4000) >> 15;
              v219 = (__int16)v214[3];
              v220 = (__int16)((v219 * v25 + v218 * v27 + 0x4000) >> 15);
              v214[2] = (unsigned int)(v219 * v34 + v218 * v25 + 0x4000) >> 15;
              v221 = (__int16)v214[4];
              v222 = (__int16)((v221 * v25 + v220 * v27 + 0x4000) >> 15);
              v214[3] = (unsigned int)(v221 * v34 + v220 * v25 + 0x4000) >> 15;
              v223 = (__int16)v214[5];
              v224 = (__int16)((v223 * v25 + v222 * v27 + 0x4000) >> 15);
              v214[4] = (unsigned int)(v223 * v34 + v222 * v25 + 0x4000) >> 15;
              v225 = (__int16)v214[6];
              v226 = (__int16)((v225 * v25 + v224 * v27 + 0x4000) >> 15);
              v214[5] = (unsigned int)(v225 * v34 + v224 * v25 + 0x4000) >> 15;
              v227 = (__int16)v214[7];
              v228 = (__int16)((v227 * v25 + v226 * v27 + 0x4000) >> 15);
              v214[6] = (unsigned int)(v227 * v34 + v226 * v25 + 0x4000) >> 15;
              v229 = (__int16)v212[8];
              v212 += 8;
              v211 = (unsigned int)(v229 * v25 + v228 * v27 + 0x4000) >> 15;
              *v212 = v211;
              v214[7] = (unsigned int)(v229 * v34 + v228 * v25 + 0x4000) >> 15;
              v214 = v212;
            } while (v213 != 0);
          }
          else {
            v212 = v210;
          }
          if (v159 != 0) {
            v230 = v212 + 1;
            v231 = v159;
            do {
              v232 = *v230;
              v233 = (__int16)v211;
              --v231;
              v211 =
                  (unsigned int)(v232 * v25 + (__int16)v211 * v27 + 0x4000) >>
                  15;
              *v230 = v211;
              *(v230++ - 1) =
                  (unsigned int)(v232 * v34 + v233 * v25 + 0x4000) >> 15;
            } while (v231 != 0);
          }
        }
        if ((v24 & 0x80000000) != 0) {
          goto LABEL_53;
        }
        v234 = &v210[v24];
        LOWORD(v235) = *(_WORD*)(v9 + v35 + 2 + v32 * v158);
        if ((v28 & 7) != 0) {
          v236 = v28 & 7;
          v237 = v24;
          do {
            v238 = *v234;
            --v237;
            --v236;
            v239 = (__int16)v235 * v25 + v238 * v27;
            v235 =
                (unsigned int)((__int16)v235 * v34 + v238 * v25 + 0x4000) >> 15;
            v234[1] = (unsigned int)(v239 + 0x4000) >> 15;
            v240 = v234 - 1;
            *v234-- = v235;
          } while (v236 != 0);
          if ((unsigned int)v24 < 7) {
            goto LABEL_53;
          }
        LABEL_87:
          v241 = v237 + 1;
          do {
            v242 = *v240;
            v243 = (__int16)v235;
            v241 -= 8;
            v244 = (__int16)v235 * v25 + v242 * v27;
            v245 = v243 * v34 + v242 * v25;
            v246 = *(v240 - 1);
            v247 = (__int16)((v245 + 0x4000) >> 15);
            v240[1] = (unsigned int)(v244 + 0x4000) >> 15;
            v248 = v247 * v25 + v246 * v27;
            v249 = v247 * v34 + v246 * v25;
            v250 = *(v240 - 2);
            v251 = (__int16)((v249 + 0x4000) >> 15);
            *v240 = (unsigned int)(v248 + 0x4000) >> 15;
            v252 = v251 * v25 + v250 * v27;
            v253 = v251 * v34 + v250 * v25;
            v254 = *(v240 - 3);
            v255 = (__int16)((v253 + 0x4000) >> 15);
            *(v240 - 1) = (unsigned int)(v252 + 0x4000) >> 15;
            v256 = v255 * v25 + v254 * v27;
            v257 = v255 * v34 + v254 * v25;
            v258 = *(v240 - 4);
            v259 = (__int16)((v257 + 0x4000) >> 15);
            *(v240 - 2) = (unsigned int)(v256 + 0x4000) >> 15;
            v260 = v259 * v25 + v258 * v27;
            v261 = v259 * v34 + v258 * v25;
            v262 = *(v240 - 5);
            v263 = (__int16)((v261 + 0x4000) >> 15);
            *(v240 - 3) = (unsigned int)(v260 + 0x4000) >> 15;
            v264 = v263 * v25 + v262 * v27;
            v265 = v263 * v34 + v262 * v25;
            v266 = *(v240 - 6);
            v267 = (__int16)((v265 + 0x4000) >> 15);
            *(v240 - 4) = (unsigned int)(v264 + 0x4000) >> 15;
            v268 = v267 * v25 + v266 * v27;
            v269 = v267 * v34 + v266 * v25;
            v270 = *(v240 - 7);
            v271 = (__int16)((v269 + 0x4000) >> 15);
            *(v240 - 5) = (unsigned int)(v268 + 0x4000) >> 15;
            *(v240 - 6) =
                (unsigned int)(v271 * v25 + v270 * v27 + 0x4000) >> 15;
            v235 = (unsigned int)(v271 * v34 + v270 * v25 + 0x4000) >> 15;
            *(v240 - 7) = v235;
            v240 -= 8;
          } while (v241 != 0);
          goto LABEL_53;
        }
        v237 = v21 - 3;
        v240 = &v210[v24];
        if ((unsigned int)v24 >= 7) {
          goto LABEL_87;
        }
      LABEL_53:
        ++v158;
      } while (v158 != v26);
    }
  }
  return result;
}

__int64 SdkHr_314c00(__int64 result, __int64 a2, __int64 a3, unsigned int a4,
                     unsigned int a5, int a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  signed int v20;
  char v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  __int64 v47;
  __int64 v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;

  if ((int)a5 >= 1) {
    v6 = 0;
    v7 = 0;
    v8 = result;
    v9 = a2;
    v10 = 8LL * a5;
    v11 = 715827883LL * a6;
    v12 = 4LL * a5;
    v13 = (v11 >> 33) + ((unsigned int)(v11 >> 33) >> 31);
    v14 = 2LL * a5;
    v15 = __clz(v13);
    v16 = a5;
    v17 = 3LL * a5;
    v18 = a2 + v12;
    v19 = result + v12;
    v20 = 0x80000000 >> v15;
    v21 = 31 - v15;
    v22 = a2 + 2 * v17;
    v23 = result + 2 * v17;
    v24 = v20 >> 1;
    do {
      if (a4 >= 4) {
        v25 = 0;
        v26 = v6;
        do {
          v27 = *(_DWORD*)(a3 + 8 * v7);
          v25 += 4;
          v28 = (*(__int16*)(result + v26) << 14) - v27;
          v29 = v28 + v24;
          v30 = (v28 + 0x2000) >> 14;
          v31 = (v29 >> v21) + v27;
          if (v30 <= -32767) {
            v30 = -32767;
          }
          *(_DWORD*)(a3 + 8 * v7) = v31;
          if (v30 >= 0x7FFF) {
            LOWORD(v30) = 0x7FFF;
          }
          *(_WORD*)(a2 + v26) = v30;
          v32 = *(_DWORD*)(a3 + 8 * v7);
          v33 = (*(__int16*)(result + v14 + v26) << 14) - v32;
          v34 = v33 + v24;
          v35 = (v33 + 0x2000) >> 14;
          v36 = (v34 >> v21) + v32;
          if (v35 <= -32767) {
            v35 = -32767;
          }
          *(_DWORD*)(a3 + 8 * v7) = v36;
          if (v35 >= 0x7FFF) {
            LOWORD(v35) = 0x7FFF;
          }
          *(_WORD*)(a2 + v14 + v26) = v35;
          v37 = *(_DWORD*)(a3 + 8 * v7);
          v38 = (*(__int16*)(v19 + v26) << 14) - v37;
          v39 = v38 + v24;
          v40 = (v38 + 0x2000) >> 14;
          v41 = (v39 >> v21) + v37;
          if (v40 <= -32767) {
            v40 = -32767;
          }
          *(_DWORD*)(a3 + 8 * v7) = v41;
          if (v40 >= 0x7FFF) {
            LOWORD(v40) = 0x7FFF;
          }
          *(_WORD*)(v18 + v26) = v40;
          v42 = *(_DWORD*)(a3 + 8 * v7);
          v43 = (*(__int16*)(v23 + v26) << 14) - v42;
          v44 = v43 + v24;
          v45 = (v43 + 0x2000) >> 14;
          v46 = (v44 >> v21) + v42;
          if (v45 <= -32767) {
            v45 = -32767;
          }
          *(_DWORD*)(a3 + 8 * v7) = v46;
          if (v45 >= 0x7FFF) {
            LOWORD(v45) = 0x7FFF;
          }
          *(_WORD*)(v22 + v26) = v45;
          v26 += v10;
        } while ((a4 & 0x3FFFFFC) != v25);
      }
      else {
        v25 = 0;
      }
      if ((a4 & 3) != 0) {
        v47 = v14 * v25;
        v48 = a4 & 3;
        do {
          v49 = *(_DWORD*)(a3 + 8 * v7);
          v50 = (*(__int16*)(v8 + v47) << 14) - v49;
          v51 = v50 + v24;
          v52 = (v50 + 0x2000) >> 14;
          v53 = (v51 >> v21) + v49;
          if (v52 <= -32767) {
            v52 = -32767;
          }
          *(_DWORD*)(a3 + 8 * v7) = v53;
          if (v52 >= 0x7FFF) {
            LOWORD(v52) = 0x7FFF;
          }
          --v48;
          *(_WORD*)(v9 + v47) = v52;
          v47 += v14;
        } while (v48 != 0);
      }
      ++v7;
      v6 += 2;
      v9 += 2;
      v8 += 2;
    } while (v7 != v16);
  }
  return result;
}

__int64 SdkHr_31bc20(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  float* v7;
  __int64 v8;
  int v9;
  char* v10;
  __int64 v11;
  float v12;
  __int64 v13;
  __int64 v14;
  float* v15;
  char* v16;
  float v17;
  char* v18;
  float v19;
  int v20;
  char* v21;
  float v22;
  int v23;
  char* v24;
  float v25;
  int v26;
  char* v27;
  float v28;
  int v29;
  char* v30;
  float v31;
  int v32;
  char* v33;
  float v34;
  float v35;
  float v36;
  float* v37;
  __int64 v38;
  __int64 v39;
  int v40;
  float v41;
  __int64 v42;
  __int64 v43;
  float* v44;
  __int64 v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float* v50;
  __int64 v51;
  float* v52;
  float v53;
  float v54;
  bool v55;
  float v56;
  float v57;
  signed int v58;
  float v59;
  float v60;
  float v61;
  bool v62;
  float v63;
  float v64;
  signed int v65;
  float v66;
  float v67;
  bool v68;
  float v69;
  float v70;
  signed int v71;
  float v72;
  float* v73;
  float v74;
  float v75;
  bool v76;
  float v77;
  float v78;
  signed int v79;
  float v80;
  float v81;
  bool v82;
  float v83;
  float v84;
  signed int v85;
  float v86;
  float v87;
  bool v88;
  float v89;
  float v90;
  signed int v91;
  float v92;

  v3 = *(unsigned int*)(result + 20);
  if ((int)v3 < 1) {
    return result;
  }
  v4 = *(_DWORD*)(result + 16);
  v5 = v3 & 7;
  if ((unsigned int)v3 < 8) {
    v6 = 0;
    if ((v3 & 7) == 0) {
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  v7 = (float*)(a2 + 16);
  v8 = 7;
  do {
    *(v7 - 4) = (float)*(char*)(*(_QWORD*)result + v8 - 7);
    *(v7 - 3) = (float)*(char*)(*(_QWORD*)result + v8 - 6);
    *(v7 - 2) = (float)*(char*)(*(_QWORD*)result + v8 - 5);
    *(v7 - 1) = (float)*(char*)(*(_QWORD*)result + v8 - 4);
    *v7 = (float)*(char*)(*(_QWORD*)result + v8 - 3);
    v7[1] = (float)*(char*)(*(_QWORD*)result + v8 - 2);
    v7[2] = (float)*(char*)(*(_QWORD*)result + v8 - 1);
    v9 = *(char*)(*(_QWORD*)result + v8);
    v8 += 8;
    v7[3] = (float)v9;
    v7 += 8;
  } while (v8 - (v3 & 0x7FFFFFF8) != 7);
  v6 = v8 - 7;
  if ((v3 & 7) != 0) {
    do {
    LABEL_8:
      --v5;
      *(float*)(a2 + 4 * v6) = (float)*(char*)(*(_QWORD*)result + v6);
      ++v6;
    } while (v5 != 0);
  }
LABEL_9:
  if (v4 >= 1) {
    v10 = *(char**)(result + 8);
    v11 = 0;
    while (1) {
      v12 = *(float*)(a2 + 4 * v11);
      if ((unsigned int)v4 >= 8) {
        break;
      }
      v13 = 0;
      if ((v4 & 7) != 0) {
        goto LABEL_18;
      }
    LABEL_11:
      ++v11;
      ++v10;
      if (v11 == v3) {
        goto LABEL_21;
      }
    }
    v14 = 0;
    v15 = (float*)(a3 + 16);
    v16 = v10;
    do {
      v14 -= 8;
      v17 = (float)*v16;
      v18 = &v16[v3];
      v16 += 8 * v3;
      v19 = v12 + (float)(v17 * *(v15 - 4));
      *(float*)(a2 + 4 * v11) = v19;
      v20 = *v18;
      v21 = &v18[v3];
      v22 = v19 + (float)((float)v20 * *(v15 - 3));
      *(float*)(a2 + 4 * v11) = v22;
      v23 = *v21;
      v24 = &v21[v3];
      v25 = v22 + (float)((float)v23 * *(v15 - 2));
      *(float*)(a2 + 4 * v11) = v25;
      v26 = *v24;
      v27 = &v24[v3];
      v28 = v25 + (float)((float)v26 * *(v15 - 1));
      *(float*)(a2 + 4 * v11) = v28;
      v29 = *v27;
      v30 = &v27[v3];
      v31 = v28 + (float)((float)v29 * *v15);
      *(float*)(a2 + 4 * v11) = v31;
      v32 = *v30;
      v33 = &v30[v3];
      v34 = v31 + (float)((float)v32 * v15[1]);
      *(float*)(a2 + 4 * v11) = v34;
      v35 = v34 + (float)((float)*v33 * v15[2]);
      *(float*)(a2 + 4 * v11) = v35;
      v36 = v15[3];
      v15 += 8;
      v12 = v35 + (float)((float)v33[v3] * v36);
      *(float*)(a2 + 4 * v11) = v12;
    } while (-(__int64)(v4 & 0x7FFFFFF8) != v14);
    v13 = -v14;
    if ((v4 & 7) == 0) {
      goto LABEL_11;
    }
  LABEL_18:
    v37 = (float*)(a3 + 4 * v13);
    v38 = v3 * v13;
    v39 = v4 & 7;
    do {
      v40 = v10[v38];
      v41 = *v37++;
      v38 += v3;
      --v39;
      v12 = v12 + (float)((float)v40 * v41);
      *(float*)(a2 + 4 * v11) = v12;
    } while (v39 != 0);
    goto LABEL_11;
  }
LABEL_21:
  v42 = v3 & 7;
  if ((unsigned int)v3 < 8) {
    v43 = 0;
    if ((v3 & 7) == 0) {
      goto LABEL_29;
    }
    goto LABEL_27;
  }
  v44 = (float*)(a2 + 16);
  v45 = 0;
  do {
    v45 -= 8;
    v46 = *(v44 - 3) * 0.0078125f;
    *(v44 - 4) = *(v44 - 4) * 0.0078125f;
    *(v44 - 3) = v46;
    v47 = *(v44 - 1) * 0.0078125f;
    *(v44 - 2) = *(v44 - 2) * 0.0078125f;
    *(v44 - 1) = v47;
    v48 = v44[1] * 0.0078125f;
    *v44 = *v44 * 0.0078125f;
    v44[1] = v48;
    v49 = v44[3] * 0.0078125f;
    v44[2] = v44[2] * 0.0078125f;
    v44[3] = v49;
    v44 += 8;
  } while (-(v3 & 0x7FFFFFF8) != v45);
  v43 = -v45;
  if ((v3 & 7) != 0) {
  LABEL_27:
    v50 = (float*)(a2 + 4 * v43);
    do {
      --v42;
      *v50 = *v50 * 0.0078125f;
      ++v50;
    } while (v42 != 0);
  }
LABEL_29:
  v51 = v3 - 1;
  if (*(_DWORD*)(result + 24) != 0) {
    if (v3 != 1) {
      v52 = (float*)(a2 + 4);
      v51 = 0;
      do {
        v53 = 1.0f;
        v54 = *(v52 - 1) * 0.5f;
        if (v54 < 8.0f) {
          v53 = -1.0f;
          if (v54 > -8.0f) {
            v55 = v54 < 0.0f;
            if (v54 < 0.0f) {
              v54 = -v54;
            }
            v56 = (float)(v54 * 25.0f) + 0.5f;
            v57 = floorf(v56);
            v58 = vcvtms_s32_f32(v56);
            if (v55) {
              v53 = -(
                  float)(SdkData_c1f948[v58] +
                         (float)((float)((float)(v54 + (float)((float)(int)v57 *
                                                               -0.04f)) *
                                         (float)(1.0f -
                                                 (float)(SdkData_c1f948[v58] *
                                                         SdkData_c1f948
                                                             [v58]))) *
                                 (float)(1.0f -
                                         (float)(SdkData_c1f948[v58] *
                                                 (float)(v54 +
                                                         (float)((float)(int)
                                                                     v57 *
                                                                 -0.04f))))));
            }
            else {
              v53 = SdkData_c1f948[v58] +
                    (float)((float)((float)(v54 +
                                            (float)((float)(int)v57 * -0.04f)) *
                                    (float)(1.0f -
                                            (float)(SdkData_c1f948[v58] *
                                                    SdkData_c1f948[v58]))) *
                            (float)(1.0f -
                                    (float)(SdkData_c1f948[v58] *
                                            (float)(v54 +
                                                    (float)((float)(int)v57 *
                                                            -0.04f)))));
            }
          }
        }
        v59 = (float)(v53 * 0.5f) + 0.5f;
        v60 = 1.0f;
        *(v52 - 1) = v59;
        v61 = *v52 * 0.5f;
        if (v61 < 8.0f) {
          v60 = -1.0f;
          if (v61 > -8.0f) {
            v62 = v61 < 0.0f;
            if (v61 < 0.0f) {
              v61 = -v61;
            }
            v63 = (float)(v61 * 25.0f) + 0.5f;
            v64 = floorf(v63);
            v65 = vcvtms_s32_f32(v63);
            if (v62) {
              v60 = -(
                  float)(SdkData_c1f948[v65] +
                         (float)((float)((float)(v61 + (float)((float)(int)v64 *
                                                               -0.04f)) *
                                         (float)(1.0f -
                                                 (float)(SdkData_c1f948[v65] *
                                                         SdkData_c1f948
                                                             [v65]))) *
                                 (float)(1.0f -
                                         (float)(SdkData_c1f948[v65] *
                                                 (float)(v61 +
                                                         (float)((float)(int)
                                                                     v64 *
                                                                 -0.04f))))));
            }
            else {
              v60 = SdkData_c1f948[v65] +
                    (float)((float)((float)(v61 +
                                            (float)((float)(int)v64 * -0.04f)) *
                                    (float)(1.0f -
                                            (float)(SdkData_c1f948[v65] *
                                                    SdkData_c1f948[v65]))) *
                            (float)(1.0f -
                                    (float)(SdkData_c1f948[v65] *
                                            (float)(v61 +
                                                    (float)((float)(int)v64 *
                                                            -0.04f)))));
            }
          }
        }
        v51 += 2;
        *v52 = (float)(v60 * 0.5f) + 0.5f;
        v52 += 2;
      } while ((v3 & 0x7FFFFFFE) != v51);
    }
    if ((v3 & 1) != 0) {
      v66 = 1.0f;
      v67 = *(float*)(a2 + 4 * v51) * 0.5f;
      if (v67 < 8.0f) {
        v66 = -1.0f;
        if (v67 > -8.0f) {
          v68 = v67 < 0.0f;
          if (v67 < 0.0f) {
            v67 = -v67;
          }
          v69 = (float)(v67 * 25.0f) + 0.5f;
          v70 = floorf(v69);
          v71 = vcvtms_s32_f32(v69);
          v72 =
              SdkData_c1f948[v71] +
              (float)((float)((float)(v67 + (float)((float)(int)v70 * -0.04f)) *
                              (float)(1.0f - (float)(SdkData_c1f948[v71] *
                                                     SdkData_c1f948[v71]))) *
                      (float)(1.0f -
                              (float)(SdkData_c1f948[v71] *
                                      (float)(v67 + (float)((float)(int)v70 *
                                                            -0.04f)))));
          if (v68) {
            v66 = -v72;
          }
          else {
            v66 = v72;
          }
        }
      }
      *(float*)(a2 + 4 * v51) = (float)(v66 * 0.5f) + 0.5f;
    }
  }
  else {
    if (v3 != 1) {
      v73 = (float*)(a2 + 4);
      v51 = 0;
      do {
        v74 = *(v73 - 1);
        v75 = 1.0f;
        if (v74 < 8.0f) {
          v75 = -1.0f;
          if (v74 > -8.0f) {
            v76 = v74 < 0.0f;
            if (v74 < 0.0f) {
              v74 = -v74;
            }
            v77 = (float)(v74 * 25.0f) + 0.5f;
            v78 = floorf(v77);
            v79 = vcvtms_s32_f32(v77);
            if (v76) {
              v75 = -(
                  float)(SdkData_c1f948[v79] +
                         (float)((float)((float)(v74 + (float)((float)(int)v78 *
                                                               -0.04f)) *
                                         (float)(1.0f -
                                                 (float)(SdkData_c1f948[v79] *
                                                         SdkData_c1f948
                                                             [v79]))) *
                                 (float)(1.0f -
                                         (float)(SdkData_c1f948[v79] *
                                                 (float)(v74 +
                                                         (float)((float)(int)
                                                                     v78 *
                                                                 -0.04f))))));
            }
            else {
              v75 = SdkData_c1f948[v79] +
                    (float)((float)((float)(v74 +
                                            (float)((float)(int)v78 * -0.04f)) *
                                    (float)(1.0f -
                                            (float)(SdkData_c1f948[v79] *
                                                    SdkData_c1f948[v79]))) *
                            (float)(1.0f -
                                    (float)(SdkData_c1f948[v79] *
                                            (float)(v74 +
                                                    (float)((float)(int)v78 *
                                                            -0.04f)))));
            }
          }
        }
        v80 = *v73;
        *(v73 - 1) = v75;
        v81 = 1.0f;
        if (v80 < 8.0f) {
          v81 = -1.0f;
          if (v80 > -8.0f) {
            v82 = v80 < 0.0f;
            if (v80 < 0.0f) {
              v80 = -v80;
            }
            v83 = (float)(v80 * 25.0f) + 0.5f;
            v84 = floorf(v83);
            v85 = vcvtms_s32_f32(v83);
            if (v82) {
              v81 = -(
                  float)(SdkData_c1f948[v85] +
                         (float)((float)((float)(v80 + (float)((float)(int)v84 *
                                                               -0.04f)) *
                                         (float)(1.0f -
                                                 (float)(SdkData_c1f948[v85] *
                                                         SdkData_c1f948
                                                             [v85]))) *
                                 (float)(1.0f -
                                         (float)(SdkData_c1f948[v85] *
                                                 (float)(v80 +
                                                         (float)((float)(int)
                                                                     v84 *
                                                                 -0.04f))))));
            }
            else {
              v81 = SdkData_c1f948[v85] +
                    (float)((float)((float)(v80 +
                                            (float)((float)(int)v84 * -0.04f)) *
                                    (float)(1.0f -
                                            (float)(SdkData_c1f948[v85] *
                                                    SdkData_c1f948[v85]))) *
                            (float)(1.0f -
                                    (float)(SdkData_c1f948[v85] *
                                            (float)(v80 +
                                                    (float)((float)(int)v84 *
                                                            -0.04f)))));
            }
          }
        }
        *v73 = v81;
        v73 += 2;
        v51 += 2;
      } while ((v3 & 0x7FFFFFFE) != v51);
    }
    if ((v3 & 1) != 0) {
      v86 = *(float*)(a2 + 4 * v51);
      v87 = 1.0f;
      if (v86 < 8.0f) {
        v87 = -1.0f;
        if (v86 > -8.0f) {
          v88 = v86 < 0.0f;
          if (v86 < 0.0f) {
            v86 = -v86;
          }
          v89 = (float)(v86 * 25.0f) + 0.5f;
          v90 = floorf(v89);
          v91 = vcvtms_s32_f32(v89);
          v92 =
              SdkData_c1f948[v91] +
              (float)((float)((float)(v86 + (float)((float)(int)v90 * -0.04f)) *
                              (float)(1.0f - (float)(SdkData_c1f948[v91] *
                                                     SdkData_c1f948[v91]))) *
                      (float)(1.0f -
                              (float)(SdkData_c1f948[v91] *
                                      (float)(v86 + (float)((float)(int)v90 *
                                                            -0.04f)))));
          if (v88) {
            v87 = -v92;
          }
          else {
            v87 = v92;
          }
        }
      }
      *(float*)(a2 + 4 * v51) = v87;
    }
  }
  return result;
}

__int64 SdkHr_377680(__int64* a1, _DWORD* a2, __int64 a3, __int64 a4, int a5,
                     int a6, signed int a7, __int64 a8, unsigned int a9,
                     __int64 a10, int a11, int a12)
{
  int v12;
  __int64 v13;
  _DWORD* v14;
  __int64* v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 i;
  int v32;
  int* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _DWORD* v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  int* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  int* v57;
  __int64 v58;
  int v59;
  int v60;
  int v61;
  __int64 v62;
  int* v63;
  __int64 v64;
  int* v65;
  __int64 v66;
  char v67;
  int* v68;
  __int64 v69;
  unsigned __int64 v70;
  int* v71;
  int* v72;
  int v73;
  _DWORD* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  __int64 v79;
  int v80;
  __int64 v81;
  int v82;
  __int64 v83;
  int v84;
  __int64 v85;
  int v86;
  __int64 v87;
  int v88;
  __int64 v89;
  __int64 v90;
  int* v91;
  __int64 v92;
  __int64 v93;
  int v94;
  __int64 v95;
  int v96;
  __int64 v97;
  int* v98;
  int v99;
  __int64 v100;
  _DWORD* v101;
  _DWORD* v102;
  int v103;
  __int64 v104;
  int v105;
  _DWORD* v106;
  int* v107;
  int v108;
  int v109;
  int* v110;
  int v111;
  int v112;
  int* v113;
  int v114;
  unsigned int v115;
  int v116;
  int v117;
  int* v118;
  int v119;
  unsigned int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  _DWORD* v160;
  _DWORD* v161;
  int v162;
  __int64 v163;
  _DWORD* v164;
  int* v165;
  int v166;
  int v168;
  int v169;
  int v170;
  unsigned int v171;
  int v172;
  unsigned int v173;
  int v174;
  __int64 v175;
  unsigned int v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  int v185;
  int v186;
  unsigned int v187;
  unsigned int v188;
  unsigned int v191;
  int v192;
  __int64 v193;
  __int64 v194;
  _DWORD* v195;
  __int64 v196;
  __int64 v197;
  unsigned int v198[3];

  v12 = a12;
  v13 = *((unsigned int*)a1 + 6);
  v14 = a2;
  v15 = a1;
  v16 = __clz(a7);
  v17 = a7 >> (29 - v16);
  if (a12 != 0) {
    v18 = ((unsigned __int64)(1431655765LL * a12) >> 31) & 0xFFFFFFFE;
  }
  else {
    v18 = 1431655765;
  }
  if (a12 != 0) {
    v19 = ((unsigned __int64)(1145324672LL * a12) >> 31) & 0xFFFFFFFE;
  }
  else {
    v19 = 1145324672;
  }
  if (v17 == 7) {
    v12 = v19;
  }
  if (v17 == 6) {
    v20 = v18;
  }
  else {
    v20 = v12;
  }
  if ((_DWORD)v13 == a9) {
    v192 = (int)(a7 - a9) >> 1;
    v13 = a9;
    goto LABEL_26;
  }
  if (*((_DWORD*)a1 + 4) != 0) {
    v21 = *((_DWORD*)a1 + 5);
    v22 = 0;
  }
  else {
    v22 = 1;
    a1[1] = a8;
    *((_DWORD*)a1 + 6) = a9;
    *((_DWORD*)a1 + 7) = 0;
    v13 = a9;
    v21 = (int)(a6 - a9) >> 1;
    *((_DWORD*)a1 + 4) = a6;
    *((_DWORD*)a1 + 5) = v21;
  }
  v23 = (int)(v13 - a9) >> 1;
  v24 = v23 + v21;
  v25 = ((int)(a7 - a9) >> 1) - v23;
  v192 = v25;
  if (v24 >= 1) {
    v22 = 1;
  }
  if (v25 < 1 || v22 == 0) {
    if (v22 == 0) {
      goto LABEL_26;
    }
  }
  else if ((int)v13 > (int)a9) {
  LABEL_26:
    v27 = *a1;
    v28 = *((int*)a1 + 8);
    if (a6 >= 1) {
      v29 = *((unsigned int*)a1 + 7);
      if ((int)v29 >= 1) {
        v30 = 0;
        for (i = 0; i < v29; ++i) {
          ++v30;
          a2[i] = *(_DWORD*)(*a1 + 4 * i);
          v29 = *((int*)a1 + 7);
        }
        v14 = &a2[v30];
      }
      *((_DWORD*)a1 + 7) = 0;
      v32 = a7 + ((unsigned int)a7 >> 31);
      if (a5 > 0) {
        goto LABEL_32;
      }
    LABEL_107:
      v153 = v32 >> 1;
      if (a7 >= 2) {
        goto LABEL_108;
      }
      return (unsigned int)v29;
    }
    v29 = 0;
    v32 = a7 + ((unsigned int)a7 >> 31);
    if (a5 <= 0) {
      goto LABEL_107;
    }
  LABEL_32:
    v33 = (int*)(v27 + 4 * v28);
    v188 = v20;
    v34 = a7;
    v35 = a1[1];
    v36 = 0;
    v187 = v16 - 48;
    v174 = a7 & 3;
    v37 = (__int64)(int)(v13 + ((unsigned int)v13 >> 31)) >> 1;
    v191 = a7;
    v178 = (int)v13;
    v186 = (int)v13 / 2 + v192;
    v185 = (a7 - a11) >> 1;
    v177 = (int)v13 / -2;
    v175 = -v37;
    v168 = v32 >> 1;
    v169 = a5;
    v184 = (__int64)v32 >> 1;
    v183 = (unsigned int)a5;
    v172 = (a7 >> 2) & 7;
    v173 = (a7 >> 2) - 1;
    v180 = ((int)v13 / 2) & 3LL;
    v176 = (int)v13 / 2 - 1;
    v38 = 4LL * a7;
    v170 = a7 >> 2;
    v171 = (a7 >> 2) & 0xFFFFFFF8;
    v182 = v38;
    v39 = (4 * ((int)v13 / 2)) & 0xFFFFFFF0;
    v40 = a3 + v38 + 4 * v177;
    v179 = 4LL * ((int)v13 / 2);
    v41 = a3 + v38 - v179;
    v42 = (_DWORD*)(v41 - 16);
    do {
      v193 = v35;
      v43 = v13;
      v44 = v29;
      v45 = a6;
      v46 = v36;
      v194 = v40;
      v195 = v42;
      v47 = v39;
      v48 = v37;
      v196 = v41;
      v49 = v34;
      v198[0] = v187;
      v50 = v36 * v34;
      v51 = a7;
      v52 = (int*)(a3 + 4 * v50);
      SdkRoutine_867500(v52, (unsigned int)a7, v198);
      v197 = v46;
      v53 = v198[0] + *(__int16*)(a4 + 2 * v46);
      if (v188 != 0) {
        SdkRoutine_375f60(v52, v188, v51, v53);
        a6 = v45;
        v29 = v44;
        v13 = v43;
        v34 = v49;
        v37 = v48;
        v39 = v47;
        v55 = v193;
        v54 = v194;
        v15 = a1;
        goto LABEL_36;
      }
      a6 = v45;
      v29 = v44;
      v13 = v43;
      v34 = v49;
      v37 = v48;
      v39 = v47;
      v55 = v193;
      v54 = v194;
      v15 = a1;
      if ((_DWORD)v53 == 0) {
        goto LABEL_36;
      }
      if ((int)v53 >= 1) {
        if ((unsigned int)v53 >= 0x1F) {
          v67 = 31;
        }
        else {
          v67 = v53;
        }
        if (v174 != 0) {
          *v52 <<= v67;
          v68 = v52 + 1;
          if (v174 != 1) {
            v52[1] <<= v67;
            if (v174 == 2) {
              v68 = v52 + 2;
              if (v191 < 4) {
                goto LABEL_36;
              }
            }
            else {
              v68 = v52 + 3;
              v52[2] <<= v67;
              if (v191 < 4) {
                goto LABEL_36;
              }
            }
            goto LABEL_84;
          }
        }
        else {
          v68 = v52;
        }
        if (v191 < 4) {
          goto LABEL_36;
        }
      LABEL_84:
        v111 = v172;
        if (v172 == 0) {
          v115 = v170;
          if (v173 < 7) {
            goto LABEL_36;
          }
          do {
          LABEL_95:
            v115 -= 8;
            v121 = v68[1] << v67;
            *v68 <<= v67;
            v68[1] = v121;
            v122 = v68[3] << v67;
            v68[2] <<= v67;
            v68[3] = v122;
            v123 = v68[5] << v67;
            v68[4] <<= v67;
            v68[5] = v123;
            v124 = v68[7] << v67;
            v68[6] <<= v67;
            v68[7] = v124;
            v125 = v68[9] << v67;
            v68[8] <<= v67;
            v68[9] = v125;
            v126 = v68[11] << v67;
            v68[10] <<= v67;
            v68[11] = v126;
            v127 = v68[13] << v67;
            v68[12] <<= v67;
            v68[13] = v127;
            v128 = v68[15] << v67;
            v68[14] <<= v67;
            v68[15] = v128;
            v129 = v68[17] << v67;
            v68[16] <<= v67;
            v68[17] = v129;
            v130 = v68[19] << v67;
            v68[18] <<= v67;
            v68[19] = v130;
            v131 = v68[21] << v67;
            v68[20] <<= v67;
            v68[21] = v131;
            v132 = v68[23] << v67;
            v68[22] <<= v67;
            v68[23] = v132;
            v133 = v68[25] << v67;
            v68[24] <<= v67;
            v68[25] = v133;
            v134 = v68[27] << v67;
            v68[26] <<= v67;
            v68[27] = v134;
            v135 = v68[29] << v67;
            v68[28] <<= v67;
            v68[29] = v135;
            v136 = v68[31] << v67;
            v68[30] <<= v67;
            v68[31] = v136;
            v68 += 32;
          } while (v115 != 0);
          goto LABEL_36;
        }
        do {
          --v111;
          v112 = v68[1] << v67;
          *v68 <<= v67;
          v68[1] = v112;
          v113 = v68 + 4;
          v114 = v68[3] << v67;
          v68[2] <<= v67;
          v68[3] = v114;
          v68 += 4;
        } while (v111 != 0);
        v115 = v171;
        v68 = v113;
        if (v173 >= 7) {
          goto LABEL_95;
        }
        goto LABEL_36;
      }
      if ((unsigned int)-(int)v53 < 0x1F) {
        v109 = -(int)v53;
      }
      else {
        LOBYTE(v109) = 31;
      }
      if (v174 != 0) {
        *v52 >>= v109;
        v110 = v52 + 1;
        if (v174 != 1) {
          v52[1] >>= v109;
          if (v174 == 2) {
            v110 = v52 + 2;
            if (v191 < 4) {
              goto LABEL_36;
            }
          }
          else {
            v110 = v52 + 3;
            v52[2] >>= v109;
            if (v191 < 4) {
              goto LABEL_36;
            }
          }
          goto LABEL_90;
        }
      }
      else {
        v110 = v52;
      }
      if (v191 < 4) {
        goto LABEL_36;
      }
    LABEL_90:
      v116 = v172;
      if (v172 == 0) {
        v120 = v170;
        if (v173 < 7) {
          goto LABEL_36;
        }
        do {
        LABEL_100:
          v120 -= 8;
          v137 = v110[1] >> v109;
          *v110 >>= v109;
          v110[1] = v137;
          v138 = v110[3] >> v109;
          v110[2] >>= v109;
          v110[3] = v138;
          v139 = v110[5] >> v109;
          v110[4] >>= v109;
          v110[5] = v139;
          v140 = v110[7] >> v109;
          v110[6] >>= v109;
          v110[7] = v140;
          v141 = v110[9] >> v109;
          v110[8] >>= v109;
          v110[9] = v141;
          v142 = v110[11] >> v109;
          v110[10] >>= v109;
          v110[11] = v142;
          v143 = v110[13] >> v109;
          v110[12] >>= v109;
          v110[13] = v143;
          v144 = v110[15] >> v109;
          v110[14] >>= v109;
          v110[15] = v144;
          v145 = v110[17] >> v109;
          v110[16] >>= v109;
          v110[17] = v145;
          v146 = v110[19] >> v109;
          v110[18] >>= v109;
          v110[19] = v146;
          v147 = v110[21] >> v109;
          v110[20] >>= v109;
          v110[21] = v147;
          v148 = v110[23] >> v109;
          v110[22] >>= v109;
          v110[23] = v148;
          v149 = v110[25] >> v109;
          v110[24] >>= v109;
          v110[25] = v149;
          v150 = v110[27] >> v109;
          v110[26] >>= v109;
          v110[27] = v150;
          v151 = v110[29] >> v109;
          v110[28] >>= v109;
          v110[29] = v151;
          v152 = v110[31] >> v109;
          v110[30] >>= v109;
          v110[31] = v152;
          v110 += 32;
        } while (v120 != 0);
        goto LABEL_36;
      }
      do {
        --v116;
        v117 = v110[1] >> v109;
        *v110 >>= v109;
        v110[1] = v117;
        v118 = v110 + 4;
        v119 = v110[3] >> v109;
        v110[2] >>= v109;
        v110[3] = v119;
        v110 += 4;
      } while (v116 != 0);
      v120 = v171;
      v110 = v118;
      if (v173 >= 7) {
        goto LABEL_100;
      }
    LABEL_36:
      if (a6 <= (int)v29) {
        v58 = *((int*)v15 + 7);
        v14 = (_DWORD*)(*v15 + 4 * v58);
        v59 = *((_DWORD*)v15 + 5);
        *((_DWORD*)v15 + 7) = v58 + v37 + v59;
        a7 = v191;
        v57 = v33 - 1;
        if (v59 < 1) {
          goto LABEL_42;
        }
      }
      else {
        v56 = *((_DWORD*)v15 + 5);
        v29 = (unsigned int)(v29 + v37 + v56);
        a7 = v191;
        v57 = v33 - 1;
        if (v56 < 1) {
          goto LABEL_42;
        }
      }
      v60 = 0;
      do {
        v61 = *v57--;
        ++v60;
        *v14++ = -v61;
      } while (v60 < *((_DWORD*)v15 + 5));
    LABEL_42:
      if (a6 <= (int)v29) {
        v64 = *((int*)v15 + 7);
        v62 = *v15 + 4 * v64 + 4 * v37;
        *((_DWORD*)v15 + 7) = v186 + v64;
        v63 = &v52[v34];
        if ((int)v13 <= 1) {
          goto LABEL_64;
        }
      }
      else {
        v62 = (__int64)&v14[v178];
        v29 = (unsigned int)(v186 + v29);
        v63 = &v52[v34];
        if ((int)v13 <= 1) {
          goto LABEL_64;
        }
      }
      v65 = &v63[v177];
      if (v176 < 3) {
        v66 = 0;
        if (v180 == 0) {
          goto LABEL_64;
        }
      LABEL_62:
        v90 = v180;
        v91 = (int*)(v55 + 4 * v66);
        do {
          v93 = *v91++;
          v92 = v93;
          LODWORD(v93) = *v65++;
          v94 = v93;
          v95 = *v57--;
          --v90;
          v96 = (_DWORD)v92 << 16;
          v92 &= 0xFFFFFFFFFFFF0000LL;
          *v14++ = (((unsigned __int64)((int)v92 * (__int64)v94) >> 31) &
                    0xFFFFFFFE) +
                   (((unsigned __int64)-(v95 * v96) >> 31) & 0xFFFFFFFE);
          *(_DWORD*)(v62 - 4) =
              (((unsigned __int64)-(v95 * v92) >> 31) & 0xFFFFFFFE) -
              (((unsigned __int64)(v94 * (__int64)v96) >> 31) & 0xFFFFFFFE);
          v62 -= 4;
        } while (v90 != 0);
        goto LABEL_64;
      }
      v69 = 0;
      v70 = 0;
      v66 = 0;
      do {
        v71 = (int*)(v55 + v70);
        v72 = &v57[v69];
        v73 = *(_DWORD*)(v54 + v70);
        v74 = &v14[v70 / 4];
        v75 = v62 + v69 * 4;
        v76 = *(int*)(v55 + v70);
        v77 = v57[v69];
        v66 += 4;
        v70 += 16LL;
        v69 -= 4;
        v78 = (_DWORD)v76 << 16;
        v76 &= 0xFFFFFFFFFFFF0000LL;
        *v74 =
            (((unsigned __int64)((int)v76 * (__int64)v73) >> 31) & 0xFFFFFFFE) +
            (((unsigned __int64)-(v77 * v78) >> 31) & 0xFFFFFFFE);
        *(_DWORD*)(v75 - 4) =
            (((unsigned __int64)-(v77 * v76) >> 31) & 0xFFFFFFFE) -
            (((unsigned __int64)(v73 * (__int64)v78) >> 31) & 0xFFFFFFFE);
        v79 = v71[1];
        v80 = v65[1];
        v81 = *(v72 - 1);
        v82 = (_DWORD)v79 << 16;
        v79 &= 0xFFFFFFFFFFFF0000LL;
        v74[1] =
            (((unsigned __int64)((int)v79 * (__int64)v80) >> 31) & 0xFFFFFFFE) +
            (((unsigned __int64)-(v81 * v82) >> 31) & 0xFFFFFFFE);
        *(_DWORD*)(v75 - 8) =
            (((unsigned __int64)-(v81 * v79) >> 31) & 0xFFFFFFFE) -
            (((unsigned __int64)(v80 * (__int64)v82) >> 31) & 0xFFFFFFFE);
        v83 = v71[2];
        v84 = v65[2];
        v85 = *(v72 - 2);
        v86 = (_DWORD)v83 << 16;
        v83 &= 0xFFFFFFFFFFFF0000LL;
        v74[2] =
            (((unsigned __int64)((int)v83 * (__int64)v84) >> 31) & 0xFFFFFFFE) +
            (((unsigned __int64)-(v85 * v86) >> 31) & 0xFFFFFFFE);
        *(_DWORD*)(v75 - 12) =
            (((unsigned __int64)-(v85 * v83) >> 31) & 0xFFFFFFFE) -
            (((unsigned __int64)(v84 * (__int64)v86) >> 31) & 0xFFFFFFFE);
        v87 = v71[3];
        v88 = v65[3];
        v89 = *(v72 - 3);
        v65 += 4;
        LODWORD(v85) = (_DWORD)v87 << 16;
        v87 &= 0xFFFFFFFFFFFF0000LL;
        v74[3] =
            (((unsigned __int64)((int)v87 * (__int64)v88) >> 31) & 0xFFFFFFFE) +
            (((unsigned __int64)-(v89 * (int)v85) >> 31) & 0xFFFFFFFE);
        *(_DWORD*)(v75 - 16) =
            (((unsigned __int64)-(v89 * v87) >> 31) & 0xFFFFFFFE) -
            (((unsigned __int64)(v88 * (__int64)(int)v85) >> 31) & 0xFFFFFFFE);
      } while (v39 != v70);
      v65 = (int*)(v54 + v70);
      v62 -= v70;
      v14 = (_DWORD*)((char*)v14 + v70);
      v57 = (int*)((char*)v57 - v70);
      if (v180 != 0) {
        goto LABEL_62;
      }
    LABEL_64:
      if (v192 < 1) {
        goto LABEL_33;
      }
      if ((unsigned int)v192 < 8) {
        v97 = v62 + 4 * v37 - 4;
        v98 = &v63[v175];
        if ((v192 & 7) == 0) {
          goto LABEL_33;
        }
      LABEL_71:
        v105 = v192 & 7;
        v106 = (_DWORD*)(v97 + 4);
        v107 = v98 - 1;
        do {
          v108 = *v107--;
          --v105;
          *v106++ = -v108;
        } while (v105 != 0);
        goto LABEL_33;
      }
      v99 = v192 & 0x7FFFFFF8;
      v100 = 0;
      v101 = v195;
      do {
        v102 = (_DWORD*)(v62 + v179 + v100);
        v100 += 32;
        v99 -= 8;
        *v102 = -v101[3];
        v102[1] = -v101[2];
        v102[2] = -v101[1];
        v102[3] = -*v101;
        v102[4] = -*(v101 - 1);
        v102[5] = -*(v101 - 2);
        v102[6] = -*(v101 - 3);
        v103 = *(v101 - 4);
        v101 -= 8;
        v102[7] = -v103;
      } while (v99 != 0);
      v104 = v62 + v179 + v100;
      v98 = (int*)(v196 - v100);
      v97 = v104 - 4;
      if ((v192 & 7) != 0) {
        goto LABEL_71;
      }
    LABEL_33:
      v14 += v37;
      v33 = &v52[v184];
      v35 = a10;
      v36 = v197 + 1;
      v40 = v54 + v182;
      v42 = (_DWORD*)((char*)v195 + v182);
      v41 = v196 + v182;
      *((_DWORD*)v15 + 4) = a7;
      v15[1] = a10;
      *((_DWORD*)v15 + 5) = v185;
      *((_DWORD*)v15 + 6) = a11;
    } while (v197 + 1 != v183);
    v153 = v168;
    a5 = v169;
    if (a7 < 2) {
      return (unsigned int)v29;
    }
  LABEL_108:
    v154 = *v15;
    v155 = *((int*)v15 + 8);
    v156 = a7 * (a5 - 1);
    v157 = v153 & 7;
    if ((unsigned int)(v153 - 1) >= 7) {
      v159 = 0;
      v160 = (_DWORD*)(v154 - 4LL * v153 + 4 * v155 + 16);
      v161 = (_DWORD*)(a3 + 4 * v156 + 16);
      do {
        v159 -= 8;
        *(v160 - 4) = *(v161 - 4);
        *(v160 - 3) = *(v161 - 3);
        *(v160 - 2) = *(v161 - 2);
        *(v160 - 1) = *(v161 - 1);
        *v160 = *v161;
        v160[1] = v161[1];
        v160[2] = v161[2];
        v162 = v161[3];
        v161 += 8;
        v160[3] = v162;
        v160 += 8;
      } while (-(__int64)(v153 & 0xFFFFFFF8) != v159);
      v158 = -v159;
      if ((v153 & 7) != 0) {
        goto LABEL_116;
      }
    }
    else {
      v158 = 0;
      if ((v153 & 7) == 0) {
        return (unsigned int)v29;
      }
    LABEL_116:
      v163 = 4 * v158;
      v164 = (_DWORD*)(v154 + v163 + 4 * v155 - 4LL * v153);
      v165 = (int*)(a3 + v163 + 4 * v156);
      do {
        v166 = *v165++;
        --v157;
        *v164++ = v166;
      } while (v157 != 0);
    }
    return (unsigned int)v29;
  }
  *((_DWORD*)a1 + 5) = v24;
  *((_DWORD*)a1 + 6) = a9;
  v192 = (int)(a7 - a9) >> 1;
  v13 = a9;
  a1[1] = a8;
  goto LABEL_26;
}

__int64 SdkHr_430ca0(__int64 result)
{
  unsigned int v1;
  unsigned int v2;
  int v3;
  unsigned int v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  unsigned int v15;
  int v17;
  int v18;
  int v19;
  _DWORD* v20;
  int v21;
  _DWORD* v22;
  int v23;
  unsigned int v24;
  _DWORD* v25;
  int v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  _DWORD* v39;
  int v40;
  int v41;
  int i;
  unsigned int v43;
  int v44;
  unsigned int v45;
  int v46;
  _DWORD* v47;
  int v48;
  int v49;
  unsigned int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  _DWORD* v56;
  _DWORD* v57;
  _DWORD* v58;
  _DWORD* v59;
  _DWORD* v60;
  _DWORD* v61;
  _DWORD* v62;
  _DWORD* v63;
  _DWORD* v64;
  int v65;
  int v66;
  _DWORD* v67;
  int v68;
  int v69;
  int v70;
  unsigned int v71;
  int v72;
  bool v73;
  int v74;
  int v75;
  _DWORD* v76;
  int v77;
  int v78;
  int v79;
  unsigned int v80;
  int v81;
  _DWORD* v82;
  int v83;
  int v84;
  unsigned int v85;
  _DWORD* v86;
  int v87;
  int v88;
  unsigned int v89;
  int v90;
  int v91;
  _DWORD* v92;
  int v93;
  int v94;
  unsigned int v95;
  _DWORD* v96;
  int v97;
  int v98;
  unsigned int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;

  v7 = *(_QWORD*)(result + 40);
  v8 = *(_QWORD*)(result + 64);
  v9 = result;
  v10 = *(_DWORD*)(v8 + 348);
  *(_QWORD*)(result + 40) = v7 - 4;
  v11 = *(_DWORD*)(v7 - 4);
  if (v11 == 11) {
    return SdkRoutine_869c80(result);
  }
  if ((v10 & 2) == 0) {
    if (v11 > 252) {
      if (v11 != 253) {
        return result;
      }
      *(_QWORD*)(result + 40) = v7 - 8;
      v115 = *(_DWORD*)(v7 - 8);
      *(_QWORD*)(result + 40) = v7 - 12;
      v3 = *(_DWORD*)(v7 - 12);
      *(_QWORD*)(result + 40) = v7 - 16;
      v2 = *(_DWORD*)(v7 - 16);
      *(_QWORD*)(result + 40) = v7 - 20;
      v12 = *(_DWORD*)(v7 - 20);
      v4 = *(unsigned __int16*)(v8 + 34);
      v6 = (v2 >> 9) & 0xF;
      v1 = (unsigned __int16)v12 >> 10;
      v5 = v12 & 0x3FF;
      if (*(_BYTE*)(v8 + 276) != 0) {
        v13 = *(unsigned __int16*)(v8 + 34);
        if ((v5 | v6) != 0 && v1 <= v13) {
        LABEL_22:
          if (v5 != 0) {
            *(_QWORD*)(v9 + 40) =
                *(_QWORD*)(v9 + 40) - 4LL * (unsigned int)(v5 - 1) - 4;
          }
        LABEL_24:
          v17 = v115;
          v18 = 0;
        LABEL_26:
          v19 = 1;
          while (1) {
            v20 = *(_DWORD**)(v9 + 40);
            v21 = v6 - 14;
            v22 = v20 - 1;
            v23 = *(v20 - 1);
            if (v6 > 14) {
              break;
            }
            v21 = v6 + 2;
            v24 = (v23 & (3 << (14 - v6))) >> (14 - v6);
            if (v6 == 14) {
              v21 = 0;
            LABEL_42:
              *(_QWORD*)(v9 + 40) = v22;
              v23 = *(v20 - 2);
              --v20;
              v25 = v22 - 1;
              if (v24 != 2) {
                goto LABEL_30;
              }
            LABEL_43:
              v30 = v21 - 13;
              if (v21 > 13) {
                v37 = *((unsigned __int16*)v20 - 4);
                *(_QWORD*)(v9 + 40) = v25;
                v38 = (v37 | (unsigned int)(v23 << 16)) >> (29 - v21);
                v23 = *(v20 - 2);
                v31 = v38 & 7;
                v39 = v25 - 1;
                v6 = v30 - 13;
                if (v30 > 13) {
                  goto LABEL_82;
                }
              }
              else {
                v30 = v21 + 3;
                v31 = (v23 & (7 << (13 - v21))) >> (13 - v21);
                if (v30 == 16) {
                  *(_QWORD*)(v9 + 40) = v25;
                  v6 = 3;
                  v32 = (unsigned __int16)*(v20 - 2) >> 13;
                  goto LABEL_84;
                }
                v25 = v20;
                v39 = v20 - 1;
                v6 = v30 - 13;
                if (v30 > 13) {
                LABEL_82:
                  v32 = ((*((unsigned __int16*)v25 - 4) |
                          (unsigned int)(v23 << 16)) >>
                         (29 - v30)) &
                        7;
                  goto LABEL_83;
                }
              }
              v6 = v30 + 3;
              v32 = ((7 << (13 - v30)) & v23) >> (13 - v30);
              if (v30 == 13) {
                v6 = 0;
              LABEL_83:
                *(_QWORD*)(v9 + 40) = v39;
                v25 = v39;
              }
            LABEL_84:
              if (v1 == v13) {
                v51 = v31 + 1;
                v52 = v32 + v18;
                *(_DWORD*)(v9 + 84) = v31;
                if (v31 >= 7) {
                  v53 = v31 + 1;
                }
                else {
                  v53 = v31 + 2;
                }
                if (v31 != -1) {
                  v54 = v51 & 7;
                  if ((v51 & 7) != 0) {
                    v51 = v31 - v54 + 1;
                    v55 = v52;
                    do {
                      v56 = *(_DWORD**)(v9 + 40);
                      --v54;
                      *(_QWORD*)(v9 + 40) = v56 + 1;
                      *v56 = v55++;
                    } while (v54 != 0);
                    if ((unsigned int)v31 >= 7) {
                      do {
                      LABEL_93:
                        v57 = *(_DWORD**)(v9 + 40);
                        v51 -= 8;
                        *(_QWORD*)(v9 + 40) = v57 + 1;
                        *v57 = v55;
                        v58 = *(_DWORD**)(v9 + 40);
                        *(_QWORD*)(v9 + 40) = v58 + 1;
                        *v58 = v55 + 1;
                        v59 = *(_DWORD**)(v9 + 40);
                        *(_QWORD*)(v9 + 40) = v59 + 1;
                        *v59 = v55 + 2;
                        v60 = *(_DWORD**)(v9 + 40);
                        *(_QWORD*)(v9 + 40) = v60 + 1;
                        *v60 = v55 + 3;
                        v61 = *(_DWORD**)(v9 + 40);
                        *(_QWORD*)(v9 + 40) = v61 + 1;
                        *v61 = v55 + 4;
                        v62 = *(_DWORD**)(v9 + 40);
                        *(_QWORD*)(v9 + 40) = v62 + 1;
                        *v62 = v55 + 5;
                        v63 = *(_DWORD**)(v9 + 40);
                        *(_QWORD*)(v9 + 40) = v63 + 1;
                        *v63 = v55 + 6;
                        v64 = *(_DWORD**)(v9 + 40);
                        *(_QWORD*)(v9 + 40) = v64 + 1;
                        v65 = v55 + 7;
                        v55 += 8;
                        *v64 = v65;
                      } while (v51 != 0);
                    }
                  }
                  else {
                    v55 = v52;
                    if ((unsigned int)v31 >= 7) {
                      goto LABEL_93;
                    }
                  }
                  v25 = *(_DWORD**)(v9 + 40);
                }
                v18 = v53 + v52;
                *(_QWORD*)(v9 + 40) = v25 + 1;
                *v25 = v17;
                result = SdkRoutine_42f340(v9);
                v1 = v13;
              }
            }
            else {
              v25 = v20 - 1;
              if (v24 == 2) {
                goto LABEL_43;
              }
            LABEL_30:
              if (v24 == 1) {
                v6 = v21 - 14;
                if (v21 > 14) {
                  v29 = ((*((unsigned __int16*)v20 - 4) |
                          (unsigned int)(v23 << 16)) >>
                         (30 - v21)) &
                        3;
                  *(_QWORD*)(v9 + 40) = v25;
                  if (v29 == 2) {
                    goto LABEL_76;
                  }
                }
                else {
                  v6 = v21 + 2;
                  v29 = (v23 & (3 << (14 - v21))) >> (14 - v21);
                  if (v6 == 16) {
                    v6 = 0;
                    *(_QWORD*)(v9 + 40) = v25;
                    if (v29 == 2) {
                      goto LABEL_76;
                    }
                  }
                  else {
                    v25 = v20;
                    if (v29 == 2) {
                    LABEL_76:
                      v46 = 0;
                      goto LABEL_119;
                    }
                  }
                }
                if (v29 == 1) {
                  v44 = *(v25 - 1);
                  v35 = v6 - 15;
                  if (v6 > 15) {
                    v45 = ((*((unsigned __int16*)v25 - 4) |
                            (unsigned int)(v44 << 16)) >>
                           ~(_BYTE)v6) &
                          1;
                  LABEL_110:
                    *(_QWORD*)(v9 + 40) = --v25;
                  }
                  else {
                    v35 = v6 + 1;
                    v45 = (v44 & (1 << (15 - v6))) >> (15 - v6);
                    if (v6 == 15) {
                      v35 = 0;
                      goto LABEL_110;
                    }
                  }
                  v73 = v45 == 0;
                  v74 = 2;
                  goto LABEL_115;
                }
                if (v29 == 0) {
                  v34 = *(v25 - 1);
                  v35 = v6 - 15;
                  if (v6 > 15) {
                    v36 = ((*((unsigned __int16*)v25 - 4) |
                            (unsigned int)(v34 << 16)) >>
                           ~(_BYTE)v6) &
                          1;
                  LABEL_113:
                    *(_QWORD*)(v9 + 40) = --v25;
                  }
                  else {
                    v35 = v6 + 1;
                    v36 = (v34 & (1 << (15 - v6))) >> (15 - v6);
                    if (v6 == 15) {
                      v35 = 0;
                      goto LABEL_113;
                    }
                  }
                  v73 = v36 == 0;
                  v74 = 4;
                LABEL_115:
                  if (v73) {
                    v46 = v74 + 1;
                  }
                  else {
                    v46 = v74;
                  }
                  v6 = v35;
                  goto LABEL_119;
                }
                v47 = v25 - 1;
                v48 = *(v25 - 1);
                v49 = v6 - 15;
                if (v6 > 15) {
                  v77 = *((unsigned __int16*)v25 - 4);
                  *(_QWORD*)(v9 + 40) = v47;
                  v50 = ((v77 | (unsigned int)(v48 << 16)) >> ~(_BYTE)v6) & 1;
                  v25 = v47;
                }
                else {
                  v49 = v6 + 1;
                  v50 = (v48 & (1 << (15 - v6))) >> (15 - v6);
                  if (v6 == 15) {
                    *(_QWORD*)(v9 + 40) = v47;
                    if (v50 != 1) {
                      v79 = 1;
                      v80 = (*(v25 - 2) & 0x8000) != 0;
                      goto LABEL_166;
                    }
                    v6 = 0;
                    v46 = 1;
                    --v25;
                    goto LABEL_119;
                  }
                }
                v6 = v49;
                if (v50 != 1) {
                  v47 = v25 - 1;
                  v78 = *(v25 - 1);
                  v79 = v6 - 15;
                  if (v6 > 15) {
                    v80 = ((*((unsigned __int16*)v25 - 4) |
                            (unsigned int)(v78 << 16)) >>
                           ~(_BYTE)v6) &
                          1;
                  LABEL_151:
                    *(_QWORD*)(v9 + 40) = v47;
                  }
                  else {
                    v79 = v6 + 1;
                    v80 = (v78 & (1 << (15 - v6))) >> (15 - v6);
                    if (v6 == 15) {
                      v79 = 0;
                      goto LABEL_151;
                    }
                    v47 = v25;
                  }
                LABEL_166:
                  v6 = v79;
                  if (v80 != 0) {
                    v46 = 6;
                  }
                  else {
                    v46 = 7;
                  }
                  v25 = v47;
                  goto LABEL_119;
                }
                v46 = 1;
              LABEL_119:
                if (v1 == v13) {
                  v75 = v46 + v18;
                  *(_QWORD*)(v9 + 40) = v25 + 1;
                  *v25 = v46 + v18;
                  v76 = *(_DWORD**)(v9 + 40);
                  *(_QWORD*)(v9 + 40) = v76 + 1;
                  *v76 = v17;
                  result = SdkRoutine_42f340(v9);
                  v18 = v75 + 2;
                  v1 = v13;
                }
              }
              else if (v24 != 0) {
                v6 = v21 - 15;
                if (v21 > 15) {
                  v33 = ((*((unsigned __int16*)v20 - 4) |
                          (unsigned int)(v23 << 16)) >>
                         ~(_BYTE)v21) &
                        1;
                  goto LABEL_61;
                }
                v6 = v21 + 1;
                v33 = (v23 & (1 << (15 - v21))) >> (15 - v21);
                if (v6 == 16) {
                  v6 = 0;
                LABEL_61:
                  *(_QWORD*)(v9 + 40) = v25;
                }
                if (v33 == 1) {
                  v41 = v19 & 7;
                  for (i = v19; v41 != 0; --v41) {
                    --i;
                    if (v17 + v3 != 0) {
                      v17 += v3;
                    }
                    else {
                      v17 = v3;
                    }
                  }
                  v43 = v19 - 1;
                  v19 = 1;
                  v18 = 0;
                  if (v43 >= 7) {
                    do {
                      v102 = v3;
                      if (v17 + v3 != 0) {
                        v102 = v17 + v3;
                      }
                      v103 = v102 + v3;
                      v73 = v102 + v3 == 0;
                      v104 = v3;
                      if (!v73) {
                        v104 = v103;
                      }
                      v105 = v104 + v3;
                      v73 = v104 + v3 == 0;
                      v106 = v3;
                      if (!v73) {
                        v106 = v105;
                      }
                      v107 = v106 + v3;
                      v73 = v106 + v3 == 0;
                      v108 = v3;
                      if (!v73) {
                        v108 = v107;
                      }
                      v109 = v108 + v3;
                      v73 = v108 + v3 == 0;
                      v110 = v3;
                      if (!v73) {
                        v110 = v109;
                      }
                      v111 = v110 + v3;
                      v73 = v110 + v3 == 0;
                      v112 = v3;
                      if (!v73) {
                        v112 = v111;
                      }
                      v113 = v112 + v3;
                      v73 = v112 + v3 == 0;
                      v114 = v3;
                      if (!v73) {
                        v114 = v113;
                      }
                      v17 = v3;
                      if (v114 + v3 != 0) {
                        v17 = v114 + v3;
                      }
                      i -= 8;
                    } while (i != 0);
                    v18 = 0;
                    goto LABEL_26;
                  }
                }
                else {
                  v17 = v115;
                  v1 += v19;
                  v19 = 1;
                  v18 = 0;
                  if ((int)v1 > (int)v13) {
                    goto LABEL_202;
                  }
                }
              }
              else {
                v26 = v21 - 15;
                if (v21 > 15) {
                  v40 = *((unsigned __int16*)v20 - 4);
                  *(_QWORD*)(v9 + 40) = v25;
                  if ((((v40 | (unsigned int)(v23 << 16)) >> ~(_BYTE)v21) &
                       1) == 0) {
                    goto LABEL_130;
                  }
                LABEL_97:
                  v66 = *(v25 - 1);
                  v6 = v26 - 15;
                  if (v26 > 15) {
                    v28 = ((*((unsigned __int16*)v25 - 4) |
                            (unsigned int)(v66 << 16)) >>
                           ~(_BYTE)v26) &
                          1;
                  }
                  else {
                    v6 = v26 + 1;
                    v28 = (v66 & (1 << (15 - v26))) >> (15 - v26);
                    if (v26 != 15) {
                      goto LABEL_102;
                    }
                    v6 = 0;
                  }
                  *(_QWORD*)(v9 + 40) = --v25;
                LABEL_102:
                  if (v28 == 1) {
                    v18 += 8 * v19;
                    goto LABEL_26;
                  }
                  v67 = v25 - 1;
                  v68 = *(v25 - 1);
                  v69 = v6 - 15;
                  if (v6 > 15) {
                    v72 = *((unsigned __int16*)v25 - 4);
                    *(_QWORD*)(v9 + 40) = v67;
                    if ((((v72 | (unsigned int)(v68 << 16)) >> ~(_BYTE)v6) &
                         1) == 0) {
                      goto LABEL_202;
                    }
                  }
                  else {
                    v69 = v6 + 1;
                    v70 = (v68 & (1 << (15 - v6))) >> (15 - v6);
                    if (v6 == 15) {
                      *(_QWORD*)(v9 + 40) = v67;
                      if (v70 == 0) {
                        goto LABEL_202;
                      }
                      v6 = 2;
                      v71 = (unsigned __int16)*(v25 - 2) >> 14;
                      goto LABEL_137;
                    }
                    v67 = v25;
                    if (v70 == 0) {
                    LABEL_202:
                      *(_QWORD*)(v9 + 40) =
                          *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL);
                      return result;
                    }
                  }
                  v81 = *(v67 - 1);
                  v6 = v69 - 14;
                  if (v69 > 14) {
                    v71 = ((*((unsigned __int16*)v67 - 4) |
                            (unsigned int)(v81 << 16)) >>
                           (30 - v69)) &
                          3;
                    goto LABEL_136;
                  }
                  v6 = v69 + 2;
                  v71 = (v81 & (3 << (14 - v69))) >> (14 - v69);
                  if (v69 == 14) {
                    v6 = 0;
                  LABEL_136:
                    *(_QWORD*)(v9 + 40) = --v67;
                  }
                LABEL_137:
                  if (v71 != 0) {
                    if (v71 == 2) {
                      v86 = v67 - 1;
                      v87 = *(v67 - 1);
                      v88 = v6 - 15;
                      if (v6 > 15) {
                        v90 = *((unsigned __int16*)v67 - 4);
                        *(_QWORD*)(v9 + 40) = v86;
                        v89 =
                            ((v90 | (unsigned int)(v87 << 16)) >> ~(_BYTE)v6) &
                            1;
                        v67 = v86;
                        goto LABEL_153;
                      }
                      v88 = v6 + 1;
                      v89 = (v87 & (1 << (15 - v6))) >> (15 - v6);
                      if (v6 == 15) {
                        *(_QWORD*)(v9 + 40) = v86;
                        if (v89 != 1) {
                          v95 = (*(v67 - 2) & 0x8000) != 0;
                          v94 = 1;
                          goto LABEL_175;
                        }
                        v6 = 0;
                        v19 = 11;
                      }
                      else {
                      LABEL_153:
                        v6 = v88;
                        if (v89 == 1) {
                          v19 = 11;
                        }
                        else {
                          v92 = v67 - 1;
                          v93 = *(v67 - 1);
                          v94 = v6 - 15;
                          if (v6 > 15) {
                            v95 = ((*((unsigned __int16*)v67 - 4) |
                                    (unsigned int)(v93 << 16)) >>
                                   ~(_BYTE)v6) &
                                  1;
                          }
                          else {
                            v94 = v6 + 1;
                            v95 = (v93 & (1 << (15 - v6))) >> (15 - v6);
                            if (v6 != 15) {
                              goto LABEL_175;
                            }
                            v94 = 0;
                          }
                          *(_QWORD*)(v9 + 40) = v92;
                        LABEL_175:
                          v6 = v94;
                          if (v95 != 0) {
                            v100 = 3;
                          }
                          else {
                            v100 = 4;
                          }
                          v19 = v100 + 4;
                        }
                      }
                    }
                    else if (v71 == 1) {
                      v82 = v67 - 1;
                      v83 = *(v67 - 1);
                      v84 = v6 - 15;
                      if (v6 > 15) {
                        v91 = *((unsigned __int16*)v67 - 4);
                        *(_QWORD*)(v9 + 40) = v82;
                        v85 =
                            ((v91 | (unsigned int)(v83 << 16)) >> ~(_BYTE)v6) &
                            1;
                        v67 = v82;
                        goto LABEL_156;
                      }
                      v84 = v6 + 1;
                      v85 = (v83 & (1 << (15 - v6))) >> (15 - v6);
                      if (v6 == 15) {
                        *(_QWORD*)(v9 + 40) = v82;
                        if (v85 != 1) {
                          v99 = (*(v67 - 2) & 0x8000) != 0;
                          v98 = 1;
                          goto LABEL_180;
                        }
                        v6 = 0;
                        v19 = 6;
                      }
                      else {
                      LABEL_156:
                        v6 = v84;
                        if (v85 == 1) {
                          v19 = 6;
                        }
                        else {
                          v96 = v67 - 1;
                          v97 = *(v67 - 1);
                          v98 = v6 - 15;
                          if (v6 > 15) {
                            v99 = ((*((unsigned __int16*)v67 - 4) |
                                    (unsigned int)(v97 << 16)) >>
                                   ~(_BYTE)v6) &
                                  1;
                          }
                          else {
                            v98 = v6 + 1;
                            v99 = (v97 & (1 << (15 - v6))) >> (15 - v6);
                            if (v6 != 15) {
                              goto LABEL_180;
                            }
                            v98 = 0;
                          }
                          *(_QWORD*)(v9 + 40) = v96;
                        LABEL_180:
                          v6 = v98;
                          if (v99 != 0) {
                            v101 = 5;
                          }
                          else {
                            v101 = 6;
                          }
                          v19 = v101 + 4;
                        }
                      }
                    }
                    else {
                      v19 = 4;
                    }
                  }
                  else {
                    v19 = 5;
                  }
                }
                else {
                  v26 = v21 + 1;
                  v27 = (v23 & (1 << (15 - v21))) >> (15 - v21);
                  if (v26 != 16) {
                    v25 = v20;
                    if (v27 == 0) {
                      goto LABEL_130;
                    }
                    goto LABEL_97;
                  }
                  *(_QWORD*)(v9 + 40) = v25;
                  if (v27 != 0) {
                    v6 = 1;
                    v28 = (*(v20 - 2) & 0x8000) != 0;
                    goto LABEL_102;
                  }
                  v26 = 0;
                LABEL_130:
                  v18 += 16 * v19;
                  v19 = 1;
                  v6 = v26;
                }
              }
            }
          }
          v24 = ((*((unsigned __int16*)v20 - 4) | (unsigned int)(v23 << 16)) >>
                 (30 - v6)) &
                3;
          goto LABEL_42;
        }
      LABEL_14:
        v6 = 0;
        v1 = (unsigned __int8)v2;
        goto LABEL_24;
      }
    LABEL_18:
      v15 = SdkRoutine_433470(v9);
      result = SdkRoutine_869570(v4, v15, 16);
      v13 = (unsigned __int16)result;
      if ((v5 | v6) != 0 && v1 <= (unsigned __int16)result) {
        goto LABEL_22;
      }
      goto LABEL_14;
    }
    if (v11 == 252) {
      return SdkRoutine_433960(result);
    }
    if ((unsigned int)(v11 - 5) < 5 || (unsigned int)(v11 - 250) < 2) {
      SdkRoutine_857100(result + 136, 439);
      goto LABEL_18;
    }
  }
  return result;
}

__int64 SdkHr_4336b0(int a1, int a2, _WORD* a3)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  char v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  __int64 result;
  unsigned int v13;

  if (a1 >= 0) {
    v4 = a1;
  }
  else {
    v4 = -a1;
  }
  if (a2 >= 0) {
    v5 = a2;
  }
  else {
    v5 = -a2;
  }
  if (v4 <= v5) {
    v4 = v5;
  }
  v6 = __clz(v4) - 2;
  if (v4 != 0) {
    v7 = v6;
  }
  else {
    v7 = 30;
  }
  v8 = a1 << v7;
  v9 = a2 << v7;
  v10 = SdkRoutine_869570(v8, v8, 30);
  v11 = SdkRoutine_869570(v9, v9, 30);
  result = SdkRoutine_869c30((unsigned int)(v11 + v10));
  if ((_DWORD)result != 0) {
    v13 = result;
    *a3 = ((unsigned int)SdkRoutine_869560(v8, (unsigned int)result, 30) +
           0x8000) >>
          16;
    result = SdkRoutine_869560(v9, v13, 30);
    a3[1] = (unsigned int)(result + 0x8000) >> 16;
  }
  else {
    *(_DWORD*)a3 = 0x4000;
  }
  return result;
}

#pragma GCC visibility pop
