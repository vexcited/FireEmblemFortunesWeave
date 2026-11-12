#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1811e80(__int64, __int64, __int64);
__int64 AnimCtrlModule_a78450(_QWORD, _QWORD);
__int64 CharacterActor_1804600(_QWORD*, _QWORD*, __int64);
__int64 CharacterTrailVertex_d35160(_QWORD, _QWORD);
__int64 FieldActor_1802740(_QWORD*, _QWORD*, char);
__int64 FieldActor_1802b20(__int64, _QWORD*);
__int64 FieldActor_1802c10(_QWORD*, _QWORD*);
__int64 FieldActor_1802e00(_QWORD*, _QWORD*);
__int64 GameRoutine_1809b80(_QWORD*, _QWORD*);
__int64 GameRoutine_1812120(__int64, __int64, __int64);
__int64 LightActor_180c220(__int64 result, _QWORD*, char);
__int64 PropActor_1806fc0(_QWORD*, _QWORD*, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64* GameRoutine_1812e50(__int64* result, _QWORD*);
__int64* GameRoutine_1812fc0(__int64* result, _QWORD*);
extern __int64 GameData_212d4f0[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2131e88[37];
extern __int64* GameData_2131e90[36];
extern __int64* GameData_2131e98[35];
extern __int64* GameData_2131ea0[34];
extern __int64* GameData_2131ea8[33];
extern __int64* GameData_2131eb0[32];
extern __int64* GameData_2131eb8[31];
extern __int64* GameData_2131ec0[30];
extern __int64* GameData_2131ed0[28];
extern __int64* GameData_2131ed8[27];
extern __int64* GameData_2131ee0[26];
extern __int64* GameData_2131ee8[25];
extern __int64* GameData_2131ef0[24];
extern __int64* GameData_2131ef8[23];
extern __int64* GameData_2131f00[22];
extern __int64* GameData_2131f18[19];
extern __int64* GameData_2131f20[18];
extern __int64* GameData_2131f28[17];
extern __int64* GameData_2131f30[16];
extern __int64* GameData_2131f38[15];
extern __int64* GameData_2131f40[14];
extern __int64* GameData_2131f48[13];
extern __int64* GameData_2131f50[12];
extern __int64* GameData_2131f58[11];
extern __int64* GameData_2131f60[10];
extern __int64* GameData_2131f68[9];
extern __int64* GameData_2131f70[8];
extern __int64* GameData_2131f78[7];
extern __int64* GameData_2131f80[6];
void __attribute__((noreturn)) GameRoutine_1812b70(void);
void __attribute__((noreturn)) GameRoutine_1812b90(void);
void __attribute__((noreturn)) GameRoutine_1812bd0(void);
void __attribute__((noreturn)) GameRoutine_1812c10(void);
void __attribute__((noreturn)) GameRoutine_1812c30(void);
void __attribute__((noreturn)) GameRoutine_1812c50(void);
void __attribute__((noreturn)) GameRoutine_1812c70(void);
void __attribute__((noreturn)) GameRoutine_1812cb0(void);
void __attribute__((noreturn)) GameRoutine_1812cf0(void);
void __attribute__((noreturn)) GameRoutine_1812d10(void);
void __attribute__((noreturn)) GameRoutine_1812d30(void);
void __attribute__((noreturn)) GameRoutine_1812d50(void);
void __attribute__((noreturn)) GameRoutine_1812d70(void);
void __attribute__((noreturn)) GameRoutine_1812d90(void);
void __attribute__((noreturn)) GameRoutine_1812db0(void);
void __attribute__((noreturn)) GameRoutine_1812dd0(void);
void __attribute__((noreturn)) GameRoutine_1812df0(void);
void __attribute__((noreturn)) GameRoutine_1812e10(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 game_cutscene_ActorList_SetupSorted_lambda0_Invoke(__int64 a1,
                                                           __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda1_Invoke(__int64 a1,
                                                           __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda2_Invoke(__int64 a1,
                                                           __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda3_Invoke(__int64 a1,
                                                           __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda4_Invoke(__int64 a1,
                                                           _QWORD* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda5_Invoke(__int64 a1,
                                                           __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda6_Invoke(__int64 a1,
                                                           __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda7_Invoke(__int64 a1,
                                                           __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda8_Invoke(__int64 a1,
                                                           __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda9_Invoke(__int64 a1,
                                                           __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda10_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda11_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda12_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda13_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda14_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda15_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda16_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda17_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda18_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda19_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda20_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda21_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda22_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda23_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda24_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda25_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda26_Invoke(__int64 a1,
                                                            _QWORD* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda27_Invoke(__int64 a1,
                                                            _QWORD* a2);
__int64 game_cutscene_ActorList_SetupSorted_lambda28_Invoke(__int64 a1,
                                                            _QWORD* a2);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern __int64 (*GameData_20de270[])();
extern __int64 (*GameData_20de300[])();
extern __int64 (*GameData_20de380[])();
extern __int64 (*GameData_20de400[])();
extern __int64 (*GameData_20de480[])();
extern __int64 (*GameData_20de500[])();
extern __int64 (*GameData_20de580[])();
extern __int64 (*GameData_20de600[])();
extern __int64 (*GameData_20de680[])();
extern __int64 (*GameData_20de700[])();
extern __int64 (*GameData_20de780[])();
extern __int64 (*GameData_20de800[])();
extern __int64 (*GameData_20de880[])();
extern __int64 (*GameData_20de900[])();
extern __int64 (*GameData_20de980[])();
extern __int64 (*GameData_20dea00[])();
extern __int64 (*GameData_20dea80[])();
extern __int64 (*GameData_20deb00[])();
extern __int64 (*GameData_20deb80[])();
extern __int64 (*GameData_20dec00[])();
extern __int64 (*GameData_20dec80[])();
extern __int64 (*GameData_20ded00[])();
extern __int64 (*GameData_20ded80[])();
extern __int64 (*GameData_20dee00[])();
extern __int64 (*GameData_20dee80[])();
extern __int64 (*GameData_20def00[])();
extern __int64 (*GameData_20def80[])();
extern __int64 (*GameData_20df000[])();
extern __int64 (*GameData_20df080[])();
void GameRoutine_18190a0(__int64, unsigned int*, int*);
void __attribute__((noreturn)) GameRoutine_60a310();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_cutscene_ActorList_SetupSorted(__int64 a1, __int64 a2, __int64 a3);

void game_cutscene_ActorList_SetupSorted(__int64 a1, __int64 a2, __int64 a3)
{
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
  _QWORD* v34;
  _QWORD* v35;
  unsigned int v36;
  unsigned __int64 v38;
  __int64 v39;
  __int64** v40;
  __int64* v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  int v54[4];
  struct {
    _QWORD v55[4];
    _QWORD* v56;
  } v55_;
  int v57[4];
  struct {
    _QWORD v58[4];
    _QWORD* v59;
  } v58_;
  int v60[4];
  struct {
    _QWORD v61[4];
    _QWORD* v62;
  } v61_;
  int v63[4];
  struct {
    _QWORD v64[4];
    _QWORD* v65;
  } v64_;
  int v66[4];
  struct {
    _QWORD v67[4];
    _QWORD* v68;
  } v67_;
  int v69[4];
  struct {
    _QWORD v70[4];
    _QWORD* v71;
  } v70_;
  int v72[4];
  struct {
    _QWORD v73[4];
    _QWORD* v74;
  } v73_;
  int v75[4];
  struct {
    _QWORD v76[4];
    _QWORD* v77;
  } v76_;
  int v78[4];
  struct {
    _QWORD v79[4];
    _QWORD* v80;
  } v79_;
  int v81[4];
  struct {
    _QWORD v82[4];
    _QWORD* v83;
  } v82_;
  int v84[4];
  struct {
    _QWORD v85[4];
    _QWORD* v86;
  } v85_;
  int v87[4];
  struct {
    _QWORD v88[4];
    _QWORD* v89;
  } v88_;
  int v90[4];
  struct {
    _QWORD v91[4];
    _QWORD* v92;
  } v91_;
  int v93[4];
  struct {
    _QWORD v94[4];
    _QWORD* v95;
  } v94_;
  int v96[4];
  struct {
    _QWORD v97[4];
    _QWORD* v98;
  } v97_;
  int v99[4];
  struct {
    _QWORD v100[4];
    _QWORD* v101;
  } v100_;
  int v102[4];
  struct {
    _QWORD v103[4];
    _QWORD* v104;
  } v103_;
  int v105[4];
  struct {
    _QWORD v106[4];
    _QWORD* v107;
  } v106_;
  int v108[4];
  struct {
    _QWORD v109[4];
    _QWORD* v110;
  } v109_;
  int v111[4];
  struct {
    _QWORD v112[4];
    _QWORD* v113;
  } v112_;
  int v114[4];
  struct {
    _QWORD v115[4];
    _QWORD* v116;
  } v115_;
  int v117[4];
  struct {
    _QWORD v118[4];
    _QWORD* v119;
  } v118_;
  int v120[4];
  struct {
    _QWORD v121[4];
    _QWORD* v122;
  } v121_;
  int v123[4];
  struct {
    _QWORD v124[4];
    _QWORD* v125;
  } v124_;
  int v126[4];
  struct {
    _QWORD v127[4];
    _QWORD* v128;
  } v127_;
  int v129[4];
  struct {
    _QWORD v130[4];
    _QWORD* v131;
  } v130_;
  int v132[4];
  struct {
    _QWORD v133[4];
    _QWORD* v134;
  } v133_;
  int v135[4];
  struct {
    _QWORD v136[4];
    _QWORD* v137;
  } v136_;
  int v138[4];
  struct {
    _QWORD v139[4];
    _QWORD* v140;
  } v139_;
  struct {
    __int64 v141;
    unsigned __int64 v142;
    _QWORD* v143;
    __int64 v144;
    int v145;
  } v141_;

  v54[0] = wld_Crc32(0, "Signal_Camera", 0xDu);
  v55_.v55[2] = a3;
  v55_.v55[0] = GameData_20de270;
  v55_.v55[1] = a1;
  v55_.v56 = v55_.v55;
  v57[0] = wld_Crc32(0, "Signal_Clock", 0xCu);
  v58_.v58[0] = GameData_20de300;
  v58_.v58[1] = a1;
  v58_.v59 = v58_.v58;
  v60[0] = wld_Crc32(0, "Signal_Env", 0xAu);
  v61_.v61[0] = GameData_20de380;
  v61_.v61[1] = a1;
  v61_.v62 = v61_.v61;
  v63[0] = wld_Crc32(0, "Signal_SlowBegin", 0x10u);
  v64_.v64[0] = GameData_20de400;
  v64_.v64[1] = a1;
  v64_.v65 = v64_.v64;
  v66[0] = wld_Crc32(0, "Signal_SlowEnd", 0xEu);
  v67_.v67[0] = GameData_20de480;
  v67_.v67[1] = a1;
  v67_.v68 = v67_.v67;
  v69[0] = wld_Crc32(0, "Signal_FadeIn", 0xDu);
  v70_.v70[1] = a1;
  v70_.v70[0] = GameData_20de500;
  v70_.v71 = v70_.v70;
  v72[0] = wld_Crc32(0, "Signal_FadeOut", 0xEu);
  v73_.v73[1] = a1;
  v73_.v73[0] = GameData_20de580;
  v73_.v74 = v73_.v73;
  v75[0] = wld_Crc32(0, "Signal_GlobalWind", 0x11u);
  v76_.v76[1] = a1;
  v76_.v76[0] = GameData_20de600;
  v76_.v77 = v76_.v76;
  v78[0] = wld_Crc32(0, "Signal_PlayCharaAnim", 0x14u);
  v79_.v79[1] = a1;
  v79_.v79[2] = a3;
  v79_.v79[0] = GameData_20de680;
  v79_.v80 = v79_.v79;
  v81[0] = wld_Crc32(0, "Signal_ShowChara", 0x10u);
  v82_.v82[1] = a1;
  v82_.v82[0] = GameData_20de700;
  v82_.v83 = v82_.v82;
  v84[0] = wld_Crc32(0, "Signal_CharaCloth", 0x11u);
  v85_.v85[1] = a1;
  v85_.v85[0] = GameData_20de780;
  v85_.v86 = v85_.v85;
  v87[0] = wld_Crc32(0, "Signal_CharaWind", 0x10u);
  v88_.v88[1] = a1;
  v88_.v88[0] = GameData_20de800;
  v88_.v89 = v88_.v88;
  v90[0] = wld_Crc32(0, "Signal_Dissolve", 0xFu);
  v91_.v91[1] = a1;
  v91_.v91[0] = GameData_20de880;
  v91_.v92 = v91_.v91;
  v93[0] = wld_Crc32(0, "Signal_PlayPropAnim", 0x13u);
  v94_.v94[1] = a1;
  v94_.v94[2] = a3;
  v94_.v94[0] = GameData_20de900;
  v94_.v95 = v94_.v94;
  v96[0] = wld_Crc32(0, "Signal_ShowProp", 0xFu);
  v97_.v97[1] = a1;
  v97_.v97[0] = GameData_20de980;
  v97_.v98 = v97_.v97;
  v99[0] = wld_Crc32(0, "Signal_DOF2", 0xBu);
  v100_.v100[1] = a1;
  v100_.v100[0] = GameData_20dea00;
  v100_.v101 = v100_.v100;
  v102[0] = wld_Crc32(0, "Signal_RadialBlur", 0x11u);
  v103_.v103[1] = a1;
  v103_.v103[0] = GameData_20dea80;
  v103_.v104 = v103_.v103;
  v105[0] = wld_Crc32(0, "Signal_ColorGrading", 0x13u);
  v106_.v106[1] = a1;
  v106_.v106[0] = GameData_20deb00;
  v106_.v107 = v106_.v106;
  v108[0] = wld_Crc32(0, "Signal_CustomGrad", 0x11u);
  v109_.v109[1] = a1;
  v109_.v109[0] = GameData_20deb80;
  v109_.v110 = v109_.v109;
  v111[0] = wld_Crc32(0, "Signal_Fog", 0xAu);
  v112_.v112[1] = a1;
  v112_.v112[0] = GameData_20dec00;
  v112_.v113 = v112_.v112;
  v114[0] = wld_Crc32(0, "Signal_Exposure", 0xFu);
  v115_.v115[1] = a1;
  v115_.v115[0] = GameData_20dec80;
  v115_.v116 = v115_.v115;
  v117[0] = wld_Crc32(0, "Signal_Vignette", 0xFu);
  v118_.v118[1] = a1;
  v118_.v118[0] = GameData_20ded00;
  v118_.v119 = v118_.v118;
  v120[0] = wld_Crc32(0, "Signal_Bloom", 0xCu);
  v121_.v121[1] = a1;
  v121_.v121[0] = GameData_20ded80;
  v121_.v122 = v121_.v121;
  v123[0] = wld_Crc32(0, "Signal_NegaPosi", 0xFu);
  v124_.v124[1] = a1;
  v124_.v124[0] = GameData_20dee00;
  v124_.v125 = v124_.v124;
  v126[0] = wld_Crc32(0, "Signal_MotionBlur", 0x11u);
  v127_.v127[1] = a1;
  v127_.v127[0] = GameData_20dee80;
  v127_.v128 = v127_.v127;
  v129[0] = wld_Crc32(0, "Signal_OtherSetting", 0x13u);
  v130_.v130[1] = a1;
  v130_.v130[0] = GameData_20def00;
  v130_.v131 = v130_.v130;
  v132[0] = wld_Crc32(0, "Signal_LightMove", 0x10u);
  v133_.v133[1] = a1;
  v133_.v133[0] = GameData_20def80;
  v133_.v134 = v133_.v133;
  v135[0] = wld_Crc32(0, "Signal_LightRange", 0x11u);
  v136_.v136[1] = a1;
  v136_.v136[0] = GameData_20df000;
  v136_.v137 = v136_.v136;
  v138[0] = wld_Crc32(0, "Signal_LightShow", 0x10u);
  v139_.v139[1] = a1;
  v141_.v141 = 0;
  v141_.v142 = 0;
  v141_.v143 = nullptr;
  v141_.v144 = 0;
  v139_.v139[0] = GameData_20df080;
  v139_.v140 = v139_.v139;
  v141_.v145 = 1065353216;
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v54, v54);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v57, v57);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v60, v60);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v63, v63);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v66, v66);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v69, v69);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v72, v72);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v75, v75);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v78, v78);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v81, v81);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v84, v84);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v87, v87);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v90, v90);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v93, v93);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v96, v96);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v99, v99);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v102, v102);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v105, v105);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v108, v108);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v111, v111);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v114, v114);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v117, v117);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v120, v120);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v123, v123);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v126, v126);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v129, v129);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v132, v132);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v135, v135);
  GameRoutine_18190a0((__int64)&v141_.v141, (unsigned int*)v138, v138);
  if (v139_.v140 == v139_.v139) {
    v5 = 32;
  }
  else {
    if (v139_.v140 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v139_.v140 + v5))((__int64)v139_.v140);
