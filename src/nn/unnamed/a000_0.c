#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern int16x8_t SdkData_bcb9e0;

__int64 SdkRoutine_242a60(_QWORD);

__int64 SdkRoutine_242c00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_42f340(_QWORD);

__int64 SdkRoutine_433470(_QWORD);

__int64 SdkRoutine_433960(_QWORD);

__int64 SdkRoutine_857100(_QWORD, _QWORD);

__int64 SdkRoutine_857150(_QWORD);

__int64 SdkRoutine_862aa0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_863470(_QWORD, _QWORD);

__int64 SdkRoutine_863590(_QWORD);

__int64 SdkRoutine_869570(_QWORD, _QWORD, _QWORD);

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
        v11 = 0xFFFFFFFF >> (-(char)((unsigned int)v8 / (unsigned int)v9) & 31);
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

#pragma GCC visibility pop