LABEL_6:
  if (v136_.v137 == v136_.v136) {
    v6 = 32;
  }
  else {
    if (v136_.v137 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v136_.v137 + v6))((__int64)v136_.v137);
LABEL_11:
  if (v133_.v134 == v133_.v133) {
    v7 = 32;
  }
  else {
    if (v133_.v134 == nullptr) {
      goto LABEL_16;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v133_.v134 + v7))((__int64)v133_.v134);
LABEL_16:
  if (v130_.v131 == v130_.v130) {
    v8 = 32;
  }
  else {
    if (v130_.v131 == nullptr) {
      goto LABEL_21;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v130_.v131 + v8))((__int64)v130_.v131);
LABEL_21:
  if (v127_.v128 == v127_.v127) {
    v9 = 32;
  }
  else {
    if (v127_.v128 == nullptr) {
      goto LABEL_26;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v127_.v128 + v9))((__int64)v127_.v128);
LABEL_26:
  if (v124_.v125 == v124_.v124) {
    v10 = 32;
  }
  else {
    if (v124_.v125 == nullptr) {
      goto LABEL_31;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v124_.v125 + v10))((__int64)v124_.v125);
LABEL_31:
  if (v121_.v122 == v121_.v121) {
    v11 = 32;
  }
  else {
    if (v121_.v122 == nullptr) {
      goto LABEL_36;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v121_.v122 + v11))((__int64)v121_.v122);
LABEL_36:
  if (v118_.v119 == v118_.v118) {
    v12 = 32;
  }
  else {
    if (v118_.v119 == nullptr) {
      goto LABEL_41;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v118_.v119 + v12))((__int64)v118_.v119);
LABEL_41:
  if (v115_.v116 == v115_.v115) {
    v13 = 32;
  }
  else {
    if (v115_.v116 == nullptr) {
      goto LABEL_46;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v115_.v116 + v13))((__int64)v115_.v116);
LABEL_46:
  if (v112_.v113 == v112_.v112) {
    v14 = 32;
  }
  else {
    if (v112_.v113 == nullptr) {
      goto LABEL_51;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v112_.v113 + v14))((__int64)v112_.v113);
LABEL_51:
  if (v109_.v110 == v109_.v109) {
    v15 = 32;
  }
  else {
    if (v109_.v110 == nullptr) {
      goto LABEL_56;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v109_.v110 + v15))((__int64)v109_.v110);
LABEL_56:
  if (v106_.v107 == v106_.v106) {
    v16 = 32;
  }
  else {
    if (v106_.v107 == nullptr) {
      goto LABEL_61;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))(*v106_.v107 + v16))((__int64)v106_.v107);
LABEL_61:
  if (v103_.v104 == v103_.v103) {
    v17 = 32;
  }
  else {
    if (v103_.v104 == nullptr) {
      goto LABEL_66;
    }
    v17 = 40;
  }
  (*(void (**)(__int64))(*v103_.v104 + v17))((__int64)v103_.v104);
LABEL_66:
  if (v100_.v101 == v100_.v100) {
    v18 = 32;
  }
  else {
    if (v100_.v101 == nullptr) {
      goto LABEL_71;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*v100_.v101 + v18))((__int64)v100_.v101);
LABEL_71:
  if (v97_.v98 == v97_.v97) {
    v19 = 32;
  }
  else {
    if (v97_.v98 == nullptr) {
      goto LABEL_76;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))(*v97_.v98 + v19))((__int64)v97_.v98);
LABEL_76:
  if (v94_.v95 == v94_.v94) {
    v20 = 32;
  }
  else {
    if (v94_.v95 == nullptr) {
      goto LABEL_81;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))(*v94_.v95 + v20))((__int64)v94_.v95);
LABEL_81:
  if (v91_.v92 == v91_.v91) {
    v21 = 32;
  }
  else {
    if (v91_.v92 == nullptr) {
      goto LABEL_86;
    }
    v21 = 40;
  }
  (*(void (**)(__int64))(*v91_.v92 + v21))((__int64)v91_.v92);
LABEL_86:
  if (v88_.v89 == v88_.v88) {
    v22 = 32;
  }
  else {
    if (v88_.v89 == nullptr) {
      goto LABEL_91;
    }
    v22 = 40;
  }
  (*(void (**)(__int64))(*v88_.v89 + v22))((__int64)v88_.v89);
LABEL_91:
  if (v85_.v86 == v85_.v85) {
    v23 = 32;
  }
  else {
    if (v85_.v86 == nullptr) {
      goto LABEL_96;
    }
    v23 = 40;
  }
  (*(void (**)(__int64))(*v85_.v86 + v23))((__int64)v85_.v86);
LABEL_96:
  if (v82_.v83 == v82_.v82) {
    v24 = 32;
  }
  else {
    if (v82_.v83 == nullptr) {
      goto LABEL_101;
    }
    v24 = 40;
  }
  (*(void (**)(__int64))(*v82_.v83 + v24))((__int64)v82_.v83);
LABEL_101:
  if (v79_.v80 == v79_.v79) {
    v25 = 32;
  }
  else {
    if (v79_.v80 == nullptr) {
      goto LABEL_106;
    }
    v25 = 40;
  }
  (*(void (**)(__int64))(*v79_.v80 + v25))((__int64)v79_.v80);
LABEL_106:
  if (v76_.v77 == v76_.v76) {
    v26 = 32;
  }
  else {
    if (v76_.v77 == nullptr) {
      goto LABEL_111;
    }
    v26 = 40;
  }
  (*(void (**)(__int64))(*v76_.v77 + v26))((__int64)v76_.v77);
LABEL_111:
  if (v73_.v74 == v73_.v73) {
    v27 = 32;
  }
  else {
    if (v73_.v74 == nullptr) {
      goto LABEL_116;
    }
    v27 = 40;
  }
  (*(void (**)(__int64))(*v73_.v74 + v27))((__int64)v73_.v74);
LABEL_116:
  if (v70_.v71 == v70_.v70) {
    v28 = 32;
  }
  else {
    if (v70_.v71 == nullptr) {
      goto LABEL_121;
    }
    v28 = 40;
  }
  (*(void (**)(__int64))(*v70_.v71 + v28))((__int64)v70_.v71);
LABEL_121:
  if (v67_.v68 == v67_.v67) {
    v29 = 32;
  }
  else {
    if (v67_.v68 == nullptr) {
      goto LABEL_126;
    }
    v29 = 40;
  }
  (*(void (**)(__int64))(*v67_.v68 + v29))((__int64)v67_.v68);
LABEL_126:
  if (v64_.v65 == v64_.v64) {
    v30 = 32;
  }
  else {
    if (v64_.v65 == nullptr) {
      goto LABEL_131;
    }
    v30 = 40;
  }
  (*(void (**)(__int64))(*v64_.v65 + v30))((__int64)v64_.v65);
LABEL_131:
  if (v61_.v62 == v61_.v61) {
    v31 = 32;
  }
  else {
    if (v61_.v62 == nullptr) {
      goto LABEL_136;
    }
    v31 = 40;
  }
  (*(void (**)(__int64))(*v61_.v62 + v31))((__int64)v61_.v62);
LABEL_136:
  if (v58_.v59 == v58_.v58) {
    v32 = 32;
  }
  else {
    if (v58_.v59 == nullptr) {
      goto LABEL_141;
    }
    v32 = 40;
  }
  (*(void (**)(__int64))(*v58_.v59 + v32))((__int64)v58_.v59);
LABEL_141:
  if (v55_.v56 == v55_.v55) {
    v33 = 32;
    goto LABEL_145;
  }
  if (v55_.v56 != nullptr) {
    v33 = 40;
  LABEL_145:
    (*(void (**)(__int64))(*v55_.v56 + v33))((__int64)v55_.v56);
  }
  v35 = *(_QWORD**)(a2 + 80);
  v34 = *(_QWORD**)(a2 + 88);
  while (v35 != v34) {
    v36 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v35 + 32LL))(*v35);
    if (v141_.v142 != 0 && v141_.v144 != 0) {
      v38 = v141_.v142 - 1;
      if ((v141_.v142 & (v141_.v142 - 1)) != 0) {
        v39 = v36;
        if (v141_.v142 <= v36) {
          v39 = v36 % (unsigned int)v141_.v142;
        }
      }
      else {
        v39 = ((_DWORD)v141_.v142 - 1) & v36;
      }
      v40 = *(__int64***)(v141_.v141 + 8 * v39);
      if (v40 != nullptr) {
        v41 = *v40;
        if (v41 != nullptr) {
          if ((v141_.v142 & v38) == 0) {
            while (1) {
              v43 = v41[1];
              if (v43 == v36) {
                if (*((_DWORD*)v41 + 4) == v36) {
                  goto LABEL_173;
                }
              }
              else if ((v43 & v38) != v39) {
                goto LABEL_147;
              }
              v41 = (__int64*)*v41;
              if (v41 == nullptr) {
                goto LABEL_147;
              }
            }
          }
          do {
            v42 = v41[1];
            if (v42 == v36) {
              if (*((_DWORD*)v41 + 4) == v36) {
              LABEL_173:
                v44 = v41[8];
                if (v44 == 0) {
                  GameRoutine_60a310();
                }
                (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v44 + 48LL))(v44,
                                                                       v35);
                break;
              }
            }
            else {
              if (v42 >= v141_.v142) {
                v42 %= v141_.v142;
              }
              if (v42 != v39) {
                break;
              }
            }
            v41 = (__int64*)*v41;
          } while (v41 != nullptr);
        }
      }
    }
  LABEL_147:
    v35 += 2;
  }
  v45 = v141_.v143;
  v46 = fw_memory_g_heap_manager_ptr;
  if (v141_.v143 != nullptr) {
    do {
      v49 = (_QWORD*)*v45;
      v50 = (_QWORD*)v45[8];
      if (v50 == v45 + 4) {
        v47 = 32;
      }
      else {
        if (v50 == nullptr) {
          goto LABEL_179;
        }
        v47 = 40;
      }
      (*(void (**)(__int64))(*v50 + v47))((__int64)v50);
    LABEL_179:
      if (*(_QWORD*)(*(_QWORD*)v46 + 200LL) != 0) {
        v48 = 128;
      }
      else {
        v48 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v46 + v48, (__int64)v45);
      v45 = v49;
    } while (v49 != nullptr);
  }
  v51 = v141_.v141;
  v141_.v141 = 0;
  if (v51 != 0) {
    v52 = 128;
    if (*(_QWORD*)(*(_QWORD*)v46 + 200LL) == 0) {
      v52 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v46 + v52, v51);
  }
}

__int64 game_cutscene_ActorList_SetupSorted_lambda0_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  int v6;
  __int64 v7;
  __int64 result;
  _QWORD v9[2];

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = *(_QWORD**)(v2 + 24);
  v6 = *(unsigned __int8*)(v3 + 32);
  if (*a2 != 0 &&
      (v7 = a2[1], (v4 = __dynamic_cast(v4, GameData_212d4f0[0],
                                        GameData_2131e98[0], 0)) != 0) &&
      v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    v9[0] = v4;
    v9[1] = v7;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    FieldActor_1802740(v5, v9, v6 == 2);
    result = std___1___shared_weak_count___release_weak(v7);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      return std___1___shared_weak_count___release_weak(v7);
    }
  }
  else {
    v9[0] = v4;
    v9[1] = 0;
    return FieldActor_1802740(v5, v9, v6 == 2);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda1_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64* v10;
  _QWORD* v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  float v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 result;
  unsigned __int64 v30;
  float v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 == 0) {
    v5 = 0;
  LABEL_7:
    v6 = *(_QWORD**)(v2 + 24);
    v8 = v6 + 11;
    v7 = (__int64*)v6[11];
    v10 = v6 + 12;
    v9 = v6[12];
    if ((unsigned __int64)v7 < v9) {
      v4 = 0;
      *v7 = v5;
      v7[1] = 0;
      v11 = v7 + 2;
      goto LABEL_24;
    }
    v12 = 1;
    v4 = 0;
    goto LABEL_11;
  }
  v4 = a2[1];
  v3 = __dynamic_cast(v3, GameData_212d4f0[0], GameData_2131ea0[0], 0);
  v5 = v3;
  if (v3 == 0 || v4 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD**)(v2 + 24);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v8 = v6 + 11;
  v7 = (__int64*)v6[11];
  v10 = v6 + 12;
  v9 = v6[12];
  if ((unsigned __int64)v7 < v9) {
    *v7 = v3;
    v7[1] = v4;
    v11 = v7 + 2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_24;
  }
  v12 = 0;
LABEL_11:
  v13 = v6[10];
  v14 = (__int64)v7 - v13;
  v15 = ((__int64)v7 - v13) >> 4;
  v16 = v15 + 1;
  if ((unsigned __int64)(v15 + 1) >> 60 != 0) {
    GameRoutine_1812b70();
  }
  v17 = v9 - v13;
  if (v17 >> 3 > v16) {
    v16 = v17 >> 3;
  }
  if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF0LL) {
    v18 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v18 = v16;
  }
  if (v18 >> 60 != 0) {
    GameRoutine_60a210(v3);
  }
  v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16 * v18, 16, 0);
  v20 = (__int64*)(v19 + v14);
  v30 = v19 + 16 * v18;
  *v20 = v5;
  v20[1] = v4;
  if ((v12 & 1) == 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v13 = v6[10];
    v14 = *v8 - v13;
    v15 = v14 >> 4;
  }
  v21 = &v20[-2 * v15];
  v11 = v20 + 2;
  memcpy(v21, v13, v14);
  v6[10] = v21;
  *v8 = v11;
  *v10 = v30;
  if (v13 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  v13);
  }
LABEL_24:
  *v8 = v11;
  v23 = std___1___shared_weak_count_lock(v4);
  v24 = *(float*)(v5 + 8);
  v26 = v6[13];
  v25 = v6[14];
  v27 = v6 + 13;
  v28 = v23;
  v31 = v24;
  if (v26 == v25 || *(float*)(v25 - 4) <= v24) {
    AnimCtrlModule_a78450(v27, &v31);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  result = std___1___shared_weak_count___release_weak(v4);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda2_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64* v10;
  _QWORD* v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  float v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 result;
  unsigned __int64 v30;
  float v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 == 0) {
    v5 = 0;
  LABEL_7:
    v6 = *(_QWORD**)(v2 + 24);
    v8 = v6 + 18;
    v7 = (__int64*)v6[18];
    v10 = v6 + 19;
    v9 = v6[19];
    if ((unsigned __int64)v7 < v9) {
      v4 = 0;
      *v7 = v5;
      v7[1] = 0;
      v11 = v7 + 2;
      goto LABEL_24;
    }
    v12 = 1;
    v4 = 0;
    goto LABEL_11;
  }
  v4 = a2[1];
  v3 = __dynamic_cast(v3, GameData_212d4f0[0], GameData_2131ea8[0], 0);
  v5 = v3;
  if (v3 == 0 || v4 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD**)(v2 + 24);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v8 = v6 + 18;
  v7 = (__int64*)v6[18];
  v10 = v6 + 19;
  v9 = v6[19];
  if ((unsigned __int64)v7 < v9) {
    *v7 = v3;
    v7[1] = v4;
    v11 = v7 + 2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_24;
  }
  v12 = 0;
LABEL_11:
  v13 = v6[17];
  v14 = (__int64)v7 - v13;
  v15 = ((__int64)v7 - v13) >> 4;
  v16 = v15 + 1;
  if ((unsigned __int64)(v15 + 1) >> 60 != 0) {
    GameRoutine_1812b90();
  }
  v17 = v9 - v13;
  if (v17 >> 3 > v16) {
    v16 = v17 >> 3;
  }
  if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF0LL) {
    v18 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v18 = v16;
  }
  if (v18 >> 60 != 0) {
    GameRoutine_60a210(v3);
  }
  v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16 * v18, 16, 0);
  v20 = (__int64*)(v19 + v14);
  v30 = v19 + 16 * v18;
  *v20 = v5;
  v20[1] = v4;
  if ((v12 & 1) == 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v13 = v6[17];
    v14 = *v8 - v13;
    v15 = v14 >> 4;
  }
  v21 = &v20[-2 * v15];
  v11 = v20 + 2;
  memcpy(v21, v13, v14);
  v6[17] = v21;
  *v8 = v11;
  *v10 = v30;
  if (v13 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  v13);
  }
LABEL_24:
  *v8 = v11;
  v23 = std___1___shared_weak_count_lock(v4);
  v24 = *(float*)(v5 + 8);
  v26 = v6[20];
  v25 = v6[21];
  v27 = v6 + 20;
  v28 = v23;
  v31 = v24;
  if (v26 == v25 || *(float*)(v25 - 4) <= v24) {
    AnimCtrlModule_a78450(v27, &v31);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  result = std___1___shared_weak_count___release_weak(v4);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda3_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _QWORD v8[2];

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 != 0 &&
      (v4 = a2[1], (v3 = __dynamic_cast(v3, GameData_212d4f0[0],
                                        GameData_2131eb0[0], 0)) != 0) &&
      v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v8[0] = v3;
    v8[1] = v4;
    v5 = *(_QWORD*)(v2 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    FieldActor_1802b20(v5, v8);
    result = std___1___shared_weak_count___release_weak(v4);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      return std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    v7 = *(_QWORD*)(v2 + 24);
    v8[0] = v3;
    v8[1] = 0;
    return FieldActor_1802b20(v7, v8);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda4_Invoke(__int64 a1,
                                                           _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  int v13;
  float v14;

  v2 = *(_QWORD*)(a1 + 8);
  if (*a2 == 0) {
    v4 = 0;
  LABEL_6:
    v5 = *(_QWORD*)(v2 + 24);
    v3 = 0;
    goto LABEL_7;
  }
  v3 = a2[1];
  v4 = __dynamic_cast(*a2, GameData_212d4f0[0], GameData_2131eb8[0], 0);
  if (v4 == 0 || v3 == 0) {
    goto LABEL_6;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                            memory_order_relaxed);
  v5 = *(_QWORD*)(v2 + 24);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
LABEL_7:
  v13 = 1065353216;
  CharacterTrailVertex_d35160(v5 + 184, &v13);
  v6 = std___1___shared_weak_count_lock(v3);
  v7 = *(float*)(v4 + 8);
  v9 = *(_QWORD*)(v5 + 208);
  v8 = *(_QWORD*)(v5 + 216);
  v10 = v5 + 208;
  v11 = v6;
  v14 = v7;
  if (v9 == v8 || *(float*)(v8 - 4) <= v7) {
    AnimCtrlModule_a78450(v10, &v14);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  result = std___1___shared_weak_count___release_weak(v3);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda5_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 result;
  _QWORD* v7;
  _QWORD v8[2];

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 != 0 &&
      (v4 = a2[1], (v3 = __dynamic_cast(v3, GameData_212d4f0[0],
                                        GameData_2131e88[0], 0)) != 0) &&
      v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v8[0] = v3;
    v8[1] = v4;
    v5 = *(_QWORD**)(v2 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    FieldActor_1802c10(v5, v8);
    result = std___1___shared_weak_count___release_weak(v4);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      return std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    v7 = *(_QWORD**)(v2 + 24);
    v8[0] = v3;
    v8[1] = 0;
    return FieldActor_1802c10(v7, v8);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda6_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 result;
  _QWORD* v7;
  _QWORD v8[2];

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 != 0 &&
      (v4 = a2[1], (v3 = __dynamic_cast(v3, GameData_212d4f0[0],
                                        GameData_2131e90[0], 0)) != 0) &&
      v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v8[0] = v3;
    v8[1] = v4;
    v5 = *(_QWORD**)(v2 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    FieldActor_1802e00(v5, v8);
    result = std___1___shared_weak_count___release_weak(v4);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      return std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    v7 = *(_QWORD**)(v2 + 24);
    v8[0] = v3;
    v8[1] = 0;
    return FieldActor_1802e00(v7, v8);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda7_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64* v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  float v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 result;
  unsigned __int64* v30;
  float v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 == 0) {
    v5 = 0;
  LABEL_7:
    v6 = *(_QWORD**)(v2 + 24);
    v7 = (__int64*)v6[36];
    v8 = v6[37];
    v9 = v6 + 36;
    if ((unsigned __int64)v7 < v8) {
      v4 = 0;
      *v7 = v5;
      v7[1] = 0;
      v10 = v7 + 2;
      goto LABEL_24;
    }
    v11 = v6 + 37;
    v12 = 1;
    v4 = 0;
    goto LABEL_11;
  }
  v4 = a2[1];
  v3 = __dynamic_cast(v3, GameData_212d4f0[0], GameData_2131ec0[0], 0);
  v5 = v3;
  if (v3 == 0 || v4 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD**)(v2 + 24);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = (__int64*)v6[36];
  v8 = v6[37];
  v9 = v6 + 36;
  if ((unsigned __int64)v7 < v8) {
    *v7 = v3;
    v7[1] = v4;
    v10 = v7 + 2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_24;
  }
  v12 = 0;
  v11 = v6 + 37;
LABEL_11:
  v13 = v6[35];
  v14 = (__int64)v7 - v13;
  v15 = ((__int64)v7 - v13) >> 4;
  v16 = v15 + 1;
  if ((unsigned __int64)(v15 + 1) >> 60 != 0) {
    GameRoutine_1812bd0();
  }
  v17 = v8 - v13;
  v30 = v11;
  if (v17 >> 3 > v16) {
    v16 = v17 >> 3;
  }
  if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF0LL) {
    v18 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v18 = v16;
  }
  if (v18 >> 60 != 0) {
    GameRoutine_60a210(v3);
  }
  v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16 * v18, 16, 0);
  v20 = (__int64*)(v19 + v14);
  v21 = v19 + 16 * v18;
  *v20 = v5;
  v20[1] = v4;
  if ((v12 & 1) == 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v13 = v6[35];
    v14 = *v9 - v13;
    v15 = v14 >> 4;
  }
  v22 = &v20[-2 * v15];
  v10 = v20 + 2;
  memcpy(v22, v13, v14);
  v6[35] = v22;
  *v9 = v10;
  *v30 = v21;
  if (v13 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  v13);
  }
LABEL_24:
  *v9 = v10;
  v24 = std___1___shared_weak_count_lock(v4);
  v25 = *(float*)(v5 + 8);
  v27 = v6[38];
  v26 = v6[39];
  v28 = v24;
  v31 = v25;
  if (v27 == v26 || *(float*)(v26 - 4) <= v25) {
    AnimCtrlModule_a78450(v6 + 38, &v31);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  result = std___1___shared_weak_count___release_weak(v4);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda8_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD v11[2];

  result = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  if (*a2 == 0) {
    v5 = 0;
  LABEL_7:
    v6 = *(unsigned int*)(result + 24);
    if ((v6 & 0x80000000) != 0) {
      goto LABEL_19;
    }
    goto LABEL_8;
  }
  v5 = a2[1];
  result = __dynamic_cast(result, GameData_212d4f0[0], GameData_2131ed0[0], 0);
  if (result == 0) {
    v5 = 0;
    v6 = 0;
    goto LABEL_8;
  }
  if (v5 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(unsigned int*)(result + 24);
  if ((v6 & 0x80000000) != 0) {
    goto LABEL_19;
  }
LABEL_8:
  v7 = *(_QWORD*)(v4 + 56);
  if (v6 >= (*(_QWORD*)(v4 + 64) - v7) >> 4) {
    goto LABEL_19;
  }
  v8 = v7 + 16 * v6;
  v9 = *(_QWORD**)v8;
  v10 = *(_QWORD*)(v8 + 8);
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v9 != nullptr) {
    v11[0] = result;
    v11[1] = v5;
    if (v5 == 0) {
      result = CharacterActor_1804600(v9, v11, *(_QWORD*)(a1 + 16));
      if (v10 == 0) {
        goto LABEL_19;
      }
      goto LABEL_15;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    CharacterActor_1804600(v9, v11, *(_QWORD*)(a1 + 16));
    result = std___1___shared_weak_count___release_weak(v5);
  }
  if (v10 != 0) {
  LABEL_15:
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      result = std___1___shared_weak_count___release_weak(v10);
    }
  }
LABEL_19:
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda9_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  float v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  float v32;

  v2 = *(_QWORD*)(a1 + 8);
  result = *a2;
  if (*a2 == 0) {
    v4 = 0;
    v5 = 0;
  LABEL_7:
    v6 = *(unsigned int*)(v5 + 24);
    if ((v6 & 0x80000000) != 0) {
      goto LABEL_40;
    }
    goto LABEL_8;
  }
  v4 = a2[1];
  result = __dynamic_cast(result, GameData_212d4f0[0], GameData_2131ee0[0], 0);
  v5 = result;
  if (result == 0) {
    v4 = 0;
    v6 = 0;
    goto LABEL_8;
  }
  if (v4 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(unsigned int*)(result + 24);
  if ((v6 & 0x80000000) != 0) {
    goto LABEL_40;
  }
LABEL_8:
  v7 = *(_QWORD*)(v2 + 56);
  if (v6 >= (*(_QWORD*)(v2 + 64) - v7) >> 4) {
    goto LABEL_40;
  }
  v8 = (_QWORD*)(v7 + 16 * v6);
  v10 = (_QWORD*)*v8;
  v9 = v8[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v10 == nullptr) {
    goto LABEL_37;
  }
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v11 = (__int64*)v10[10];
    v12 = v10[11];
    if ((unsigned __int64)v11 < v12) {
      *v11 = v5;
      v11[1] = v4;
      v13 = v11 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_31;
    }
  LABEL_18:
    v14 = v10[9];
    v15 = (__int64)v11 - v14;
    v16 = ((__int64)v11 - v14) >> 4;
    v17 = v16 + 1;
    if ((unsigned __int64)(v16 + 1) >> 60 != 0) {
      GameRoutine_1812c10();
    }
    v18 = v12 - v14;
    if (v18 >> 3 > v17) {
      v17 = v18 >> 3;
    }
    if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF0LL) {
      v19 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v19 = v17;
    }
    if (v19 >> 60 != 0) {
      GameRoutine_60a210(result);
    }
    v20 = fw_memory_g_heap_manager_ptr;
    v21 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         16 * v19, 16, 0);
    v22 = (__int64*)(v21 + v15);
    v23 = v21 + 16 * v19;
    *v22 = v5;
    v22[1] = v4;
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      v14 = v10[9];
      v15 = v10[10] - v14;
      v16 = v15 >> 4;
    }
    v24 = &v22[-2 * v16];
    v13 = v22 + 2;
    memcpy(v24, v14, v15);
    v10[9] = v24;
    v10[10] = v13;
    v10[11] = v23;
    if (v14 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v25, v14);
    }
    goto LABEL_31;
  }
  v11 = (__int64*)v10[10];
  v12 = v10[11];
  if ((unsigned __int64)v11 >= v12) {
    goto LABEL_18;
  }
  *v11 = v5;
  v11[1] = 0;
  v13 = v11 + 2;
LABEL_31:
  v10[10] = v13;
  v26 = std___1___shared_weak_count_lock(v4);
  v27 = *(float*)(v5 + 8);
  v29 = v10[12];
  v28 = v10[13];
  v30 = v10 + 12;
  v31 = v26;
  v32 = v27;
  if (v29 == v28 || *(float*)(v28 - 4) <= v27) {
    AnimCtrlModule_a78450(v30, &v32);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak(v31);
  }
  result = std___1___shared_weak_count___release_weak(v4);
LABEL_37:
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
  }
LABEL_40:
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda10_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  float v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  float v32;

  v2 = *(_QWORD*)(a1 + 8);
  result = *a2;
  if (*a2 == 0) {
    v4 = 0;
    v5 = 0;
  LABEL_7:
    v6 = *(unsigned int*)(v5 + 24);
    if ((v6 & 0x80000000) != 0) {
      goto LABEL_40;
    }
    goto LABEL_8;
  }
  v4 = a2[1];
  result = __dynamic_cast(result, GameData_212d4f0[0], GameData_2131ef0[0], 0);
  v5 = result;
  if (result == 0) {
    v4 = 0;
    v6 = 0;
    goto LABEL_8;
  }
  if (v4 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(unsigned int*)(result + 24);
  if ((v6 & 0x80000000) != 0) {
    goto LABEL_40;
  }
LABEL_8:
  v7 = *(_QWORD*)(v2 + 56);
  if (v6 >= (*(_QWORD*)(v2 + 64) - v7) >> 4) {
    goto LABEL_40;
  }
  v8 = (_QWORD*)(v7 + 16 * v6);
  v10 = (_QWORD*)*v8;
  v9 = v8[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v10 == nullptr) {
    goto LABEL_37;
  }
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v11 = (__int64*)v10[16];
    v12 = v10[17];
    if ((unsigned __int64)v11 < v12) {
      *v11 = v5;
      v11[1] = v4;
      v13 = v11 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_31;
    }
  LABEL_18:
    v14 = v10[15];
    v15 = (__int64)v11 - v14;
    v16 = ((__int64)v11 - v14) >> 4;
    v17 = v16 + 1;
    if ((unsigned __int64)(v16 + 1) >> 60 != 0) {
      GameRoutine_1812c30();
    }
    v18 = v12 - v14;
    if (v18 >> 3 > v17) {
      v17 = v18 >> 3;
    }
    if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF0LL) {
      v19 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v19 = v17;
    }
    if (v19 >> 60 != 0) {
      GameRoutine_60a210(result);
    }
    v20 = fw_memory_g_heap_manager_ptr;
    v21 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         16 * v19, 16, 0);
    v22 = (__int64*)(v21 + v15);
    v23 = v21 + 16 * v19;
    *v22 = v5;
    v22[1] = v4;
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      v14 = v10[15];
      v15 = v10[16] - v14;
      v16 = v15 >> 4;
    }
    v24 = &v22[-2 * v16];
    v13 = v22 + 2;
    memcpy(v24, v14, v15);
    v10[15] = v24;
    v10[16] = v13;
    v10[17] = v23;
    if (v14 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v25, v14);
    }
    goto LABEL_31;
  }
  v11 = (__int64*)v10[16];
  v12 = v10[17];
  if ((unsigned __int64)v11 >= v12) {
    goto LABEL_18;
  }
  *v11 = v5;
  v11[1] = 0;
  v13 = v11 + 2;
LABEL_31:
  v10[16] = v13;
  v26 = std___1___shared_weak_count_lock(v4);
  v27 = *(float*)(v5 + 8);
  v29 = v10[18];
  v28 = v10[19];
  v30 = v10 + 18;
  v31 = v26;
  v32 = v27;
  if (v29 == v28 || *(float*)(v28 - 4) <= v27) {
    AnimCtrlModule_a78450(v30, &v32);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak(v31);
  }
  result = std___1___shared_weak_count___release_weak(v4);
LABEL_37:
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
  }
LABEL_40:
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda11_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  float v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  float v32;

  v2 = *(_QWORD*)(a1 + 8);
  result = *a2;
  if (*a2 == 0) {
    v4 = 0;
    v5 = 0;
  LABEL_7:
    v6 = *(unsigned int*)(v5 + 24);
    if ((v6 & 0x80000000) != 0) {
      goto LABEL_40;
    }
    goto LABEL_8;
  }
  v4 = a2[1];
  result = __dynamic_cast(result, GameData_212d4f0[0], GameData_2131ef8[0], 0);
  v5 = result;
  if (result == 0) {
    v4 = 0;
    v6 = 0;
    goto LABEL_8;
  }
  if (v4 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(unsigned int*)(result + 24);
  if ((v6 & 0x80000000) != 0) {
    goto LABEL_40;
  }
LABEL_8:
  v7 = *(_QWORD*)(v2 + 56);
  if (v6 >= (*(_QWORD*)(v2 + 64) - v7) >> 4) {
    goto LABEL_40;
  }
  v8 = (_QWORD*)(v7 + 16 * v6);
  v10 = (_QWORD*)*v8;
  v9 = v8[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v10 == nullptr) {
    goto LABEL_37;
  }
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v11 = (__int64*)v10[22];
    v12 = v10[23];
    if ((unsigned __int64)v11 < v12) {
      *v11 = v5;
      v11[1] = v4;
      v13 = v11 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_31;
    }
  LABEL_18:
    v14 = v10[21];
    v15 = (__int64)v11 - v14;
    v16 = ((__int64)v11 - v14) >> 4;
    v17 = v16 + 1;
    if ((unsigned __int64)(v16 + 1) >> 60 != 0) {
      GameRoutine_1812c50();
    }
    v18 = v12 - v14;
    if (v18 >> 3 > v17) {
      v17 = v18 >> 3;
    }
    if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF0LL) {
      v19 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v19 = v17;
    }
    if (v19 >> 60 != 0) {
      GameRoutine_60a210(result);
    }
    v20 = fw_memory_g_heap_manager_ptr;
    v21 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         16 * v19, 16, 0);
    v22 = (__int64*)(v21 + v15);
    v23 = v21 + 16 * v19;
    *v22 = v5;
    v22[1] = v4;
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      v14 = v10[21];
      v15 = v10[22] - v14;
      v16 = v15 >> 4;
    }
    v24 = &v22[-2 * v16];
    v13 = v22 + 2;
    memcpy(v24, v14, v15);
    v10[21] = v24;
    v10[22] = v13;
    v10[23] = v23;
    if (v14 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v25, v14);
    }
    goto LABEL_31;
  }
  v11 = (__int64*)v10[22];
  v12 = v10[23];
  if ((unsigned __int64)v11 >= v12) {
    goto LABEL_18;
  }
  *v11 = v5;
  v11[1] = 0;
  v13 = v11 + 2;
LABEL_31:
  v10[22] = v13;
  v26 = std___1___shared_weak_count_lock(v4);
  v27 = *(float*)(v5 + 8);
  v29 = v10[24];
  v28 = v10[25];
  v30 = v10 + 24;
  v31 = v26;
  v32 = v27;
  if (v29 == v28 || *(float*)(v28 - 4) <= v27) {
    AnimCtrlModule_a78450(v30, &v32);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak(v31);
  }
  result = std___1___shared_weak_count___release_weak(v4);
LABEL_37:
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
  }
LABEL_40:
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda12_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  float v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  float v32;

  v2 = *(_QWORD*)(a1 + 8);
  result = *a2;
  if (*a2 == 0) {
    v4 = 0;
    v5 = 0;
  LABEL_7:
    v6 = *(unsigned int*)(v5 + 24);
    if ((v6 & 0x80000000) != 0) {
      goto LABEL_40;
    }
    goto LABEL_8;
  }
  v4 = a2[1];
  result = __dynamic_cast(result, GameData_212d4f0[0], GameData_2131f00[0], 0);
  v5 = result;
  if (result == 0) {
    v4 = 0;
    v6 = 0;
    goto LABEL_8;
  }
  if (v4 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(unsigned int*)(result + 24);
  if ((v6 & 0x80000000) != 0) {
    goto LABEL_40;
  }
LABEL_8:
  v7 = *(_QWORD*)(v2 + 56);
  if (v6 >= (*(_QWORD*)(v2 + 64) - v7) >> 4) {
    goto LABEL_40;
  }
  v8 = (_QWORD*)(v7 + 16 * v6);
  v10 = (_QWORD*)*v8;
  v9 = v8[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v10 == nullptr) {
    goto LABEL_37;
  }
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v11 = (__int64*)v10[28];
    v12 = v10[29];
    if ((unsigned __int64)v11 < v12) {
      *v11 = v5;
      v11[1] = v4;
      v13 = v11 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_31;
    }
  LABEL_18:
    v14 = v10[27];
    v15 = (__int64)v11 - v14;
    v16 = ((__int64)v11 - v14) >> 4;
    v17 = v16 + 1;
    if ((unsigned __int64)(v16 + 1) >> 60 != 0) {
      GameRoutine_1812c70();
    }
    v18 = v12 - v14;
    if (v18 >> 3 > v17) {
      v17 = v18 >> 3;
    }
    if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF0LL) {
      v19 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v19 = v17;
    }
    if (v19 >> 60 != 0) {
      GameRoutine_60a210(result);
    }
    v20 = fw_memory_g_heap_manager_ptr;
    v21 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         16 * v19, 16, 0);
    v22 = (__int64*)(v21 + v15);
    v23 = v21 + 16 * v19;
    *v22 = v5;
    v22[1] = v4;
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      v14 = v10[27];
      v15 = v10[28] - v14;
      v16 = v15 >> 4;
    }
    v24 = &v22[-2 * v16];
    v13 = v22 + 2;
    memcpy(v24, v14, v15);
    v10[27] = v24;
    v10[28] = v13;
    v10[29] = v23;
    if (v14 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v25, v14);
    }
    goto LABEL_31;
  }
  v11 = (__int64*)v10[28];
  v12 = v10[29];
  if ((unsigned __int64)v11 >= v12) {
    goto LABEL_18;
  }
  *v11 = v5;
  v11[1] = 0;
  v13 = v11 + 2;
LABEL_31:
  v10[28] = v13;
  v26 = std___1___shared_weak_count_lock(v4);
  v27 = *(float*)(v5 + 8);
  v29 = v10[30];
  v28 = v10[31];
  v30 = v10 + 30;
  v31 = v26;
  v32 = v27;
  if (v29 == v28 || *(float*)(v28 - 4) <= v27) {
    AnimCtrlModule_a78450(v30, &v32);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak(v31);
  }
  result = std___1___shared_weak_count___release_weak(v4);
LABEL_37:
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
  }
LABEL_40:
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda13_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  char v12;
  _QWORD v13[2];

  result = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  if (*a2 == 0) {
    v5 = 0;
  LABEL_7:
    v6 = *(unsigned int*)(result + 24);
    if ((v6 & 0x80000000) != 0) {
      goto LABEL_19;
    }
    goto LABEL_8;
  }
  v5 = a2[1];
  result = __dynamic_cast(result, GameData_212d4f0[0], GameData_2131ed8[0], 0);
  if (result == 0) {
    v5 = 0;
    v6 = 0;
    goto LABEL_8;
  }
  if (v5 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(unsigned int*)(result + 24);
  if ((v6 & 0x80000000) != 0) {
    goto LABEL_19;
  }
LABEL_8:
  v7 = *(_QWORD*)(v4 + 80);
  if (v6 >= (*(_QWORD*)(v4 + 88) - v7) >> 4) {
    goto LABEL_19;
  }
  v8 = v7 + 16 * v6;
  v9 = *(_QWORD**)v8;
  v10 = *(_QWORD*)(v8 + 8);
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v9 != nullptr) {
    v11 = *(_QWORD*)(a1 + 16);
    v13[0] = result;
    v13[1] = v5;
    v12 = *(_BYTE*)(v11 + 32) == 2;
    if (v5 == 0) {
      result = PropActor_1806fc0(v9, v13, v12);
      if (v10 == 0) {
        goto LABEL_19;
      }
      goto LABEL_15;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    PropActor_1806fc0(v9, v13, v12);
    result = std___1___shared_weak_count___release_weak(v5);
  }
  if (v10 != 0) {
  LABEL_15:
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      result = std___1___shared_weak_count___release_weak(v10);
    }
  }
LABEL_19:
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda14_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  float v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  float v32;

  v2 = *(_QWORD*)(a1 + 8);
  result = *a2;
  if (*a2 == 0) {
    v4 = 0;
    v5 = 0;
  LABEL_7:
    v6 = *(unsigned int*)(v5 + 24);
    if ((v6 & 0x80000000) != 0) {
      goto LABEL_40;
    }
    goto LABEL_8;
  }
  v4 = a2[1];
  result = __dynamic_cast(result, GameData_212d4f0[0], GameData_2131ee8[0], 0);
  v5 = result;
  if (result == 0) {
    v4 = 0;
    v6 = 0;
    goto LABEL_8;
  }
  if (v4 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(unsigned int*)(result + 24);
  if ((v6 & 0x80000000) != 0) {
    goto LABEL_40;
  }
LABEL_8:
  v7 = *(_QWORD*)(v2 + 80);
  if (v6 >= (*(_QWORD*)(v2 + 88) - v7) >> 4) {
    goto LABEL_40;
  }
  v8 = (_QWORD*)(v7 + 16 * v6);
  v10 = (_QWORD*)*v8;
  v9 = v8[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v10 == nullptr) {
    goto LABEL_37;
  }
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v11 = (__int64*)v10[10];
    v12 = v10[11];
    if ((unsigned __int64)v11 < v12) {
      *v11 = v5;
      v11[1] = v4;
      v13 = v11 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_31;
    }
  LABEL_18:
    v14 = v10[9];
    v15 = (__int64)v11 - v14;
    v16 = ((__int64)v11 - v14) >> 4;
    v17 = v16 + 1;
    if ((unsigned __int64)(v16 + 1) >> 60 != 0) {
      GameRoutine_1812cb0();
    }
    v18 = v12 - v14;
    if (v18 >> 3 > v17) {
      v17 = v18 >> 3;
    }
    if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF0LL) {
      v19 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v19 = v17;
    }
    if (v19 >> 60 != 0) {
      GameRoutine_60a210(result);
    }
    v20 = fw_memory_g_heap_manager_ptr;
    v21 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         16 * v19, 16, 0);
    v22 = (__int64*)(v21 + v15);
    v23 = v21 + 16 * v19;
    *v22 = v5;
    v22[1] = v4;
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      v14 = v10[9];
      v15 = v10[10] - v14;
      v16 = v15 >> 4;
    }
    v24 = &v22[-2 * v16];
    v13 = v22 + 2;
    memcpy(v24, v14, v15);
    v10[9] = v24;
    v10[10] = v13;
    v10[11] = v23;
    if (v14 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v25, v14);
    }
    goto LABEL_31;
  }
  v11 = (__int64*)v10[10];
  v12 = v10[11];
  if ((unsigned __int64)v11 >= v12) {
    goto LABEL_18;
  }
  *v11 = v5;
  v11[1] = 0;
  v13 = v11 + 2;
LABEL_31:
  v10[10] = v13;
  v26 = std___1___shared_weak_count_lock(v4);
  v27 = *(float*)(v5 + 8);
  v29 = v10[12];
  v28 = v10[13];
  v30 = v10 + 12;
  v31 = v26;
  v32 = v27;
  if (v29 == v28 || *(float*)(v28 - 4) <= v27) {
    AnimCtrlModule_a78450(v30, &v32);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak(v31);
  }
  result = std___1___shared_weak_count___release_weak(v4);
LABEL_37:
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
  }
LABEL_40:
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda15_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 result;
  _QWORD* v7;
  _QWORD v8[2];

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 != 0 &&
      (v4 = a2[1], (v3 = __dynamic_cast(v3, GameData_212d4f0[0],
                                        GameData_2131f18[0], 0)) != 0) &&
      v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v8[0] = v3;
    v8[1] = v4;
    v5 = *(_QWORD**)(v2 + 40);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1809b80(v5, v8);
    result = std___1___shared_weak_count___release_weak(v4);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      return std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    v7 = *(_QWORD**)(v2 + 40);
    v8[0] = v3;
    v8[1] = 0;
    return GameRoutine_1809b80(v7, v8);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda16_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64* v10;
  _QWORD* v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  float v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 result;
  unsigned __int64 v30;
  float v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 == 0) {
    v5 = 0;
  LABEL_7:
    v6 = *(_QWORD**)(v2 + 40);
    v8 = v6 + 8;
    v7 = (__int64*)v6[8];
    v10 = v6 + 9;
    v9 = v6[9];
    if ((unsigned __int64)v7 < v9) {
      v4 = 0;
      *v7 = v5;
      v7[1] = 0;
      v11 = v7 + 2;
      goto LABEL_24;
    }
    v12 = 1;
    v4 = 0;
    goto LABEL_11;
  }
  v4 = a2[1];
  v3 = __dynamic_cast(v3, GameData_212d4f0[0], GameData_2131f20[0], 0);
  v5 = v3;
  if (v3 == 0 || v4 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD**)(v2 + 40);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v8 = v6 + 8;
  v7 = (__int64*)v6[8];
  v10 = v6 + 9;
  v9 = v6[9];
  if ((unsigned __int64)v7 < v9) {
    *v7 = v3;
    v7[1] = v4;
    v11 = v7 + 2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_24;
  }
  v12 = 0;
LABEL_11:
  v13 = v6[7];
  v14 = (__int64)v7 - v13;
  v15 = ((__int64)v7 - v13) >> 4;
  v16 = v15 + 1;
  if ((unsigned __int64)(v15 + 1) >> 60 != 0) {
    GameRoutine_1812cf0();
  }
  v17 = v9 - v13;
  if (v17 >> 3 > v16) {
    v16 = v17 >> 3;
  }
  if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF0LL) {
    v18 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v18 = v16;
  }
  if (v18 >> 60 != 0) {
    GameRoutine_60a210(v3);
  }
  v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16 * v18, 16, 0);
  v20 = (__int64*)(v19 + v14);
  v30 = v19 + 16 * v18;
  *v20 = v5;
  v20[1] = v4;
  if ((v12 & 1) == 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v13 = v6[7];
    v14 = *v8 - v13;
    v15 = v14 >> 4;
  }
  v21 = &v20[-2 * v15];
  v11 = v20 + 2;
  memcpy(v21, v13, v14);
  v6[7] = v21;
  *v8 = v11;
  *v10 = v30;
  if (v13 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  v13);
  }
LABEL_24:
  *v8 = v11;
  v23 = std___1___shared_weak_count_lock(v4);
  v24 = *(float*)(v5 + 8);
  v26 = v6[10];
  v25 = v6[11];
  v27 = v6 + 10;
  v28 = v23;
  v31 = v24;
  if (v26 == v25 || *(float*)(v25 - 4) <= v24) {
    AnimCtrlModule_a78450(v27, &v31);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  result = std___1___shared_weak_count___release_weak(v4);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda17_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64* v10;
  _QWORD* v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  float v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 result;
  unsigned __int64 v30;
  float v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 == 0) {
    v5 = 0;
  LABEL_7:
    v6 = *(_QWORD**)(v2 + 40);
    v8 = v6 + 14;
    v7 = (__int64*)v6[14];
    v10 = v6 + 15;
    v9 = v6[15];
    if ((unsigned __int64)v7 < v9) {
      v4 = 0;
      *v7 = v5;
      v7[1] = 0;
      v11 = v7 + 2;
      goto LABEL_24;
    }
    v12 = 1;
    v4 = 0;
    goto LABEL_11;
  }
  v4 = a2[1];
  v3 = __dynamic_cast(v3, GameData_212d4f0[0], GameData_2131f28[0], 0);
  v5 = v3;
  if (v3 == 0 || v4 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD**)(v2 + 40);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v8 = v6 + 14;
  v7 = (__int64*)v6[14];
  v10 = v6 + 15;
  v9 = v6[15];
  if ((unsigned __int64)v7 < v9) {
    *v7 = v3;
    v7[1] = v4;
    v11 = v7 + 2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_24;
  }
  v12 = 0;
LABEL_11:
  v13 = v6[13];
  v14 = (__int64)v7 - v13;
  v15 = ((__int64)v7 - v13) >> 4;
  v16 = v15 + 1;
  if ((unsigned __int64)(v15 + 1) >> 60 != 0) {
    GameRoutine_1812d10();
  }
  v17 = v9 - v13;
  if (v17 >> 3 > v16) {
    v16 = v17 >> 3;
  }
  if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF0LL) {
    v18 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v18 = v16;
  }
  if (v18 >> 60 != 0) {
    GameRoutine_60a210(v3);
  }
  v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16 * v18, 16, 0);
  v20 = (__int64*)(v19 + v14);
  v30 = v19 + 16 * v18;
  *v20 = v5;
  v20[1] = v4;
  if ((v12 & 1) == 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v13 = v6[13];
    v14 = *v8 - v13;
    v15 = v14 >> 4;
  }
  v21 = &v20[-2 * v15];
  v11 = v20 + 2;
  memcpy(v21, v13, v14);
  v6[13] = v21;
  *v8 = v11;
  *v10 = v30;
  if (v13 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  v13);
  }
LABEL_24:
  *v8 = v11;
  v23 = std___1___shared_weak_count_lock(v4);
  v24 = *(float*)(v5 + 8);
  v26 = v6[16];
  v25 = v6[17];
  v27 = v6 + 16;
  v28 = v23;
  v31 = v24;
  if (v26 == v25 || *(float*)(v25 - 4) <= v24) {
    AnimCtrlModule_a78450(v27, &v31);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  result = std___1___shared_weak_count___release_weak(v4);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda18_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64* v10;
  _QWORD* v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  float v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 result;
  unsigned __int64 v30;
  float v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 == 0) {
    v5 = 0;
  LABEL_7:
    v6 = *(_QWORD**)(v2 + 40);
    v8 = v6 + 20;
    v7 = (__int64*)v6[20];
    v10 = v6 + 21;
    v9 = v6[21];
    if ((unsigned __int64)v7 < v9) {
      v4 = 0;
      *v7 = v5;
      v7[1] = 0;
      v11 = v7 + 2;
      goto LABEL_24;
    }
    v12 = 1;
    v4 = 0;
    goto LABEL_11;
  }
  v4 = a2[1];
  v3 = __dynamic_cast(v3, GameData_212d4f0[0], GameData_2131f30[0], 0);
  v5 = v3;
  if (v3 == 0 || v4 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD**)(v2 + 40);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v8 = v6 + 20;
  v7 = (__int64*)v6[20];
  v10 = v6 + 21;
  v9 = v6[21];
  if ((unsigned __int64)v7 < v9) {
    *v7 = v3;
    v7[1] = v4;
    v11 = v7 + 2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_24;
  }
  v12 = 0;
LABEL_11:
  v13 = v6[19];
  v14 = (__int64)v7 - v13;
  v15 = ((__int64)v7 - v13) >> 4;
  v16 = v15 + 1;
  if ((unsigned __int64)(v15 + 1) >> 60 != 0) {
    GameRoutine_1812d30();
  }
  v17 = v9 - v13;
  if (v17 >> 3 > v16) {
    v16 = v17 >> 3;
  }
  if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF0LL) {
    v18 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v18 = v16;
  }
  if (v18 >> 60 != 0) {
    GameRoutine_60a210(v3);
  }
  v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16 * v18, 16, 0);
  v20 = (__int64*)(v19 + v14);
  v30 = v19 + 16 * v18;
  *v20 = v5;
  v20[1] = v4;
  if ((v12 & 1) == 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v13 = v6[19];
    v14 = *v8 - v13;
    v15 = v14 >> 4;
  }
  v21 = &v20[-2 * v15];
  v11 = v20 + 2;
  memcpy(v21, v13, v14);
  v6[19] = v21;
  *v8 = v11;
  *v10 = v30;
  if (v13 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  v13);
  }
LABEL_24:
  *v8 = v11;
  v23 = std___1___shared_weak_count_lock(v4);
  v24 = *(float*)(v5 + 8);
  v26 = v6[22];
  v25 = v6[23];
  v27 = v6 + 22;
  v28 = v23;
  v31 = v24;
  if (v26 == v25 || *(float*)(v25 - 4) <= v24) {
    AnimCtrlModule_a78450(v27, &v31);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  result = std___1___shared_weak_count___release_weak(v4);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda19_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64* v10;
  _QWORD* v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  float v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 result;
  unsigned __int64 v30;
  float v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 == 0) {
    v5 = 0;
  LABEL_7:
    v6 = *(_QWORD**)(v2 + 40);
    v8 = v6 + 26;
    v7 = (__int64*)v6[26];
    v10 = v6 + 27;
    v9 = v6[27];
    if ((unsigned __int64)v7 < v9) {
      v4 = 0;
      *v7 = v5;
      v7[1] = 0;
      v11 = v7 + 2;
      goto LABEL_24;
    }
    v12 = 1;
    v4 = 0;
    goto LABEL_11;
  }
  v4 = a2[1];
  v3 = __dynamic_cast(v3, GameData_212d4f0[0], GameData_2131f38[0], 0);
  v5 = v3;
  if (v3 == 0 || v4 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD**)(v2 + 40);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v8 = v6 + 26;
  v7 = (__int64*)v6[26];
  v10 = v6 + 27;
  v9 = v6[27];
  if ((unsigned __int64)v7 < v9) {
    *v7 = v3;
    v7[1] = v4;
    v11 = v7 + 2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_24;
  }
  v12 = 0;
LABEL_11:
  v13 = v6[25];
  v14 = (__int64)v7 - v13;
  v15 = ((__int64)v7 - v13) >> 4;
  v16 = v15 + 1;
  if ((unsigned __int64)(v15 + 1) >> 60 != 0) {
    GameRoutine_1812d50();
  }
  v17 = v9 - v13;
  if (v17 >> 3 > v16) {
    v16 = v17 >> 3;
  }
  if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF0LL) {
    v18 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v18 = v16;
  }
  if (v18 >> 60 != 0) {
    GameRoutine_60a210(v3);
  }
  v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16 * v18, 16, 0);
  v20 = (__int64*)(v19 + v14);
  v30 = v19 + 16 * v18;
  *v20 = v5;
  v20[1] = v4;
  if ((v12 & 1) == 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v13 = v6[25];
    v14 = *v8 - v13;
    v15 = v14 >> 4;
  }
  v21 = &v20[-2 * v15];
  v11 = v20 + 2;
  memcpy(v21, v13, v14);
  v6[25] = v21;
  *v8 = v11;
  *v10 = v30;
  if (v13 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  v13);
  }
LABEL_24:
  *v8 = v11;
  v23 = std___1___shared_weak_count_lock(v4);
  v24 = *(float*)(v5 + 8);
  v26 = v6[28];
  v25 = v6[29];
  v27 = v6 + 28;
  v28 = v23;
  v31 = v24;
  if (v26 == v25 || *(float*)(v25 - 4) <= v24) {
    AnimCtrlModule_a78450(v27, &v31);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  result = std___1___shared_weak_count___release_weak(v4);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda20_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64* v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  float v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 result;
  unsigned __int64* v30;
  float v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 == 0) {
    v5 = 0;
  LABEL_7:
    v6 = *(_QWORD**)(v2 + 40);
    v7 = (__int64*)v6[32];
    v8 = v6[33];
    v9 = v6 + 32;
    if ((unsigned __int64)v7 < v8) {
      v4 = 0;
      *v7 = v5;
      v7[1] = 0;
      v10 = v7 + 2;
      goto LABEL_24;
    }
    v11 = v6 + 33;
    v12 = 1;
    v4 = 0;
    goto LABEL_11;
  }
  v4 = a2[1];
  v3 = __dynamic_cast(v3, GameData_212d4f0[0], GameData_2131f40[0], 0);
  v5 = v3;
  if (v3 == 0 || v4 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD**)(v2 + 40);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = (__int64*)v6[32];
  v8 = v6[33];
  v9 = v6 + 32;
  if ((unsigned __int64)v7 < v8) {
    *v7 = v3;
    v7[1] = v4;
    v10 = v7 + 2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_24;
  }
  v12 = 0;
  v11 = v6 + 33;
LABEL_11:
  v13 = v6[31];
  v14 = (__int64)v7 - v13;
  v15 = ((__int64)v7 - v13) >> 4;
  v16 = v15 + 1;
  if ((unsigned __int64)(v15 + 1) >> 60 != 0) {
    GameRoutine_1812d70();
  }
  v17 = v8 - v13;
  v30 = v11;
  if (v17 >> 3 > v16) {
    v16 = v17 >> 3;
  }
  if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF0LL) {
    v18 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v18 = v16;
  }
  if (v18 >> 60 != 0) {
    GameRoutine_60a210(v3);
  }
  v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16 * v18, 16, 0);
  v20 = (__int64*)(v19 + v14);
  v21 = v19 + 16 * v18;
  *v20 = v5;
  v20[1] = v4;
  if ((v12 & 1) == 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v13 = v6[31];
    v14 = *v9 - v13;
    v15 = v14 >> 4;
  }
  v22 = &v20[-2 * v15];
  v10 = v20 + 2;
  memcpy(v22, v13, v14);
  v6[31] = v22;
  *v9 = v10;
  *v30 = v21;
  if (v13 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  v13);
  }
LABEL_24:
  *v9 = v10;
  v24 = std___1___shared_weak_count_lock(v4);
  v25 = *(float*)(v5 + 8);
  v27 = v6[34];
  v26 = v6[35];
  v28 = v24;
  v31 = v25;
  if (v27 == v26 || *(float*)(v26 - 4) <= v25) {
    AnimCtrlModule_a78450(v6 + 34, &v31);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  result = std___1___shared_weak_count___release_weak(v4);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda21_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64* v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  float v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 result;
  unsigned __int64* v30;
  float v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 == 0) {
    v5 = 0;
  LABEL_7:
    v6 = *(_QWORD**)(v2 + 40);
    v7 = (__int64*)v6[38];
    v8 = v6[39];
    v9 = v6 + 38;
    if ((unsigned __int64)v7 < v8) {
      v4 = 0;
      *v7 = v5;
      v7[1] = 0;
      v10 = v7 + 2;
      goto LABEL_24;
    }
    v11 = v6 + 39;
    v12 = 1;
    v4 = 0;
    goto LABEL_11;
  }
  v4 = a2[1];
  v3 = __dynamic_cast(v3, GameData_212d4f0[0], GameData_2131f48[0], 0);
  v5 = v3;
  if (v3 == 0 || v4 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD**)(v2 + 40);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = (__int64*)v6[38];
  v8 = v6[39];
  v9 = v6 + 38;
  if ((unsigned __int64)v7 < v8) {
    *v7 = v3;
    v7[1] = v4;
    v10 = v7 + 2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_24;
  }
  v12 = 0;
  v11 = v6 + 39;
LABEL_11:
  v13 = v6[37];
  v14 = (__int64)v7 - v13;
  v15 = ((__int64)v7 - v13) >> 4;
  v16 = v15 + 1;
  if ((unsigned __int64)(v15 + 1) >> 60 != 0) {
    GameRoutine_1812d90();
  }
  v17 = v8 - v13;
  v30 = v11;
  if (v17 >> 3 > v16) {
    v16 = v17 >> 3;
  }
  if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF0LL) {
    v18 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v18 = v16;
  }
  if (v18 >> 60 != 0) {
    GameRoutine_60a210(v3);
  }
  v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16 * v18, 16, 0);
  v20 = (__int64*)(v19 + v14);
  v21 = v19 + 16 * v18;
  *v20 = v5;
  v20[1] = v4;
  if ((v12 & 1) == 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v13 = v6[37];
    v14 = *v9 - v13;
    v15 = v14 >> 4;
  }
  v22 = &v20[-2 * v15];
  v10 = v20 + 2;
  memcpy(v22, v13, v14);
  v6[37] = v22;
  *v9 = v10;
  *v30 = v21;
  if (v13 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  v13);
  }
LABEL_24:
  *v9 = v10;
  v24 = std___1___shared_weak_count_lock(v4);
  v25 = *(float*)(v5 + 8);
  v27 = v6[40];
  v26 = v6[41];
  v28 = v24;
  v31 = v25;
  if (v27 == v26 || *(float*)(v26 - 4) <= v25) {
    AnimCtrlModule_a78450(v6 + 40, &v31);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  result = std___1___shared_weak_count___release_weak(v4);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda22_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64* v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  float v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 result;
  unsigned __int64* v30;
  float v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 == 0) {
    v5 = 0;
  LABEL_7:
    v6 = *(_QWORD**)(v2 + 40);
    v7 = (__int64*)v6[44];
    v8 = v6[45];
    v9 = v6 + 44;
    if ((unsigned __int64)v7 < v8) {
      v4 = 0;
      *v7 = v5;
      v7[1] = 0;
      v10 = v7 + 2;
      goto LABEL_24;
    }
    v11 = v6 + 45;
    v12 = 1;
    v4 = 0;
    goto LABEL_11;
  }
  v4 = a2[1];
  v3 = __dynamic_cast(v3, GameData_212d4f0[0], GameData_2131f50[0], 0);
  v5 = v3;
  if (v3 == 0 || v4 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD**)(v2 + 40);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = (__int64*)v6[44];
  v8 = v6[45];
  v9 = v6 + 44;
  if ((unsigned __int64)v7 < v8) {
    *v7 = v3;
    v7[1] = v4;
    v10 = v7 + 2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_24;
  }
  v12 = 0;
  v11 = v6 + 45;
LABEL_11:
  v13 = v6[43];
  v14 = (__int64)v7 - v13;
  v15 = ((__int64)v7 - v13) >> 4;
  v16 = v15 + 1;
  if ((unsigned __int64)(v15 + 1) >> 60 != 0) {
    GameRoutine_1812db0();
  }
  v17 = v8 - v13;
  v30 = v11;
  if (v17 >> 3 > v16) {
    v16 = v17 >> 3;
  }
  if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF0LL) {
    v18 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v18 = v16;
  }
  if (v18 >> 60 != 0) {
    GameRoutine_60a210(v3);
  }
  v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16 * v18, 16, 0);
  v20 = (__int64*)(v19 + v14);
  v21 = v19 + 16 * v18;
  *v20 = v5;
  v20[1] = v4;
  if ((v12 & 1) == 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v13 = v6[43];
    v14 = *v9 - v13;
    v15 = v14 >> 4;
  }
  v22 = &v20[-2 * v15];
  v10 = v20 + 2;
  memcpy(v22, v13, v14);
  v6[43] = v22;
  *v9 = v10;
  *v30 = v21;
  if (v13 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  v13);
  }
LABEL_24:
  *v9 = v10;
  v24 = std___1___shared_weak_count_lock(v4);
  v25 = *(float*)(v5 + 8);
  v27 = v6[46];
  v26 = v6[47];
  v28 = v24;
  v31 = v25;
  if (v27 == v26 || *(float*)(v26 - 4) <= v25) {
    AnimCtrlModule_a78450(v6 + 46, &v31);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  result = std___1___shared_weak_count___release_weak(v4);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda23_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64* v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  float v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 result;
  unsigned __int64* v30;
  float v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 == 0) {
    v5 = 0;
  LABEL_7:
    v6 = *(_QWORD**)(v2 + 40);
    v7 = (__int64*)v6[50];
    v8 = v6[51];
    v9 = v6 + 50;
    if ((unsigned __int64)v7 < v8) {
      v4 = 0;
      *v7 = v5;
      v7[1] = 0;
      v10 = v7 + 2;
      goto LABEL_24;
    }
    v11 = v6 + 51;
    v12 = 1;
    v4 = 0;
    goto LABEL_11;
  }
  v4 = a2[1];
  v3 = __dynamic_cast(v3, GameData_212d4f0[0], GameData_2131f58[0], 0);
  v5 = v3;
  if (v3 == 0 || v4 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD**)(v2 + 40);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = (__int64*)v6[50];
  v8 = v6[51];
  v9 = v6 + 50;
  if ((unsigned __int64)v7 < v8) {
    *v7 = v3;
    v7[1] = v4;
    v10 = v7 + 2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_24;
  }
  v12 = 0;
  v11 = v6 + 51;
LABEL_11:
  v13 = v6[49];
  v14 = (__int64)v7 - v13;
  v15 = ((__int64)v7 - v13) >> 4;
  v16 = v15 + 1;
  if ((unsigned __int64)(v15 + 1) >> 60 != 0) {
    GameRoutine_1812dd0();
  }
  v17 = v8 - v13;
  v30 = v11;
  if (v17 >> 3 > v16) {
    v16 = v17 >> 3;
  }
  if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF0LL) {
    v18 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v18 = v16;
  }
  if (v18 >> 60 != 0) {
    GameRoutine_60a210(v3);
  }
  v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16 * v18, 16, 0);
  v20 = (__int64*)(v19 + v14);
  v21 = v19 + 16 * v18;
  *v20 = v5;
  v20[1] = v4;
  if ((v12 & 1) == 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v13 = v6[49];
    v14 = *v9 - v13;
    v15 = v14 >> 4;
  }
  v22 = &v20[-2 * v15];
  v10 = v20 + 2;
  memcpy(v22, v13, v14);
  v6[49] = v22;
  *v9 = v10;
  *v30 = v21;
  if (v13 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  v13);
  }
LABEL_24:
  *v9 = v10;
  v24 = std___1___shared_weak_count_lock(v4);
  v25 = *(float*)(v5 + 8);
  v27 = v6[52];
  v26 = v6[53];
  v28 = v24;
  v31 = v25;
  if (v27 == v26 || *(float*)(v26 - 4) <= v25) {
    AnimCtrlModule_a78450(v6 + 52, &v31);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  result = std___1___shared_weak_count___release_weak(v4);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda24_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64* v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  float v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 result;
  unsigned __int64* v30;
  float v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 == 0) {
    v5 = 0;
  LABEL_7:
    v6 = *(_QWORD**)(v2 + 40);
    v7 = (__int64*)v6[56];
    v8 = v6[57];
    v9 = v6 + 56;
    if ((unsigned __int64)v7 < v8) {
      v4 = 0;
      *v7 = v5;
      v7[1] = 0;
      v10 = v7 + 2;
      goto LABEL_24;
    }
    v11 = v6 + 57;
    v12 = 1;
    v4 = 0;
    goto LABEL_11;
  }
  v4 = a2[1];
  v3 = __dynamic_cast(v3, GameData_212d4f0[0], GameData_2131f60[0], 0);
  v5 = v3;
  if (v3 == 0 || v4 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD**)(v2 + 40);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = (__int64*)v6[56];
  v8 = v6[57];
  v9 = v6 + 56;
  if ((unsigned __int64)v7 < v8) {
    *v7 = v3;
    v7[1] = v4;
    v10 = v7 + 2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_24;
  }
  v12 = 0;
  v11 = v6 + 57;
LABEL_11:
  v13 = v6[55];
  v14 = (__int64)v7 - v13;
  v15 = ((__int64)v7 - v13) >> 4;
  v16 = v15 + 1;
  if ((unsigned __int64)(v15 + 1) >> 60 != 0) {
    GameRoutine_1812df0();
  }
  v17 = v8 - v13;
  v30 = v11;
  if (v17 >> 3 > v16) {
    v16 = v17 >> 3;
  }
  if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF0LL) {
    v18 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v18 = v16;
  }
  if (v18 >> 60 != 0) {
    GameRoutine_60a210(v3);
  }
  v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16 * v18, 16, 0);
  v20 = (__int64*)(v19 + v14);
  v21 = v19 + 16 * v18;
  *v20 = v5;
  v20[1] = v4;
  if ((v12 & 1) == 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v13 = v6[55];
    v14 = *v9 - v13;
    v15 = v14 >> 4;
  }
  v22 = &v20[-2 * v15];
  v10 = v20 + 2;
  memcpy(v22, v13, v14);
  v6[55] = v22;
  *v9 = v10;
  *v30 = v21;
  if (v13 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  v13);
  }
LABEL_24:
  *v9 = v10;
  v24 = std___1___shared_weak_count_lock(v4);
  v25 = *(float*)(v5 + 8);
  v27 = v6[58];
  v26 = v6[59];
  v28 = v24;
  v31 = v25;
  if (v27 == v26 || *(float*)(v26 - 4) <= v25) {
    AnimCtrlModule_a78450(v6 + 58, &v31);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  result = std___1___shared_weak_count___release_weak(v4);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda25_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64* v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  float v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 result;
  unsigned __int64* v30;
  float v31;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 == 0) {
    v5 = 0;
  LABEL_7:
    v6 = *(_QWORD**)(v2 + 40);
    v7 = (__int64*)v6[62];
    v8 = v6[63];
    v9 = v6 + 62;
    if ((unsigned __int64)v7 < v8) {
      v4 = 0;
      *v7 = v5;
      v7[1] = 0;
      v10 = v7 + 2;
      goto LABEL_24;
    }
    v11 = v6 + 63;
    v12 = 1;
    v4 = 0;
    goto LABEL_11;
  }
  v4 = a2[1];
  v3 = __dynamic_cast(v3, GameData_212d4f0[0], GameData_2131f68[0], 0);
  v5 = v3;
  if (v3 == 0 || v4 == 0) {
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD**)(v2 + 40);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = (__int64*)v6[62];
  v8 = v6[63];
  v9 = v6 + 62;
  if ((unsigned __int64)v7 < v8) {
    *v7 = v3;
    v7[1] = v4;
    v10 = v7 + 2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_24;
  }
  v12 = 0;
  v11 = v6 + 63;
LABEL_11:
  v13 = v6[61];
  v14 = (__int64)v7 - v13;
  v15 = ((__int64)v7 - v13) >> 4;
  v16 = v15 + 1;
  if ((unsigned __int64)(v15 + 1) >> 60 != 0) {
    GameRoutine_1812e10();
  }
  v17 = v8 - v13;
  v30 = v11;
  if (v17 >> 3 > v16) {
    v16 = v17 >> 3;
  }
  if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF0LL) {
    v18 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v18 = v16;
  }
  if (v18 >> 60 != 0) {
    GameRoutine_60a210(v3);
  }
  v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16 * v18, 16, 0);
  v20 = (__int64*)(v19 + v14);
  v21 = v19 + 16 * v18;
  *v20 = v5;
  v20[1] = v4;
  if ((v12 & 1) == 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v13 = v6[61];
    v14 = *v9 - v13;
    v15 = v14 >> 4;
  }
  v22 = &v20[-2 * v15];
  v10 = v20 + 2;
  memcpy(v22, v13, v14);
  v6[61] = v22;
  *v9 = v10;
  *v30 = v21;
  if (v13 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  v13);
  }
LABEL_24:
  *v9 = v10;
  v24 = std___1___shared_weak_count_lock(v4);
  v25 = *(float*)(v5 + 8);
  v26 = v6[64];
  v27 = v6[65];
  v28 = v24;
  v31 = v25;
  if (v26 == v27 || *(float*)(v27 - 4) <= v25) {
    AnimCtrlModule_a78450(v6 + 64, &v31);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  result = std___1___shared_weak_count___release_weak(v4);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda26_Invoke(__int64 a1,
                                                            _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  unsigned __int64 v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  _QWORD v18[2];

  v2 = *(_QWORD*)(a1 + 8);
  if (*a2 == 0) {
    v4 = 0;
    goto LABEL_6;
  }
  v3 = a2[1];
  v4 = __dynamic_cast(*a2, GameData_212d4f0[0], GameData_2131f70[0], 0);
  if (v4 == 0) {
  LABEL_6:
    v3 = 0;
    goto LABEL_7;
  }
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
LABEL_7:
  v5 = *(unsigned __int8*)(v4 + 24);
  v6 = (v5 & 1) == 0;
  v7 = v5 >> 1;
  if (v6) {
    v8 = v4 + 25;
  }
  else {
    v8 = *(_QWORD*)(v4 + 40);
  }
  if (v6) {
    v9 = v7;
  }
  else {
    v9 = *(_QWORD*)(v4 + 32);
  }
  result = GameRoutine_1812120(v2, v8, v9);
  if (result != 0) {
    v11 = *(unsigned __int8*)(v4 + 144);
    v12 = result;
    v13 = (v11 & 1) == 0;
    v14 = v11 >> 1;
    if (v13) {
      v15 = v4 + 145;
    }
    else {
      v15 = *(_QWORD*)(v4 + 160);
    }
    if (v13) {
      v16 = v14;
    }
    else {
      v16 = *(_QWORD*)(v4 + 152);
    }
    v18[0] = v4;
    v18[1] = v3;
    v17 = GameRoutine_1811e80(v2, v15, v16) != nullptr;
    if (v3 == 0) {
      return LightActor_180c220(v12, v18, v17);
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    LightActor_180c220(v12, v18, v17);
    result = std___1___shared_weak_count___release_weak(v3);
  }
  else if (v3 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda27_Invoke(__int64 a1,
                                                            _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64* v12;
  int v13;
  __int64 v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  float v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  float v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  float v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  float v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD v36[2];
  float v37;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = a2[1];
  v4 = __dynamic_cast(*a2, GameData_212d4f0[0], GameData_2131f78[0], 0);
  v5 = v4;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  v6 = *(unsigned __int8*)(v4 + 24);
  v7 = (v6 & 1) == 0;
  v8 = v6 >> 1;
  if (v7) {
    v9 = v4 + 25;
  }
  else {
    v9 = *(_QWORD*)(v4 + 40);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *(_QWORD*)(v4 + 32);
  }
  result = GameRoutine_1812120(v2, v9, v10);
  if (result == 0) {
    if (v3 == 0) {
      return result;
    }
    goto LABEL_50;
  }
  v12 = (__int64*)result;
  v36[0] = v5;
  v36[1] = v3;
  if (v3 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16),
                                            1u, memory_order_relaxed),
                  (result = std___1___shared_weak_count_lock(v3)) != 0)) {
    v13 = *(_DWORD*)(v5 + 48);
    if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v14 = result;
      (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      result = std___1___shared_weak_count___release_weak(v14);
    }
  }
  else {
    LOBYTE(v13) = 0;
  }
  if ((v13 & 1) != 0) {
    GameRoutine_1812e50(v12 + 46, v36);
    result = std___1___shared_weak_count_lock(v3);
    v15 = *(float*)(v5 + 8);
    v17 = v12[49];
    v16 = v12[50];
    v18 = result;
    v37 = v15;
    if (v17 == v16 || *(float*)(v16 - 4) <= v15) {
      result = AnimCtrlModule_a78450(v12 + 49, &v37);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      result = std___1___shared_weak_count___release_weak(v18);
    }
  }
  if ((v13 & 2) != 0) {
    GameRoutine_1812e50(v12 + 52, v36);
    result = std___1___shared_weak_count_lock(v3);
    v19 = *(float*)(v5 + 8);
    v21 = v12[55];
    v20 = v12[56];
    v22 = result;
    v37 = v19;
    if (v21 == v20 || *(float*)(v20 - 4) <= v19) {
      result = AnimCtrlModule_a78450(v12 + 55, &v37);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      result = std___1___shared_weak_count___release_weak(v22);
    }
  }
  if ((v13 & 4) != 0) {
    GameRoutine_1812e50(v12 + 58, v36);
    result = std___1___shared_weak_count_lock(v3);
    v23 = *(float*)(v5 + 8);
    v25 = v12[61];
    v24 = v12[62];
    v26 = result;
    v37 = v23;
    if (v25 == v24 || *(float*)(v24 - 4) <= v23) {
      result = AnimCtrlModule_a78450(v12 + 61, &v37);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
      result = std___1___shared_weak_count___release_weak(v26);
    }
  }
  if ((v13 & 8) == 0) {
    goto LABEL_38;
  }
  GameRoutine_1812e50(v12 + 64, v36);
  result = std___1___shared_weak_count_lock(v3);
  v27 = *(float*)(v5 + 8);
  v28 = v12[67];
  v29 = v12[68];
  v30 = result;
  v37 = v27;
  if (v28 == v29 || *(float*)(v29 - 4) <= v27) {
    result = AnimCtrlModule_a78450(v12 + 67, &v37);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    result = std___1___shared_weak_count___release_weak(v30);
    if ((v13 & 0x10) == 0) {
    LABEL_39:
      if (v3 == 0) {
        return result;
      }
      goto LABEL_49;
    }
  }
  else {
  LABEL_38:
    if ((v13 & 0x10) == 0) {
      goto LABEL_39;
    }
  }
  GameRoutine_1812e50(v12 + 70, v36);
  v31 = std___1___shared_weak_count_lock(v3);
  v32 = *(float*)(v5 + 8);
  v33 = v12[73];
  v34 = v12[74];
  v35 = v31;
  v37 = v32;
  if (v33 == v34 || *(float*)(v34 - 4) <= v32) {
    AnimCtrlModule_a78450(v12 + 73, &v37);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
    std___1___shared_weak_count___release_weak(v35);
  }
LABEL_49:
  result = std___1___shared_weak_count___release_weak(v3);
LABEL_50:
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 game_cutscene_ActorList_SetupSorted_lambda28_Invoke(__int64 a1,
                                                            _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64* v12;
  __int64 v13;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  float v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  float v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD v39[2];
  float v40;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = a2[1];
  v4 = __dynamic_cast(*a2, GameData_212d4f0[0], GameData_2131f80[0], 0);
  v5 = v4;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  v6 = *(unsigned __int8*)(v4 + 24);
  v7 = (v6 & 1) == 0;
  v8 = v6 >> 1;
  if (v7) {
    v9 = v4 + 25;
  }
  else {
    v9 = *(_QWORD*)(v4 + 40);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *(_QWORD*)(v4 + 32);
  }
  result = GameRoutine_1812120(v2, v9, v10);
  if (result == 0) {
    if (v3 == 0) {
      return result;
    }
    goto LABEL_48;
  }
  v12 = (__int64*)result;
  v39[0] = v5;
  v39[1] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_1812fc0((__int64*)(result + 608), v39);
  v13 = std___1___shared_weak_count_lock(v3);
  v14 = *(float*)(v5 + 8);
  v15 = v12[79];
  v16 = v12[80];
  v17 = v13;
  v40 = v14;
  if (v15 == v16 || *(float*)(v16 - 4) <= v14) {
    AnimCtrlModule_a78450(v12 + 79, &v40);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  v18 = std___1___shared_weak_count_lock(v3);
  if (v18 != 0) {
    v19 = *(unsigned __int8*)(v5 + 48);
    if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v19 == 0) {
        goto LABEL_47;
      }
    LABEL_25:
      v21 = std___1___shared_weak_count_lock(v3);
      if (v21 != 0) {
        v22 = *(_DWORD*)(v5 + 52);
        if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v23 = v21;
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          std___1___shared_weak_count___release_weak(v23);
        }
      }
      else {
        LOBYTE(v22) = 0;
      }
      if ((v22 & 1) != 0) {
        GameRoutine_1812fc0(v12 + 82, v39);
        v24 = std___1___shared_weak_count_lock(v3);
        v25 = *(float*)(v5 + 8);
        v26 = v12[85];
        v27 = v12[86];
        v28 = v24;
        v40 = v25;
        if (v26 == v27 || *(float*)(v27 - 4) <= v25) {
          AnimCtrlModule_a78450(v12 + 85, &v40);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
          std___1___shared_weak_count___release_weak(v28);
        }
      }
      if ((v22 & 2) != 0) {
        GameRoutine_1812fc0(v12 + 88, v39);
        v29 = std___1___shared_weak_count_lock(v3);
        v30 = *(float*)(v5 + 8);
        v31 = v12[91];
        v32 = v12[92];
        v33 = v29;
        v40 = v30;
        if (v31 == v32 || *(float*)(v32 - 4) <= v30) {
          AnimCtrlModule_a78450(v12 + 91, &v40);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
          std___1___shared_weak_count___release_weak(v33);
        }
      }
      if ((v22 & 4) != 0) {
        GameRoutine_1812fc0(v12 + 94, v39);
        v34 = std___1___shared_weak_count_lock(v3);
        v35 = *(float*)(v5 + 8);
        v36 = v12[97];
        v37 = v12[98];
        v38 = v34;
        v40 = v35;
        if (v36 == v37 || *(float*)(v37 - 4) <= v35) {
          AnimCtrlModule_a78450(v12 + 97, &v40);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
          std___1___shared_weak_count___release_weak(v38);
        }
      }
      goto LABEL_47;
    }
    v20 = v18;
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v20);
    if ((v19 & 1) != 0) {
      goto LABEL_25;
    }
  }
LABEL_47:
  result = std___1___shared_weak_count___release_weak(v3);
LABEL_48:
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

#pragma GCC visibility pop
