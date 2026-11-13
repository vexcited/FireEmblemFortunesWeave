#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_BYTE* LayoutEx_58d200(_BYTE* result, _BYTE*);
_BYTE* Layout_579280(_QWORD*, __int64);
_QWORD* Element_1886290(__int64, const char**);
_QWORD* GameHr_1918160(__int64*);
_QWORD* GameRoutine_145f5d0(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_14ba0f0(__int64);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_7a8220(_QWORD* result, _QWORD*);
_QWORD* Image_72c060(__int64, __int64, unsigned int, unsigned int, __int64);
_QWORD* Layout_1364020(_QWORD*, __int64, __int64);
_QWORD* Registration_606350(_QWORD* result);
_QWORD* Registration_6064e0(_QWORD* result);
_QWORD* SpineModel_19160e0(__int64, _QWORD*);
_QWORD* SpineModel_19184e0(float*, __int64*, __int64**);
_QWORD* game_UnitPool_Find_6ead60(__int64*, int*);
_QWORD* spine_SkeletonClipping_clipEnd_3af70(_QWORD* result, __int64);
_QWORD* spine_SkeletonClipping_clipEnd_3afb0(_QWORD* result);
_QWORD* ui_LayoutAccessor_Setup_155dda0(_QWORD*, _QWORD*);
__attribute__((swiftcall)) void
EquipInfoItem_LegionInfo_16c77c0(PSEUDO_X8, __int64, _QWORD**, _BYTE**,
                                 __int64);
__attribute__((swiftcall)) void GameHr_1366ac0(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void GameRoutine_1369500(PSEUDO_X8, _QWORD* result,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_1369660(PSEUDO_X8, _QWORD* result,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_159e180(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_15b7080(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_15b71b0(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_1685230(PSEUDO_X8, unsigned __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_17d8b50(PSEUDO_X8, int, __int64);
__attribute__((swiftcall)) void GameRoutine_17d8c30(PSEUDO_X8, int, __int64);
__attribute__((swiftcall)) void GameRoutine_18c7f30(PSEUDO_X8, unsigned __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_191d520(PSEUDO_X8, __int64 result);
__attribute__((swiftcall)) void GameRoutine_53c20(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void
Layout_1363e00(PSEUDO_X8, unsigned __int64 result, __int64);
__attribute__((swiftcall)) void Layout_1685360(PSEUDO_X8, __int64, _QWORD**,
                                               _BYTE**, __int64);
__attribute__((swiftcall)) void Pane_58dfa0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_1210880(PSEUDO_X8, char);
__attribute__((swiftcall)) void
game_16c9820_alt1(PSEUDO_X8, __int64, _QWORD**, _BYTE**,
                  __int64) __asm__("game_16c9820");
__attribute__((swiftcall)) void
game_16d5fc0_alt1(PSEUDO_X8, __int64, _QWORD**, _BYTE**,
                  __int64) __asm__("game_16d5fc0");
__attribute__((swiftcall)) void game_menu_anonymous_e980a0(PSEUDO_X8,
                                                           __int64 result);
__attribute__((swiftcall)) void timeline_6530(PSEUDO_X8, int*, _BYTE*);
__int64 (***cphysx_149fa70(_QWORD*))(_QWORD);
__int64* GameRoutine_11fe0c0(__int64, __int64);
__int64* GameRoutine_1369360(_QWORD*, unsigned __int8*);
__int64* GameRoutine_6380e0(__int64, __int64**);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* game_8224a0(unsigned __int8);
__int64* game_UnitPool_Get(_BYTE*);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64 AIThink_12998a0(_QWORD, _QWORD);
__int64 AIThink_12a9e00(_QWORD);
__int64 AIThink_ProcessingScope_Destructor(_QWORD);
__int64 Alignment_56b600(__int64 result);
__int64 CharacterAppearance_10735d0(__int64);
__int64 ControlCreator_13633c0(__int64 result);
__int64 DGame_111aac0(_QWORD*);
__int64 FaceTextureGenerator_Destructor(__int64);
__int64 FacilityUnitList_145e2c0(__int64 result, __int64, char);
__int64 FloatingHelp_18ade60(_QWORD*);
__int64 GameCalendar_12da840(__int64*);
__int64 GameCalendar_12e0c20();
__int64 GameCalendar_12e0d40();
__int64 GameCalendar_12e0da0();
__int64 GameHr_10784f0(__int64, int, __int64);
__int64 GameHr_12abca0(_QWORD, _QWORD, _QWORD);
__int64 GameHr_12b3d60(__int64 result);
__int64 GameHr_13e4ce0(__int64, _QWORD*, int);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_156ca00(__int64, const char*);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameHr_7aa0(int**, _QWORD*);
__int64 GameHr_84cf20(__int64, __int64, char);
__int64 GameRoutine_111b280(__int64 result, unsigned int, unsigned int,
                            unsigned int);
__int64 GameRoutine_11ea1b0(_QWORD);
__int64 GameRoutine_11f7b10(_QWORD);
__int64 GameRoutine_11f7b30(__int64, _QWORD*);
__int64 GameRoutine_1276580(__int64, int);
__int64 GameRoutine_12aaf80(_QWORD);
__int64 GameRoutine_145d8a0(__int64*);
__int64 GameRoutine_15717a0(__int64*, unsigned __int8);
__int64 GameRoutine_1916360(_QWORD*, int*, __int64, __int64, __int64);
__int64 GameRoutine_19164c0(_QWORD*, int*, __int64, __int64, __int64);
__int64 GameRoutine_19e10();
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_55ae20(int, __int64, __int64);
__int64 GameRoutine_576600(__int64, const char*);
__int64 GameRoutine_5fb900(__int64);
__int64 GameRoutine_5fc1f0(__int64);
__int64 GameRoutine_5fc660(__int64 result, __int64);
__int64 GameRoutine_5fc680(__int64 result, __int64);
__int64 GameRoutine_5fe0a0(__int64, unsigned int, unsigned int, unsigned int*,
                           unsigned int*);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_634d80(__int64, __int64);
__int64 GameRoutine_64be60();
__int64 GameRoutine_6544c0(__int64, __int64);
__int64 GameRoutine_6c3980(_QWORD);
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_747a00(__int64, unsigned int, unsigned int, __int64, char);
__int64 GameRoutine_beefc0(char**, __int64, __int64, __int64, unsigned int,
                           unsigned int, __int64);
__int64 GmapTalkCommandMenu_e94ce0(__int64 result);
__int64 LayoutAccessor_155e140(__int64*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 LayoutEx_579160(__int64, __int64);
__int64 LayoutEx_579180(__int64);
__int64 LayoutEx_5791a0(__int64);
__int64 LayoutEx_57b150(__int64, __int64, __int64, __int64, __int64);
__int64 LayoutEx_57cf40(__int64, __int64);
__int64 Pane_58dee0(__int64 result, __int64);
__int64 Pane_58f8a0(__int64);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 PxCreatePhysics(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SkeletonClipping_Destructor(_QWORD*);
__int64 TrickEntity_7d1480(__int64 result);
__int64 __assert_fail(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_11f51f0(__int64, int, int);
__int64 game_149f630();
__int64 game_14a0f30_alt1(__int64*) __asm__("game_14a0f30");
__int64 game_1636f50(__int64*, char);
__int64 game_16503d0(__int64, int);
__int64 game_18415e0(__int64, __int64);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_AIRageImage_Update(__int64 result, __int64);
__int64 game_AITarget_EnumerateAssist(__int64, __int64, int, int, unsigned int);
__int64 game_GameCalendar_ProcNotify_Notify();
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_character_CharacterAppearance_Setup(unsigned __int64, char**);
__int64 gxc_NvnStateCache_BindBlendState(__int64 result, int);
__int64 gxc_NvnStateCache_BindDepthStencilState(__int64 result, int);
__int64 gxc_NvnStateCache_BindMultisampleState(__int64 result, int);
__int64 gxc_NvnStateCache_BindPolygonState(__int64 result, int);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(__int64 result);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_aoc_CountAddOnContent(void);
__int64 nn_aoc_ListAddOnContent(__int64, int, int);
__int64 nn_diag_detail_AbortImpl_1a0a080(__int64);
__int64 nn_fs_MountAddOnContent(const char*, int, __int64, unsigned __int64);
__int64 nn_fs_QueryMountAddOnContentCacheSize(__int64, int);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_AcquireReadLock(__int64);
__int64 nn_os_InitializeLightEvent(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_ReleaseReadLock(__int64);
__int64 nn_os_StartThread(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 physx_PxDefaultCpuDispatcherCreate(unsigned int, __int64, unsigned int,
                                           unsigned int);
__int64 spine_MeshAttachment_getColor(_QWORD);
__int64 spine_MeshAttachment_getRegion(_QWORD);
__int64 spine_MeshAttachment_getTriangles(_QWORD);
__int64 spine_RegionAttachment_getColor(_QWORD);
__int64 spine_RegionAttachment_getRegion(_QWORD);
__int64 spine_RegionAttachment_getUVs(_QWORD);
__int64 spine_SkeletonClipping_SkeletonClipping(_QWORD*);
__int64 spine_SkeletonClipping_clipTriangles(__int64 result, __int64, __int64,
                                             unsigned __int64, __int64, int);
__int64 spine_SkeletonClipping_getClippedTriangles(_QWORD);
__int64 spine_SkeletonClipping_getClippedUVs(_QWORD);
__int64 spine_SkeletonClipping_getClippedVertices(_QWORD);
__int64 spine_Skeleton_getColor(_QWORD);
__int64 spine_Skeleton_getDrawOrder(_QWORD);
__int64 spine_Skeleton_getSlots(_QWORD);
__int64 spine_SlotData_getBlendMode(_QWORD);
__int64 spine_SlotData_getName(_QWORD);
__int64 spine_Slot_getAttachment(_QWORD);
__int64 spine_Slot_getBone(_QWORD);
__int64 spine_Slot_getColor(_QWORD);
__int64 spine_Slot_getData(_QWORD);
__int64 spine_SpineObject_Destroy_SpineObject_4e8a0(_QWORD*);
__int64 spine_VertexAttachment_getWorldVerticesLength(_QWORD);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
__int64 strlen(_QWORD);
__int64 timeline_7910(__int64, int8x16_t*);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_GetPartsLayout(__int64*, const char*);
__int64 ui_LayoutAccessor_IsPaneVisible(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneScale(__int64 result, const char*, _QWORD*);
__int64 ui_LayoutAccessor_SetPaneSize(__int64 result, __int64, float, float);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__int64 ui_LayoutAccessor_SetPriority(__int64 result, int);
__int64 ui_LayoutAccessor_SetScale(__int64 result, _QWORD*);
__int64 ui_control_1888c80(__int64, __int64, __int64);
bool GameRoutine_12da4a0(unsigned __int8*);
bool GameRoutine_12dda00(__int64, __int64***);
bool GmapSituation_14db2f0();
bool UnitItem_6e8e50(unsigned __int16*, __int64);
bool game_Unit_Unknown6c90c0(__int64);
bool spine_RTTI_isExactly(const char**, const char**);
bool spine_SkeletonClipping_isClipping(__int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* TextSelector_1905ba0(char**, char*);
char* game_util_Format(const char*, ...);
const char* GameRoutine_156bee0(const char* result, __int64, __int64, __int64,
                                char, float, float);
const char* GameRoutine_18b26a0(__int64, __int64, __int64, __int64);
const char* Pane_58fac0(__int64, const char*);
double ui_LayoutAccessor_GetPaneTranslate(__int64*, const char*);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212ce38;
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN* GameData_212e350;
extern _UNKNOWN* GameData_212e3b0[2];
extern _UNKNOWN* GameData_212ea30;
extern _UNKNOWN* GameData_2130948;
extern _UNKNOWN* GameData_21318f0;
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e778[2];
extern _UNKNOWN** GameData_212e780;
extern _UNKNOWN** GameData_212e888[3];
extern _UNKNOWN** GameData_212e8a8;
extern _UNKNOWN** GameData_2132310[6];
extern _UNKNOWN** GameData_2132318[5];
extern _UNKNOWN** GameData_2132320[4];
extern _UNKNOWN** GameData_2132328[3];
extern _UNKNOWN** GameData_2132330[2];
extern _UNKNOWN** GameData_2132338;
extern _UNKNOWN GameData_1a927c1;
extern _UNKNOWN GameData_1ab538e;
extern _UNKNOWN GameData_1b611e0;
extern _UNKNOWN GameData_1b61330;
extern _UNKNOWN GameData_21771f0;
extern _UNKNOWN GameData_2177268;
extern _UNKNOWN GameData_2177278;
extern _UNKNOWN GameData_21f8028;
extern _UNKNOWN GameData_2240bc0;
extern _UNKNOWN GameData_2240d50;
extern _UNKNOWN GameData_224b660;
extern _UNKNOWN GameData_22593b0;
extern _UNKNOWN game_g_random_mutex;
extern __int128* GameData_212c828;
extern __int128 GameData_1a829b0;
extern __int128 GameData_1a831e0;
extern __int128 GameData_1a83330;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83940;
extern __int64 (*GameData_203fbb0[])();
extern __int64 (*GameData_2109ae8[])();
extern __int64 (*GameData_2109b78[])();
extern __int64 (*GameData_211f070[])();
extern __int64 (*GameData_211f098[])();
extern __int64 (*GameData_211f100[])();
extern __int64 (*GameData_211f2d8[])();
extern __int64 (*GameData_211f300[])();
extern __int64 (*GameData_212c710[3])();
extern __int64 (*GameData_212d298)();
extern __int64 (*GameData_2130698)();
extern __int64 (*cphysx_ErrorCallback_vtable[])();
extern __int64 (*cspine_SpineModel_Draw_lambda0_Destructor_ptr[])();
extern __int64 (*fs_Memory_vtable_ptr)();
extern __int64 (*game_11f3b70_ptr[4])();
extern __int64 (*game_GameCalendar_ProcNotify_vtable[])();
extern __int64 (
    *game_evt_demo_CharacterWork_CharacterWork_lambda0_Destructor_ptr[])();
extern __int64 (*game_facility_anonymous_ProcTalk_vtable[])();
extern __int64 (
    *game_gameui_control_HelpableElement_Destroy_HelpableElement_18b3360_ptr
        [])();
extern __int64 (*game_gameui_control_JobIcon_vtable[])();
extern __int64 (*nn_nlib_MemoryInputStream_vtable[])();
extern __int64 (*spine_Color_vtable[])();
extern __int64* GameData_212c740;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212cb48[94];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212d3c8[3];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212dea8;
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_212e348;
extern __int64* GameData_212fc68[3];
extern __int64* GameData_212fc70[2];
extern __int64* GameData_212fca0[2];
extern __int64* GameData_21300f8;
extern __int64* GameData_2130910[7];
extern __int64* GameData_2130918[6];
extern __int64* GameData_2130988[3];
extern __int64* GameData_21318e8;
extern __int64* GameData_21320c8[3];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* game_spine_g_resource_releaser_ptr;
extern __int64* game_vstring_kEmpty_ptr[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_211f0b8;
extern __int64 GameData_211f0c8;
extern __int64 GameData_211f0d8;
extern __int64 GameData_211f0e8;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c638;
extern __int64 GameData_212dc38[7];
extern __int64 GameData_21306a0[7];
extern __int64 GameData_21306b0[5];
extern __int64 GameData_21306c0[3];
extern __int64 GameData_2130ec0[2];
extern __int64 GameData_2131658[3];
extern __int64 GameData_2131bb0[6];
extern __int64 GameData_2131bd0[2];
extern __int64 GameData_21323c8;
extern __int64 GameData_21759e0;
extern __int64 GameData_2175a30;
extern __int64 GameData_21c9f40;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd108;
extern __int64 GameData_21d9ce8;
extern __int64 GameData_21d9cf0;
extern __int64 GameData_21d9d00;
extern __int64 GameData_21d9d18;
extern __int64 GameData_21d9d20;
extern __int64 GameData_21d9d30;
extern __int64 GameData_21d9d38;
extern __int64 GameData_21d9d48;
extern __int64 GameData_21d9d50;
extern __int64 GameData_21d9d60;
extern __int64 GameData_21d9d68;
extern __int64 GameData_21d9d70;
extern __int64 GameData_21f1e08;
extern __int64 GameData_21f8020;
extern __int64 GameData_220b680;
extern __int64 GameData_22400c8;
extern __int64 GameData_22400d0;
extern __int64 GameData_2240bb0;
extern __int64 GameData_2240bb8;
extern __int64 GameData_2240bd8;
extern __int64 GameData_2240be0;
extern __int64 GameData_2240be8;
extern __int64 GameData_2240bf8;
extern __int64 GameData_2240c08;
extern __int64 GameData_2240c18;
extern __int64 GameData_2240c20;
extern __int64 GameData_2240c28;
extern __int64 GameData_2240c38;
extern __int64 GameData_2240c48;
extern __int64 GameData_2240c58;
extern __int64 GameData_2240c60;
extern __int64 GameData_2240c68;
extern __int64 GameData_2240c78;
extern __int64 GameData_2240c88;
extern __int64 GameData_2240c98;
extern __int64 GameData_2240ca0;
extern __int64 GameData_2240ca8;
extern __int64 GameData_2240cb8;
extern __int64 GameData_2240cc8;
extern __int64 GameData_2240cd8;
extern __int64 GameData_2240ce0;
extern __int64 GameData_2240ce8;
extern __int64 GameData_2240cf8;
extern __int64 GameData_2240d08;
extern __int64 GameData_2240d18;
extern __int64 GameData_2240d20;
extern __int64 GameData_2240d28;
extern __int64 GameData_2240d38;
extern __int64 GameData_2240d48;
extern __int64 GameData_22416c0;
extern __int64 GameData_224b528;
extern __int64 GameData_224b530;
extern __int64 GameData_224b548;
extern __int64 GameData_224b558;
extern __int64 GameData_224b568;
extern __int64 GameData_224b570;
extern __int64 GameData_224b578;
extern __int64 GameData_224b588;
extern __int64 GameData_224b598;
extern __int64 GameData_224b5a8;
extern __int64 GameData_224b5b0;
extern __int64 GameData_224b5b8;
extern __int64 GameData_224b5c8;
extern __int64 GameData_224b5d8;
extern __int64 GameData_224b5e8;
extern __int64 GameData_224b5f0;
extern __int64 GameData_224b608;
extern __int64 GameData_224b618;
extern __int64 GameData_224b628;
extern __int64 GameData_224b630;
extern __int64 GameData_224b638;
extern __int64 GameData_224b648;
extern __int64 GameData_224b658;
extern __int64 GameData_226b6b0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 snd_g_fileIndex;
extern char* GameData_205ada0;
extern char* GameData_20660e0[8];
extern char* GameData_211f0b0;
extern char* GameData_211f0c0;
extern char* GameData_211f0d0;
extern char* GameData_211f0e0;
extern char* game_menu_kTabAnimations[21];
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_21d9d78;
extern char GameData_2240bd0;
extern char GameData_2240c10;
extern char GameData_2240c50;
extern char GameData_2240c90;
extern char GameData_2240cd0;
extern char GameData_2240d10;
extern char GameData_224b520;
extern char GameData_224b560;
extern char GameData_224b5a0;
extern char GameData_224b5e0;
extern char GameData_224b620;
extern int* GameData_2131ac0[16];
extern int GameData_2174ef8;
extern int GameData_2175a38;
extern int GameData_21d9d7c;
extern int GameData_21fdeb8;
extern int GameData_21fdee4;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
extern int GameData_2240bf0;
extern int GameData_2240c00;
extern int GameData_2240c30;
extern int GameData_2240c40;
extern int GameData_2240c70;
extern int GameData_2240c80;
extern int GameData_2240cb0;
extern int GameData_2240cc0;
extern int GameData_2240cf0;
extern int GameData_2240d00;
extern int GameData_2240d30;
extern int GameData_2240d40;
extern int GameData_224b540;
extern int GameData_224b550;
extern int GameData_224b580;
extern int GameData_224b590;
extern int GameData_224b5c0;
extern int GameData_224b5d0;
extern int GameData_224b600;
extern int GameData_224b610;
extern int GameData_224b640;
extern int GameData_224b650;
float fmodf(float, float);
float powf(float, float);
float ui_LayoutAccessor_GetPaneSize(__int64*, __int64);
float ui_LayoutAccessor_GetScale(__int64*);
float ui_LayoutAccessor_SetPaneTranslate(__int64*, const char*, __int64);
float ui_LayoutAccessor_SetTranslate(__int64*, __int64);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
int snprintf(__int64, unsigned __int64, const char*, ...);
int strcmp(const char*, const char*);
long double GameRoutine_58c890(__int64);
unsigned __int64 GameHr_11c4280(__int64, __int64);
unsigned __int64 spine_SkeletonClipping_clipStart(_QWORD*, __int64, __int64);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
unsigned __int8* GameRoutine_112ca90(unsigned __int8* result, int*, _WORD*);
unsigned int* game_6b7f00(unsigned int*, unsigned __int64, unsigned int*,
                          __int64, __int64*);
unsigned __int128 game_6b7f00_pair(unsigned int*, unsigned __int64,
                                   unsigned int*, __int64,
                                   __int64*) __asm__("game_6b7f00");
unsigned int* game_gmap_SpotMgr_GetCurrentSpot();
void AIDeploy_1274f90(_QWORD*, __int64, int, unsigned int*);
void AISupportSkillScope_11fef70(_DWORD*);
void Executor_Unknown2(__int64);
void GameHr_145f010(__int64*, __int64);
void GameHr_156bc80(__int64, float*, float*, float*, _BYTE*, char);
void GameHr_15a8720(__int64, _QWORD*, __int64, char);
void GameRoutine_149fc00(__int64, __int64, _QWORD*);
void GameRoutine_1563f90(__int64, __int64);
void GameRoutine_1564060(__int64*);
void GameRoutine_15a9e40(__int64, _QWORD*, __int64, char);
void GameRoutine_18855c0(_QWORD*, _QWORD*);
void GameRoutine_18d82a0(__int64*, __int64*, __int64, char);
void GameRoutine_1a740();
void GameRoutine_1bc10();
void GameRoutine_6b55a0(__int64, unsigned __int8);
void Layout_13639a0(_QWORD*, __int64);
void Value_77d0(_QWORD*);
void __attribute__((noreturn)) GameRoutine_12e06c0();
void __attribute__((noreturn)) GameRoutine_13688b0();
void __attribute__((noreturn)) GameRoutine_145f710();
void __attribute__((noreturn)) GameRoutine_1637b80();
void __attribute__((noreturn)) GameRoutine_18c7090();
void __attribute__((noreturn)) GameRoutine_18d8270();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_60f930();
void __attribute__((noreturn)) GameRoutine_65c760();
void __attribute__((noreturn)) GameRoutine_6e3e20();
void __attribute__((noreturn)) GameRoutine_c06430();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) fs_60a230();
void __cxa_guard_release(__int64);
void fw_world_InitializeWorker(__int64, __int64, __int64);
void game_18d6470(__int64, __int64, unsigned __int64, int);
void game_191d680(__int64, char);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void std___1_locale_Destroy_locale(__int64);
void ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
__int64 game_11c37e0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, __int64 a5,
                     __int64 a6, char a7);
__int64 game_12a9080(__int64 a1);
__int64 game_12a9b20(__int64 a1, __int64 a2, char a3);
__int64 game_12ddb80(__int64 a1, __int64 a2);
__int64 game_1365740(__int64* a1, _QWORD* a2, _QWORD* a3, __int64 a4,
                     _DWORD* a5, __int64* a6, unsigned int a7);
void game_1366fa0(__int64 a1, __int64 a2, __int64 a3);
void game_1367740(__int64 a1, const char** a2);
__attribute__((swiftcall)) void game_13678f0(PSEUDO_X8 x8_, __int64* result,
                                             const char** a2, __int64 a3,
                                             __int64 a4, __int64 a5);
void game_13681c0(_QWORD* a1, unsigned __int64 a2);
void game_145d160(__int64 a1, __int64 a2);
__int64 game_149efe0(__int64 a1, __int64* a2);
__int64 game_14a0820(__int64* a1);
void game_14a0940(__int64 a1);
void game_14a0f30(__int64* a1);
void game_156c240(__int64* a1);
__attribute__((swiftcall)) void game_156cb80(PSEUDO_X8 x8_, __int64 a1,
                                             const char* a2);
__int64 game_159e7c0(__int64* a1, char a2);
void game_159f000(__int64* a1, __int64* a2, __int64* a3, char a4);
__int64 game_159fa00(__int64* a1, unsigned __int8* a2);
__int64 game_15a0060(__int64 result, _DWORD* a2);
__int64 game_15d1d80();
__attribute__((swiftcall)) void game_1604a30(PSEUDO_X8 x8_, int a1, int a2);
__int64 game_1636200(__int64* a1, int a2, _QWORD* a3);
__int64 game_1637670(__int64 result, __int64 a2);
__int64 game_16602f0(__int64 a1);
__int64 game_1660ac0(__int64** a1);
__attribute__((swiftcall)) void
game_16c7650(PSEUDO_X8 x8_, _QWORD* a1, _QWORD** a2, _BYTE** a3, __int64 a4);
__attribute__((swiftcall)) void
game_16c96a0(PSEUDO_X8 x8_, _QWORD* a1, _QWORD** a2, _BYTE** a3, __int64 a4);
__attribute__((swiftcall)) void
game_16c9820(PSEUDO_X8 x8_, __int64 a1, _QWORD** a2, _BYTE** a3, _QWORD* a4);
__attribute__((swiftcall)) void
game_16d5e40(PSEUDO_X8 x8_, _QWORD* a1, _QWORD** a2, _BYTE** a3, __int64 a4);
__attribute__((swiftcall)) void
game_16d5fc0(PSEUDO_X8 x8_, __int64 a1, _QWORD** a2, _BYTE** a3, _QWORD* a4);
__int64 game_17358f0(__int64* a1, float a2);
void game_183b740(__int64* a1, __int64 a2, char* a3, char* a4, __int64 a5);
__attribute__((swiftcall)) void game_185a6a0(PSEUDO_X8 x8_, unsigned __int8 a1,
                                             unsigned int a2, unsigned int a3);
void game_18c3220(__int64 a1);
void game_18d6580(_QWORD* a1);
void game_18f26a0(__int64 a1, double a2, double a3, double a4, double a5,
                  double a6, float a7);
float32x2_t* game_19132c0(float32x2_t* result, __int64* a2, __int64 a3,
                          __int64 a4, __int64 a5);
__int64 game_1919b00();
void game_191f9e0(__int64 a1, __int64* a2, __int64* a3, __int64* a4);
void game_191ff40(__int64 a1, __int64* a2, __int64* a3, __int64* a4);
__int64 game_1929960(__int64* a1);
void game_19a0960(__int64 a1, __int64* a2);
__attribute__((swiftcall)) void game_19a87a0(PSEUDO_X8 x8_, __int64 a1,
                                             __int64 a2, __int64 a3);

__int64 game_11c37e0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, __int64 a5,
                     __int64 a6, char a7)
{
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  char v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  _QWORD* v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64* v43;
  bool v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  _QWORD* v48;
  _QWORD* v49;
  unsigned __int64 v50;
  __int64 v51;
  int* v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  atomic_ullong* v56;
  unsigned __int64 v57;
  _QWORD* v58;
  __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  char* v68;
  __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  char* v72;
  __int64 v73;
  unsigned __int64 v74;
  _QWORD* v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  char* v87;
  __int64 v88;
  char* v89;
  __int64 v90;
  char v91;
  unsigned __int64 v92;
  char* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  _QWORD* v98;
  struct {
    __int64 v101;
    unsigned __int64 v102;
    __int64 v103;
  } v101_;
  struct {
    __int64 v104;
    unsigned __int64 v105;
    __int64 v106;
  } v104_;
  struct {
    __int64 v107;
    unsigned __int64 v108;
    char* v109;
    char gap104_[8];
    _QWORD* v110;
  } v107_;
  struct {
    __int64 v111;
    unsigned __int64 v112;
    char* v113;
  } v111_;
  struct {
    __int64 v114;
    unsigned __int64 v115;
    char* v116;
  } v114_;
  struct {
    unsigned __int64 v117;
    _QWORD* v118;
  } v117_;
  struct {
    char* v119;
    unsigned __int64 v120;
    char* v121;
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
    char gap392_[8];
    __int64 v143;
    char gap408_[8];
    __int64 v144;
    char gap424_[96];
    __int64 v145;
    __int64 v146;
    char gap536_[8];
    __int64 v147;
    __int64 v148;
    __int64 v149;
    __int64 v150;
    __int64 v151;
    int v152;
    char gap588_[4];
    __int64 v153;
    __int64 v154;
    __int64 v155;
    __int64 v156;
    __int64 v157;
    __int64 v158;
    __int64 v159;
    __int64 v160;
    __int64 v161;
  } v119_;

  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)a1 = 0;
  v13 = strlen(a2);
  if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_172;
  }
  v14 = v13;
  if (v13 >= 0x17) {
    if ((v13 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v13 | 7) + 1;
    }
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v16, 16, 0);
    *(_QWORD*)(a1 + 32) = v14;
    *(_QWORD*)(a1 + 40) = v15;
    *(_QWORD*)(a1 + 24) = v16 | 1;
    goto LABEL_9;
  }
  v15 = a1 + 25;
  *(_BYTE*)(a1 + 24) = 2 * v13;
  if (v13 != 0) {
  LABEL_9:
    memmove(v15, a2, v14);
  }
  *(_BYTE*)(v15 + v14) = 0;
  v17 = strlen(a3);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_172;
  }
  v18 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v17 | 7) + 1;
    }
    v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v20, 16, 0);
    *(_QWORD*)(a1 + 56) = v18;
    *(_QWORD*)(a1 + 64) = v19;
    *(_QWORD*)(a1 + 48) = v20 | 1;
    goto LABEL_18;
  }
  v19 = a1 + 49;
  *(_BYTE*)(a1 + 48) = 2 * v17;
  if (v17 != 0) {
  LABEL_18:
    memmove(v19, a3, v18);
  }
  *(_BYTE*)(v19 + v18) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  v21 = strlen(a6);
  if (v21 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_172;
  }
  v22 = a7 & 1;
  v23 = v21;
  if (v21 >= 0x17) {
    if ((v21 | 7) == 0x17) {
      v25 = 26;
    }
    else {
      v25 = (v21 | 7) + 1;
    }
    v24 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v25, 16, 0);
    *(_QWORD*)(a1 + 104) = v23;
    *(_QWORD*)(a1 + 112) = v24;
    *(_QWORD*)(a1 + 96) = v25 | 1;
  }
  else {
    v24 = a1 + 97;
    *(_BYTE*)(a1 + 96) = 2 * v21;
    if (v21 == 0) {
      goto LABEL_28;
    }
  }
  memmove(v24, a6, v23);
LABEL_28:
  *(_BYTE*)(v24 + v23) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_BYTE*)(a1 + 128) = v22;
  *(_WORD*)(a1 + 129) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_BYTE*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 216) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 196) = 0;
  *(_QWORD*)(a1 + 204) = 0;
  *(_DWORD*)(a1 + 212) = 0;
  *(_DWORD*)(a1 + 224) = 0;
  *(_BYTE*)(a1 + 228) = 0;
  *(_WORD*)(a1 + 240) = 0;
  *(_BYTE*)(a1 + 256) = 0;
  *(_BYTE*)(a1 + 272) = 0;
  *(_BYTE*)(a1 + 288) = 0;
  *(_BYTE*)(a1 + 304) = 0;
  *(_DWORD*)(a1 + 232) = -1;
  v27 = *(_QWORD*)(a1 + 72);
  v26 = *(_QWORD*)(a1 + 80);
  *(_DWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_DWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  v28 = fw_memory_g_heap_manager_ptr;
  if (v27 != v26) {
    v29 = v26;
    do {
      v30 = *(_BYTE*)(v29 - 24);
      v29 -= 24;
      if ((v30 & 1) != 0) {
        v31 = *(_QWORD*)(v26 - 8);
        if (v31 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v28 + 200LL) != 0) {
            v32 = 128;
          }
          else {
            v32 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v28 + v32, v31);
        }
      }
      v26 = v29;
    } while (v29 != v27);
  }
  *(_QWORD*)(a1 + 80) = v27;
  v34 = (_QWORD*)*a4;
  v33 = (_QWORD*)a4[1];
  if ((_QWORD*)*a4 != v33) {
    while (1) {
      v35 = *v34;
      v36 = strlen(*v34);
      if (v36 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_172;
      }
      v37 = v36;
      if (v36 >= 0x17) {
        break;
      }
      v38 = (char*)&v119_.v119 + 1;
      LOBYTE(v119_.v119) = 2 * v36;
      if (v36 != 0) {
        goto LABEL_48;
      }
    LABEL_49:
      v38[v37] = 0;
      GameRoutine_7a8220((_QWORD*)(a1 + 72), &v119_.v119);
      if (((unsigned __int8)v119_.v119 & 1) != 0 && v119_.v121 != nullptr) {
        v40 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v40 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v119_.v121);
      }
      if (++v34 == v33) {
        goto LABEL_54;
      }
    }
    if ((v36 | 7) == 0x17) {
      v39 = 26;
    }
    else {
      v39 = (v36 | 7) + 1;
    }
    v38 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v39, 16, 0);
    v119_.v120 = v37;
    v119_.v121 = v38;
    v119_.v119 = (char*)(v39 | 1);
  LABEL_48:
    memmove(v38, v35, v37);
    goto LABEL_49;
  }
LABEL_54:
  v41 = game_HashString(a3);
  if (v41 == 0) {
    v47 = 0;
    v43 = (__int64*)fw_memory_g_heap_manager_ptr;
    goto LABEL_80;
  }
  v42 = *(_QWORD*)(*GameData_212cb48[0] + 96);
  v43 = (__int64*)fw_memory_g_heap_manager_ptr;
  v44 = v42 == 0 || *(_QWORD*)(*GameData_212cb48[0] + 112) == 0;
  if (v44) {
    goto LABEL_79;
  }
  v45 = v42 - 1;
  if ((v42 & (v42 - 1)) != 0) {
    v46 = v41;
    if (v41 >= v42) {
      v46 = v41 % v42;
    }
  }
  else {
    v46 = v45 & v41;
  }
  v48 = *(_QWORD**)(*(_QWORD*)(*GameData_212cb48[0] + 88) + 8 * v46);
  if (v48 == nullptr || (v49 = (_QWORD*)*v48) == nullptr) {
  LABEL_79:
    v47 = 0;
    goto LABEL_80;
  }
  if ((v42 & v45) == 0) {
    while (1) {
      v51 = v49[1];
      if (v51 == v41) {
        if (v49[2] == v41) {
          goto LABEL_171;
        }
      }
      else if ((v51 & v45) != v46) {
        goto LABEL_79;
      }
      v49 = (_QWORD*)*v49;
      v47 = 0;
      if (v49 == nullptr) {
        goto LABEL_80;
      }
    }
  }
  while (1) {
    v50 = v49[1];
    if (v50 == v41) {
      break;
    }
    if (v50 >= v42) {
      v50 %= v42;
    }
    if (v50 != v46) {
      goto LABEL_79;
    }
  LABEL_69:
    v49 = (_QWORD*)*v49;
    if (v49 == nullptr) {
      goto LABEL_79;
    }
  }
  if (v49[2] != v41) {
    goto LABEL_69;
  }
LABEL_171:
  v47 = v49[3];
LABEL_80:
  *(_QWORD*)(a1 + 168) = v47;
  v119_.v143 = 0;
  v119_.v144 = 0;
  v119_.v119 = nullptr;
  v119_.v120 = 0;
  v119_.v121 = nullptr;
  v119_.v122 = 0;
  v119_.v123 = 0;
  v119_.v124 = 0;
  v119_.v125 = 0;
  v119_.v126 = 0;
  v119_.v127 = 0;
  v119_.v128 = 0;
  v119_.v129 = 0;
  v119_.v130 = 0;
  v119_.v152 = 1065353216;
  v52 = (int*)GameData_21d9d18;
  v53 = GameData_21d9d20;
  v119_.v131 = 0;
  v119_.v132 = 0;
  v119_.v133 = 0;
  v119_.v134 = 0;
  v119_.v135 = 0;
  v119_.v136 = 0;
  v119_.v137 = 0;
  v119_.v138 = 0;
  v119_.v139 = 0;
  v119_.v140 = 0;
  v119_.v141 = 0;
  v119_.v142 = 0;
  v119_.v146 = 0;
  v119_.v145 = 0;
  v119_.v147 = 0;
  v119_.v148 = 0;
  v119_.v149 = 0;
  v119_.v150 = 0;
  v119_.v151 = 0;
  v119_.v153 = 0;
  v119_.v154 = 0;
  v119_.v155 = 0;
  v119_.v156 = 0;
  v119_.v157 = 0;
  v119_.v158 = 0;
  v119_.v159 = 0;
  v119_.v160 = 0;
  v119_.v161 = 0;
  if (GameData_21d9d18 != GameData_21d9d20) {
    do {
      v54 = *v52++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v54) = 0;
    } while (v52 != (int*)v53);
    v52 = (int*)GameData_21d9d18;
  }
  GameData_21d9d20 = (__int64)v52;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d50 = GameData_21d9d48;
  GameData_21d9d78 = 8;
  GameHr_11c4280(a1, (__int64)&v119_.v119);
  v55 = (_QWORD*)fw_memory_HeapManager_Allocate(*v43, 11832, 16, 0);
  v55[2] = 0;
  v55[1] = 0;
  v56 = (atomic_ullong*)(v55 + 1);
  v57 = (unsigned __int64)(v55 + 3);
  v58 = v55;
  *v55 = GameData_212d3c8[0] + 2;
  CharacterAppearance_10735d0((__int64)(v55 + 3));
  game_character_CharacterAppearance_Setup(v57, &v119_.v119);
  v117_.v117 = v57;
  v117_.v118 = v58;
  atomic_fetch_add_explicit(v56, 1u, memory_order_relaxed);
  v64 = *(_QWORD*)(a1 + 144);
  *(_QWORD*)(a1 + 136) = v57;
  *(_QWORD*)(a1 + 144) = v58;
  if (v64 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64);
    std___1___shared_weak_count___release_weak(v64);
  }
  if (*(_BYTE*)(a1 + 128) == 1) {
    v65 = strlen(a2);
    if (v65 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_172;
    }
    v66 = v65;
    if (v65 >= 0x17) {
      if ((v65 | 7) == 0x17) {
        v69 = 26;
      }
      else {
        v69 = (v65 | 7) + 1;
      }
      v67 = a5;
      v68 = (char*)fw_memory_HeapManager_Allocate(*v43, v69, 16, 0);
      v114_.v115 = v66;
      v114_.v116 = v68;
      v114_.v114 = v69 | 1;
    }
    else {
      v67 = a5;
      LOBYTE(v114_.v114) = 2 * v65;
      v68 = (char*)&v114_.v114 + 1;
      if (v65 == 0) {
      LABEL_96:
        v68[v66] = 0;
        v70 = strlen(v67);
        if (v70 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_172;
        }
        v71 = v70;
        if (v70 >= 0x17) {
          if ((v70 | 7) == 0x17) {
            v73 = 26;
          }
          else {
            v73 = (v70 | 7) + 1;
          }
          v72 = (char*)fw_memory_HeapManager_Allocate(*v43, v73, 16, 0);
          v111_.v112 = v71;
          v111_.v113 = v72;
          v111_.v111 = v73 | 1;
        }
        else {
          LOBYTE(v111_.v111) = 2 * v70;
          v72 = (char*)&v111_.v111 + 1;
          if (v70 == 0) {
          LABEL_105:
            v74 = (unsigned __int8)v114_.v114;
            v72[v71] = 0;
            if ((v74 & 1) != 0) {
              fw_text_String_CopyTerminated(&v101_.v101, (__int64)v114_.v116,
                                            v114_.v115);
            }
            else {
              v101_.v101 = v114_.v114;
              v101_.v102 = v114_.v115;
              v101_.v103 = (__int64)v114_.v116;
            }
            if ((v111_.v111 & 1) != 0) {
              fw_text_String_CopyTerminated(&v104_.v104, (__int64)v111_.v113,
                                            v111_.v112);
            }
            else {
              v104_.v104 = v111_.v111;
              v104_.v105 = v111_.v112;
              v104_.v106 = (__int64)v111_.v113;
            }
            v75 = (_QWORD*)fw_memory_HeapManager_Allocate(*v43, 64, 16, 0);
            v76 = v101_.v101;
            v77 = v101_.v102;
            v107_.v110 = v75;
            v101_.v101 = 0;
            v101_.v102 = 0;
            *v75 =
                game_evt_demo_CharacterWork_CharacterWork_lambda0_Destructor_ptr;
            v75[1] = a1;
            v78 = v101_.v103;
            v75[2] = v76;
            v75[3] = v77;
            v79 = v104_.v104;
            v80 = v104_.v105;
            v101_.v103 = 0;
            v104_.v104 = 0;
            v75[4] = v78;
            v75[5] = v79;
            v81 = v104_.v106;
            v104_.v105 = 0;
            v104_.v106 = 0;
            v75[6] = v80;
            v75[7] = v81;
            *(_QWORD*)(a1 + 152) =
                GameHr_10784f0((__int64)&v117_.v117, 0, (__int64)&v107_.v107);
            if (v107_.v110 == &v107_.v107) {
              v82 = 32;
            LABEL_115:
              (*(void (**)(__int64))(*v107_.v110 + v82))((__int64)v107_.v110);
            }
            else if (v107_.v110 != nullptr) {
              v82 = 40;
              goto LABEL_115;
            }
            if ((v104_.v104 & 1) != 0 && v104_.v106 != 0) {
              v83 = 128;
              if (*(_QWORD*)(*v43 + 200) == 0) {
                v83 = 56;
              }
              nn_mem_StandardAllocator_Free(*v43 + v83, v104_.v106);
            }
            if ((v101_.v101 & 1) != 0 && v101_.v103 != 0) {
              v84 = 128;
              if (*(_QWORD*)(*v43 + 200) == 0) {
                v84 = 56;
              }
              nn_mem_StandardAllocator_Free(*v43 + v84, v101_.v103);
            }
            v85 = v114_.v115;
            if ((v74 & 1) == 0) {
              v85 = v74 >> 1;
            }
            if (v85 <= 3) {
              fs_60a230();
            }
            v44 = (v74 & 1) == 0;
            v86 = v85 - 4;
            if (v44) {
              v87 = (char*)&v114_.v114 + 5;
            }
            else {
              v87 = v114_.v116 + 4;
            }
            if (v86 < 0xFFFFFFFFFFFFFFF7LL) {
              v88 = *(_QWORD*)(a1 + 152);
              if (v86 >= 0x17) {
                if ((v86 | 7) == 0x17) {
                  v90 = 26;
                }
                else {
                  v90 = (v86 | 7) + 1;
                }
                v89 = (char*)fw_memory_HeapManager_Allocate(*v43, v90, 16, 0);
                v107_.v108 = v86;
                v107_.v109 = v89;
                v107_.v107 = v90 | 1;
              }
              else {
                LOBYTE(v107_.v107) = 2 * v86;
                v89 = (char*)&v107_.v107 + 1;
                if (v85 == 4) {
                LABEL_141:
                  v89[v86] = 0;
                  v91 = v107_.v107;
                  if ((v107_.v107 & 1) != 0) {
                    v92 = v107_.v108;
                  }
                  else {
                    v92 = (unsigned __int64)(unsigned __int8)v107_.v107 >> 1;
                  }
                  if (v92 != 0) {
                    if ((v107_.v107 & 1) != 0) {
                      v93 = v107_.v109;
                    }
                    else {
                      v93 = (char*)&v107_.v107 + 1;
                    }
                    if (v92 >= 0xFF) {
                      v94 = 255;
                    }
                    else {
                      v94 = v92;
                    }
                    memmove(v88 + 16, v93, v94);
                  }
                  *(_QWORD*)(v88 + 272) = v92;
                  *(_BYTE*)(v88 + 16 + v92) = 0;
                  if ((v91 & 1) != 0 && v107_.v109 != nullptr) {
                    v95 = 128;
                    if (*(_QWORD*)(*v43 + 200) == 0) {
                      v95 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v43 + v95, v107_.v109);
                  }
                  if ((v111_.v111 & 1) != 0 && v111_.v113 != nullptr) {
                    v96 = 128;
                    if (*(_QWORD*)(*v43 + 200) == 0) {
                      v96 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v43 + v96, v111_.v113);
                  }
                  if ((v114_.v114 & 1) != 0 && v114_.v116 != nullptr) {
                    v97 = 128;
                    if (*(_QWORD*)(*v43 + 200) == 0) {
                      v97 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v43 + v97, v114_.v116);
                  }
                  goto LABEL_167;
                }
              }
              memmove(v89, v87, v86);
              goto LABEL_141;
            }
          LABEL_172:
            String_60a1d0();
          }
        }
        memcpy(v72, v67, v71);
        goto LABEL_105;
      }
    }
    memcpy(v68, a2, v66);
    goto LABEL_96;
  }
LABEL_167:
  v98 = v117_.v118;
  if (v117_.v118 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v117_.v118 + 1),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v98 + 16LL))(v98);
    std___1___shared_weak_count___release_weak(v98);
  }
  return TrickEntity_7d1480((__int64)&v119_.v119);
}

__int64 game_12a9080(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  signed int v11;
  unsigned int v12;
  signed int v13;
  bool v14;
  bool v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  int v32;
  unsigned __int16* v33;
  bool v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64* v38;
  int v39;
  int v40;
  int v41;
  __int64 v42;
  int v43;
  int v44;
  int v45;
  __int64 v46;
  char* v47;
  __int64 v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  bool v54;
  int v55;
  int v56;
  bool v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  bool v65;
  int v66;
  int v67;
  int v68;
  bool v69;
  int v70;
  int v71;
  int v72;
  int v73;
  bool v74;
  int v75;
  int v76;
  bool v77;
  int v78;
  int v79;
  int v81;
  int v82;
  int v83;
  char* v84;
  int v85;
  int v86;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  unsigned int v93;
  int v94;
  int v95;
  unsigned int v96;
  bool v97;
  __int64 v99;
  __int64* v100;
  __int64* v101;
  __int16 v102;
  unsigned int v103;
  __int64 v104;
  char v105;
  __int64 v106;
  __int64 v107;
  unsigned int v108;
  bool v109;
  unsigned int* v110;
  int v111;
  unsigned int v112;
  int v113;
  signed int v114;
  unsigned int v115;
  int v116;
  int v117;
  __int64* v118;
  int v119;
  unsigned int v120;
  int v121;
  char* v122;
  unsigned int v123;
  __int64 v124;
  int v125;
  int v126;
  int v127;
  __int64* v128;
  int v129;
  int v130;
  int v131;
  int v132;
  unsigned int v133;
  __int64* v134;
  __int64 v135;
  __int64 v136;
  int v137;
  __int64 v138;
  struct {
    __int64 (*v139[4])();
    __int64* v140;
    char gap216_[72];
    char v141;
  } v139_;
  unsigned int v142;
  struct {
    _QWORD v143[4];
    _QWORD* v144;
  } v143_;
  struct {
    __int64 (*v145)();
    __int64 (*v146)();
    __int64 v147;
    int v148;
    char gap380_[4];
    __int64* v149;
    __int64 v150;
    __int64 v151;
    __int64 v152;
    __int64 v153;
    __int64 v154;
    __int64 v155;
    __int64 v156;
  } v145_;

  if (*(_BYTE*)(a1 + 2240) == 4) {
    return 0;
  }
  v1 = *(_QWORD*)(a1 + 8);
  v2 = a1;
  if (!game_Unit_Unknown6c90c0(v1)) {
    return 0;
  }
  v3 = (__int64*)v139_.v139;
  v4 = 876;
  v139_.v140 = (__int64*)v139_.v139;
  v145_.v145 = (__int64 (*)())v1;
  LOBYTE(v143_.v143[0]) = 0;
  v139_.v139[0] = (__int64 (*)())(GameData_2130910[0] + 2);
  v139_.v139[1] = game_11f3b70_ptr[0];
  while (1) {
    v5 = (*(__int64 (**)(__int64*, __int64 (**)(void), __int64, _QWORD*))(
        *v3 + 48))(v3, &v145_.v145, v1 + v4, v143_.v143);
    v3 = v139_.v140;
    if ((v5 & 1) != 0 || v4 == 1060) {
      break;
    }
    v4 += 8;
    v145_.v145 = (__int64 (*)())v1;
    LOBYTE(v143_.v143[0]) = 0;
    if (v139_.v140 == nullptr) {
      GameRoutine_60a310();
    }
  }
  if (v139_.v140 == (__int64*)v139_.v139) {
    v6 = 32;
  }
  else {
    if (v139_.v140 == nullptr) {
      goto LABEL_13;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v139_.v140 + v6))((__int64)v139_.v140);
LABEL_13:
  if ((v5 & 1) == 0) {
    return 0;
  }
  v7 = GameData_21306c0[0];
  (**(void (***)(__int64, _QWORD))(*(_QWORD*)GameData_21306c0[0] + 32LL))(
      *(_QWORD*)GameData_21306c0[0] + 32LL, *(_QWORD*)(v2 + 8));
  v142 = 2;
  v8 = GameData_21306a0[0];
  AIDeploy_1274f90(*(_QWORD**)GameData_21306a0[0], *(_QWORD*)(v2 + 8), -1,
                   &v142);
  v9 = *(_QWORD*)(v2 + 8);
  v129 = *(char*)(v9 + 585);
  v130 = *(char*)(v9 + 584);
  GameRoutine_11fe0c0((__int64)v139_.v139, v9);
  v10 = *GameData_212ce98[0];
  v11 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  v115 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
  if (v11 > v115 || (v12 = *(unsigned __int8*)(v10 + 30),
                     (v114 = *(unsigned __int8*)(v10 + 28)) > v12)) {
  LABEL_200:
    v103 = 0;
    goto LABEL_201;
  }
  v118 = nullptr;
  v120 = 0;
  v135 = v9 + 828;
  v136 = v9;
  v124 = v2;
  v123 = *(unsigned __int8*)(v10 + 30);
  v122 = (char*)GameData_2130948 + 16;
  v134 = GameData_2130918[0] + 2;
  v125 = -1;
  v121 = -1;
  v119 = -1;
  v116 = -1;
  v117 = -1;
  while (2) {
    v13 = v114;
    v126 = 32 * v11;
    while (2) {
      if ((GameRoutine_747a00(*(_QWORD*)(*(_QWORD*)v8 + 8LL), v13, v11,
                              *(_QWORD*)(v2 + 8), 0) &
           1) == 0) {
        goto LABEL_20;
      }
      v14 = (signed __int32)*(_DWORD*)(*(_QWORD*)v7 + 40LL) <= v13 &&
            v13 <= (signed __int32)*(_DWORD*)(*(_QWORD*)v7 + 44LL);
      v15 = v14 && (signed __int32)*(_DWORD*)(*(_QWORD*)v7 + 48LL) <= v11;
      if (!v15 || v11 > (signed __int32)*(_DWORD*)(*(_QWORD*)v7 + 52LL)) {
        goto LABEL_20;
      }
      v145_.v148 = 0;
      v145_.v146 = nullptr;
      v145_.v147 = 0;
      v145_.v145 = nullptr;
      v145_.v149 = nullptr;
      v145_.v150 = 0;
      v145_.v151 = 0;
      v145_.v152 = 0;
      v145_.v153 = 0;
      v145_.v154 = 0;
      v16 = *GameData_212ce98[0];
      v145_.v155 = 0;
      v145_.v156 = 0;
      v143_.v144 = v143_.v143;
      v17 = *(_QWORD*)(v16 + 96);
      v143_.v143[0] = v122;
      v143_.v143[1] = &v145_.v145;
      Image_72c060(v17, (__int64)v139_.v139[0], v13, v11, (__int64)v143_.v143);
      if (v143_.v144 == v143_.v143) {
        v18 = 32;
      }
      else {
        if (v143_.v144 == nullptr) {
          goto LABEL_36;
        }
        v18 = 40;
      }
      (*(void (**)(__int64))(*v143_.v144 + v18))((__int64)v143_.v144);
    LABEL_36:
      v19 = (__int64)v139_.v139[0];
      v20 = *((_QWORD*)v139_.v139[0] + 210);
      if ((int)((unsigned __int64)(*((_QWORD*)v139_.v139[0] + 211) - v20) >>
                2) >= 1) {
        v21 = *((_QWORD*)v139_.v139[0] + 206);
        *((_QWORD*)v139_.v139[0] + 211) = v20;
        v22 = *(_DWORD*)(v19 + 416);
        *(_DWORD*)(v19 + 1672) = 0;
        *(_QWORD*)(v19 + 1728) = 0;
        *(_QWORD*)(v19 + 1736) = 0;
        *(_QWORD*)(v19 + 1656) = v21;
        if ((v22 & 0x10000000) == 0) {
          *(_DWORD*)(v19 + 416) = v22 | 0x10000000;
          game_6c51e0(v19);
          GameRoutine_6c6da0(v19);
          game_6c6ec0(v19);
          *(_DWORD*)(v19 + 416) &= ~0x10000000u;
          v19 = (__int64)v139_.v139[0];
        }
      }
      GameHr_84cf20(v19 + 1648, (__int64)&v145_.v145, 1);
      v23 = (__int64)v139_.v139[0];
      v24 = *((_DWORD*)v139_.v139[0] + 104);
      *((_BYTE*)v139_.v139[0] + 584) = v13;
      *(_BYTE*)(v23 + 585) = v11;
      if ((v24 & 0x10000000) == 0) {
        *(_DWORD*)(v23 + 416) = v24 | 0x10000000;
        game_6c51e0(v23);
        GameRoutine_6c6da0(v23);
        game_6c6ec0(v23);
        *(_DWORD*)(v23 + 416) &= ~0x10000000u;
      }
      v139_.v141 = 1;
      if (v145_.v152 != 0) {
        v145_.v153 = v145_.v152;
        v25 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v145_.v152);
      }
      if (v145_.v149 != nullptr) {
        v145_.v150 = (__int64)v145_.v149;
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, (__int64)v145_.v149);
      }
      if (v145_.v145 != nullptr) {
        v145_.v146 = v145_.v145;
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, (__int64)v145_.v145);
      }
      v128 = nullptr;
      v133 = 0;
      v28 = 0;
      v29 = *GameData_2130988[0];
      LODWORD(v30) = v13 + v126;
      if ((unsigned int)(v13 + v126) >= 0x400) {
        v30 = 0;
      }
      else {
        v30 = (unsigned int)v30;
      }
      v31 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v8 + 12880LL) + v30 + 64);
      if (v31 >= 0x65) {
        v32 = 0;
      }
      else {
        v32 = 413696 - (v31 << 12);
      }
      v127 = -1;
      v131 = v32;
      v132 = -1;
      v137 = -1;
      do {
        v145_.v145 = (__int64 (*)())v134;
        v33 = (unsigned __int16*)(v135 + 8 * v28);
        v145_.v146 = GameData_2130698;
        v145_.v149 = (__int64*)&v145_.v145;
        if (*v33 == 0) {
          GameRoutine_11f7b10(&v145_.v145);
          goto LABEL_61;
        }
        v143_.v143[0] =
            *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v33);
        v34 =
            (GameRoutine_11f7b30((__int64)&v145_.v145, v143_.v143) & 1) != 0 &&
            game_Unit_Unknown6c90c0(v136) && UnitItem_6e8e50(v33, v136);
        if (v145_.v149 == (__int64*)&v145_.v145) {
          v35 = 32;
          goto LABEL_71;
        }
        if (v145_.v149 != nullptr) {
          v35 = 40;
        LABEL_71:
          (*(void (**)(__int64))(*v145_.v149 + v35))((__int64)v145_.v149);
        }
        if (v34 && (game_AITarget_EnumerateAssist(v29, v136, v13, v11, v28) &
                    1) != 0) {
          v138 = *(unsigned int*)(v29 + 12356);
          if ((int)v138 >= 1) {
            v36 = 0;
            while (1) {
              v37 = (char*)(v29 + 68 + 12 * v36);
              v38 = v37[5] != 0 ? game_UnitPool_Get(v37 + 5) : nullptr;
              v39 = v37[1];
              v40 = v37[2];
              if ((GameRoutine_1276580(v29, v36) & 1) != 0) {
                v41 = *(_DWORD*)(v29 + 24700);
                if (v41 >= 1) {
                  break;
                }
              }
            LABEL_77:
              if (++v36 == v138) {
                goto LABEL_61;
              }
            }
            if ((unsigned int)v41 >= 4) {
              v47 = (char*)(v29 + 12437);
              v43 = -1;
              v44 = -1;
              v48 = 0;
              v45 = -1;
              do {
                v49 = *(v47 - 24);
                v50 = *(v47 - 23);
                v51 = v39 - v49;
                if (v39 - v49 < 0) {
                  v51 = v49 - v39;
                }
                v52 = v40 - v50;
                if (v40 - v50 < 0) {
                  v52 = v50 - v40;
                }
                v53 = v52 + v51;
                v54 = v53 <= v45;
                if (v53 > v45) {
                  v55 = *(v47 - 23);
                }
                else {
                  v53 = v45;
                  v55 = v44;
                }
                if (v54) {
                  v56 = v43;
                }
                else {
                  v56 = *(v47 - 24);
                }
                v57 = v13 == v49 && v11 == v50;
                if (!v57) {
                  v45 = v53;
                }
                v58 = *(v47 - 12);
                if (v57) {
                  v59 = v44;
                }
                else {
                  v59 = v55;
                }
                v60 = *(v47 - 11);
                if (v57) {
                  v61 = v43;
                }
                else {
                  v61 = v56;
                }
                v62 = v39 - v58;
                if (v39 - v58 < 0) {
                  v62 = v58 - v39;
                }
                v63 = v40 - v60;
                if (v40 - v60 < 0) {
                  v63 = v60 - v40;
                }
                v64 = v63 + v62;
                v65 = v64 <= v45;
                if (v64 > v45) {
                  v66 = *(v47 - 11);
                }
                else {
                  v64 = v45;
                  v66 = v59;
                }
                if (v65) {
                  v67 = v61;
                }
                else {
                  v67 = *(v47 - 12);
                }
                v57 = v13 == v58;
                v68 = *v47;
                v69 = v57 && v11 == v60;
                v70 = v47[1];
                if (!v69) {
                  v45 = v64;
                  v59 = v66;
                  v61 = v67;
                }
                v71 = v39 - v68;
                if (v39 - v68 < 0) {
                  v71 = v68 - v39;
                }
                v72 = v40 - v70;
                if (v40 - v70 < 0) {
                  v72 = v70 - v40;
                }
                v73 = v72 + v71;
                v74 = v73 <= v45;
                if (v73 > v45) {
                  v75 = v47[1];
                }
                else {
                  v73 = v45;
                  v75 = v59;
                }
                if (v74) {
                  v76 = v61;
                }
                else {
                  v76 = *v47;
                }
                v77 = v13 == v68 && v11 == v70;
                if (v77) {
                  v44 = v59;
                }
                else {
                  v44 = v75;
                }
                v78 = v47[12];
                if (v77) {
                  v43 = v61;
                }
                else {
                  v43 = v76;
                }
                v79 = v47[13];
                if (!v77) {
                  v45 = v73;
                }
                if (v13 != v78 || v11 != v79) {
                  v81 = v39 - v78;
                  if (v39 - v78 < 0) {
                    v81 = v78 - v39;
                  }
                  v82 = v40 - v79;
                  if (v40 - v79 < 0) {
                    v82 = v79 - v40;
                  }
                  v83 = v82 + v81;
                  if (v83 > v45) {
                    v45 = v83;
                    v44 = v47[13];
                    v43 = v47[12];
                  }
                }
                v48 -= 4;
                v47 += 48;
              } while (-(__int64)(v41 & 0x7FFFFFFC) != v48);
              v42 = -v48;
              v46 = v41 & 3;
              if (v46 == 0) {
                goto LABEL_168;
              }
            }
            else {
              v42 = 0;
              v43 = -1;
              v44 = -1;
              v45 = -1;
              v46 = v41 & 3;
              if (v46 == 0) {
              LABEL_168:
                if ((v43 & 0x80000000) == 0) {
                  v91 = v39 - v130;
                  if (v39 - v130 < 0) {
                    v91 = v130 - v39;
                  }
                  v92 = v40 - v129;
                  if (v40 - v129 < 0) {
                    v92 = v129 - v40;
                  }
                  v93 = v92 + v91;
                  if (v93 >= 0xFF) {
                    v94 = 255;
                  }
                  else {
                    v94 = v93;
                  }
                  if (v45 >= 255) {
                    v95 = 255;
                  }
                  else {
                    v95 = v45;
                  }
                  v96 = v131 + (v94 << 20) + 16 * v95 +
                        game_11f51f0(v136, v13, v11);
                  if (v137 < 0 || v133 < v96 ||
                      (v133 <= v96 ? (v97 = (v137 | (v132 << 16)) <=
                                            (*((char*)v38 + 584) |
                                             (*((char*)v38 + 585) << 16)))
                                   : (v97 = true),
                       !v97)) {
                    v127 = v28;
                    v132 = v44;
                    v133 = v96;
                    v137 = v43;
                    v128 = v38;
                  }
                }
                goto LABEL_77;
              }
            }
            v84 = (char*)(v29 + 12414 + 12 * v42);
            do {
              v85 = *(v84 - 1);
              v86 = *v84;
              if (v13 != v85 || v11 != v86) {
                v88 = v39 - v85;
                if (v39 - v85 < 0) {
                  v88 = v85 - v39;
                }
                v89 = v40 - v86;
                if (v40 - v86 < 0) {
                  v89 = v86 - v40;
                }
                v90 = v89 + v88;
                if (v90 > v45) {
                  v45 = v90;
                  v44 = *v84;
                  v43 = *(v84 - 1);
                }
              }
              v84 += 12;
              --v46;
            } while (v46 != 0);
            goto LABEL_168;
          }
        }
      LABEL_61:
        ++v28;
      } while (v28 != 30);
      if (v137 < 0) {
        v2 = v124;
        v7 = GameData_21306c0[0];
        v8 = GameData_21306a0[0];
        v12 = v123;
      }
      else {
        v2 = v124;
        v7 = GameData_21306c0[0];
        v8 = GameData_21306a0[0];
        v12 = v123;
        if (v125 < 0 || v121 < 0 || v120 < v133 ||
            v120 <= v133 && (v121 | (v119 << 16)) > (v137 | (v132 << 16))) {
          v125 = v13;
          v118 = v128;
          v120 = v133;
          v121 = v137;
          v119 = v132;
          v116 = v11;
          v117 = v127;
        }
      }
    LABEL_20:
      v57 = v13++ == v12;
      if (!v57) {
        continue;
      }
      break;
    }
    v57 = v11++ == v115;
    if (!v57) {
      continue;
    }
    break;
  }
  if (v125 < 0) {
    goto LABEL_200;
  }
  v99 = *GameData_212cfd0[0];
  *(_DWORD*)(*GameData_212cfd0[0] + 40) = v117;
  if (v117 < 0) {
    v100 = v118;
    *(_QWORD*)(v99 + 44) = 0;
  }
  else {
    v100 = v118;
    if (*(_BYTE*)(v99 + 8) != 0 &&
        game_UnitPool_Get((_BYTE*)(v99 + 8)) != nullptr) {
      v101 = &game_UnitPool_Get((_BYTE*)(v99 + 8))[v117];
      v102 = *((_WORD*)v101 + 414);
      *(_BYTE*)(v99 + 46) = *((_BYTE*)v101 + 830);
      *(_WORD*)(v99 + 44) = v102;
      *(_BYTE*)(v99 + 47) = *((_BYTE*)v101 + 831);
      *(_DWORD*)(v99 + 48) = *((_DWORD*)v101 + 208);
    }
  }
  *(_DWORD*)(v99 + 12) = v125;
  *(_DWORD*)(v99 + 16) = v116;
  *(_BYTE*)(v99 + 20) = 4;
  if (v100 != nullptr) {
    *(_BYTE*)(v99 + 317) = *((_BYTE*)v100 + 2088);
    *(_WORD*)(v99 + 313) = *((_WORD*)v100 + 292);
    v104 = v100[55];
    if (v104 != 0) {
      v105 = *(_BYTE*)(v104 + 16);
      goto LABEL_208;
    }
  }
  else {
    *(_BYTE*)(v99 + 317) = 0;
  }
  v105 = 9;
LABEL_208:
  *(_BYTE*)(v99 + 315) = v105;
  *(_BYTE*)(v99 + 313) = v121;
  *(_BYTE*)(v99 + 314) = v119;
  v106 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                    8LL * *(unsigned __int16*)(*(_QWORD*)(v2 + 8) + 8LL * v117 +
                                               828));
  v107 = *(_QWORD*)(v106 + 192);
  v108 = *(unsigned __int8*)(v106 + 72);
  v109 = v107 == 0 || v108 > 7;
  if (v109 || *(_BYTE*)(v107 + 105) == 0 || *(_BYTE*)(v107 + 104) == 2) {
    v111 = *(_DWORD*)(v99 + 56);
    v110 = (unsigned int*)(v99 + 56);
    v112 = v111 & 0xFFFFF000;
  }
  else {
    v113 = *(_DWORD*)(v99 + 56);
    v110 = (unsigned int*)(v99 + 56);
    v112 = v113 & 0xFFFFF000 | *(_WORD*)(v107 + 16) & 0xFFF;
  }
  *v110 = v112;
  v103 = 1;
LABEL_201:
  AISupportSkillScope_11fef70(v139_.v139);
  return v103;
}

__int64 game_12a9b20(__int64 a1, __int64 a2, char a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int16 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  char v16;
  _BYTE* v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BOOL4 v22;
  __int64 v23;
  _QWORD v24[2];
  int v25;

  v6 = GameData_21306b0[0];
  *(_QWORD*)a1 = a2;
  v7 = a1 + 16;
  v24[0] = v6 + 16;
  v24[1] = a1;
  GameRoutine_6c3980(a1 + 16);
  v8 = *(_QWORD*)(a2 + 440);
  if (v8 != 0) {
    v9 = *(unsigned __int8*)(v8 + 16);
    if ((*(__int16*)(a1 + 506) & 0x80000000) == 0) {
      goto LABEL_7;
    }
  }
  else {
    v9 = 9;
    if ((*(__int16*)(a1 + 506) & 0x80000000) == 0) {
      goto LABEL_7;
    }
  }
  if (v9 >= 0xA) {
    v10 = 0;
  }
  else {
    v10 = *(_QWORD*)(GameData_21ca310 + 56) + 24LL * v9 + 556000;
  }
  *(_QWORD*)(a1 + 456) = v10;
LABEL_7:
  v11 = *(_QWORD*)(a1 + 22648);
  *(_BYTE*)(a1 + 2104) = *(_BYTE*)(a2 + 2088);
  v12 = *(_WORD*)(a2 + 490);
  *(_QWORD*)(a1 + 8) = v7;
  *(_WORD*)(a1 + 506) = v12;
  *(_DWORD*)(v11 + 20) = 0;
  GameRoutine_11ea1b0(a2 + 1968);
  v13 = *(_QWORD**)GameData_21306c0[0];
  v13[2] = -1;
  v13[3] = -1;
  v13[5] = -1;
  v13[6] = -1;
  v14 = GameData_22400c8;
  *(_QWORD*)(GameData_22400c8 + 8) = 0;
  *(_QWORD*)(v14 + 16) = 0;
  *(_QWORD*)(v14 + 24) = 0;
  *(_QWORD*)(v14 + 32) = 0;
  *(_QWORD*)(v14 + 40) = 0;
  *(_QWORD*)(v14 + 48) = 0;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_QWORD*)(v14 + 80) = 0;
  *(_QWORD*)(v14 + 88) = 0;
  *(_QWORD*)(v14 + 96) = 0;
  *(_QWORD*)(v14 + 104) = 0;
  *(_QWORD*)(v14 + 112) = 0;
  *(_QWORD*)(v14 + 120) = 0;
  *(_QWORD*)(v14 + 128) = 0;
  *(_BYTE*)(v14 + 136) = 0;
  *(_QWORD*)(a1 + 22624) = 0;
  *(_DWORD*)(a1 + 22632) = 0;
  v15 = GameData_22400d0;
  *(_QWORD*)(GameData_22400d0 + 2688) = 0;
  *(_QWORD*)(v15 + 2696) = 0;
  *(_QWORD*)(v15 + 2704) = 0;
  *(_QWORD*)(v15 + 2712) = 0;
  *(_QWORD*)(v15 + 2720) = 0;
  *(_QWORD*)(v15 + 2728) = 0;
  *(_QWORD*)(v15 + 2736) = 0;
  *(_QWORD*)(v15 + 2744) = 0;
  *(_QWORD*)(v15 + 2752) = 0;
  *(_QWORD*)(v15 + 2760) = 0;
  *(_QWORD*)(v15 + 2768) = 0;
  *(_QWORD*)(v15 + 2776) = 0;
  *(_QWORD*)(v15 + 2784) = 0;
  *(_QWORD*)(v15 + 2792) = 0;
  *(_QWORD*)(v15 + 2800) = 0;
  *(_QWORD*)(v15 + 2808) = 0;
  *(_BYTE*)(v15 + 2816) = 0;
  v16 = *(_BYTE*)(a1 + 2240);
  v17 = (_BYTE*)(a1 + 2240);
  if ((a3 & 1) != 0) {
    *(_DWORD*)(a1 + 2248) |= 0x10000u;
    *(_BYTE*)(a1 + 2240) = 2;
  }
  game_AIRageImage_Update(v14, a2);
  if (*v17 != 0 && (unsigned int)AIThink_12998a0(a1, 1) == 0 &&
      (unsigned int)AIThink_12a9e00(a1) == 0 &&
      (unsigned int)AIThink_12998a0(a1, 0) == 0 &&
      *(unsigned __int8*)(a1 + 2240) >= 2u) {
    v19 = *(_QWORD*)(a1 + 8);
    v20 = game_g_shared_system_skills_ptr;
    v25 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    v22 = (game_HasSkill(v19 + 1744, &v25) & 1) != 0 ||
          *(_WORD*)(v19 + 492) == 0 && *(_BYTE*)(v19 + 496) == 0 &&
              (v25 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v20) & 0xFFF,
               (game_HasSkill(v19 + 1744, &v25) & 1) != 0) ||
          (*(_BYTE*)(v19 + 416) & 4) != 0 ||
          (v25 = *(_DWORD*)((_BYTE*)((char*)0x40LL) + v20) & 0xFFF,
           (game_HasSkill(v19 + 1744, &v25) & 1) != 0) ||
          (v21 = GameRoutine_12aaf80(*(_QWORD*)(a1 + 8))) == 0 ||
          GameHr_12abca0(a1, (unsigned int)*(char*)(v21 + 584),
                         (unsigned int)*(char*)(v21 + 585)) == 0;
    if (v22 && (unsigned __int8)*v17 >= 3u) {
      v23 = GameData_21cd108;
      *(_DWORD*)(GameData_21cd108 + 12) = *(char*)(*(_QWORD*)(a1 + 8) + 584LL);
      *(_DWORD*)(v23 + 16) = *(char*)(*(_QWORD*)(a1 + 8) + 585LL);
      *(_BYTE*)(v23 + 20) = 1;
    }
  }
  if ((a3 & 1) != 0) {
    *v17 = v16;
  }
  return AIThink_ProcessingScope_Destructor(v24);
}

__int64 game_12ddb80(__int64 a1, __int64 a2)
{
  __int16* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  unsigned __int64 v10;
  __int64 result;
  char v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  unsigned int v17;
  char v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _BYTE* v34;
  _BYTE* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  char* v43;
  char* v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  char* v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64*** v74;
  __int64*** v75;
  __int64** v76;
  int v77;
  char* v78;
  char* v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  char* v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64* v92;
  unsigned __int8** v93;
  unsigned __int8** v94;
  unsigned __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  char* v100;
  unsigned __int8* v101;
  int v102;
  __int64* v103;
  _BYTE* v104;
  char* v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  char* v109;
  unsigned __int64 v110;
  __int64 v111;
  unsigned __int64 v112;
  __int64 v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  unsigned __int64 v124;
  __int64 v125;
  unsigned __int64 v126;
  unsigned int v127;
  __int64 v128;
  _BYTE* v129;
  bool v130;
  __int64 v131;
  unsigned __int64 v132;
  int v133;
  __int64 v134;

  v4 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  v5 = *(_QWORD*)(a1 + 16);
  v6 = *(_QWORD*)(a1 + 24);
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  if (v5 == v6) {
    v10 = *(_QWORD*)(a1 + 16);
  }
  else {
    v7 = *v4;
    v8 = v4[1];
    v9 = v4[2];
    v10 = *(_QWORD*)(a1 + 16);
    while (v7 != *(unsigned __int16*)(v10 + 4) ||
           v8 != *(unsigned __int8*)(v10 + 6) ||
           v9 != *(unsigned __int8*)(v10 + 7)) {
      v10 += 368LL;
      if (v10 == v6) {
        return 0;
      }
    }
  }
  if (v10 == v6 || v10 == 0) {
    return 0;
  }
  v13 = *(_BYTE*)(a1 + 107);
  v14 = 0;
  v15 = 0;
  v16 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)v10 & 2) != 0 && (v13 & 1) == 0) {
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         16, 16, 0);
    v15 = v14 + 16;
    *(_QWORD*)(v14 + 8) = 0;
    *(_BYTE*)v14 = 1;
  }
  if ((v13 & 2) != 0) {
    goto LABEL_28;
  }
  v17 = (int)(-373475417 * ((v6 - v5) >> 4)) / 2;
  if (0xD37A6F4DE9BD37A7LL * ((v6 - v5) >> 4) < 2) {
    v17 = -1;
  }
  if ((v17 & 0x80000000) != 0 ||
      (v18 = *(_BYTE*)v10, (*(_BYTE*)v10 & 2) != 0) ||
      (*(_BYTE*)v10 & 8) == 0 && v10 < v5 + 368 * (unsigned __int64)v17) {
  LABEL_28:
    v19 = v14;
    v132 = v15;
  }
  else {
    v64 = v15 - v14;
    v65 = (__int64)(v15 - v14) >> 4;
    v66 = v65 + 1;
    if ((unsigned __int64)(v65 + 1) >> 60 != 0) {
      goto LABEL_261;
    }
    if (v64 >> 3 > v66) {
      v66 = v64 >> 3;
    }
    if (v64 >= 0x7FFFFFFFFFFFFFF0LL) {
      v67 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v67 = v66;
    }
    if (v67 != 0) {
      if (v67 >> 60 != 0) {
        goto LABEL_262;
      }
      v68 = v14;
      v69 = fw_memory_HeapManager_Allocate(*v16, 16 * v67, 16, 0);
    }
    else {
      v68 = v14;
      v69 = 0;
    }
    v129 = (_BYTE*)(v69 + v64);
    v130 = (v18 & 8) != 0;
    v132 = v69 + 16 * v67;
    v19 = v69 + v64 - 16 * v65;
    v15 = v69 + v64 + 16;
    *v129 = 6;
    v129[8] = !v130;
    memcpy_alt1(v19, v68, v64);
    if (v68 != 0) {
      v131 = 128;
      if (*(_QWORD*)(*v16 + 200) == 0) {
        v131 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v16 + v131, v68);
    }
  }
  v20 = a1 + 88;
  v21 = (*(unsigned __int16*)(v10 + 4) << 16) |
        (*(unsigned __int8*)(v10 + 6) << 8) | *(unsigned __int8*)(v10 + 7);
  if (((*(unsigned __int16*)(a1 + 88) << 16) |
       (*(unsigned __int8*)(a1 + 90) << 8) | *(unsigned __int8*)(a1 + 91)) ==
              v21 &&
          (*(_BYTE*)(a1 + 92) & 1) == 0 ||
      (v20 = a1 + 94, ((*(unsigned __int16*)(a1 + 94) << 16) |
                       (*(unsigned __int8*)(a1 + 96) << 8) |
                       *(unsigned __int8*)(a1 + 97)) == v21) &&
          (*(_BYTE*)(a1 + 98) & 1) == 0 ||
      (v20 = a1 + 100, ((*(unsigned __int16*)(a1 + 100) << 16) |
                        (*(unsigned __int8*)(a1 + 102) << 8) |
                        *(unsigned __int8*)(a1 + 103)) == v21) &&
          (*(_BYTE*)(a1 + 104) & 1) == 0) {
    if (v15 >= v132) {
      v22 = v15 - v19;
      v23 = (__int64)(v15 - v19) >> 4;
      v24 = v23 + 1;
      if ((unsigned __int64)(v23 + 1) >> 60 != 0) {
        goto LABEL_261;
      }
      if ((__int64)(v132 - v19) >> 3 > v24) {
        v24 = (__int64)(v132 - v19) >> 3;
      }
      if (v132 - v19 >= 0x7FFFFFFFFFFFFFF0LL) {
        v25 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v25 = v24;
      }
      if (v25 != 0) {
        if (v25 >> 60 != 0) {
          goto LABEL_262;
        }
        v26 = fw_memory_HeapManager_Allocate(*v16, 16 * v25, 16, 0);
      }
      else {
        v26 = 0;
      }
      v27 = v26 + v22;
      v28 = v15 - v19;
      v29 = v26 + v22 - 16 * v23;
      v132 = v26 + 16 * v25;
      *(_BYTE*)v27 = 0;
      *(_QWORD*)(v27 + 8) = v20;
      v15 = v26 + v22 + 16;
      memcpy_alt1(v29, v19, v28);
      if (v19 != 0) {
        v30 = 128;
        if (*(_QWORD*)(*v16 + 200) == 0) {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v16 + v30, v19);
      }
      v19 = v29;
    }
    else {
      *(_BYTE*)v15 = 0;
      *(_QWORD*)(v15 + 8) = v20;
      v15 += 16LL;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2240bc0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2240bc0) != 0) {
    GameData_2240bb8 = (__int64)&GameData_1ab538e;
    GameData_2240bb0 = game_HashString((__int64)&GameData_1ab538e);
    __cxa_guard_release((__int64)&GameData_2240bc0);
  }
  if (game_GameModeData_instance_ != 0) {
    v31 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_2240bb0);
    if (v31 != 0 && *(_DWORD*)(v31 + 32) != 0) {
    LABEL_74:
      v36 = *(unsigned __int8*)(v10 + 3);
      if (*(_BYTE*)(v10 + 3) != 0) {
      LABEL_75:
        v37 = v10 + 352;
        v38 = 0;
        while (1) {
          v39 = (__int64*)(v37 + 8 * v38);
          if ((GameCalendar_12da840(v39) & 1) != 0) {
            v40 = *v39;
            v133 = 17;
            v134 = v40;
            if (game_UnitPool_Find_6ead60(&v134, &v133) != nullptr) {
              v41 = *v39;
              game_menu_anonymous_e980a0((void*)((int*)&v134), *v39);
              if ((_DWORD)v134 != 0 &&
                  (GmapTalkCommandMenu_e94ce0(v41) & 1) != 0) {
                v44 = *(char**)(a1 + 160);
                v43 = *(char**)(a1 + 168);
                if (v44 != v43) {
                  v45 = v43 - v44 - 8;
                  v46 = *(_QWORD*)*v39;
                  if ((~(_BYTE)v45 & 0x18) != 0) {
                    v47 = ((unsigned __int8)((unsigned int)v45 >> 3) + 1) & 3;
                    while (*(_QWORD*)v44 != v46) {
                      v44 += 8;
                      if (--v47 == 0) {
                        goto LABEL_87;
                      }
                    }
                  }
                  else {
                  LABEL_87:
                    if (v45 < 0x18) {
                      goto LABEL_99;
                    }
                    v44 += 16;
                    while (1) {
                      if (*((_QWORD*)v44 - 2) == v46) {
                        v44 -= 16;
                        goto LABEL_98;
                      }
                      if (*((_QWORD*)v44 - 1) == v46) {
                        v44 -= 8;
                        goto LABEL_98;
                      }
                      if (*(_QWORD*)v44 == v46) {
                        goto LABEL_98;
                      }
                      if (*((_QWORD*)v44 + 1) == v46) {
                        break;
                      }
                      v48 = v44 + 16;
                      v44 += 32;
                      if (v48 == v43) {
                        goto LABEL_99;
                      }
                    }
                    v44 += 8;
                  }
                }
              LABEL_98:
                if (v44 == v43) {
                LABEL_99:
                  if (v15 < v132) {
                    *(_QWORD*)(v15 + 8) = v39;
                    *(_BYTE*)v15 = 4;
                    v15 += 16LL;
                  }
                  else {
                    v49 = v15 - v19;
                    v50 = a2;
                    v51 = (__int64)(v15 - v19) >> 4;
                    v52 = v51 + 1;
                    if ((unsigned __int64)(v51 + 1) >> 60 != 0) {
                      goto LABEL_261;
                    }
                    if ((__int64)(v132 - v19) >> 3 > v52) {
                      v52 = (__int64)(v132 - v19) >> 3;
                    }
                    if (v132 - v19 >= 0x7FFFFFFFFFFFFFF0LL) {
                      v53 = 0xFFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v53 = v52;
                    }
                    if (v53 != 0) {
                      if (v53 >> 60 != 0) {
                        goto LABEL_262;
                      }
                      v54 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v53, 16,
                          0);
                    }
                    else {
                      v54 = 0;
                    }
                    v55 = v54 + v49;
                    v132 = v54 + 16 * v53;
                    *(_QWORD*)(v55 + 8) = v39;
                    v56 = v54 + v49 - 16 * v51;
                    v15 = v54 + v49 + 16;
                    *(_BYTE*)v55 = 4;
                    memcpy_alt1(v56, v19, v49);
                    if (v19 != 0) {
                      v57 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v57 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, v19);
                    }
                    a2 = v50;
                    v19 = v56;
                  }
                }
              }
            }
          }
          if (++v38 == v36) {
            goto LABEL_139;
          }
        }
      }
      goto LABEL_139;
    }
  }
  v32 = *(_QWORD*)(a1 + 16);
  v33 = *(_QWORD*)(a1 + 24);
  if (v32 != v33) {
    while (*(unsigned __int16*)(a1 + 208) != *(unsigned __int16*)(v32 + 4) ||
           *(unsigned __int8*)(a1 + 210) != *(unsigned __int8*)(v32 + 6) ||
           *(unsigned __int8*)(a1 + 211) != *(unsigned __int8*)(v32 + 7)) {
      v32 += 368;
      if (v32 == v33) {
        goto LABEL_71;
      }
    }
  }
  if (v32 == v33 || v32 == 0) {
  LABEL_71:
    v35 = (_BYTE*)v10;
    if ((*(_BYTE*)v10 & 4) == 0) {
      goto LABEL_74;
    }
  }
  else {
    v34 = (_BYTE*)(v32 + 368);
    if ((unsigned __int64)v34 > v10) {
      goto LABEL_74;
    }
    v35 = nullptr;
    do {
      if ((*v34 & 4) != 0) {
        v35 = v34;
      }
      v34 += 368;
    } while ((unsigned __int64)v34 <= v10);
    if (v35 == nullptr) {
      goto LABEL_74;
    }
  }
  if (v15 < v132) {
    *(_QWORD*)(v15 + 8) = v35;
    *(_BYTE*)v15 = 5;
    v15 += 16LL;
    goto LABEL_74;
  }
  v58 = v15 - v19;
  v59 = (__int64)(v15 - v19) >> 4;
  v60 = v59 + 1;
  if ((unsigned __int64)(v59 + 1) >> 60 != 0) {
    goto LABEL_261;
  }
  v61 = fw_memory_g_heap_manager_ptr;
  if ((__int64)(v132 - v19) >> 3 > v60) {
    v60 = (__int64)(v132 - v19) >> 3;
  }
  if (v132 - v19 >= 0x7FFFFFFFFFFFFFF0LL) {
    v62 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v62 = v60;
  }
  if (v62 != 0) {
    if (v62 >> 60 != 0) {
      goto LABEL_262;
    }
    v63 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         16 * v62, 16, 0);
  }
  else {
    v63 = 0;
  }
  v70 = v63 + v58;
  v71 = v15 - v19;
  v132 = v63 + 16 * v62;
  v72 = v63 + v58 - 16 * v59;
  *(_QWORD*)(v70 + 8) = v35;
  v15 = v63 + v58 + 16;
  *(_BYTE*)v70 = 5;
  memcpy_alt1(v72, v19, v71);
  if (v19 != 0) {
    v73 = 128;
    if (*(_QWORD*)(*(_QWORD*)v61 + 200LL) == 0) {
      v73 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v61 + v73, v19);
  }
  v19 = v72;
  v36 = *(unsigned __int8*)(v10 + 3);
  if (*(_BYTE*)(v10 + 3) != 0) {
    goto LABEL_75;
  }
LABEL_139:
  v74 = *(__int64****)(a1 + 40);
  v75 = *(__int64****)(a1 + 48);
  if (v74 == v75) {
    goto LABEL_182;
  }
  do {
    v76 = *v74;
    v77 = *((unsigned __int8*)*v74 + 8);
    if ((v77 & 0xFE) == 2) {
      GameHr_12b3d60((__int64)v76);
      v76 = *v74;
      v77 = *((unsigned __int8*)*v74 + 8);
    }
    if (v77 != 5) {
      goto LABEL_142;
    }
    v79 = *(char**)(a1 + 136);
    v78 = *(char**)(a1 + 144);
    if (v79 == v78) {
      goto LABEL_162;
    }
    v80 = v78 - v79 - 8;
    v81 = **v76;
    if ((~(_BYTE)v80 & 0x18) != 0) {
      v82 = ((unsigned __int8)((unsigned int)v80 >> 3) + 1) & 3;
      while (*(_QWORD*)v79 != v81) {
        v79 += 8;
        if (--v82 == 0) {
          goto LABEL_151;
        }
      }
    LABEL_162:
      if (v79 == v78) {
        goto LABEL_163;
      }
      goto LABEL_142;
    }
  LABEL_151:
    if (v80 < 0x18) {
      goto LABEL_163;
    }
    v79 += 16;
    while (1) {
      if (*((_QWORD*)v79 - 2) == v81) {
        if (v79 - 16 == v78) {
          goto LABEL_163;
        }
        goto LABEL_142;
      }
      if (*((_QWORD*)v79 - 1) == v81) {
        v79 -= 8;
        goto LABEL_162;
      }
      if (*(_QWORD*)v79 == v81) {
        goto LABEL_162;
      }
      if (*((_QWORD*)v79 + 1) == v81) {
        break;
      }
      v83 = v79 + 16;
      v79 += 32;
      if (v83 == v78) {
        goto LABEL_163;
      }
    }
    if (v79 + 8 == v78) {
    LABEL_163:
      if (v15 < v132) {
        *(_BYTE*)v15 = 3;
        *(_QWORD*)(v15 + 8) = v74;
        v15 += 16LL;
      }
      else {
        v84 = v15 - v19;
        v85 = (__int64)(v15 - v19) >> 4;
        v86 = v85 + 1;
        if ((unsigned __int64)(v85 + 1) >> 60 != 0) {
          goto LABEL_261;
        }
        if ((__int64)(v132 - v19) >> 3 > v86) {
          v86 = (__int64)(v132 - v19) >> 3;
        }
        if (v132 - v19 >= 0x7FFFFFFFFFFFFFF0LL) {
          v87 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v87 = v86;
        }
        if (v87 != 0) {
          if (v87 >> 60 == 0) {
            v88 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v87, 16, 0);
            goto LABEL_174;
          }
        LABEL_262:
          GameRoutine_60a210();
        }
        v88 = 0;
      LABEL_174:
        v89 = v88 + v84;
        v90 = v88 + v84 - 16 * v85;
        v132 = v88 + 16 * v87;
        *(_BYTE*)v89 = 3;
        *(_QWORD*)(v89 + 8) = v74;
        v15 = v88 + v84 + 16;
        memcpy_alt1(v90, v19, v84);
        if (v19 != 0) {
          v91 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v91 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v91, v19);
        }
        v19 = v90;
      }
    }
  LABEL_142:
    ++v74;
  } while (v74 != v75);
  v74 = *(__int64****)(a1 + 40);
  v75 = *(__int64****)(a1 + 48);
LABEL_182:
  if (v74 == v75) {
  LABEL_185:
    v92 = (__int64*)fw_memory_g_heap_manager_ptr;
  }
  else {
    while (!GameRoutine_12dda00(a1, v74)) {
      if (++v74 == v75) {
        goto LABEL_185;
      }
    }
    v92 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v15 >= v132) {
      v95 = v15 - v19;
      v96 = (__int64)(v15 - v19) >> 4;
      v97 = v96 + 1;
      if ((unsigned __int64)(v96 + 1) >> 60 != 0) {
        goto LABEL_261;
      }
      if ((__int64)(v132 - v19) >> 3 > v97) {
        v97 = (__int64)(v132 - v19) >> 3;
      }
      if (v132 - v19 >= 0x7FFFFFFFFFFFFFF0LL) {
        v98 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v98 = v97;
      }
      if (v98 != 0) {
        if (v98 >> 60 != 0) {
          goto LABEL_262;
        }
        v99 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v98, 16, 0);
      }
      else {
        v99 = 0;
      }
      v114 = v99 + v95;
      v115 = v15 - v19;
      v132 = v99 + 16 * v98;
      v116 = v99 + v95 - 16 * v96;
      *(_QWORD*)(v114 + 8) = 0;
      v15 = v99 + v95 + 16;
      *(_BYTE*)v114 = 2;
      memcpy_alt1(v116, v19, v115);
      if (v19 != 0) {
        v117 = 128;
        if (*(_QWORD*)(*v92 + 200) == 0) {
          v117 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v92 + v117, v19);
      }
      v19 = v116;
    }
    else {
      *(_QWORD*)(v15 + 8) = 0;
      *(_BYTE*)v15 = 2;
      v15 += 16LL;
    }
  }
  v93 = *(unsigned __int8***)(a1 + 64);
  v94 = *(unsigned __int8***)(a1 + 72);
  if (v93 == v94) {
    goto LABEL_248;
  }
  while (2) {
    v101 = *v93;
    if (!GameRoutine_12da4a0(*v93) || (unsigned int)(v102 = *v101) > 0xC ||
        ((1 << v102) & 0x1F9E) == 0 && (v102 != 5 || (v101[1] & 1) != 0) ||
        (v103 = *((__int64**)v101 + 1)) == nullptr ||
        (v104 = (_BYTE*)v103[36]) == nullptr || *v104 == 0) {
    LABEL_201:
      if (++v93 == v94) {
        goto LABEL_248;
      }
      continue;
    }
    break;
  }
  v100 = *(char**)(a1 + 184);
  v105 = *(char**)(a1 + 192);
  if (v100 == v105) {
  LABEL_200:
    if (v100 == v105) {
      goto LABEL_226;
    }
    goto LABEL_201;
  }
  v106 = *v103;
  v107 = v105 - v100 - 8;
  if ((~(_BYTE)v107 & 0x18) != 0) {
    v108 = ((unsigned __int8)((unsigned int)v107 >> 3) + 1) & 3;
    while (*(_QWORD*)v100 != v106) {
      v100 += 8;
      if (--v108 == 0) {
        goto LABEL_213;
      }
    }
    goto LABEL_200;
  }
LABEL_213:
  if (v107 >= 0x18) {
    v100 += 16;
    while (1) {
      if (*((_QWORD*)v100 - 2) == v106) {
        v100 -= 16;
        goto LABEL_200;
      }
      if (*((_QWORD*)v100 - 1) == v106) {
        v100 -= 8;
        goto LABEL_200;
      }
      if (*(_QWORD*)v100 == v106) {
        goto LABEL_200;
      }
      if (*((_QWORD*)v100 + 1) == v106) {
        break;
      }
      v109 = v100 + 16;
      v100 += 32;
      if (v109 == v105) {
        goto LABEL_226;
      }
    }
    v100 += 8;
    goto LABEL_200;
  }
LABEL_226:
  if (v15 < v132) {
    *(_QWORD*)(v15 + 8) = 0;
    *(_BYTE*)v15 = 7;
    v15 += 16LL;
    goto LABEL_248;
  }
  v110 = v15 - v19;
  v111 = (__int64)(v15 - v19) >> 4;
  v112 = v111 + 1;
  if ((unsigned __int64)(v111 + 1) >> 60 != 0) {
    goto LABEL_261;
  }
  if ((__int64)(v132 - v19) >> 3 > v112) {
    v112 = (__int64)(v132 - v19) >> 3;
  }
  if (v132 - v19 >= 0x7FFFFFFFFFFFFFF0LL) {
    v112 = 0xFFFFFFFFFFFFFFFLL;
  }
  if (v112 == 0) {
    v113 = 0;
    goto LABEL_243;
  }
  if (v112 >> 60 != 0) {
    goto LABEL_262;
  }
  v113 = fw_memory_HeapManager_Allocate(*v92, 16 * v112, 16, 0);
LABEL_243:
  v118 = v113 + v110;
  v119 = v15 - v19;
  v120 = v113 + v110 - 16 * v111;
  *(_BYTE*)v118 = 7;
  *(_QWORD*)(v118 + 8) = 0;
  v15 = v113 + v110 + 16;
  memcpy_alt1(v120, v19, v119);
  if (v19 != 0) {
    v121 = 128;
    if (*(_QWORD*)(*v92 + 200) == 0) {
      v121 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v92 + v121, v19);
  }
  v19 = v120;
LABEL_248:
  result = v19 != v15;
  if (v19 != v15) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2240d50,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_2240d50) != 0) {
      GameData_2240bd0 = 2;
      GameData_2240c18 = 0;
      GameData_2240c20 = (__int64)game_GameCalendar_ProcNotify_Notify;
      GameData_2240bf8 = 0;
      GameData_2240c00 = 0;
      GameData_2240c08 = 0;
      GameData_2240bd8 = 0;
      GameData_2240be0 = 0;
      GameData_2240be8 = 0;
      GameData_2240bf0 = 0;
      GameData_2240c28 = 0;
      GameData_2240c30 = 0;
      GameData_2240c38 = 0;
      GameData_2240c40 = 0;
      GameData_2240c48 = 0;
      GameData_2240c68 = 0;
      GameData_2240c10 = 13;
      GameData_2240c50 = 13;
      GameData_2240c58 = 0;
      GameData_2240c60 = (__int64)GameCalendar_12e0c20;
      GameData_2240c90 = 13;
      GameData_2240cd0 = 13;
      GameData_2240c70 = 0;
      GameData_2240c78 = 0;
      GameData_2240c80 = 0;
      GameData_2240c88 = 0;
      GameData_2240c98 = 0;
      GameData_2240ca0 = (__int64)GameCalendar_12e0d40;
      GameData_2240ca8 = 0;
      GameData_2240cb0 = 0;
      GameData_2240cb8 = 0;
      GameData_2240cc0 = 0;
      GameData_2240cc8 = 0;
      GameData_2240cd8 = 0;
      GameData_2240ce0 = (__int64)GameCalendar_12e0da0;
      GameData_2240ce8 = 0;
      GameData_2240cf0 = 0;
      GameData_2240cf8 = 0;
      GameData_2240d00 = 0;
      GameData_2240d08 = 0;
      GameData_2240d10 = 0;
      GameData_2240d38 = 0;
      GameData_2240d40 = 0;
      GameData_2240d48 = 0;
      GameData_2240d30 = 0;
      GameData_2240d20 = 0;
      GameData_2240d28 = 0;
      GameData_2240d18 = 0;
      __cxa_guard_release((__int64)&GameData_2240d50);
    }
    v122 = fw_memory_HeapManager_Allocate(*v92, 184, 16, 0);
    v123 = GameData_212c608[0];
    *(_QWORD*)(v122 + 96) = 0;
    *(_QWORD*)(v122 + 104) = 0;
    *(_QWORD*)(v122 + 112) = 0;
    *(_QWORD*)(v122 + 120) = 0;
    *(_QWORD*)(v122 + 128) = 0;
    *(_WORD*)(v122 + 136) = 0;
    *(_QWORD*)(v122 + 16) = 0;
    *(_QWORD*)(v122 + 24) = "NULL";
    *(_QWORD*)(v122 + 138) = 0;
    *(_QWORD*)(v122 + 144) = 0;
    *(_QWORD*)(v122 + 32) = 0;
    *(_QWORD*)(v122 + 40) = 0;
    *(_QWORD*)(v122 + 48) = 0;
    *(_QWORD*)(v122 + 56) = 0;
    *(_QWORD*)(v122 + 64) = 0;
    *(_QWORD*)(v122 + 72) = 0;
    *(_QWORD*)(v122 + 80) = 0;
    *(_QWORD*)(v122 + 88) = 0;
    *(_QWORD*)v122 = v123 + 16;
    *(_QWORD*)(v122 + 8) = 0;
    game_ProcInst_Register(v122);
    v124 = v15 - v19;
    *(_QWORD*)(v122 + 152) = 0;
    *(_QWORD*)(v122 + 160) = 0;
    *(_QWORD*)(v122 + 168) = 0;
    *(_QWORD*)v122 = game_GameCalendar_ProcNotify_vtable;
    if ((__int64)(v15 - v19) >= 0) {
      v125 = fw_memory_HeapManager_Allocate(*v92, v15 - v19, 16, 0);
      v126 = v125 + v124;
      *(_QWORD*)(v122 + 152) = v125;
      *(_QWORD*)(v122 + 160) = v125;
      *(_QWORD*)(v122 + 168) = v125 + v124;
      memcpy_alt1(v125, v19, v15 - v19);
      *(_QWORD*)(v122 + 160) = v126;
      *(_DWORD*)(v122 + 176) = 0;
      ProcInst_657850(v122, (__int64)&GameData_2240bd0, (__int64)"ProcNotify",
                      1, a2);
      result = 1;
      goto LABEL_252;
    }
  LABEL_261:
    GameRoutine_12e06c0();
  }
LABEL_252:
  if (v19 != 0) {
    v127 = result;
    v128 = 128;
    if (*(_QWORD*)(*v92 + 200) == 0) {
      v128 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v92 + v128, v19);
    return v127;
  }
  return result;
}

__int64 game_1365740(__int64* a1, _QWORD* a2, _QWORD* a3, __int64 a4,
                     _DWORD* a5, __int64* a6, unsigned int a7)
{
  __int64 v7;
  __int64 v8;
  unsigned int (**v11)(void);
  unsigned int (**v12)(__int64);
  __int64 v13;
  int v14;
  _DWORD* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  int* v18;
  _DWORD* v19;
  int v20;
  int v21;
  int v22;
  unsigned __int64 v23;
  const char* v24;
  unsigned __int64 v25;
  const char* v26;
  const char* v27;
  int v28;
  __int64 result;
  int v30;
  unsigned int v31;
  unsigned int v32;
  char v33;
  bool v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  const char* v38;
  unsigned __int64 v39;
  const char* v40;
  const char* v41;
  int v42;
  int v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v54;
  unsigned __int64 v55;
  __int64* v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  signed __int64 v65;
  __int64* v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v74;
  _QWORD v75[6];

  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = *a6;
  v8 = a6[1];
  if (*a6 != v8) {
    v11 = (unsigned int (**)(void))GameData_212e778[0],
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v12 = (unsigned int (**)(__int64))GameData_212e780,
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    do {
      if (**(int**)v7 >= 1) {
        v13 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)v7 + 8LL) +
                                       32LL))(*(_QWORD*)(*(_QWORD*)v7 + 8LL)),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((*v11)() == a5[5] && (*v12)(v13) == a5[6]) {
          v14 = ((__int64 (*)(__int64))*GameData_212e8a8)(v13),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v15 = &GameData_1b611e0;
          v16 = 42;
          do {
            v17 = v16 >> 1;
            v18 = &v15[2 * (v16 >> 1)];
            v20 = *v18;
            v19 = v18 + 2;
            v16 += ~(v16 >> 1);
            if (v20 < v14) {
              v15 = v19;
            }
            else {
              v16 = v17;
            }
          } while (v16 != 0);
          if (v15 == (_DWORD*)&GameData_1b61330 || (signed __int32)*v15 > v14) {
            v21 = 0;
          }
          else {
            v21 = v15[1];
          }
          v22 = a5[3];
          v23 = 42;
          v24 = (const char*)&GameData_1b61330;
          do {
            v25 = v23 >> 1;
            v26 = &v24[8 * (v23 >> 1)];
            v28 = *(_DWORD*)v26;
            v27 = v26 + 8;
            v23 += ~(v23 >> 1);
            if (v28 < v22) {
              v24 = v27;
            }
            else {
              v23 = v25;
            }
          } while (v23 != 0);
          if (v24 == "N3g3d8MaterialE" || v22 < (signed __int32)*(_DWORD*)v24) {
            if (v21 == 0) {
              goto LABEL_25;
            }
          }
          else if (v21 == *((_DWORD*)v24 + 1)) {
          LABEL_25:
            *a1 = *(_QWORD*)v7 + 16LL;
            *a2 = *(_QWORD*)v7 + 232LL;
            *a3 = *(_QWORD*)v7 + 304LL;
            **(_DWORD**)v7 = 0;
            return a7;
          }
        }
      }
      v7 += 8;
    } while (v7 != v8);
  }
  v30 = a5[3];
  v31 = a5[5];
  v32 = a5[6];
  v33 = 2;
  if ((v30 & 0xFFFFFF00) == 0x200) {
    v33 = 0;
  }
  v34 = (unsigned __int64)(((int)v32 * (__int64)(int)v31) << v33) >= 0x30000;
  v35 = 40;
  if (!v34) {
    v35 = 24;
  }
  v36 = 42;
  v37 = *(_QWORD*)(GameData_220b680 + v35);
  v75[1] = 0x100000001LL;
  __builtin_memset(&v75[2], 0, 11);
  v38 = (const char*)&GameData_1b61330;
  do {
    v39 = v36 >> 1;
    v40 = &v38[8 * (v36 >> 1)];
    v42 = *(_DWORD*)v40;
    v41 = v40 + 8;
    v36 += ~(v36 >> 1);
    if (v42 < v30) {
      v38 = v41;
    }
    else {
      v36 = v39;
    }
  } while (v36 != 0);
  if (v38 == "N3g3d8MaterialE" || v30 < (signed __int32)*(_DWORD*)v38) {
    v43 = 0;
  }
  else {
    v43 = *((_DWORD*)v38 + 1);
  }
  HIDWORD(v75[2]) = v43;
  v75[0] = __PAIR64__(v32, v31);
  v75[4] = v37;
  v75[5] = *(_QWORD*)(*(_QWORD*)(*game_g_frame_clock_ptr[0] + 552) + 16LL);
  LOBYTE(v75[3]) = 1;
  v44 = (__int64*)fw_memory_g_heap_manager_ptr;
  v45 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       320, 16, 0),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v46 = v45 + 16;
  v47 = v45;
  *(_DWORD*)v45 = 0;
  *(_QWORD*)(v45 + 8) = 0;
  Registration_606350((_QWORD*)(v45 + 16)),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  Registration_6064e0((_QWORD*)(v47 + 232)),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(v47 + 312) = 0;
  *(_QWORD*)(v47 + 304) = -1;
  GameRoutine_53c20((void*)(&v74), (__int64)v75),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v48 = v74;
  v49 = *(_QWORD*)(v47 + 8);
  v74 = 0;
  *(_QWORD*)(v47 + 8) = v48;
  if (v49 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v49 + 8LL))(v49),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v50 = v74;
    v74 = 0;
    if (v50 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v50 + 8LL))(v50),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v51 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v47 + 8) + 32LL))(
      *(_QWORD*)(v47 + 8)),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_5fc660(v46, v51),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v52 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v47 + 8) + 32LL))(
      *(_QWORD*)(v47 + 8)),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD))(**(_QWORD**)(v47 + 8) + 32LL))(*(_QWORD*)(v47 + 8)),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_5fc680(v47 + 232, v52),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD))(**(_QWORD**)(v47 + 8) + 40LL))(*(_QWORD*)(v47 + 8)),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v47 + 304) = v54;
  *a1 = v46;
  *a2 = v47 + 232;
  *a3 = v47 + 304;
  v56 = (__int64*)a6[1];
  v55 = a6[2];
  if ((unsigned __int64)v56 >= v55) {
    v58 = *a6;
    v59 = (__int64)v56 - *a6;
    v60 = v59 >> 3;
    v61 = (v59 >> 3) + 1;
    if (v61 >> 61 != 0) {
      GameRoutine_13688b0(),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v62 = v55 - v58;
    if (v62 >> 2 > v61) {
      v61 = v62 >> 2;
    }
    if ((unsigned __int64)v62 >= 0x7FFFFFFFFFFFFFF8LL) {
      v63 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v63 = v61;
    }
    if (v63 != 0) {
      if (v63 >> 61 != 0) {
        GameRoutine_60a210(),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v64 = fw_memory_HeapManager_Allocate(*v44, 8 * v63, 16, 0),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v58 = *a6;
      v65 = a6[1] - *a6;
      v60 = v65 >> 3;
    }
    else {
      v64 = 0;
      v65 = v59;
    }
    v66 = (__int64*)(v64 + v59);
    v67 = v64 + 8 * v63;
    v68 = (__int64)&v66[-v60];
    *v66 = v47;
    v57 = v66 + 1;
    memcpy_alt1(v68, v58, v65),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *a6 = v68;
    a6[1] = (__int64)v57;
    a6[2] = v67;
    if (v58 != 0) {
      v69 = 128;
      if (*(_QWORD*)(*v44 + 200) == 0) {
        v69 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v44 + v69, v58),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  else {
    *v56 = v47;
    v57 = v56 + 1;
  }
  result = a7;
  a6[1] = (__int64)v57;
  return result;
}

void game_1366fa0(__int64 a1, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  const char* v3;
  unsigned __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  unsigned __int64 v17;
  const char* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64** v30;
  __int64* v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  float v42;
  float v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  float v47;
  _BOOL8 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  _QWORD* v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 primeEm;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  _QWORD* v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  _QWORD* v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  char v77;
  __int64 v78;
  struct {
    _QWORD v79[2];
    char* v80;
  } v79_;

  v3 = *(const char**)a2;
  v7 = strlen_alt1(*(const char**)a2);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_146;
  }
  v8 = (__int64*)(a1 + 1160);
  v9 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v7 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11,
                                                16, 0);
    v79_.v79[1] = v9;
    v79_.v80 = v10;
    v79_.v79[0] = v11 | 1;
  }
  else {
    LOBYTE(v79_.v79[0]) = 2 * v7;
    v10 = (char*)v79_.v79 + 1;
    if (v7 == 0) {
      goto LABEL_10;
    }
  }
  memmove_alt1((__int64)v10, (__int64)v3, v9);
LABEL_10:
  v10[v9] = 0;
  v12 = GameRoutine_1369360((_QWORD*)(a1 + 1160), (unsigned __int8*)v79_.v79);
  if ((v79_.v79[0] & 1) != 0 && v79_.v80 != nullptr) {
    v13 = v12;
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, (__int64)v79_.v80);
    v12 = v13;
  }
  if (v12 == nullptr) {
    v15 = (__int64*)fw_memory_g_heap_manager_ptr;
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         48, 16, 0);
    v17 = *(_QWORD*)(a2 + 8);
    *(_QWORD*)v16 = 0;
    *(_QWORD*)(v16 + 8) = 0;
    if (v17 < 0xFFFFFFFFFFFFFFF7LL) {
      v18 = *(const char**)a2;
      v19 = (_QWORD*)v16;
      if (v17 >= 0x17) {
        if ((v17 | 7) == 0x17) {
          v21 = 26;
        }
        else {
          v21 = (v17 | 7) + 1;
        }
        v20 = fw_memory_HeapManager_Allocate(*v15, v21, 16, 0);
        v19[3] = v17;
        v19[4] = v20;
        v19[2] = v21 | 1;
      }
      else {
        v20 = v16 + 17;
        *(_BYTE*)(v16 + 16) = 2 * v17;
        if (v17 == 0) {
        LABEL_25:
          *(_BYTE*)(v20 + v17) = 0;
          v19[5] = a3;
          v22 = *((unsigned __int8*)v19 + 16);
          v77 = *((_BYTE*)v19 + 16);
          v78 = v19[4];
          if ((v22 & 1) != 0) {
            v23 = v19[4];
          }
          else {
            v23 = (__int64)v19 + 17;
          }
          if ((v22 & 1) != 0) {
            v24 = v19[3];
          }
          else {
            v24 = v22 >> 1;
          }
          v19[1] = std___1___hash_memory(v23, v24);
          v25 = std___1___hash_memory(v23, v24);
          v26 = *(_QWORD*)(a1 + 1168);
          v19[1] = v25;
          if (v26 != 0) {
            v27 = v26 - 1;
            v28 = v25;
            if ((v26 & (v26 - 1)) != 0) {
              v29 = v25;
              if (v25 >= v26) {
                v29 = v25 % v26;
              }
            }
            else {
              v29 = v27 & v25;
            }
            v30 = *(__int64***)(*v8 + 8 * v29);
            if (v30 != nullptr) {
              v31 = *v30;
              if (*v30 != nullptr) {
                if ((v26 & v27) == 0) {
                  while (1) {
                    v36 = v31[1];
                    if (v36 == v28) {
                      v37 = *((unsigned __int8*)v31 + 16);
                      v38 = v31[3];
                      if ((v37 & 1) == 0) {
                        v38 = v37 >> 1;
                      }
                      if (v38 == v24) {
                        v39 = (v37 & 1) != 0 ? v31[4] : (__int64)v31 + 17;
                        if (memcmp(v39, v23, v24) == 0) {
                          goto LABEL_63;
                        }
                      }
                    }
                    else if ((v36 & v27) != v29) {
                      goto LABEL_71;
                    }
                    v31 = (__int64*)*v31;
                    if (v31 == nullptr) {
                      goto LABEL_71;
                    }
                  }
                }
                do {
                  v32 = v31[1];
                  if (v32 == v28) {
                    v33 = *((unsigned __int8*)v31 + 16);
                    v34 = v31[3];
                    if ((v33 & 1) == 0) {
                      v34 = v33 >> 1;
                    }
                    if (v34 == v24) {
                      v35 = (v33 & 1) != 0 ? v31[4] : (__int64)v31 + 17;
                      if (memcmp(v35, v23, v24) == 0) {
                      LABEL_63:
                        if ((v77 & 1) != 0 && v78 != 0) {
                          v40 = 128;
                          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                            v40 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt1(
                              fw_memory_g_heap_manager + v40, v78);
                        }
                        v41 = 128;
                        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                          v41 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt1(
                            fw_memory_g_heap_manager + v41, (__int64)v19);
                        return;
                      }
                    }
                  }
                  else {
                    if (v32 >= v26) {
                      v32 %= v26;
                    }
                    if (v32 != v29) {
                      break;
                    }
                  }
                  v31 = (__int64*)*v31;
                } while (v31 != nullptr);
              }
            }
          }
        LABEL_71:
          v42 = *(float*)(a1 + 1192);
          v43 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 1184) + 1LL);
          if (v26 != 0 && (float)(v42 * (float)v26) >= v43) {
            goto LABEL_73;
          }
          v47 = v43 / v42;
          v48 = true;
          if (v26 >= 3) {
            v48 = (v26 & (v26 - 1)) != 0;
          }
          v49 = v48 | (2 * v26);
          v50 = vcvtps_u64_f32(v47);
          if (v49 <= v50) {
            v51 = v50;
          }
          else {
            v51 = v49;
          }
          if (v51 == 1) {
            v51 = 2;
          }
          else if ((v51 & (v51 - 1)) != 0) {
            primeEm = std___1___next_prime(v51);
            v26 = *(_QWORD*)(a1 + 1168);
            v51 = primeEm;
          }
          if (v51 <= v26) {
            if (v51 >= v26) {
              goto LABEL_73;
            }
            v62 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 1184) /
                                 *(float*)(a1 + 1192));
            if (v26 < 3 || (v26 & (v26 - 1)) != 0) {
              v62 = std___1___next_prime(v62);
            }
            else {
              v63 = 1LL << (-(char)__clz(v62 - 1) & 63);
              if (v62 >= 2) {
                v62 = v63;
              }
            }
            if (v51 <= v62) {
              v51 = v62;
            }
            if (v51 >= v26) {
              goto LABEL_73;
            }
            if (v51 == 0) {
              v75 = *v8;
              *v8 = 0;
              if (v75 != 0) {
                v76 = 128;
                if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                  v76 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    fw_memory_g_heap_manager + v76, v75);
              }
              *(_QWORD*)(a1 + 1168) = 0;
              goto LABEL_73;
            }
          }
          if (v51 >> 61 != 0) {
            GameRoutine_60a210();
          }
          v57 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                               8 * v51, 16, 0);
          v58 = *v8;
          *v8 = v57;
          if (v58 != 0) {
            v59 = 128;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
              v59 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v59,
                                               v58);
          }
          v60 = v51 & 7;
          *(_QWORD*)(a1 + 1168) = v51;
          if (v51 >= 8) {
            v61 = 0;
            do {
              *(_QWORD*)(*v8 + 8 * v61) = 0;
              *(_QWORD*)(*v8 + 8 * v61 + 8) = 0;
              *(_QWORD*)(*v8 + 8 * v61 + 16) = 0;
              *(_QWORD*)(*v8 + 8 * v61 + 24) = 0;
              *(_QWORD*)(*v8 + 8 * v61 + 32) = 0;
              *(_QWORD*)(*v8 + 8 * v61 + 40) = 0;
              *(_QWORD*)(*v8 + 8 * v61 + 48) = 0;
              v64 = *v8 + 8 * v61;
              v61 += 8;
              *(_QWORD*)(v64 + 56) = 0;
            } while ((v51 & 0x1FFFFFFFFFFFFFF8LL) != v61);
          }
          else {
            v61 = 0;
          }
          if ((v51 & 7) != 0) {
            v65 = 8 * v61;
            do {
              --v60;
              *(_QWORD*)(*v8 + v65) = 0;
              v65 += 8;
            } while (v60 != 0);
          }
          v66 = *(_QWORD**)(a1 + 1176);
          if (v66 != nullptr) {
            v67 = v66[1];
            v68 = a1 + 1176;
            v69 = v51 - 1;
            if ((v51 & (v51 - 1)) != 0) {
              if (v67 >= v51) {
                v67 %= v51;
              }
              *(_QWORD*)(*v8 + 8 * v67) = v68;
              v70 = (_QWORD*)*v66;
              if (*v66 == 0) {
                goto LABEL_73;
              }
              while (1) {
                v71 = v70[1];
                if (v71 >= v51) {
                  v71 %= v51;
                }
                if (v71 != v67) {
                  if (*(_QWORD*)(*v8 + 8 * v71) == 0) {
                    *(_QWORD*)(*v8 + 8 * v71) = v66;
                    goto LABEL_119;
                  }
                  *v66 = *v70;
                  *v70 = **(_QWORD**)(*v8 + 8 * v71);
                  **(_QWORD**)(*v8 + 8 * v71) = v70;
                  v70 = v66;
                }
                v71 = v67;
              LABEL_119:
                v66 = v70;
                v70 = (_QWORD*)*v70;
                v67 = v71;
                if (v70 == nullptr) {
                  goto LABEL_73;
                }
              }
            }
            v72 = v67 & v69;
            *(_QWORD*)(*v8 + 8 * v72) = v68;
            while (1) {
              v73 = (_QWORD*)*v66;
              if (*v66 == 0) {
                break;
              }
              v74 = v73[1] & v69;
              if (v74 == v72) {
                v66 = (_QWORD*)*v66;
              }
              else if (*(_QWORD*)(*v8 + 8 * v74) != 0) {
                *v66 = *v73;
                *v73 = **(_QWORD**)(*v8 + 8 * v74);
                **(_QWORD**)(*v8 + 8 * v74) = v73;
              }
              else {
                *(_QWORD*)(*v8 + 8 * v74) = v66;
                v66 = v73;
                v72 = v74;
              }
            }
          }
        LABEL_73:
          v44 = *(_QWORD*)(a1 + 1168);
          v45 = v19[1];
          v46 = v44 - 1;
          if ((v44 & (v44 - 1)) != 0) {
            if (v45 >= v44) {
              v45 %= v44;
            }
          }
          else {
            v45 &= v46;
          }
          v52 = *v8;
          v53 = *(_QWORD**)(*v8 + 8 * v45);
          if (v53 != nullptr) {
            *v19 = *v53;
            *v53 = v19;
          }
          else {
            v54 = *(_QWORD*)(a1 + 1176);
            *(_QWORD*)(a1 + 1176) = v19;
            *v19 = v54;
            *(_QWORD*)(v52 + 8 * v45) = a1 + 1176;
            if (*v19 != 0) {
              v55 = *(_QWORD*)(*v19 + 8LL);
              if ((v44 & v46) != 0) {
                if (v55 >= v44) {
                  v55 %= v44;
                }
              }
              else {
                v55 &= v46;
              }
              *(_QWORD*)(*v8 + 8 * v55) = v19;
            }
          }
          ++*(_QWORD*)(a1 + 1184);
          return;
        }
      }
      memmove_alt1(v20, (__int64)v18, v17);
      goto LABEL_25;
    }
  LABEL_146:
    String_60a1d0();
  }
}

void game_1367740(__int64 a1, const char** a2)
{
  const char* v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    _QWORD v15[2];
    char* v16;
  } v15_;

  v2 = *a2;
  v4 = strlen_alt1(*a2);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v15_.v15[1] = v5;
    v15_.v16 = v6;
    v15_.v15[0] = v7 | 1;
  }
  else {
    LOBYTE(v15_.v15[0]) = 2 * v4;
    v6 = (char*)v15_.v15 + 1;
    if (v4 == 0) {
      goto LABEL_10;
    }
  }
  memmove_alt1((__int64)v6, (__int64)v2, v5);
LABEL_10:
  v6[v5] = 0;
  v8 = GameRoutine_1369360((_QWORD*)(a1 + 1160), (unsigned __int8*)v15_.v15);
  if ((v15_.v15[0] & 1) != 0 && v15_.v16 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, (__int64)v15_.v16);
  }
  if (v8 != nullptr) {
    GameRoutine_1369500((void*)((__int64)v15_.v15), (_QWORD*)(a1 + 1160), v8);
    v10 = v15_.v15[0];
    v15_.v15[0] = 0;
    if (v10 != 0) {
      if ((unsigned __int8)v15_.v16 == 1 && (*(_BYTE*)(v10 + 16) & 1) != 0 &&
          *(_QWORD*)(v10 + 32) != 0) {
        v11 = v10;
        v12 = *(_QWORD*)(v10 + 32);
        v13 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v12);
        v10 = v11;
      }
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v10);
    }
  }
}

__attribute__((swiftcall)) void game_13678f0(PSEUDO_X8 x8_, __int64* result,
                                             const char** a2, __int64 a3,
                                             __int64 a4, __int64 a5)
{
  _QWORD* a6 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64* v9;
  _QWORD* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  struct {
    __int64 v25;
    unsigned __int64 v26;
    char* v27;
  } v25_;
  char v28[256];

  if (a4 == 0 || a5 == 0) {
    goto LABEL_35;
  }
  v9 = result;
  v11 = a6;
  snprintf((__int64)v28, 0x100u, "%s/%s", *a2, *(const char**)(a4 + 48));
  v12 = strlen_alt1(v28);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_36:
    String_60a1d0();
  }
  v13 = v12;
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v12 | 7) + 1;
    }
    v14 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v15,
                                                16, 0);
    v25_.v26 = v13;
    v25_.v27 = v14;
    v25_.v25 = v15 | 1;
  }
  else {
    LOBYTE(v25_.v25) = 2 * v12;
    v14 = (char*)&v25_.v25 + 1;
    if (v12 == 0) {
      goto LABEL_12;
    }
  }
  memcpy_alt1((__int64)v14, (__int64)v28, v13);
LABEL_12:
  v14[v13] = 0;
  result = GameRoutine_1369360(v9 + 145, (unsigned __int8*)&v25_.v25);
  if ((v25_.v25 & 1) != 0 && v25_.v27 != nullptr) {
    v16 = result;
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (__int64)v25_.v27);
    result = v16;
  }
  if (result != nullptr) {
    (__int64*)((__int64 (*)(__int64, __int64, __int64))result[5])(a3, a4, a5);
    return;
  }
  v18 = (__int64)*a2;
  v19 = strlen_alt1(*a2);
  if (v19 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_36;
  }
  v20 = v19;
  if (v19 >= 0x17) {
    if ((v19 | 7) == 0x17) {
      v22 = 26;
    }
    else {
      v22 = (v19 | 7) + 1;
    }
    v21 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v22,
                                                16, 0);
    v25_.v26 = v20;
    v25_.v27 = v21;
    v25_.v25 = v22 | 1;
    goto LABEL_26;
  }
  LOBYTE(v25_.v25) = 2 * v19;
  v21 = (char*)&v25_.v25 + 1;
  if (v19 != 0) {
  LABEL_26:
    memmove_alt1((__int64)v21, v18, v20);
  }
  v21[v20] = 0;
  result = GameRoutine_1369360(v9 + 145, (unsigned __int8*)&v25_.v25);
  if ((v25_.v25 & 1) != 0 && v25_.v27 != nullptr) {
    v23 = result;
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (__int64)v25_.v27);
    result = v23;
  }
  if (result != nullptr) {
    (__int64*)((__int64 (*)(__int64, __int64, __int64))result[5])(a3, a4, a5);
    return;
  }
  a6 = v11;
LABEL_35:
  *a6 = 0;
  a6[1] = 0;
  {
    result;
    return;
  }
}

void game_13681c0(_QWORD* a1, unsigned __int64 a2)
{
  unsigned __int64 v4;
  _QWORD* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD** v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v17;
    char gap16_[8];
    char v18;
  } v17_;

  v4 = a1[151];
  if (v4 != 0 && a1[153] != 0) {
    v6 = a1 + 150;
    v7 = v4 - 1;
    if ((v4 & (v4 - 1)) != 0) {
      v8 = a2;
      if (a2 >= v4) {
        v8 = a2 % v4;
      }
    }
    else {
      v8 = v7 & a2;
    }
    v9 = *(_QWORD***)(*v6 + 8 * v8);
    if (v9 != nullptr) {
      v10 = *v9;
      if (v10 != nullptr) {
        if ((v4 & v7) == 0) {
          while (1) {
            v12 = v10[1];
            if (v12 == a2) {
              if (v10[2] == a2) {
                goto LABEL_25;
              }
            }
            else if ((v12 & v7) != v8) {
              return;
            }
            v10 = (_QWORD*)*v10;
            if (v10 == nullptr) {
              return;
            }
          }
        }
        do {
          v11 = v10[1];
          if (v11 == a2) {
            if (v10[2] == a2) {
            LABEL_25:
              GameRoutine_1369660((void*)((__int64)&v17_.v17), v6, v10);
              v13 = v17_.v17;
              v17_.v17 = 0;
              if (v13 != 0) {
                if (v17_.v18 == 1) {
                  v14 = *(_QWORD*)(v13 + 32);
                  if (v14 != 0) {
                    v15 = v13;
                    std___1___shared_weak_count___release_weak_alt1(v14);
                    v13 = v15;
                  }
                }
                v16 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v16 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v13);
              }
              return;
            }
          }
          else {
            if (v11 >= v4) {
              v11 %= v4;
            }
            if (v11 != v8) {
              return;
            }
          }
          v10 = (_QWORD*)*v10;
        } while (v10 != nullptr);
      }
    }
  }
}

void game_145d160(__int64 a1, __int64 a2)
{
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
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22[3];
  struct {
    _QWORD v23[4];
    _QWORD* v24;
  } v23_;

  *(_BYTE*)(a1 + 32) = 0;
  v23_.v24 = nullptr;
  GameRoutine_145f5d0(v23_.v23, (_QWORD*)(a1 + 48));
  if (v23_.v24 == v23_.v23) {
    v4 = 32;
  }
  else {
    if (v23_.v24 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v23_.v24 + v4))((__int64)v23_.v24);
LABEL_6:
  v5 = *(_QWORD*)a1;
  v6 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)a1 != v6) {
    do {
      v7 = *(_QWORD*)(v6 - 8);
      if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak_alt1(v7);
      }
      v6 -= 16;
    } while (v6 != v5);
  }
  *(_QWORD*)(a1 + 8) = v5;
  *(_BYTE*)(a1 + 32) = *(_BYTE*)a2;
  v8 = *(_QWORD*)(a2 + 48);
  if (v8 != 0) {
    if (v8 == a2 + 16) {
      v23_.v24 = v23_.v23;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v8 + 24LL))(v8, v23_.v23);
    }
    else {
      v23_.v24 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    }
  }
  else {
    v23_.v24 = nullptr;
  }
  GameRoutine_145f5d0(v23_.v23, (_QWORD*)(a1 + 48));
  if (v23_.v24 == v23_.v23) {
    v9 = 32;
  }
  else {
    if (v23_.v24 == nullptr) {
      goto LABEL_22;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v23_.v24 + v9))((__int64)v23_.v24);
LABEL_22:
  game_1210880((void*)(v22), (*(_BYTE*)(a1 + 32) & 2) != 0);
  v10 = v22[0];
  v11 = v22[1];
  v12 = *(_QWORD*)a1;
  v13 = fw_memory_g_heap_manager_ptr;
  v14 = (v22[1] - v22[0]) >> 3;
  if (v14 > (__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)a1) >> 4) {
    if (v14 >> 60 != 0) {
      GameRoutine_145f710();
    }
    v15 = *(_QWORD*)(a1 + 8) - v12;
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         2 * (v22[1] - v22[0]), 16, 0);
    memcpy_alt1(v16, v12, v15);
    *(_QWORD*)a1 = v16;
    *(_QWORD*)(a1 + 8) = v16 + v15;
    *(_QWORD*)(a1 + 16) = v16 + 16 * v14;
    if (v12 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v13 + v17, v12);
    }
  }
  if (v10 != v11) {
    v18 = (__int64*)v10;
    do {
      v19 = *v18++;
      GameHr_145f010((__int64*)a1, v19);
    } while (v18 != (__int64*)v11);
  }
  v23_.v23[0] = GameData_203fbb0;
  v23_.v23[1] = a1;
  v23_.v24 = v23_.v23;
  FacilityUnitList_145e2c0(a1, (__int64)v23_.v23, 0);
  if (v23_.v24 == v23_.v23) {
    v20 = 32;
  }
  else {
    if (v23_.v24 == nullptr) {
      goto LABEL_36;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))(*v23_.v24 + v20))((__int64)v23_.v24);
LABEL_36:
  GameRoutine_145d8a0((__int64*)a1);
  if (v10 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v13 + v21, v10);
  }
}

__int64 game_149efe0(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int16 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  int v34;
  unsigned int v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64* v44;
  unsigned __int64 v45;
  __int64 v46;
  char* v47;
  int v48;
  unsigned int v49;
  unsigned int v50;
  int v51;
  unsigned int v52;
  __int64 v53;
  int v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  char* v64;
  char* v65;
  __int64 v66;
  unsigned __int64 v67[2];

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_224b660,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_224b660) != 0) {
    GameData_224b520 = 8;
    GameData_224b540 = 0;
    GameData_224b548 = 0;
    GameData_224b550 = 0;
    GameData_224b558 = 0;
    GameData_224b560 = 21;
    GameData_224b578 = 0;
    GameData_224b580 = 0;
    GameData_224b588 = 0;
    GameData_224b590 = 0;
    GameData_224b598 = 0;
    GameData_224b5a0 = 21;
    GameData_224b5b8 = 0;
    GameData_224b5c8 = 0;
    GameData_224b5d0 = 0;
    GameData_224b5d8 = 0;
    GameData_224b5e0 = 8;
    GameData_224b528 = 0;
    GameData_224b530 = (__int64)GameData_212d298;
    GameData_224b568 = 0;
    GameData_224b570 = (__int64)game_149f630;
    GameData_224b5a8 = 0;
    GameData_224b5b0 = (__int64)game_149f630;
    GameData_224b5c0 = 1;
    GameData_224b600 = 0;
    GameData_224b608 = 0;
    GameData_224b610 = 0;
    GameData_224b618 = 0;
    GameData_224b620 = 0;
    GameData_224b648 = 0;
    GameData_224b650 = 0;
    GameData_224b658 = 0;
    GameData_224b640 = 0;
    GameData_224b630 = 0;
    GameData_224b638 = 0;
    GameData_224b628 = 0;
    GameData_224b5e8 = 0;
    GameData_224b5f0 = (__int64)GameData_212c710[0];
    __cxa_guard_release((__int64)&GameData_224b660);
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      176, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  game_ProcInst_Register(v4);
  v7 = *a2;
  v6 = a2[1];
  *(_QWORD*)(v4 + 152) = a2;
  v8 = v6 - v7;
  *(_QWORD*)v4 = game_facility_anonymous_ProcTalk_vtable;
  *(_QWORD*)(v4 + 160) = 0;
  *(_QWORD*)(v4 + 168) = 0;
  if (v6 == v7) {
    return ProcInst_657850(v4, (__int64)&GameData_224b520, (__int64)"ProcTalk",
                           1, a1);
  }
  v60 = (_QWORD*)(v4 + 160);
  v62 = a1;
  if (v8 < 0) {
  LABEL_73:
    GameRoutine_60f930();
  }
  v61 = v4;
  v9 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, v6 - v7, 16, 0);
  v65 = v9;
  v63 = v6;
  v64 = &v9[v8];
  do {
    if (*(_QWORD*)v7 != 0) {
      v12 = GameRoutine_14ba0f0(*(_QWORD*)(*(_QWORD*)v7 + 392LL));
      if (v12 != nullptr) {
        v13 = (__int64*)v12[5];
        v15 = *v13;
        v14 = v13[1];
        if (*v13 != v14) {
          v66 = (__int64)v9;
          v16 = 0;
          v17 = nullptr;
          v18 = 0;
          do {
            v19 = *(_WORD*)(*(_QWORD*)v15 + 42LL);
            if (game_GameModeData_instance_ != 0 &&
                *(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
              v19 &= ~0x200u;
            }
            if (v19 == 0) {
              v20 = *(_QWORD*)(*(_QWORD*)v15 + 32LL);
              if ((unsigned __int64)v17 < v16) {
                *(_QWORD*)v17 = v20;
                v17 += 8;
              }
              else {
                v21 = &v17[-v18];
                v22 = (__int64)&v17[-v18] >> 3;
                v23 = v22 + 1;
                if ((unsigned __int64)(v22 + 1) >> 61 != 0) {
                  goto LABEL_73;
                }
                if ((__int64)(v16 - v18) >> 2 > v23) {
                  v23 = (__int64)(v16 - v18) >> 2;
                }
                if (v16 - v18 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v24 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v24 = v23;
                }
                if (v24 != 0) {
                  if (v24 >> 61 != 0) {
                    goto LABEL_74;
                  }
                  v25 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v24, 16, 0);
                }
                else {
                  v25 = 0;
                }
                v16 = v25 + 8 * v24;
                v26 = (unsigned __int64)&v17[-v18];
                v27 = (__int64)&v21[v25 + -8 * v22];
                *(_QWORD*)&v21[v25] = v20;
                v17 = &v21[v25 + 8];
                memcpy_alt1(v27, v18, v26);
                if (v18 != 0) {
                  v28 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v28 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v18);
                }
                v18 = v27;
              }
            }
            v15 += 8;
          } while (v15 != v14);
          v9 = (char*)v66;
          if ((char*)v18 == v17) {
            v6 = v63;
            if (v18 == 0) {
              goto LABEL_9;
            }
          }
          else {
            nn_os_LockMutex((__int64)&game_g_random_mutex);
            v29 = game_map_MapRandom_instance__ptr[0];
            v30 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL));
            v31 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
            v32 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                  (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
            *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
            *((_DWORD*)v29 + 1) = v30;
            v33 = (v32 >> 8) ^ (v31 >> 19) ^ v32 ^ v31;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v29) = v31;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v29 + 4) = v33;
            v34 = v33 & 0x7FFFFFFF;
            nn_os_UnlockMutex((__int64)&game_g_random_mutex);
            v35 = v34 % (int)((unsigned __int64)&v17[-v18] >> 3);
            if (v65 < v64) {
              v10 = *(_QWORD*)(v18 + 8LL * v35);
              v6 = v63;
              *(_QWORD*)v65 = v10;
              v65 += 8;
            }
            else {
              v36 = (unsigned __int64)&v65[-v66];
              v37 = (__int64)&v65[-v66] >> 3;
              v38 = v37 + 1;
              if ((unsigned __int64)(v37 + 1) >> 61 != 0) {
                goto LABEL_73;
              }
              if ((__int64)&v64[-v66] >> 2 > v38) {
                v38 = (__int64)&v64[-v66] >> 2;
              }
              if ((unsigned __int64)&v64[-v66] >= 0x7FFFFFFFFFFFFFF8LL) {
                v39 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v39 = v38;
              }
              if (v39 != 0) {
                if (v39 >> 61 != 0) {
                LABEL_74:
                  GameRoutine_60a210();
                }
                v40 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v39, 16, 0);
              }
              else {
                v40 = 0;
              }
              v64 = (char*)(v40 + 8 * v39);
              v41 = v40 + v36 - 8 * v37;
              *(_QWORD*)(v40 + v36) = *(_QWORD*)(v18 + 8LL * v35);
              v65 = (char*)(v40 + v36 + 8);
              memcpy_alt1(v41, v66, v36);
              if (v66 != 0) {
                v42 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v42 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v66);
              }
              v6 = v63;
              v9 = (char*)v41;
            }
          }
          v11 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v18);
        }
      }
    }
  LABEL_9:
    v7 += 8;
  } while (v7 != v6);
  if (v9 == v65) {
    v4 = v61;
    a1 = v62;
    if (v65 != nullptr) {
      goto LABEL_69;
    }
  }
  else {
    v43 = v65 - v9;
    v44 = game_map_MapRandom_instance__ptr[0];
    v45 = (unsigned __int64)(v65 - v9) >> 3;
    if ((int)v45 >= 1) {
      v46 = (v43 >> 3) & 0x7FFFFFFF;
      v47 = v9;
      do {
        nn_os_LockMutex((__int64)&game_g_random_mutex);
        v48 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v44);
        v49 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v44 + 4);
        v50 = *(_DWORD*)v44 ^ (*(_DWORD*)v44 << 11);
        *(_DWORD*)v44 = *((_DWORD*)v44 + 1);
        *((_DWORD*)v44 + 1) = v48;
        v51 = (v50 >> 8) ^ (v49 >> 19) ^ v50 ^ v49;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v44) = v49;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v44 + 4) = v51;
        v52 = v51 & 0x7FFFFFFF;
        nn_os_UnlockMutex((__int64)&game_g_random_mutex);
        v53 = *(_QWORD*)v47;
        --v46;
        *(_QWORD*)v47 = *(_QWORD*)&v9[8 * (v52 % (unsigned int)v45)];
        v47 += 8;
        *(_QWORD*)&v9[8 * (v52 % (unsigned int)v45)] = v53;
      } while (v46 != 0);
    }
    v4 = v61;
    v67[1] = (unsigned __int64)&GameData_1a927c1;
    v54 = *(_DWORD*)(*(_QWORD*)(v61 + 152) + 44LL);
    v55 = game_HashString((__int64)&GameData_1a927c1);
    v56 = game_GameModeData_instance_;
    v67[0] = v55;
    if (game_GameModeData_instance_ != 0) {
      v57 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48), v67);
      a1 = v62;
      if (v57 != 0) {
        v56 = *(_DWORD*)(v57 + 32);
      }
      else {
        v56 = 0;
      }
    }
    else {
      a1 = v62;
    }
    *v60 = *(_QWORD*)v9;
    if (v43 != 8 && v54 >= v56) {
      *(_QWORD*)(v61 + 168) = *((_QWORD*)v9 + 1);
    }
  LABEL_69:
    v58 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, (__int64)v9);
  }
  return ProcInst_657850(v4, (__int64)&GameData_224b520, (__int64)"ProcTalk", 1,
                         a1);
}

__int64 game_14a0820(__int64* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 result;

  v2 = fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 528, 16, 0);
  memset((__int64)(v3 + 1), 0, 0x1D9u);
  *v3 = GameData_21323c8 + 16;
  nn_os_InitializeLightEvent((char*)v3 + 484, 0, 1);
  nn_os_InitializeLightEvent(v3 + 62, 1, 0);
  fw_world_InitializeWorker((__int64)v3, 536870920, 0x100000);
  nn_os_StartThread((__int64)(v3 + 4));
  v4 = a1[6];
  a1[6] = (__int64)v3;
  if (v4 != 0) {
    Executor_Unknown2(v4);
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v5, v4);
  }
  game_14a0f30_alt1(a1);
  result = (*(__int64 (**)(_QWORD, float, float, float))(
      **(_QWORD**)(*a1 + 24) + 392LL))(
      *(_QWORD*)(*a1 + 24), 0x1.6666660000000p-1f, 0x1.6666660000000p-1f,
      0x1.99999a0000000p-3f);
  a1[4] = result;
  return result;
}

void game_14a0940(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  void (***v4)(_QWORD);
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;

  v1 = *(_QWORD**)(a1 + 8);
  v2 = *(_QWORD**)(a1 + 16);
  if (v1 != v2) {
    do {
      if (*v1 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v1 + 8LL))(*v1);
      }
      ++v1;
    } while (v1 != v2);
    v1 = *(_QWORD**)(a1 + 8);
  }
  v4 = *(void (****)(_QWORD))(a1 + 32);
  *(_QWORD*)(a1 + 16) = v1;
  (**v4)(v4);
  v5 = *(_QWORD**)a1;
  *(_QWORD*)a1 = 0;
  if (v5 != nullptr) {
    cphysx_149fa70(v5);
    v6 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v6,
                                       (__int64)v5);
  }
  v7 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 48) = 0;
  if (v7 != 0) {
    Executor_Unknown2(v7);
    v8 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v8, v7);
    v9 = *(_QWORD*)(a1 + 48);
    *(_QWORD*)(a1 + 48) = 0;
    if (v9 != 0) {
      Executor_Unknown2(v9);
      v10 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v10, v9);
    }
  }
  v11 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 40) = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11);
  }
  v12 = *(_QWORD*)(a1 + 8);
  if (v12 != 0) {
    v13 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 16) = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v13 + v14, v12);
  }
  v15 = *(_QWORD**)a1;
  *(_QWORD*)a1 = 0;
  if (v15 != nullptr) {
    cphysx_149fa70(v15);
    v16 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v16,
                                       (__int64)v15);
  }
}

void game_14a0f30(__int64* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  void (***v5)(_QWORD);
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[3];
  __int64 v15;

  v2 = fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  *v3 = GameData_2131658[0] + 16;
  v3[3] = 0;
  v3[4] = 0;
  v3[2] = 0;
  v3[1] = cphysx_ErrorCallback_vtable;
  v4 = GameRoutine_55ae20(84279296, (__int64)v3, (__int64)(v3 + 1));
  v5 = (void (***)(_QWORD))v3[2];
  v3[2] = v4;
  if (v5 != nullptr) {
    (**v5)(v5);
    v4 = v3[2];
  }
  v15 = 0x412000003F800000LL;
  v6 = PxCreatePhysics(84279296, v4, &v15, 1, 0, 0);
  v7 = v3[3];
  v3[3] = v6;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
  }
  v8 = (_QWORD*)*a1;
  *a1 = (__int64)v3;
  if (v8 != nullptr) {
    cphysx_149fa70(v8);
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v9, (__int64)v8);
  }
  LODWORD(v15) = 0;
  v10 = physx_PxDefaultCpuDispatcherCreate(0, (__int64)&v15, 0, 0);
  v11 = a1[5];
  a1[5] = v10;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11);
    v10 = a1[5];
  }
  v12 = *a1;
  v13 = *((_QWORD*)GameData_212c828 + 1);
  v14[0] = *(_QWORD*)GameData_212c828;
  v14[1] = v13;
  GameRoutine_149fc00(v12, v10, v14);
}

void game_156c240(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v5;
  char v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int128 v10;
  __int128 v11;
  unsigned __int64 v12;
  float v13;
  float v14;
  float v15;
  __int64 v16;
  __int128 v17;
  float v18;
  __int128 v19;
  unsigned __int64 v20;
  float v21;
  float v22;
  unsigned __int8 explicit;
  __int64* v24;
  __int64* v25;
  unsigned int v26;
  float v28;
  float v29;
  float v30;
  float v31;
  __int64 v32;
  int v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  unsigned int v37;
  float v38;
  __int64 v39;
  unsigned int v40;
  float v41;
  __int64 v42;
  float v43;
  float v44;
  char v45;
  float v46[2];
  __int64 v47;
  unsigned __int64 v48;
  _BYTE v49[4];

  if (*a1 != 0) {
    v2 = a1[1];
    v3 = a1[3];
    if (v2 != 0 || v3 != 0) {
      v5 = (__int64*)a1[2];
      v6 = *((_BYTE*)a1 + 52);
      v49[0] = 0;
      v48 = 0xFF7FFFFF7F7FFFFFLL;
      v47 = 0x7F7FFFFFFF7FFFFFLL;
      if (v2 != 0) {
        v7 = LANES128_OF(vmulq_f32(*(float32x4_t*)(v2 + 128),
                                   *(float32x4_t*)(v2 + 128)))
                 .n128_u64[0];
        GameRoutine_156bee0(
            (const char*)v2, (__int64)&v48, (__int64)&v47, (__int64)v49, v6,
            sqrtf((float)(*(float*)&v7 +
                          (float)(COERCE_FLOAT(*(_OWORD*)(v2 + 112)) *
                                  COERCE_FLOAT(*(_OWORD*)(v2 + 112)))) +
                  (float)(COERCE_FLOAT(*(_OWORD*)(v2 + 144)) *
                          COERCE_FLOAT(*(_OWORD*)(v2 + 144)))) /
                *(float*)(v2 + 72),
            sqrtf(
                (float)(*((float*)&v7 + 1) +
                        (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v2 + 112))) *
                                COERCE_FLOAT(HIDWORD(*(_QWORD*)(v2 + 112))))) +
                (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v2 + 144))) *
                        COERCE_FLOAT(HIDWORD(*(_QWORD*)(v2 + 144))))) /
                *(float*)(v2 + 76));
      }
      if (v3 != 0) {
        v8 = 8 * v3;
        do {
          v9 = *v5++;
          v10 = *(_OWORD*)(v9 + 112);
          v11 = *(_OWORD*)(v9 + 144);
          v12 = LANES128_OF(vmulq_f32(*(float32x4_t*)(v9 + 128),
                                      *(float32x4_t*)(v9 + 128)))
                    .n128_u64[0];
          v13 = sqrtf(
              (float)(*(float*)&v12 + (float)(*(float*)&v10 * *(float*)&v10)) +
              (float)(*(float*)&v11 * *(float*)&v11));
          *(float*)&v10 = sqrtf(
              (float)(*((float*)&v12 + 1) +
                      (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v9 + 112))) *
                              *((float*)&v10 + 1))) +
              (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v9 + 144))) *
                      *((float*)&v11 + 1)));
          v46[0] = v13;
          LODWORD(v46[1]) = v10;
          GameHr_156bc80(v9, v46, (float*)&v48, (float*)&v47, v49, v6);
          v8 -= 8;
        } while (v8 != 0);
      }
      v14 = 0x0.0p+0f;
      v15 = 0x0.0p+0f;
      if ((v49[0] & 1) != 0) {
        v14 = vabds_f32(*(float*)&v47, *(float*)&v48);
        v15 = vabds_f32(*((float*)&v47 + 1), *((float*)&v48 + 1));
      }
      v16 = *a1;
      v17 = *(_OWORD*)(*a1 + 144);
      if (*((_BYTE*)a1 + 51) != 0) {
        v18 = v15;
      }
      else {
        v18 = v14;
      }
      if (*((_BYTE*)a1 + 51) == 0) {
        v14 = v15;
      }
      v19 = *(_OWORD*)(v16 + 112);
      v20 = LANES128_OF(vmulq_f32(*(float32x4_t*)(v16 + 128),
                                  *(float32x4_t*)(v16 + 128)))
                .n128_u64[0];
      v21 =
          *((float*)a1 + 8) +
          (float)(v18 / sqrtf((float)(*(float*)&v20 +
                                      (float)(*(float*)&v19 * *(float*)&v19)) +
                              (float)(*(float*)&v17 * *(float*)&v17)));
      v22 = *((float*)a1 + 9) +
            (float)(v14 /
                    sqrtf((float)(*((float*)&v20 + 1) +
                                  (float)(COERCE_FLOAT(
                                              HIDWORD(*(_QWORD*)(v16 + 112))) *
                                          *((float*)&v19 + 1))) +
                          (float)(*((float*)&v17 + 1) * *((float*)&v17 + 1))));
      if (*((_BYTE*)a1 + 48) == 1) {
        explicit = atomic_load_explicit(
            (atomic_uchar* volatile)GameData_21318f0, memory_order_acquire);
        v24 = GameData_21318e8;
        if ((explicit & 1) == 0 &&
            __cxa_guard_acquire((__int64)GameData_21318f0) != 0) {
          *v24 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
          __cxa_guard_release((__int64)GameData_21318f0);
        }
        v25 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        if (v25 == v24) {
          goto LABEL_27;
        }
        do {
          v25 = (__int64*)*v25;
        } while (v25 != v24 && v25 != nullptr);
        if (v25 != nullptr) {
        LABEL_27:
          LOWORD(v26) = *(_WORD*)(v16 + 220);
          v28 = (float)v26;
          LOWORD(v26) = *(_WORD*)(v16 + 222);
          v29 = (float)v26;
          LOWORD(v26) = *(_WORD*)(v16 + 224);
          v30 = (float)v26;
          if (*(_BYTE*)(v16 + 264) == 2) {
            v31 = 0x0.0p+0f;
            if (*(char*)(v16 + 265) >= 1) {
              v32 = *(_QWORD*)(*(_QWORD*)(v16 + 272) + 8LL);
              if (v32 != 0) {
                v33 = *(_DWORD*)(v32 + 20);
                if ((v33 & 3) != 0) {
                  v34 = *(_QWORD*)(*(_QWORD*)(v32 + 24) + 8LL);
                  if (v34 != 0) {
                    (*(__attribute__((swiftcall)) void (**)(
                        PSEUDO_X8, __int64))(*(_QWORD*)v34 + 32LL))(
                        (void*)(&v48), (__int64)v34);
                    LOWORD(v35) = v48;
                    v33 = *(_DWORD*)(v32 + 20);
                    v31 = fmaxf((float)v35, 0x0.0p+0f);
                  }
                  if ((v33 & 2) != 0) {
                    v36 = *(_QWORD*)(*(_QWORD*)(v32 + 24) + 24LL);
                    if (v36 != 0) {
                      (*(__attribute__((swiftcall)) void (**)(
                          PSEUDO_X8, __int64))(*(_QWORD*)v36 + 32LL))(
                          (void*)(&v48), (__int64)v36);
                      LOWORD(v37) = v48;
                      v33 = *(_DWORD*)(v32 + 20);
                      v38 = (float)v37;
                      if (v31 < v38) {
                        v31 = v38;
                      }
                    }
                    if ((~v33 & 3) == 0) {
                      v39 = *(_QWORD*)(*(_QWORD*)(v32 + 24) + 40LL);
                      if (v39 != 0) {
                        (*(__attribute__((swiftcall)) void (**)(
                            PSEUDO_X8, __int64))(*(_QWORD*)v39 + 32LL))(
                            (void*)(&v48), (__int64)v39);
                        LOWORD(v40) = v48;
                        v41 = (float)v40;
                        if (v31 < v41) {
                          v31 = v41;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            LOWORD(v26) = *(_WORD*)(v16 + 218);
            v31 = (float)v26;
          }
          v21 = fmaxf(v21, v31 + v28);
          v22 = fmaxf(v22, v29 + v30);
        }
      }
      v42 = *a1;
      if (*((_BYTE*)a1 + 49) == 1) {
        v43 = *(float*)(v42 + 84);
      }
      else {
        v43 = fmaxf(v22, *((float*)a1 + 11));
      }
      if (*((_BYTE*)a1 + 50) == 1) {
        v44 = *(float*)(v42 + 80);
      }
      else {
        v44 = fmaxf(v21, *((float*)a1 + 10));
      }
      v45 = *(_BYTE*)(v42 + 88);
      *(float*)(v42 + 80) = v44;
      *(float*)(v42 + 84) = v43;
      *(_BYTE*)(v42 + 88) = v45 | 0x10;
    }
  }
}

__attribute__((swiftcall)) void game_156cb80(PSEUDO_X8 x8_, __int64 a1,
                                             const char* a2)
{

#pragma clang fp contract(off)
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char* v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  char* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  char* v22;
  unsigned __int8* v23;
  unsigned __int64 v24;
  bool v25;
  char v26;
  char** v27;
  unsigned __int64 v28;
  char** v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int8* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  char* v42;
  unsigned __int64 v43;
  char** v44;
  unsigned __int64 v45;
  const char* v46;
  unsigned __int64 v47;
  char** v48;
  char* v49;
  unsigned __int64 v50;
  char** v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  char* v59;
  struct {
    __int64 v60;
    unsigned __int64 v61;
    char* v62;
  } v60_;
  struct {
    __int64 v63;
    unsigned __int64 v64;
    char* v65;
  } v63_;
  int v66;
  int v67;
  float v68;
  struct {
    char* v69;
    unsigned __int64 v70;
    char** v71;
    unsigned __int64 v72;
    unsigned __int64 v73;
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
  } v69_;

  if (a1 == 0 || a2 == nullptr) {
    a3[1] = 0;
    a3[2] = 0;
    *a3 = 0;
    return;
  }
  v63_.v64 = 0;
  v63_.v65 = nullptr;
  v63_.v63 = 0;
  v5 = (char*)a2;
  GameHr_156ca00((__int64)&v63_.v63, a2);
  v6 = v63_.v64;
  if ((v63_.v63 & 1) == 0) {
    v6 = (unsigned __int64)(unsigned __int8)v63_.v63 >> 1;
  }
  if (v6 == 0 ||
      ((v63_.v63 & 1) == 0 ? (v7 = (char*)&v63_.v63 + 1) : (v7 = v63_.v65),
       v7 != nullptr && (v68 = 0x0.0p+0f,
                         ui_text_190a0c0((float*)&v69_.v69, (__int64)&v60_.v60,
                                         &v68, (_QWORD*)a1, (__int64)v7),
                         *(float*)&v69_.v69 <= *(float*)(a1 + 80)))) {
    v13 = v63_.v64;
    *a3 = v63_.v63;
    a3[1] = v13;
    a3[2] = (__int64)v63_.v65;
    return;
  }
  v69_.v74 = -1;
  v69_.v75 = -1;
  v69_.v76 = -1;
  v69_.v77 = -1;
  v8 = *msg_MessageManager_instance__ptr[0];
  v69_.v78 = -1;
  v69_.v79 = -1;
  v69_.v80 = -1;
  v69_.v81 = -1;
  v69_.v82 = -1;
  v69_.v83 = -1;
  v69_.v84 = -1;
  v69_.v85 = -1;
  v69_.v69 = (char*)(GameData_212e348 + 2);
  v69_.v70 = 0xFFFF0001FFFF0000LL;
  v69_.v71 = (char**)0xFFFF0004FFFF0002LL;
  v69_.v72 = 0xFFFF0006FFFF0005LL;
  v69_.v86 = 8;
  v69_.v73 = 0xFFFF0008FFFF0007LL;
  v9 = GameRoutine_a4dbe0(v8, "MID_Sys_Ellipsis", 0);
  v10 = strlen_alt1(v9);
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v11 = v10;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v10 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v14, 16, 0);
    v60_.v61 = v11;
    v60_.v62 = v12;
    v60_.v60 = v14 | 1;
  }
  else {
    LOBYTE(v60_.v60) = 2 * v10;
    v12 = (char*)&v60_.v60 + 1;
    if (v10 == 0) {
      goto LABEL_22;
    }
  }
  memmove_alt1((__int64)v12, (__int64)v9, v11);
LABEL_22:
  v12[v11] = 0;
  if ((v60_.v60 & 1) != 0) {
    v15 = v60_.v62;
  }
  else {
    v15 = (char*)&v60_.v60 + 1;
  }
  if (v15 == nullptr ||
      (v67 = 0,
       ui_text_190a0c0((float*)&v69_.v69, (__int64)&v68, (float*)&v67,
                       (_QWORD*)a1, (__int64)v15),
       *(float*)&v69_.v69 > *(float*)(a1 + 80))) {
    a3[1] = 0;
    a3[2] = 0;
    *a3 = 0;
    goto LABEL_113;
  }
  v57 = a1;
  v58 = a3;
  v16 = 0;
  v17 = nullptr;
  v18 = 0;
  v19 = 0;
  do {
    v69_.v72 = 0;
    v69_.v73 = 0;
    v69_.v70 = 0;
    v69_.v71 = nullptr;
    v69_.v69 = nullptr;
    v21 = TextSelector_1905ba0(&v69_.v69, v5);
    if (v21 == nullptr || ((v22 = v21, v23 = (unsigned __int8*)v69_.v69,
                            v24 = v69_.v70, v69_.v69 != nullptr)
                               ? (v25 = v69_.v70 == 0)
                               : (v25 = true),
                           v25)) {
      v26 = 0;
    }
    else {
      v59 = v5;
      if (v69_.v71 == (char**)v69_.v72) {
        while (1) {
          v68 = 0x0.0p+0f;
          LOWORD(v67) = 0;
          v23 = GameRoutine_112ca90(v23, (int*)&v68, &v67);
          v30 = (unsigned __int16)v67;
          if ((_WORD)v67 == 0) {
            break;
          }
          v19 += (unsigned __int16)v67;
          if ((unsigned __int64)v17 < v18) {
            *(_QWORD*)v17 = v19;
            v17 += 8;
            v24 -= v30;
            if (v24 == 0) {
              goto LABEL_43;
            }
          }
          else {
            v31 = &v17[-v16];
            v32 = (__int64)&v17[-v16] >> 3;
            v33 = v32 + 1;
            if ((unsigned __int64)(v32 + 1) >> 61 != 0) {
              GameRoutine_65c760();
            }
            if ((__int64)(v18 - v16) >> 2 > v33) {
              v33 = (__int64)(v18 - v16) >> 2;
            }
            if (v18 - v16 >= 0x7FFFFFFFFFFFFFF8LL) {
              v34 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v34 = v33;
            }
            if (v34 != 0) {
              if (v34 >> 61 != 0) {
                GameRoutine_60a210();
              }
              v35 = v23;
              v36 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v34, 16, 0);
            }
            else {
              v35 = v23;
              v36 = 0;
            }
            v18 = v36 + 8 * v34;
            v37 = (unsigned __int64)&v17[-v16];
            v38 = (__int64)&v31[v36 + -8 * v32];
            *(_QWORD*)&v31[v36] = v19;
            v17 = &v31[v36 + 8];
            memcpy_alt1(v38, v16, v37);
            if (v16 != 0) {
              v39 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v39 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v16);
            }
            v16 = v38;
            v23 = v35;
            v24 -= v30;
            if (v24 == 0) {
              goto LABEL_43;
            }
          }
        }
        v5 = v59;
        v26 = 0;
      }
      else {
        v19 += v69_.v70;
      LABEL_43:
        v26 = 1;
        v5 = &v22[(_QWORD)v59];
      }
    }
    v27 = v69_.v71;
    v28 = v69_.v72;
    v69_.v69 = nullptr;
    v69_.v70 = 0;
    v29 = v69_.v71;
    if (v69_.v71 != (char**)v69_.v72) {
      do {
        *(_DWORD*)(v28 - 24) = 0;
        v28 -= 24LL;
        *(_QWORD*)(v28 + 8) = 0;
        *(_WORD*)(v28 + 16) = 0;
      } while ((char**)v28 != v27);
      v29 = v69_.v71;
    }
    if (v29 != nullptr) {
      if (v29 == v27) {
        v69_.v72 = (unsigned __int64)v29;
      }
      else {
        do {
          *((_DWORD*)v27 - 6) = 0;
          v27 -= 3;
          v27[1] = nullptr;
          *((_WORD*)v27 + 8) = 0;
        } while (v27 != v29);
        v69_.v72 = (unsigned __int64)v29;
        v29 = v69_.v71;
        if (v69_.v71 == nullptr) {
          continue;
        }
      }
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, (__int64)v29);
    }
  } while ((v26 & 1) != 0);
  v69_.v70 = 0;
  v69_.v71 = nullptr;
  v69_.v69 = nullptr;
  if (v17 == (char*)v16) {
  LABEL_101:
    if ((v60_.v60 & 1) != 0) {
      fw_text_String_CopyTerminated(v58, (__int64)v60_.v62, v60_.v61);
    }
    else {
      v52 = v60_.v61;
      *v58 = v60_.v60;
      v58[1] = v52;
      v58[2] = (__int64)v60_.v62;
    }
  }
  else {
    while (1) {
      v41 = *((_QWORD*)v17 - 1);
      v17 -= 8;
      v40 = v41;
      v42 = (v63_.v63 & 1) != 0 ? v63_.v65 : (char*)&v63_.v63 + 1;
      GameRoutine_60a060((char*)&v69_.v69, (__int64)v42, v40);
      while (1) {
        v43 = (unsigned __int64)(unsigned __int8)v69_.v69 >> 1;
        if (((unsigned __int8)v69_.v69 & 1) != 0) {
          v43 = v69_.v70;
        }
        if (v43 == 0) {
          break;
        }
        v44 = ((unsigned __int8)v69_.v69 & 1) != 0
                  ? v69_.v71
                  : (char**)((char*)&v69_.v69 + 1);
        if (*((_BYTE*)v44 + v43 - 1) != 32) {
          break;
        }
        v45 = v43 - 1;
        if (((unsigned __int8)v69_.v69 & 1) != 0) {
          v69_.v70 = v45;
          *((_BYTE*)v69_.v71 + v45) = 0;
        }
        else {
          LOBYTE(v69_.v69) = 2 * v45;
          *((_BYTE*)&v69_.v69 + v45 + 1) = 0;
        }
      }
      v46 = (v60_.v60 & 1) != 0 ? v60_.v62 : (char*)&v60_.v60 + 1;
      v47 = (v60_.v60 & 1) != 0
                ? v60_.v61
                : (unsigned __int64)(unsigned __int8)v60_.v60 >> 1;
      GameRoutine_1a09ce0((__int64)&v69_.v69, v46, v47);
      v48 = ((unsigned __int8)v69_.v69 & 1) != 0
                ? v69_.v71
                : (char**)((char*)&v69_.v69 + 1);
      if (v48 != nullptr) {
        v66 = 0;
        ui_text_190a0c0(&v68, (__int64)&v67, (float*)&v66, (_QWORD*)v57,
                        (__int64)v48);
        if (v68 <= *(float*)(v57 + 80)) {
          break;
        }
      }
      if (v17 == (char*)v16) {
        goto LABEL_101;
      }
    }
    v49 = v69_.v69;
    v50 = v69_.v70;
    v69_.v69 = nullptr;
    v69_.v70 = 0;
    *v58 = (__int64)v49;
    v58[1] = v50;
    v51 = v69_.v71;
    v69_.v71 = nullptr;
    v58[2] = (__int64)v51;
  }
  if (((unsigned __int8)v69_.v69 & 1) != 0 && v69_.v71 != nullptr) {
    v53 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, (__int64)v69_.v71);
  }
  if (v16 != 0) {
    v54 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v54 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v54, v16);
  }
LABEL_113:
  if ((v60_.v60 & 1) != 0 && v60_.v62 != nullptr) {
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, (__int64)v60_.v62);
  }
  if ((v63_.v63 & 1) != 0 && v63_.v65 != nullptr) {
    v56 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v56 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, (__int64)v63_.v65);
  }
}

__int64 game_159e7c0(__int64* a1, char a2)
{
  const char* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  _QWORD v7[2];
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  v2 = "L_ArrowR";
  if ((a2 & 1) != 0) {
    v2 = "L_ArrowL";
  }
  v7[0] = v2;
  v7[1] = 8;
  GameRoutine_159e180((void*)(&v8_.v8), a1, v7);
  result = v8_.v9;
  if (v8_.v9 != 0) {
    v4 = std___1___shared_weak_count_lock(v8_.v9);
    v5 = v8_.v8;
    result = v8_.v9;
    if (v8_.v9 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v8_.v9);
    }
    if (v4 == 0 || v5 == 0) {
      if (v4 == 0) {
        return result;
      }
    }
    else {
      result = GameHr_1562680(
          v5 + 88,
          game_menu_kTabAnimations[3 * *(unsigned __int8*)(v5 + 1041) + 2],
          0x1.0000000000000p+0f);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      return std___1___shared_weak_count___release_weak_alt1(v4);
    }
  }
  return result;
}

void game_159f000(__int64* a1, __int64* a2, __int64* a3, char a4)
{
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  char v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  char v29;
  char v30;
  __int64 v31;
  char* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int8* v36;
  unsigned __int8* v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  char v41;
  __int128 v42;
  char v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  bool v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  float v53;
  float v54;
  float v55;
  float v56;
  unsigned __int8* v57;
  unsigned __int8* v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  char v68;
  char v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int128 v73;
  __int64 v74;
  __int64 v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  unsigned int v81;
  int v82;
  unsigned __int64 v83;
  float32x2_t v84;
  float32x2_t v85;
  float32x2_t v86;
  float32x2_t v87;
  unsigned __int64 v88;
  bool v89;
  unsigned __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  unsigned __int8* v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  bool v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v106;
  __int64 v107;
  unsigned __int32 v108;
  unsigned int v110;
  __int128 v111;
  struct {
    __int64 v112[2];
    __int64 v113;
  } v112_;
  struct {
    __int64 v114;
    __int64 v115;
  } v114_;
  struct {
    __int64 v116;
    __int64 v117;
  } v116_;
  struct {
    __int64 v118[2];
    __int64 v119;
  } v118_;
  struct {
    __int64 v120;
    unsigned __int64 v121;
    __int64 v122;
  } v120_;
  struct {
    __int64 v123[2];
    __int64 v124;
  } v123_;
  struct {
    __int64 v125[2];
    __int64 v126;
  } v125_;

  v6 = *a2;
  v7 = (_QWORD*)a2[1];
  if ((_QWORD*)v6 != v7) {
    GameHr_15a8720(v6, v7, (2 * __clz(((__int64)v7 - v6) >> 5)) ^ 0x7E, 1);
  }
  v8 = (_QWORD*)a3[1];
  if ((_QWORD*)*a3 != v8) {
    GameRoutine_15a9e40(*a3, v8, (2 * __clz(((__int64)v8 - *a3) >> 5)) ^ 0x7E,
                        1);
  }
  if (GameData_21f1e08 != 0) {
    v10 = *a2;
    v9 = a2[1];
    if (*a2 == v9) {
      v11 = 0;
    LABEL_195:
      if (v11 != 0) {
        v104 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v104 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v104, v11);
      }
      return;
    }
    v11 = 0;
    v12 = nullptr;
    v13 = 0;
    v14 = a2[1];
    do {
      v15 = *(_DWORD*)(v10 + 28);
      if ((v15 & 0x80000000) == 0) {
        v16 = (char*)v11;
        if ((char*)v11 != v12) {
          v16 = (char*)v11;
          while (*(_DWORD*)v16 != v15) {
            v16 += 8;
            if (v16 == v12) {
              goto LABEL_20;
            }
          }
        }
        if (v16 == v12 || (signed __int32)*((_DWORD*)v16 + 1) >=
                              (signed __int32)*(_DWORD*)(v10 + 24)) {
        LABEL_20:
          if ((*(_BYTE*)v10 & 1) != 0) {
            fw_text_String_CopyTerminated(v123_.v123, *(_QWORD*)(v10 + 16),
                                          *(_QWORD*)(v10 + 8));
          }
          else {
            v19 = *(_QWORD*)v10;
            v20 = *(_QWORD*)(v10 + 16);
            v123_.v123[1] = *(_QWORD*)(v10 + 8);
            v123_.v124 = v20;
            v123_.v123[0] = v19;
          }
          v21 = game_159fa00(a1, (unsigned __int8*)v123_.v123);
          if ((v123_.v123[0] & 1) != 0 && v123_.v124 != 0) {
            v22 = v21;
            v23 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v23 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v123_.v124);
            v21 = v22;
          }
          if ((v21 & 1) != 0) {
            if ((unsigned __int64)v12 < v13) {
              *(_DWORD*)v12 = *(_DWORD*)(v10 + 28);
              *((_DWORD*)v12 + 1) = *(_DWORD*)(v10 + 24);
              v12 += 8;
            }
            else {
              v24 = &v12[-v11];
              v25 = (__int64)&v12[-v11] >> 3;
              v26 = v25 + 1;
              if ((unsigned __int64)(v25 + 1) >> 61 != 0) {
                GameRoutine_c06430();
              }
              if ((__int64)(v13 - v11) >> 2 > v26) {
                v26 = (__int64)(v13 - v11) >> 2;
              }
              if (v13 - v11 >= 0x7FFFFFFFFFFFFFF8LL) {
                v27 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v27 = v26;
              }
              if (v27 != 0) {
                if (v27 >> 61 != 0) {
                  GameRoutine_60a210();
                }
                v28 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v27, 16, 0);
              }
              else {
                v28 = 0;
              }
              v32 = &v24[v28];
              v13 = v28 + 8 * v27;
              v33 = (unsigned __int64)&v12[-v11];
              v34 = (__int64)&v24[v28 + -8 * v25];
              v12 = &v24[v28 + 8];
              *(_DWORD*)v32 = *(_DWORD*)(v10 + 28);
              *((_DWORD*)v32 + 1) = *(_DWORD*)(v10 + 24);
              memcpy_alt1(v34, v11, v33);
              if (v11 != 0) {
                v35 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v35 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v11);
              }
              v11 = v34;
              v9 = v14;
            }
          }
        }
        else {
          if ((*(_BYTE*)v10 & 1) != 0) {
            fw_text_String_CopyTerminated(v125_.v125, *(_QWORD*)(v10 + 16),
                                          *(_QWORD*)(v10 + 8));
          }
          else {
            v17 = *(_QWORD*)v10;
            v18 = *(_QWORD*)(v10 + 16);
            v125_.v125[1] = *(_QWORD*)(v10 + 8);
            v125_.v126 = v18;
            v125_.v125[0] = v17;
          }
          v29 = game_159fa00(a1, (unsigned __int8*)v125_.v125);
          if ((v125_.v125[0] & 1) != 0 && v125_.v126 != 0) {
            v30 = v29;
            v31 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v31 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v125_.v126);
            v29 = v30;
            v9 = v14;
          }
          if ((v29 & 1) != 0) {
            *((_DWORD*)v16 + 1) = *(_DWORD*)(v10 + 24);
          }
        }
      }
      v10 += 32;
    } while (v10 != v9);
    v37 = (unsigned __int8*)*a2;
    v36 = (unsigned __int8*)a2[1];
    if ((unsigned __int8*)*a2 == v36) {
      goto LABEL_195;
    }
    v106 = a2[1];
    while (1) {
      v38 = (char*)v11;
      if ((char*)v11 != v12) {
        v38 = (char*)v11;
        while (*(_DWORD*)v38 != *((_DWORD*)v37 + 7)) {
          v38 += 8;
          if (v38 == v12) {
            goto LABEL_65;
          }
        }
      }
      if (v38 != v12 && (signed __int32)*((_DWORD*)v38 + 1) >
                            (signed __int32)*((_DWORD*)v37 + 6)) {
        goto LABEL_57;
      }
    LABEL_65:
      v120_.v121 = 0;
      v120_.v122 = 0;
      v120_.v120 = 0;
      if ((*v37 & 1) != 0) {
        fw_text_String_CopyTerminated(v118_.v118, *((_QWORD*)v37 + 2),
                                      *((_QWORD*)v37 + 1));
      }
      else {
        v39 = *(_QWORD*)v37;
        v40 = *((_QWORD*)v37 + 2);
        v118_.v118[1] = *((_QWORD*)v37 + 1);
        v118_.v119 = v40;
        v118_.v118[0] = v39;
      }
      v41 = game_159fa00(a1, (unsigned __int8*)v118_.v118);
      if ((v118_.v118[0] & 1) != 0 && v118_.v119 != 0) {
        v43 = v41;
        v44 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v118_.v119);
        v41 = v43;
      }
      if ((v41 & 1) == 0) {
      LABEL_188:
        if ((v120_.v120 & 1) != 0) {
          goto LABEL_189;
        }
        goto LABEL_57;
      }
      v45 = *v37;
      v46 = *((_QWORD*)v37 + 2);
      v47 = (v45 & 1) == 0;
      v48 = a1[1];
      v49 = v45 >> 1;
      if (v47) {
        v46 = (__int64)(v37 + 1);
      }
      if (!v47) {
        v49 = *((_QWORD*)v37 + 1);
      }
      v114_.v114 = v46;
      v114_.v115 = v49;
      if (v48 == 0) {
      LABEL_92:
        v50 = 0;
        v51 = 0;
        v52 = (*(_QWORD*)0xC0LL);
        if ((*(_QWORD*)0xC0LL) == 0) {
          goto LABEL_100;
        }
        goto LABEL_96;
      }
      v50 = std___1___shared_weak_count_lock(v48);
      if (v50 == 0) {
        break;
      }
      v51 = *a1;
      if (*a1 != 0) {
        GameRoutine_15b71b0((void*)(&v116_.v116));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v51 != 0) {
          goto LABEL_85;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
        std___1___shared_weak_count___release_weak_alt1(v50);
        if (v51 != 0) {
        LABEL_85:
          if (v116_.v117 == 0) {
            goto LABEL_92;
          }
          v51 = std___1___shared_weak_count_lock(v116_.v117);
          if (v51 != 0) {
            v50 = v116_.v116;
          }
          else {
            v50 = 0;
          }
          if (v116_.v117 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v116_.v117);
            v52 = *(_QWORD*)(v50 + 192);
            if (v52 == 0) {
              goto LABEL_100;
            }
            goto LABEL_96;
          }
          goto LABEL_95;
        }
      }
      v50 = 0;
      v52 = (*(_QWORD*)0xC0LL);
      if ((*(_QWORD*)0xC0LL) == 0) {
      LABEL_100:
        v116_.v116 = 0;
        v116_.v117 = 0;
        v55 = 0x0.0p+0f;
        LODWORD(v42) = 0;
      LABEL_101:
        if ((float)(v55 - *(float*)&v42) == 0x0.0p+0f) {
          goto LABEL_186;
        }
        goto LABEL_102;
      }
    LABEL_96:
      v53 = *(float*)(v52 + 124);
      v54 = *(float*)(v52 + 140);
      Pane_58dfa0((void*)((float*)&v116_.v116), v52);
      *(float*)&v42 = v54 + *((float*)&v116_.v116 + 1);
      v55 = v54 + *((float*)&v116_.v117 + 1);
      *(float*)&v116_.v116 = v53 + *(float*)&v116_.v116;
      *((float*)&v116_.v116 + 1) = v54 + *((float*)&v116_.v116 + 1);
      v56 = (float)(v53 + *(float*)&v116_.v117) - *(float*)&v116_.v116;
      *(float*)&v116_.v117 = v53 + *(float*)&v116_.v117;
      *((float*)&v116_.v117 + 1) = v54 + *((float*)&v116_.v117 + 1);
      if (v56 == 0x0.0p+0f) {
        goto LABEL_101;
      }
    LABEL_102:
      v57 = (unsigned __int8*)*a3;
      v58 = (unsigned __int8*)a3[1];
      if ((unsigned __int8*)*a3 != v58) {
        *(_QWORD*)&v42 = 0;
        v107 = v50 + 832;
        v111 = v42;
        v110 = 0;
        v108 = 0;
        do {
          v59 = *v37;
          v60 = *v57;
          v61 = *((_QWORD*)v57 + 1);
          if ((v59 & 1) != 0) {
            v62 = *((_QWORD*)v37 + 1);
          }
          else {
            v62 = v59 >> 1;
          }
          v63 = v60 >> 1;
          if ((v60 & 1) != 0) {
            v63 = *((_QWORD*)v57 + 1);
          }
          if (v62 == v63) {
            v64 = (v59 & 1) != 0 ? *((_QWORD*)v37 + 2) : (__int64)(v37 + 1);
            v65 = (v60 & 1) != 0 ? *((_QWORD*)v57 + 2) : (__int64)(v57 + 1);
            if (memcmp(v64, v65, v62) == 0) {
              goto LABEL_104;
            }
          }
          if ((v60 & 1) != 0) {
            fw_text_String_CopyTerminated(v112_.v112, *((_QWORD*)v57 + 2), v61);
          }
          else {
            v66 = *(_QWORD*)v57;
            v67 = *((_QWORD*)v57 + 2);
            v112_.v112[1] = *((_QWORD*)v57 + 1);
            v112_.v113 = v67;
            v112_.v112[0] = v66;
          }
          v68 = game_159fa00(a1, (unsigned __int8*)v112_.v112);
          if ((v112_.v112[0] & 1) != 0 && v112_.v113 != 0) {
            v69 = v68;
            v70 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v70 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v70, v112_.v113);
            v68 = v69;
          }
          if ((v68 & 1) == 0) {
            goto LABEL_104;
          }
          v71 = std___1___shared_weak_count_lock(a1[1]);
          if (*a1 != 0) {
            GameRoutine_15b71b0((void*)(&v114_.v114));
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71);
            std___1___shared_weak_count___release_weak_alt1(v71);
          }
          v72 = std___1___shared_weak_count_lock(v114_.v115);
          v74 = v114_.v114;
          if (v114_.v115 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v114_.v115);
          }
          v75 = *(_QWORD*)(v74 + 192);
          if (v75 != 0) {
            v76 = *(float*)(v75 + 124);
            v77 = *(float*)(v75 + 140);
            Pane_58dfa0((void*)((float*)&v114_.v114), v75);
            v78 = v76 + *(float*)&v114_.v114;
            v79 = v77 + *((float*)&v114_.v114 + 1);
            *(float*)&v114_.v114 = v76 + *(float*)&v114_.v114;
            *((float*)&v114_.v114 + 1) = v77 + *((float*)&v114_.v114 + 1);
            *(float*)&v73 = v76 + *(float*)&v114_.v115;
            v80 = v77 + *((float*)&v114_.v115 + 1);
            *(float*)&v114_.v115 = v76 + *(float*)&v114_.v115;
            *((float*)&v114_.v115 + 1) = v77 + *((float*)&v114_.v115 + 1);
          }
          else {
            v80 = 0x0.0p+0f;
            v79 = 0x0.0p+0f;
            v114_.v114 = 0;
            v114_.v115 = 0;
            v78 = 0x0.0p+0f;
            *(_QWORD*)&v73 = 0;
          }
          if ((float)(*(float*)&v73 - v78) == 0x0.0p+0f &&
              (float)(v80 - v79) == 0x0.0p+0f) {
            goto LABEL_181;
          }
          v81 = *((float*)&v116_.v116 + 1) >= v79;
          if (*(float*)&v116_.v116 >= v78) {
            v82 = 2;
          }
          else {
            v82 = 3;
          }
          if ((a4 & 1) == 0) {
            v81 = v82;
          }
          v83 = (v120_.v120 & 1) != 0
                    ? v120_.v121
                    : (unsigned __int64)(unsigned __int8)v120_.v120 >> 1;
          if (v83 != 0) {
            LANES64(v84).n64_u64[0] = v116_.v116;
            LANES64(v85).n64_u64[0] = __PAIR64__(v110, v111);
            LANES64(v86).n64_u64[0] = __PAIR64__(LODWORD(v79), LODWORD(v78));
            if (v81 == 3) {
              *((_QWORD*)&v73 + 1) = *((_QWORD*)&v111 + 1);
              LANES64(v86).n64_f32[0] = v78;
              LANES64(v84).n64_u32[0] = v116_.v117;
              LANES64(v85).n64_u32[0] = v111;
            }
            else if (v81 == 2) {
              LANES64(v84).n64_u32[0] = v116_.v116;
              LANES64(v86).n64_u32[0] = v73;
              LANES64(v85).n64_u32[0] = v108;
            }
            *(float32x2_t*)&v73 = vsub_f32(v85, v84);
            LANES64(v87).n64_u64[0] = LANES64_OF(vsub_f32(v86, v84)).n64_u64[0];
            if ((float)(LANES64_OF(vmul_f32(v87, v87)).n64_f32[1] +
                        (float)(LANES64(v87).n64_f32[0] *
                                LANES64(v87).n64_f32[0])) >=
                (float)(LANES64_OF(
                            vmul_f32(*(float32x2_t*)&v73, *(float32x2_t*)&v73))
                            .n64_f32[1] +
                        (float)(*(float*)&v73 * *(float*)&v73))) {
              goto LABEL_181;
            }
          }
          v88 = *v57;
          v89 = (v88 & 1) == 0;
          v90 = v88 >> 1;
          if (v89) {
            v91 = (__int64)(v57 + 1);
          }
          else {
            v91 = *((_QWORD*)v57 + 2);
          }
          if (v89) {
            v92 = v90;
          }
          else {
            v92 = *((_QWORD*)v57 + 1);
          }
          v93 = (unsigned __int8*)(v107 + 24LL * v81);
          v94 = *v93;
          if (v92 != 0) {
            v95 = *((_QWORD*)v93 + 1);
            if ((v94 & 1) == 0) {
              v95 = v94 >> 1;
            }
            if (v95 == 0) {
              goto LABEL_164;
            }
            if ((v94 & 1) == 0) {
              *(_WORD*)v93 = 0;
            LABEL_164:
              GameRoutine_60a060((char*)v93, v91, v92);
              goto LABEL_169;
            }
            **((_BYTE**)v93 + 2) = 0;
            *((_QWORD*)v93 + 1) = 0;
            GameRoutine_60a060((char*)v93, v91, v92);
          }
          else if ((v94 & 1) != 0) {
            **((_BYTE**)v93 + 2) = 0;
            *((_QWORD*)v93 + 1) = 0;
          }
          else {
            *(_WORD*)v93 = 0;
          }
        LABEL_169:
          LODWORD(v73) = v114_.v114;
          v111 = v73;
          v110 = HIDWORD(v114_.v114);
          v108 = v114_.v115;
          if (v57 == (unsigned __int8*)&v120_.v120) {
            goto LABEL_181;
          }
          v96 = *v57;
          if ((v120_.v120 & 1) != 0) {
            v99 = (v96 & 1) == 0;
            v100 = v96 >> 1;
            if (v99) {
              v101 = (__int64)(v57 + 1);
            }
            else {
              v101 = *((_QWORD*)v57 + 2);
            }
            if (v99) {
              v102 = v100;
            }
            else {
              v102 = *((_QWORD*)v57 + 1);
            }
            SpineModel_64dde0(&v120_.v120, v101, v102);
          LABEL_181:
            if (v72 != 0) {
              goto LABEL_182;
            }
            goto LABEL_104;
          }
          if ((v96 & 1) != 0) {
            GameRoutine_64df20(&v120_.v120, *((_QWORD*)v57 + 2),
                               *((_QWORD*)v57 + 1));
            if (v72 != 0) {
            LABEL_182:
              if (atomic_fetch_add((atomic_ullong* volatile)(v72 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72);
                std___1___shared_weak_count___release_weak_alt1(v72);
              }
            }
          }
          else {
            v97 = *(_QWORD*)v57;
            v98 = *((_QWORD*)v57 + 2);
            v120_.v121 = *((_QWORD*)v57 + 1);
            v120_.v122 = v98;
            v120_.v120 = v97;
            if (v72 != 0) {
              goto LABEL_182;
            }
          }
        LABEL_104:
          v57 += 32;
        } while (v57 != v58);
      }
    LABEL_186:
      v36 = (unsigned __int8*)v106;
      if (v51 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_188;
      }
      (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
      std___1___shared_weak_count___release_weak_alt1(v51);
      if ((v120_.v120 & 1) != 0) {
      LABEL_189:
        if (v120_.v122 != 0) {
          v103 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v103 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v103, v120_.v122);
        }
      }
    LABEL_57:
      v37 += 32;
      if (v37 == v36) {
        goto LABEL_195;
      }
    }
    v51 = 0;
  LABEL_95:
    v52 = *(_QWORD*)(v50 + 192);
    if (v52 == 0) {
      goto LABEL_100;
    }
    goto LABEL_96;
  }
}

__int64 game_159fa00(__int64* a1, unsigned __int8* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;
  _QWORD v14[2];

  v3 = a1[1];
  if (v3 == 0) {
    goto LABEL_20;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
    goto LABEL_20;
  }
  v5 = *a1;
  v6 = v4;
  if (v5 != 0) {
    GameRoutine_15b71b0((void*)(&v12_.v12));
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v5 == 0) {
      goto LABEL_20;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1(v6);
    if (v5 == 0) {
    LABEL_20:
      LOBYTE(v8) = 0;
      return v8 & 1;
    }
  }
  v14[0] = 0;
  if (v12_.v13 == 0) {
    goto LABEL_20;
  }
  v7 = std___1___shared_weak_count_lock(v12_.v13);
  v14[1] = v7;
  if (v7 != 0) {
    v8 = v12_.v12;
    v14[0] = v12_.v12;
    v9 = v12_.v13;
    if (v12_.v13 == 0) {
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  v8 = 0;
  v9 = v12_.v13;
  if (v12_.v13 != 0) {
  LABEL_12:
    std___1___shared_weak_count___release_weak_alt1(v9);
  }
LABEL_13:
  if (v8 == 0) {
    goto LABEL_26;
  }
  if (*(_QWORD*)(v8 + 192) == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8) & 1) == 0) {
    goto LABEL_25;
  }
  v10 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 24LL);
  while (1) {
    v10 = *(_QWORD*)(v10 + 24);
    if (v10 == 0) {
      break;
    }
    if ((*(_BYTE*)(v10 + 88) & 1) == 0) {
      goto LABEL_25;
    }
  }
  if ((*(_BYTE*)(*(_QWORD*)(v8 + 192) + 88LL) & 1) == 0) {
  LABEL_25:
    LOBYTE(v8) = 0;
  LABEL_26:
    if (v7 == 0) {
      return v8 & 1;
    }
    goto LABEL_27;
  }
  LOBYTE(v8) = FloatingHelp_18ade60(v14);
  if (v7 == 0) {
    return v8 & 1;
  }
LABEL_27:
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  return v8 & 1;
}

__int64 game_15a0060(__int64 result, _DWORD* a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  struct {
    __int64* v9;
    __int64 v10;
  } v9_;

  v2 = result;
  v3 = GameData_212c880[0];
  if (*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF)) !=
          **(_QWORD**)result ||
      (**(_BYTE**)(result + 8) & 1) == 0) {
    v4 = **(int**)(result + 16);
    if ((int)v4 <= 2) {
      LayoutAccessor_1560070((void*)(&v9_.v9), *(__int64**)(result + 32),
                             *(const char**)(*(_QWORD*)(result + 24) + 8 * v4));
      result = v9_.v10;
      if (v9_.v10 != 0) {
        v6 = std___1___shared_weak_count_lock(v9_.v10);
        v7 = v9_.v9;
        result = v9_.v10;
        if (v9_.v10 != 0) {
          result = std___1___shared_weak_count___release_weak_alt1(v9_.v10);
        }
        if (v6 != 0 && v7 != nullptr) {
          v8 = ui_LayoutAccessor_FindPane(v7, (__int64)"Img");
          if (v8 != 0) {
            v8 =
                __dynamic_cast(v8, GameData_212d670[0], GameData_212d678[0], 0);
          }
          game_18415e0(v8,
                       *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * (*a2 & 0xFFF)));
          result = LayoutAccessor_155e830((__int64)v7, 1);
          if (*(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * (*a2 & 0xFFF)) ==
              **(_QWORD**)v2) {
            **(_BYTE**)(v2 + 8) = 1;
          }
          goto LABEL_14;
        }
        if (v6 != 0) {
        LABEL_14:
          if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
            result = std___1___shared_weak_count___release_weak_alt1(v6);
          }
        }
      }
      ++**(_DWORD**)(v2 + 16);
    }
  }
  return result;
}

__int64 game_15d1d80()
{
  __int64 v0;
  __int64 v1;
  atomic_ullong* v2;
  __int64* v3;
  __int64 v4;
  int* v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  struct {
    __int64 v15;
    __int64 v16;
    __int64 v17;
  } v15_;
  __int64* v18;
  __int64 v19[2];
  struct {
    __int64 v20[4];
    int v21;
    char gap92_[4];
    __int64 v22;
    __int64 v23;
  } v20_;
  struct {
    __int64 v24;
    __int64 v25;
  } v24_;
  _QWORD v26[2];

  GameHr_1366ac0((void*)(&v24_.v24), (__int64)"Layout/Common.arc",
                 (__int64)"Common_System_Color");
  v0 = v24_.v24;
  v1 = v24_.v25;
  if (v24_.v25 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v24_.v25 + 8), 1u,
                              memory_order_relaxed);
  }
  v19[0] = 0;
  v19[1] = 0;
  v15_.v15 = 0;
  v15_.v16 = 0;
  __builtin_memset(v20_.v20, 0, sizeof(v20_.v20));
  v20_.v22 = 0;
  v20_.v23 = 0;
  v26[0] = v0;
  v26[1] = v1;
  v15_.v17 = 0;
  v18 = v19;
  v20_.v21 = 1065353216;
  if (v1 != 0) {
    v2 = (atomic_ullong*)(v1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0(&v15_.v15, v26);
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (atomic_fetch_add(v2, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        goto LABEL_9;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      std___1___shared_weak_count___release_weak_alt1(v1);
      if (atomic_fetch_add(v2, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      LABEL_9:
        (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
        std___1___shared_weak_count___release_weak_alt1(v1);
      }
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0(&v15_.v15, v26);
  }
  v3 = (__int64*)&GameData_205ada0;
  v4 = 0;
  v5 = (int*)GameData_212e350;
  v6 = GameData_212d670[0];
  v7 = GameData_212d678[0];
  do {
    v8 = *v3;
    v3 += 2;
    v9 = *v5;
    v10 = ui_LayoutAccessor_FindPane(&v15_.v15, v8);
    if (v10 != 0) {
      v11 = __dynamic_cast(v10, v6, v7, 0);
      if (v11 != 0) {
        v9 = *(_DWORD*)(Pane_58f8a0(v11) + 12);
      }
    }
    *(_DWORD*)((char*)&GameData_22593b0 + v4) = v9;
    v4 += 4;
  } while (v4 != 312);
  if (v24_.v24 != 0) {
    *(_BYTE*)(v24_.v24 + 2376) = 1;
  }
  LayoutAccessor_155e140(&v15_.v15);
  v12 = v20_.v23;
  if (v20_.v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20_.v23 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
  GameRoutine_1564060(v20_.v20);
  GameRoutine_1563f90((__int64)&v18, v19[0]);
  result = v15_.v16;
  if (v15_.v16 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v15_.v16);
  }
  v14 = v24_.v25;
  if (v24_.v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24_.v25 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    return std___1___shared_weak_count___release_weak_alt1(v14);
  }
  return result;
}

__attribute__((swiftcall)) void game_1604a30(PSEUDO_X8 x8_, int a1, int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  const char* v5;
  __int64* v6;
  const char* v7;
  const char** v8;
  const char* v9;
  const char* v10;
  __int64 v11;
  char* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  struct {
    __int64 v21[2];
    const char* v22;
  } v21_;
  struct {
    __int64 v23[2];
    const char* v24;
    __int64* v25;
    unsigned __int64 v26;
    unsigned __int64 v27;
    unsigned __int64 v28;
    int v29;
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
    __int64 v41;
    __int64 v42;
    __int64 v43;
  } v23_;

  GameRoutine_17d8b50((void*)(v23_.v23), a1, (__int64)&GameData_21759e0);
  if ((v23_.v23[0] & 1) != 0) {
    v5 = v23_.v24;
  }
  else {
    v5 = (char*)v23_.v23 + 1;
  }
  GameRoutine_17d8c30((void*)(v21_.v21), a2, (__int64)&GameData_21759e0);
  v6 = msg_MessageManager_instance__ptr[0];
  if ((v21_.v21[0] & 1) != 0) {
    v7 = v21_.v22;
  }
  else {
    v7 = (char*)v21_.v21 + 1;
  }
  v8 = (const char**)msg_MessageManager_empty_text__ptr;
  if (v5 != nullptr) {
    v9 = v5;
  }
  else {
    v9 = *msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v9);
  if (v7 != nullptr) {
    v10 = v7;
  }
  else {
    v10 = *v8;
  }
  GameRoutine_60a020(*v6 + 14728, v10);
  v11 = *v6;
  v23_.v31 = -1;
  v23_.v32 = -1;
  v23_.v33 = -1;
  v23_.v34 = -1;
  v23_.v35 = -1;
  v23_.v36 = -1;
  v23_.v37 = -1;
  v23_.v38 = -1;
  v23_.v39 = -1;
  v23_.v40 = -1;
  v23_.v41 = -1;
  v23_.v42 = -1;
  v23_.v25 = GameData_212e348 + 2;
  v23_.v26 = 0xFFFF0001FFFF0000LL;
  v23_.v27 = 0xFFFF0004FFFF0002LL;
  v23_.v28 = 0xFFFF0006FFFF0005LL;
  v23_.v43 = 8;
  v23_.v29 = -65529;
  v23_.v30 = -65528;
  v12 = GameRoutine_a4dbe0(v11, "MID_Sys_DateTime_MD_Message", 0);
  v13 = strlen_alt1(v12);
  if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v14 = v13;
  if (v13 >= 0x17) {
    if ((v13 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v13 | 7) + 1;
    }
    v17 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v16, 16, 0);
    a3[1] = v14;
    a3[2] = v17;
    *a3 = v16 | 1;
    v15 = v17;
  }
  else {
    *(_BYTE*)a3 = 2 * v13;
    v15 = (__int64)a3 + 1;
    if (v13 == 0) {
      goto LABEL_22;
    }
  }
  memmove_alt1(v15, (__int64)v12, v14);
LABEL_22:
  v18 = v21_.v21[0];
  *(_BYTE*)(v15 + v14) = 0;
  if ((v18 & 1) != 0 && v21_.v22 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, (__int64)v21_.v22);
  }
  if ((v23_.v23[0] & 1) != 0 && v23_.v24 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, (__int64)v23_.v24);
  }
}

__int64 game_1636200(__int64* a1, int a2, _QWORD* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  char* v11;
  unsigned __int64 v12;
  _QWORD* v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _BYTE* v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  atomic_uchar* v34;
  __int64* v35;
  __int64* v36;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  _BYTE* v42;
  _QWORD* i;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  char v47;
  __int64 v48;
  char v49;
  const char* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _QWORD* v58;
  __int64* v59;
  __int64 v60;
  int v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  __int128 v67;
  __int128 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64* v86;
  float v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  _BOOL4 v92;
  __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  int v101;
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
  int v114;
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
  __int128 v129;
  float v130;
  float32x4_t v131;
  int8x16_t v132;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64* v141;
  __int64* v142;
  __int64 v143;
  _QWORD* v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int128 v148;
  __int128 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64* v153;
  int v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  _BYTE v159[14];
  __int64 v160;
  __int64 v161;
  __int64 v162;
  _BYTE v163[20];
  __int64 v164;
  _BYTE v165[11];
  struct {
    __int64 v166;
    __int64 v167;
  } v166_;
  struct {
    __int64 v168;
    __int64 v169;
  } v168_;
  struct {
    _QWORD v170[2];
    _BYTE* v171;
    char gap248_[16];
    _QWORD* v172;
  } v170_;

  v3 = a1[34];
  v4 = a1[35];
  v5 = a3;
  LODWORD(v6) = a2;
  v7 = a1;
  if (v3 == v4) {
  LABEL_8:
    v11 = game_util_Format("L_AccessPoint%02d",
                           -1227133513 * (unsigned int)((v4 - v3) >> 5));
    v12 = strlen_alt1(v11);
    if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v13 = (_QWORD*)v12;
    v154 = (int)v6;
    if (v12 >= 0x17) {
      if ((v12 | 7) == 0x17) {
        v15 = 26;
      }
      else {
        v15 = (v12 | 7) + 1;
      }
      v14 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v15, 16, 0);
      v170_.v170[1] = v13;
      v170_.v171 = v14;
      v170_.v170[0] = v15 | 1;
    }
    else {
      LOBYTE(v170_.v170[0]) = 2 * v12;
      v14 = (char*)v170_.v170 + 1;
      if (v12 == 0) {
        goto LABEL_17;
      }
    }
    memmove_alt1((__int64)v14, (__int64)v11, (unsigned __int64)v13);
  LABEL_17:
    *((_BYTE*)v13 + (_QWORD)v14) = 0;
    v16 = v7[22];
    if (v16 != 0) {
      v17 = std___1___shared_weak_count_lock(v16);
      if (v17 != 0) {
        v13 = (_QWORD*)v17;
        if (v7[21] != 0 && (v18 = ui_LayoutAccessor_GetPartsLayout(
                                v7 + 21, "L_AccessPoint")) != 0) {
          v19 = *(_QWORD*)(v18 + 24);
          if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire((__int64)GameData_212dfd0) != 0) {
            *GameData_212dfc8 =
                (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
            __cxa_guard_release((__int64)GameData_212dfd0);
          }
          if (v19 != 0) {
            v20 =
                (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
            if (v20 != GameData_212dfc8) {
              do {
                v20 = (__int64*)*v20;
              } while (v20 != GameData_212dfc8 && v20 != nullptr);
            }
          }
          GameRoutine_15b7080((void*)(&v168_.v168));
          v22 = 0;
        }
        else {
          v22 = 1;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 1),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v22 != 0) {
            goto LABEL_36;
          }
        LABEL_39:
          v23 = v7[22];
          if (v23 == 0) {
            goto LABEL_37;
          }
          goto LABEL_40;
        }
        (*(void (**)(_QWORD*))(*v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak_alt1((__int64)v13);
        if (v22 == 0) {
          goto LABEL_39;
        }
      }
    }
  LABEL_36:
    v168_.v168 = 0;
    v168_.v169 = 0;
    v23 = v7[22];
    if (v23 == 0) {
    LABEL_37:
      v24 = 0;
      v25 = 0;
      goto LABEL_41;
    }
  LABEL_40:
    v26 = std___1___shared_weak_count_lock(v23);
    v25 = v7[21];
    v24 = v26;
  LABEL_41:
    if ((v170_.v170[0] & 1) != 0) {
      v27 = v170_.v171;
    }
    else {
      v27 = (char*)v170_.v170 + 1;
    }
    v28 = ui_LayoutAccessor_FindPane(v7 + 21, (__int64)"N_AccessPoint");
    v170_.v172 = v5;
    if (v168_.v169 == 0) {
      goto LABEL_88;
    }
    v29 = std___1___shared_weak_count_lock(v168_.v169);
    if (v29 == 0) {
      goto LABEL_88;
    }
    v30 = v7;
    v31 = v168_.v168;
    if (v168_.v168 == 0) {
      goto LABEL_80;
    }
    v13 = *(_QWORD**)(v168_.v168 + 8);
    if (*(_QWORD*)(v13[3] + 24LL) == 0) {
      goto LABEL_80;
    }
    if (*(_BYTE*)(v25 + 24) != 0) {
      v32 = v25 + 152;
    }
    else {
      v32 = 0;
    }
    v150 = v32;
    v152 = v29;
    if (v28 != 0) {
      v33 = (_QWORD*)v28;
      v34 = (atomic_uchar*)GameData_212dfd0;
      v35 = GameData_212dfc8;
      while (1) {
        if ((atomic_load_explicit(v34, memory_order_acquire) & 1) == 0 &&
            __cxa_guard_acquire((__int64)v34) != 0) {
          *v35 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
          __cxa_guard_release((__int64)v34);
        }
        v36 = (__int64*)(*(__int64 (**)(_QWORD*))(*v33 + 16LL))(v33);
        if (v36 == v35) {
          break;
        }
        do {
          v36 = (__int64*)*v36;
        } while (v36 != v35 && v36 != nullptr);
        if (v36 != nullptr) {
          break;
        }
        v33 = (_QWORD*)v33[3];
        if (v33 == nullptr) {
          goto LABEL_66;
        }
      }
      v150 = v33[29];
    LABEL_66:
      v5 = v170_.v172;
      v29 = v152;
      if (v13 == nullptr || *(_QWORD*)(v13[3] + 24LL) == 0) {
        goto LABEL_80;
      }
    }
    else {
      v28 = *(_QWORD*)(v25 + 176);
    }
    v38 = *game_g_frame_clock_ptr[0];
    v39 = (_QWORD*)LayoutEx_579180(96);
    if (v39 != nullptr) {
      v40 = (__int64)v39;
      v41 = GameData_2130ec0[0];
      v39[2] = v39 + 1;
      *v39 = v41 + 16;
      v39[1] = v39 + 1;
      v39[9] = v39 + 9;
      v39[10] = v39 + 9;
      LayoutEx_57b150((__int64)v39, v38 + 568, (__int64)v13, v150, 0);
      v42 = *(_BYTE**)(v40 + 24);
      LayoutEx_58d200(v42, v27);
      Pane_58dee0(v28, (__int64)v42);
      for (i = (_QWORD*)v13[10]; i != v13 + 9; i = (_QWORD*)i[1]) {
        v44 = LayoutEx_57cf40(v40, (__int64)(i - 5));
        if (v44 != 0) {
          Layout_1364020((_QWORD*)v25, (__int64)(i - 27), v44);
        }
      }
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64))(
          *(_QWORD*)v31 + 16LL))((void*)(v163), v31, v40);
      if (*(_QWORD*)v163 != 0) {
        v45 = __dynamic_cast(*(_QWORD*)v163, GameData_212dfc0[0],
                             GameData_212fc68[0], 0);
        v7 = v30;
        if (v45 != 0) {
          v155 = v45;
          v156 = *(_QWORD*)&v163[8];
          v46 = (__int64*)v163;
        }
        else {
          v46 = &v155;
        }
      }
      else {
        v46 = &v155;
        v7 = v30;
      }
      *v46 = 0;
      v46[1] = 0;
      v29 = v152;
      v134 = *(_QWORD*)&v163[8];
      if (*(_QWORD*)&v163[8] != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(*(_QWORD*)&v163[8] + 8LL),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v134 + 16LL))(v134);
        std___1___shared_weak_count___release_weak_alt1(v134);
        v29 = v152;
      }
      v135 = v155;
      if (v155 != 0) {
        v136 = v156;
        *(_QWORD*)v163 = v155;
        *(_QWORD*)&v163[8] = v156;
        if (v156 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v156 + 8), 1u,
                                    memory_order_relaxed);
        }
        v137 = *(_QWORD*)(v25 + 2280);
        v138 = v25 + 2272;
        if (v137 == v25 + 2272) {
          goto LABEL_179;
        }
        while (*(_QWORD*)(v137 + 16) != v135) {
          v137 = *(_QWORD*)(v137 + 8);
          if (v137 == v138) {
            goto LABEL_179;
          }
        }
        if (v137 == v138) {
        LABEL_179:
          v144 = (_QWORD*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
          v144[2] = v135;
          v144[3] = v136;
          if (v136 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v136 + 8), 1u,
                                      memory_order_relaxed);
          }
          v144[1] = v138;
          v145 = *(_QWORD*)(v25 + 2272);
          *v144 = v145;
          *(_QWORD*)(v145 + 8) = v144;
          *(_QWORD*)(v25 + 2272) = v144;
          ++*(_QWORD*)(v25 + 2288);
          (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v135 + 128LL))(v135, v163);
          v136 = *(_QWORD*)&v163[8];
          v29 = v152;
        }
        v5 = v170_.v172;
        if (v136 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v136 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v136 + 16LL))(v136);
          std___1___shared_weak_count___release_weak_alt1(v136);
          v29 = v152;
        }
        v13 = (_QWORD*)v156;
        if (v156 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v156 + 16), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 1),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(_QWORD*))(*v13 + 16LL))(v13);
            std___1___shared_weak_count___release_weak_alt1((__int64)v13);
            v29 = v152;
          }
        }
        v47 = 0;
      }
      else {
        v13 = (_QWORD*)v156;
        if (v156 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v156 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(_QWORD*))(*v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak_alt1((__int64)v13);
          v29 = v152;
        }
        v5 = v170_.v172;
        v139 = v150 + 72;
        if (*(_QWORD*)(v150 + 80) != v150 + 72) {
          v13 = *(_QWORD**)(*(_QWORD*)v139 + 16LL);
          if (v13 == (_QWORD*)v40) {
            v140 = *game_g_frame_clock_ptr[0];
            Layout_13639a0((_QWORD*)v25, *(_QWORD*)(*(_QWORD*)v139 + 16LL));
            v141 = *(__int64**)v139;
            v142 = *(__int64**)(*(_QWORD*)v139 + 8LL);
            v143 = *v142;
            *(_QWORD*)(**(_QWORD**)v139 + 8LL) = v142;
            *v142 = *v141;
            *(_QWORD*)(v143 + 8) = v141;
            *v141 = v143;
            Layout_579280(v13, v140 + 568);
            (*(void (**)(_QWORD*))(*v13 + 8LL))(v13);
            LayoutEx_5791a0((__int64)v13);
            v29 = v152;
          }
        }
        v47 = 1;
      }
      goto LABEL_81;
    }
    v29 = v152;
  LABEL_80:
    v47 = 1;
    v7 = v30;
  LABEL_81:
    if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v48 = v29;
      (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
      std___1___shared_weak_count___release_weak_alt1(v48);
    }
    if (v13 != nullptr) {
      v49 = v47;
    }
    else {
      v49 = 1;
    }
    if ((v49 & 1) == 0) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v13);
    }
  LABEL_88:
    if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      std___1___shared_weak_count___release_weak_alt1(v24);
    }
    if ((v170_.v170[0] & 1) != 0) {
      v50 = v170_.v171;
    }
    else {
      v50 = (char*)v170_.v170 + 1;
    }
    LayoutAccessor_1560070((void*)(&v166_.v166), v7 + 21, v50);
    v51 = v166_.v167;
    if (v166_.v167 != 0) {
      v52 = v166_.v166;
      v53 = v166_.v167;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v166_.v167 + 16), 1u,
                                memory_order_relaxed);
      v54 = std___1___shared_weak_count_lock(v53);
      if (v54 != 0) {
        v55 = v52;
      }
      else {
        v55 = 0;
      }
    }
    else {
      v54 = 0;
      v55 = 0;
    }
    v56 = v5[4];
    v58 = v5 + 2;
    v57 = v5[2];
    v59 = v7;
    v60 = *v5;
    v61 = *((_DWORD*)v5 + 2);
    v62 = v7[35];
    *(_QWORD*)&v163[12] = v5[3];
    v63 = v5[5];
    *(_QWORD*)&v163[4] = v57;
    v164 = v56;
    *(_QWORD*)v165 = v63;
    *(_DWORD*)&v165[7] = *(_DWORD*)((char*)v5 + 47);
    v6 = v5 + 7;
    v160 = v5[7];
    v64 = v5[9];
    v161 = v5[8];
    v66 = v5 + 16;
    v65 = v5[16];
    v162 = v64;
    v68 = *((_OWORD*)v5 + 5);
    v67 = *((_OWORD*)v5 + 6);
    v69 = v5[17];
    v70 = v5[14];
    *(_QWORD*)&v159[6] = *(_QWORD*)((char*)v5 + 158);
    v72 = v5[18];
    v71 = v5[19];
    v156 = v65;
    v157 = v69;
    v158 = v72;
    *(_QWORD*)v159 = v71;
    v73 = v59[36];
    if (v62 >= v73) {
      v151 = v51;
      v153 = v59;
      v93 = v59[34];
      v94 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v62 - v93) >> 5) + 1;
      if (v94 > 0x124924924924924LL) {
        GameRoutine_1637b80();
      }
      v146 = v60;
      v147 = v70;
      v148 = v68;
      v149 = v67;
      v95 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v73 - v93) >> 5);
      if (2 * v95 > v94) {
        v94 = 2 * v95;
      }
      if (v95 >= 0x92492492492492LL) {
        v96 = 0x124924924924924LL;
      }
      else {
        v96 = v94;
      }
      if (v96 > 0x124924924924924LL) {
        GameRoutine_60a210();
      }
      v97 = 224 * v96;
      v98 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 224 * v96, 16, 0);
      v99 = v98 + v62 - v93;
      v100 = v98 + v97;
      v74 = v99 + 224;
      v101 = *(_DWORD*)((char*)v58 + 31);
      *(_QWORD*)(v99 + 8) = v55;
      *(_QWORD*)(v99 + 16) = v54;
      v102 = v98;
      *(_DWORD*)(v99 + 40) = v61;
      *(_QWORD*)(v99 + 208) = 0;
      *(_DWORD*)v99 = v154;
      v103 = v58[2];
      v104 = v58[3];
      *(_QWORD*)(v99 + 32) = v146;
      v106 = *v58;
      v105 = v58[1];
      *(_OWORD*)(v99 + 112) = v148;
      *(_OWORD*)(v99 + 128) = v149;
      *(_QWORD*)(v99 + 64) = v103;
      *(_QWORD*)(v99 + 72) = v104;
      v108 = v6[1];
      v107 = v6[2];
      *(_DWORD*)(v99 + 79) = v101;
      *(_QWORD*)(v99 + 48) = v106;
      *(_QWORD*)(v99 + 56) = v105;
      *(_QWORD*)(v99 + 96) = v108;
      *(_QWORD*)(v99 + 104) = v107;
      *(_QWORD*)(v99 + 88) = *v6;
      *(_QWORD*)(v99 + 144) = v147;
      *(_QWORD*)(v99 + 190) = *(_QWORD*)((char*)v66 + 30);
      v109 = v66[3];
      *(_QWORD*)(v99 + 176) = v66[2];
      *(_QWORD*)(v99 + 184) = v109;
      v110 = v66[1];
      *(_QWORD*)(v99 + 160) = *v66;
      *(_QWORD*)(v99 + 168) = v110;
      if (v93 == v62) {
        v7 = v153;
      }
      else {
        v111 = v93;
        v112 = v98;
        do {
          *(_DWORD*)v112 = *(_DWORD*)v111;
          *(_QWORD*)(v112 + 8) = *(_QWORD*)(v111 + 8);
          *(_QWORD*)(v112 + 16) = *(_QWORD*)(v111 + 16);
          *(_QWORD*)(v111 + 8) = 0;
          *(_QWORD*)(v111 + 16) = 0;
          *(_QWORD*)(v112 + 32) = *(_QWORD*)(v111 + 32);
          *(_DWORD*)(v112 + 40) = *(_DWORD*)(v111 + 40);
          v113 = *(_QWORD*)(v111 + 72);
          v114 = *(_DWORD*)(v111 + 79);
          *(_QWORD*)(v112 + 56) = *(_QWORD*)(v111 + 56);
          *(_QWORD*)(v112 + 72) = v113;
          *(_QWORD*)(v112 + 48) = *(_QWORD*)(v111 + 48);
          v115 = *(_QWORD*)(v111 + 64);
          *(_DWORD*)(v112 + 79) = v114;
          *(_QWORD*)(v112 + 64) = v115;
          v116 = *(_QWORD*)(v111 + 88);
          v117 = *(_QWORD*)(v111 + 104);
          *(_QWORD*)(v112 + 96) = *(_QWORD*)(v111 + 96);
          *(_QWORD*)(v112 + 104) = v117;
          *(_QWORD*)(v112 + 88) = v116;
          *(_QWORD*)(v112 + 120) = *(_QWORD*)(v111 + 120);
          *(_QWORD*)(v112 + 112) = *(_QWORD*)(v111 + 112);
          v118 = *(_QWORD*)(v111 + 136);
          *(_QWORD*)(v112 + 128) = *(_QWORD*)(v111 + 128);
          *(_QWORD*)(v112 + 136) = v118;
          *(_QWORD*)(v112 + 144) = *(_QWORD*)(v111 + 144);
          *(_QWORD*)(v112 + 160) = *(_QWORD*)(v111 + 160);
          v120 = *(_QWORD*)(v111 + 176);
          v119 = *(_QWORD*)(v111 + 184);
          v121 = *(_QWORD*)(v111 + 168);
          *(_QWORD*)(v112 + 190) = *(_QWORD*)(v111 + 190);
          *(_QWORD*)(v112 + 176) = v120;
          *(_QWORD*)(v112 + 184) = v119;
          *(_QWORD*)(v112 + 168) = v121;
          v122 = *(_QWORD*)(v111 + 208);
          v111 += 224;
          *(_QWORD*)(v112 + 208) = v122;
          v112 += 224;
        } while (v111 != v62);
        LOBYTE(v6) = -1;
        do {
          v123 = *(_QWORD*)(v93 + 16);
          if (v123 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v123 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v123 + 16LL))(v123);
            std___1___shared_weak_count___release_weak_alt1(v123);
          }
          v93 += 224;
        } while (v93 != v62);
        v7 = v153;
        v93 = v153[34];
      }
      v7[34] = v102;
      v7[35] = v74;
      v7[36] = v100;
      if (v93 != 0) {
        v124 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v124 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v124, v93);
      }
      v51 = v151;
      v7[35] = v74;
      if (v151 == 0) {
        goto LABEL_102;
      }
    }
    else {
      *(_QWORD*)(v62 + 8) = v55;
      *(_QWORD*)(v62 + 16) = v54;
      *(_QWORD*)(v62 + 32) = v60;
      *(_OWORD*)(v62 + 112) = v68;
      *(_OWORD*)(v62 + 128) = v67;
      v74 = v62 + 224;
      *(_DWORD*)(v62 + 40) = v61;
      *(_QWORD*)(v62 + 144) = v70;
      *(_QWORD*)(v62 + 208) = 0;
      *(_DWORD*)v62 = v154;
      v75 = *(_QWORD*)&v163[12];
      v76 = v164;
      v77 = *(_QWORD*)v165;
      v78 = *(_DWORD*)&v165[7];
      *(_QWORD*)(v62 + 48) = *(_QWORD*)&v163[4];
      *(_QWORD*)(v62 + 56) = v75;
      v79 = v162;
      v80 = v161;
      *(_QWORD*)(v62 + 64) = v76;
      *(_QWORD*)(v62 + 72) = v77;
      v81 = v160;
      *(_DWORD*)(v62 + 79) = v78;
      *(_QWORD*)(v62 + 96) = v80;
      *(_QWORD*)(v62 + 104) = v79;
      v82 = *(_QWORD*)&v159[6];
      *(_QWORD*)(v62 + 88) = v81;
      *(_QWORD*)(v62 + 190) = v82;
      v83 = *(_QWORD*)v159;
      *(_QWORD*)(v62 + 176) = v158;
      *(_QWORD*)(v62 + 184) = v83;
      v84 = v157;
      *(_QWORD*)(v62 + 160) = v156;
      *(_QWORD*)(v62 + 168) = v84;
      v7 = v59;
      v59[35] = v74;
      if (v51 == 0) {
      LABEL_102:
        if (v166_.v167 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v166_.v167);
        }
        if (v168_.v169 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v168_.v169);
        }
        v8 = v74 - 224;
        if ((v170_.v170[0] & 1) != 0 && v170_.v171 != nullptr) {
          v85 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v85 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v85,
              (__int64)v170_.v171);
        }
        v5 = v170_.v172;
        goto LABEL_112;
      }
    }
    std___1___shared_weak_count___release_weak_alt1(v51);
    v74 = v7[35];
    goto LABEL_102;
  }
  v8 = a1[34];
  while (1) {
    v9 = *(_QWORD*)(v8 + 32);
    if (v9 == 0 || v9 == *a3) {
      break;
    }
    v8 += 224;
    if (v8 == v4) {
      goto LABEL_8;
    }
  }
  if (v9 == 0 || *(_DWORD*)v8 != a2) {
    *(_BYTE*)(v8 + 208) = 0;
    *(_DWORD*)v8 = a2;
  }
LABEL_112:
  v7[38] = v8;
  v7[39] = (__int64)v5;
  v86 = *(__int64**)(v8 + 8);
  *(_BYTE*)(v8 + 209) = 1;
  LayoutAccessor_155e830((__int64)v86, 1);
  if ((float)(*((float*)v5 + 39) * 0x1.fe00000000000p+7f) >=
      0x1.0000000000000p+0f) {
    v87 = *((float*)v5 + 39) * 0x1.fe00000000000p+7f;
  }
  else {
    v87 = 0x1.0000000000000p+0f;
  }
  if (v86[2] == 0) {
    goto LABEL_156;
  }
  v88 = v86[1];
  if (v88 == 0) {
    goto LABEL_156;
  }
  v89 = std___1___shared_weak_count_lock(v88);
  if (v89 == 0) {
  LABEL_148:
    v125 = v86[1];
    if (v125 == 0 || *(_QWORD*)(v125 + 8) == -1) {
      goto LABEL_156;
    }
    goto LABEL_153;
  }
  v90 = *v86;
  if (*v86 != 0) {
    LODWORD(v6) = *(unsigned __int8*)(v90 + 24);
    v91 = v90 + 152;
    if ((_DWORD)v6 == 0) {
      v91 = 0;
    }
    v92 = v91 != v86[2];
  }
  else {
    v92 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v89 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v92) {
      goto LABEL_148;
    }
  }
  else {
    v126 = v89;
    (*(void (**)(__int64))(*(_QWORD*)v89 + 16LL))(v89);
    std___1___shared_weak_count___release_weak_alt1(v126);
    if (v92) {
      goto LABEL_148;
    }
  }
  if (((unsigned __int8)v6 & 1) != 0) {
  LABEL_153:
    v127 = v86[2];
    if (v127 != 0) {
      v128 = *(_QWORD*)(v127 + 24);
      if (v128 != 0) {
        *(_BYTE*)(v128 + 89) = (int)v87;
      }
    }
  }
LABEL_156:
  v129 = *((_OWORD*)v5 + 6);
  LODWORD(v130) = HIDWORD(v5[12]);
  LODWORD(v156) = v5[13];
  *(float*)&v155 = *(float*)&v129 + -0x1.e000000000000p+9f;
  *((float*)&v155 + 1) = 0x1.0e00000000000p+9f - v130;
  ui_LayoutAccessor_SetTranslate(v86, (__int64)&v155);
  v131 = vsubq_f32(*((float32x4_t*)v5 + 5),
                   *(float32x4_t*)(*(_QWORD*)GameData_212dc38[0] + 32LL));
  v132 = vmulq_f32(v131, v131);
  LANES128(v132).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v132, v132, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v132).n128_u64[0])))
          .n64_u64[0];
  *(_DWORD*)(v8 + 212) =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v132).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v132).n128_u64[0])))
          .n64_u32[0];
  if ((*(_BYTE*)(v7[38] + 208) & 1) == 0) {
    LayoutAccessor_1562cf0((__int64)v86, "Title_On");
    *(_QWORD*)v163 = 0;
    *(_DWORD*)&v163[8] = 0;
    ui_LayoutAccessor_SetPaneTranslate(v86, "L_IconAccess", (__int64)v163);
  }
  return v8;
}

__int64 game_1637670(__int64 result, __int64 a2)
{
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
  __int128 v12;
  __int128 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  char v22;
  float v23;
  float v24;
  float v25;
  __int64 v26;
  const char* v27;
  float v28;
  __int64 v29;
  float v30;
  const char* v31;
  __int64* v32;
  int v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  char v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  float v44;
  unsigned __int64 v45;
  __int64 v46;
  float v47;
  const char* v48;
  float v49;
  float v50;
  float v51;
  __int64 v52;
  float v53;
  const char* v54;
  float v55;
  float v56;
  float v57;
  int v58;
  unsigned int v59;
  struct {
    unsigned __int64 v60;
    int v61;
  } v60_;
  __int64 v62;
  float v63;
  __int64 v64;

  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
  v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
  v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
  v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
  v2 = *(_QWORD*)(result + 304);
  v3 = *(_QWORD*)(a2 + 8);
  v4 = result;
  *(_QWORD*)(v2 + 32) = *(_QWORD*)a2;
  v6 = *(_QWORD*)(a2 + 16);
  v5 = *(_QWORD*)(a2 + 24);
  v7 = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(v2 + 64) = *(_QWORD*)(a2 + 32);
  *(_QWORD*)(v2 + 72) = v7;
  *(_QWORD*)(v2 + 48) = v6;
  *(_QWORD*)(v2 + 56) = v5;
  v9 = *(_QWORD*)(a2 + 48);
  v8 = *(_QWORD*)(a2 + 56);
  v11 = *(_QWORD*)(a2 + 64);
  v10 = *(_QWORD*)(a2 + 72);
  *(_QWORD*)(v2 + 40) = v3;
  *(_QWORD*)(v2 + 96) = v11;
  *(_QWORD*)(v2 + 104) = v10;
  *(_QWORD*)(v2 + 80) = v9;
  *(_QWORD*)(v2 + 88) = v8;
  *(_DWORD*)(v2 + 112) = *(_DWORD*)(a2 + 80);
  *(_DWORD*)(v2 + 116) = *(_DWORD*)(a2 + 84);
  v12 = *(_OWORD*)(v2 + 112);
  *((_QWORD*)&v12 + 1) = *(unsigned int*)(a2 + 88);
  *(_OWORD*)(v2 + 112) = v12;
  *(_DWORD*)(v2 + 128) = *(_DWORD*)(a2 + 96);
  *(_DWORD*)(v2 + 132) = *(_DWORD*)(a2 + 100);
  v13 = *(_OWORD*)(v2 + 128);
  *((_QWORD*)&v13 + 1) = *(unsigned int*)(a2 + 104);
  *(_OWORD*)(v2 + 128) = v13;
  *(_QWORD*)(v2 + 144) = *(_QWORD*)(a2 + 112);
  v14 = *(_QWORD*)(a2 + 152);
  v15 = *(_QWORD*)(a2 + 158);
  *(_QWORD*)(v2 + 168) = *(_QWORD*)(a2 + 136);
  *(_QWORD*)(v2 + 184) = v14;
  *(_QWORD*)(v2 + 160) = *(_QWORD*)(a2 + 128);
  v16 = *(_QWORD*)(a2 + 144);
  *(_QWORD*)(v2 + 190) = v15;
  *(_QWORD*)(v2 + 176) = v16;
  if (*(_BYTE*)(result + 296) == 1) {
    v17 = *(__int64**)(*(_QWORD*)(result + 304) + 8LL);
    v18 = ui_LayoutAccessor_FindTextBox(v17, (__int64)"T_Txt"),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v18 != 0) {
      v19 = v18;
      v20 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v17, (__int64)"T_Txt"),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v20 != nullptr) {
        ui_text_190a0c0((float*)&v60_.v60, (__int64)&v64, (float*)&v62, v20,
                        v20[27]),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
            v33 =
                COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
        v21 = v64;
      }
      else {
        v21 = 0;
      }
      v22 = *(_BYTE*)(v19 + 88);
      *(_QWORD*)(v19 + 80) = v21;
      *(_BYTE*)(v19 + 88) = v22 | 0x10;
    }
    ui_LayoutAccessor_GetPaneSize(v17, (__int64)"Wdw"),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    v24 = v23;
    v25 = ui_LayoutAccessor_GetPaneSize(v17, (__int64)"T_Txt"),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    v26 = ui_LayoutAccessor_FindPane(v17, (__int64)"Wdw"),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v26 != 0 && (v27 = Pane_58fac0(v26, "Margin_Width")) != nullptr) {
      v28 = (float)*(int*)&v27[*((unsigned int*)v27 + 1)];
    }
    else {
      v28 = 0x1.9000000000000p+5f;
    }
    v29 = ui_LayoutAccessor_FindPane(v17, (__int64)"Wdw"),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    v30 = 0x0.0p+0f;
    if (v29 != 0) {
      v31 = Pane_58fac0(v29, "Min_Width"),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v31 != nullptr) {
        v30 = (float)*(int*)&v31[*((unsigned int*)v31 + 1)];
      }
    }
    result = ui_LayoutAccessor_SetPaneSize((__int64)v17, (__int64)"Wdw",
                                           fmaxf(v25 + v28, v30), v24),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    *(_BYTE*)(v4 + 296) = 0;
  }
  if (*(_BYTE*)(v4 + 297) == 1) {
    v32 = *(__int64**)(*(_QWORD*)(v4 + 304) + 8LL);
    LODWORD(v62) = COERCE_UNSIGNED_INT(ui_LayoutAccessor_GetScale(v32)),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    HIDWORD(v62) = v33;
    v60_.v60 = 0x3F8000003F800000LL;
    ui_LayoutAccessor_SetScale((__int64)v32, &v60_.v60),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    v34 = ui_LayoutAccessor_FindTextBox(v32, (__int64)"T_Title"),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v34 != 0) {
      v35 = v34;
      v36 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v32, (__int64)"T_Title"),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v36 != nullptr) {
        ui_text_190a0c0((float*)&v60_.v60, (__int64)&v64, &v63, v36, v36[27]),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
            v33 =
                COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
            v50 =
                COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
        v37 = v64;
      }
      else {
        v37 = 0;
      }
      v38 = *(_BYTE*)(v35 + 88);
      *(_QWORD*)(v35 + 80) = v37;
      *(_BYTE*)(v35 + 88) = v38 | 0x10;
    }
    v39 = ui_LayoutAccessor_FindAlignment(v32, (__int64)"A_Contents"),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v39 != 0) {
      Alignment_56b600(v39),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
          v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
          v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
      v40 = v32[1];
      if (v40 != 0) {
        v41 = std___1___shared_weak_count_lock(v40),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v41 != 0) {
          v42 = v41;
          if (*v32 != 0) {
            ControlCreator_13633c0(*v32),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v33 = COERCE_AS(__typeof__(v33),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(float, "s1", "=w"));
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v33 = COERCE_AS(__typeof__(v33),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(float, "s1", "=w"));
            std___1___shared_weak_count___release_weak_alt1(v42),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v33 = COERCE_AS(__typeof__(v33),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v50 = COERCE_AS(__typeof__(v50),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(float, "s1", "=w"));
          }
        }
      }
    }
    v43 = ui_LayoutAccessor_FindPane(v32, (__int64)"A_Contents"),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    v44 = 0x0.0p+0f;
    LOBYTE(v63) = 0;
    v60_.v60 = 0xFF7FFFFF7F7FFFFFLL;
    v64 = 0x7F7FFFFFFF7FFFFFLL;
    if (v43 != 0) {
      v45 = LANES128_OF(vmulq_f32(*(float32x4_t*)(v43 + 128),
                                  *(float32x4_t*)(v43 + 128)))
                .n128_u64[0];
      GameRoutine_156bee0(
          (const char*)v43, (__int64)&v60_.v60, (__int64)&v64, (__int64)&v63, 0,
          sqrtf((float)(*(float*)&v45 +
                        (float)(COERCE_FLOAT(*(_OWORD*)(v43 + 112)) *
                                COERCE_FLOAT(*(_OWORD*)(v43 + 112)))) +
                (float)(COERCE_FLOAT(*(_OWORD*)(v43 + 144)) *
                        COERCE_FLOAT(*(_OWORD*)(v43 + 144)))) /
              *(float*)(v43 + 72),
          sqrtf((float)(*((float*)&v45 + 1) +
                        (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v43 + 112))) *
                                COERCE_FLOAT(HIDWORD(*(_QWORD*)(v43 + 112))))) +
                (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v43 + 144))) *
                        COERCE_FLOAT(HIDWORD(*(_QWORD*)(v43 + 144))))) /
              *(float*)(v43 + 76)),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
          v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
          v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
      if (LOBYTE(v63) == 1) {
        v44 = vabds_f32(*(float*)&v64, *(float*)&v60_.v60);
      }
    }
    v46 = ui_LayoutAccessor_FindPane(v32, (__int64)"WdwTitle"),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    v47 = 0x1.e000000000000p+4f;
    if (v46 != 0) {
      v48 = Pane_58fac0(v46, "Margin_Width"),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v48 != nullptr) {
        v47 = (float)*(int*)&v48[*((unsigned int*)v48 + 1)];
      }
    }
    v49 = v44 + v47;
    ui_LayoutAccessor_GetPaneSize(v32, (__int64)"WdwTitle"),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    v51 = v50;
    v52 = ui_LayoutAccessor_FindPane(v32, (__int64)"WdwTitle"),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    v53 = 0x0.0p+0f;
    if (v52 != 0) {
      v54 = Pane_58fac0(v52, "Min_Width"),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
      v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v54 != nullptr) {
        v53 = (float)*(int*)&v54[*((unsigned int*)v54 + 1)];
      }
    }
    v55 = fmaxf(v49, v53);
    ui_LayoutAccessor_SetPaneSize((__int64)v32, (__int64)"WdwTitle", v55, v51),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    ui_LayoutAccessor_GetPaneSize(v32, (__int64)"WdwTitle_Overlay"),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    ui_LayoutAccessor_SetPaneSize((__int64)v32, (__int64)"WdwTitle_Overlay",
                                  v55, v56),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    if ((ui_LayoutAccessor_IsPaneVisible(v32, "L_IconFacility") & 1) != 0 ||
        (v57 = 0x0.0p+0f,
         (ui_LayoutAccessor_IsPaneVisible(v32, "N_IconPos") & 1) != 0)) {
      v57 = -0x1.8000000000000p+1f;
    }
    ui_LayoutAccessor_GetPaneTranslate(v32, "A_Contents"),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    v60_.v61 = v58;
    v60_.v60 = __PAIR64__(v59, LODWORD(v57));
    ui_LayoutAccessor_SetPaneTranslate(v32, "A_Contents", (__int64)&v60_.v60),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
        v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    result = ui_LayoutAccessor_SetScale((__int64)v32, &v62),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    *(_BYTE*)(v4 + 297) = 0;
  }
  if (*(_BYTE*)(v4 + 299) == 1) {
    result = game_1636f50(*(__int64**)(*(_QWORD*)(v4 + 304) + 8LL),
                          *(_BYTE*)(v4 + 298)),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
    v50 = COERCE_AS(__typeof__(v50), PSEUDO_REGISTER(float, "s1", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s1", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(float, "s2", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(float, "s1", "=w"));
    if (*(_BYTE*)(v4 + 299) == 1) {
      *(_BYTE*)(v4 + 299) = 0;
    }
  }
  return result;
}

__int64 game_16602f0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  _QWORD v11[2];
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;

  LayoutAccessor_1560070((void*)(&v12_.v12), *(__int64**)a1, "L_DagsionHp");
  result = v12_.v13;
  if (v12_.v13 == 0) {
    return result;
  }
  v3 = std___1___shared_weak_count_lock(v12_.v13);
  v4 = v12_.v12;
  result = v12_.v13;
  if (v3 != 0) {
    v5 = v12_.v12;
  }
  else {
    v5 = 0;
  }
  if (v12_.v13 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v12_.v13);
  }
  if (v5 == 0) {
    goto LABEL_13;
  }
  v6 = *(_QWORD*)(a1 + 88);
  if (!GmapSituation_14db2f0()) {
    result = LayoutAccessor_155e830(v4, 0);
    *(_BYTE*)(a1 + 69) = 0;
  LABEL_13:
    if (v3 == 0) {
      return result;
    }
    goto LABEL_14;
  }
  v7 = game_gmap_SpotMgr_GetCurrentSpot();
  v8 = *(_QWORD*)(v6 + 96);
  v9 = *((_QWORD*)v7 + 12);
  result = LayoutAccessor_155e830(v4, v8 == v9);
  *(_BYTE*)(a1 + 69) = v8 == v9;
  if (v8 != v9) {
    goto LABEL_13;
  }
  v11[0] = v5;
  v11[1] = v3;
  v10 = *(_DWORD*)(GameData_22416c0 + 48);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    game_16503d0((__int64)v11, v10);
    result = std___1___shared_weak_count___release_weak_alt1(v3);
  }
  else {
    result = game_16503d0((__int64)v11, v10);
  }
  if (GameData_2174ef8 > v10) {
    result = GameHr_1562680(v4, "Damage", 0x1.0000000000000p+0f);
  }
  GameData_2174ef8 = v10;
  if (v3 != 0) {
  LABEL_14:
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak_alt1(v3);
    }
  }
  return result;
}

__int64 game_1660ac0(__int64** a1)
{
  char v1;
  __int64 v2;
  __int64* v3;
  struct {
    __int64* v6;
    __int64 v7;
  } v6_;

  LayoutAccessor_1560070((void*)(&v6_.v6), *a1, "L_SpotDispatch/L_Fort");
  if (v6_.v7 == 0) {
    goto LABEL_12;
  }
  v2 = std___1___shared_weak_count_lock(v6_.v7);
  v3 = v6_.v6;
  if (v6_.v7 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v6_.v7);
  }
  if (v2 == 0 || v3 == nullptr) {
    if (v2 == 0) {
      goto LABEL_12;
    }
  }
  else {
    v1 = LayoutAccessor_1563280(v3, (__int64)"Damage", 0);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
    if (v3 != nullptr) {
      return v1 & 1;
    }
    goto LABEL_12;
  }
  if (v3 == nullptr) {
  LABEL_12:
    v1 = 0;
  }
  return v1 & 1;
}

__attribute__((swiftcall)) void

game_16c7650(PSEUDO_X8 x8_, _QWORD* a1, _QWORD** a2, _BYTE** a3, __int64 a4)
{
  __int64** a5 = (__int64**)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v12;
  struct {
    __int64* v13;
    __int64 v14;
  } v13_;

  EquipInfoItem_LegionInfo_16c77c0((void*)(&v13_.v13), a1[10], a2, a3, a4);
  v7 = v13_.v14;
  if (v13_.v14 == 0) {
    goto LABEL_15;
  }
  v8 = std___1___shared_weak_count_lock(v13_.v14);
  v9 = v13_.v13;
  v10 = v8;
  std___1___shared_weak_count___release_weak_alt1(v7);
  if (v10 == 0 || v9 == nullptr) {
    if (v10 == 0) {
      goto LABEL_15;
    }
  }
  else {
    v13_.v13 = v9;
    v13_.v14 = v10;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_18855c0(a1, &v13_.v13);
    v12 = v13_.v14;
    if (v13_.v14 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v13_.v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
    *a5 = v9;
    a5[1] = (__int64*)v10;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 != nullptr) {
      return;
    }
    goto LABEL_15;
  }
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  std___1___shared_weak_count___release_weak_alt1(v10);
  if (v9 == nullptr) {
  LABEL_15:
    *a5 = nullptr;
    a5[1] = nullptr;
  }
}

__attribute__((swiftcall)) void

game_16c96a0(PSEUDO_X8 x8_, _QWORD* a1, _QWORD** a2, _BYTE** a3, __int64 a4)
{
  __int64** a5 = (__int64**)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v12;
  struct {
    __int64* v13;
    __int64 v14;
  } v13_;

  game_16c9820_alt1((void*)(&v13_.v13), a1[10], a2, a3, a4);
  v7 = v13_.v14;
  if (v13_.v14 == 0) {
    goto LABEL_15;
  }
  v8 = std___1___shared_weak_count_lock(v13_.v14);
  v9 = v13_.v13;
  v10 = v8;
  std___1___shared_weak_count___release_weak_alt1(v7);
  if (v10 == 0 || v9 == nullptr) {
    if (v10 == 0) {
      goto LABEL_15;
    }
  }
  else {
    v13_.v13 = v9;
    v13_.v14 = v10;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_18855c0(a1, &v13_.v13);
    v12 = v13_.v14;
    if (v13_.v14 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v13_.v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
    *a5 = v9;
    a5[1] = (__int64*)v10;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 != nullptr) {
      return;
    }
    goto LABEL_15;
  }
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  std___1___shared_weak_count___release_weak_alt1(v10);
  if (v9 == nullptr) {
  LABEL_15:
    *a5 = nullptr;
    a5[1] = nullptr;
  }
}

__attribute__((swiftcall)) void

game_16c9820(PSEUDO_X8 x8_, __int64 a1, _QWORD** a2, _BYTE** a3, _QWORD* a4)
{
  __int64** a5 = (__int64**)PSEUDO_X8_VALUE(x8_);
  __int64* result;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  atomic_uchar* v16;
  __int64* v17;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  _BYTE* v23;
  __int64 i;
  __int64 v25;
  __int64** v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  struct {
    __int64* v45;
    __int64 v46;
  } v45_;
  struct {
    __int64* v47;
    __int64 v48;
  } v47_;

  result = a2[1];
  if (result == nullptr) {
    goto LABEL_63;
  }
  result = (__int64*)std___1___shared_weak_count_lock((__int64)result);
  if (result == nullptr) {
    goto LABEL_63;
  }
  v11 = *a2;
  v12 = result;
  if (*a2 == nullptr) {
    goto LABEL_60;
  }
  v13 = v11[1];
  if (*(_QWORD*)(*(_QWORD*)(v13 + 24) + 24LL) == 0) {
    goto LABEL_60;
  }
  v14 = a4;
  v15 = *(_BYTE*)(a1 + 24) != 0 ? a1 + 152 : 0LL;
  v43 = v15;
  v16 = (atomic_uchar*)GameData_212dfd0;
  v17 = GameData_212dfc8;
  do {
    if ((atomic_load_explicit(v16, memory_order_acquire) & 1) == 0 &&
        __cxa_guard_acquire((__int64)v16) != 0) {
      *v17 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      __cxa_guard_release((__int64)v16);
    }
    result = (__int64*)(*(__int64 (**)(_QWORD*))(*v14 + 16LL))(v14);
    if (result == v17) {
      goto LABEL_21;
    }
    do {
      result = (__int64*)*result;
    } while (result != v17 && result != nullptr);
    if (result != nullptr) {
    LABEL_21:
      v19 = v14[29];
      if (v13 == 0) {
        goto LABEL_60;
      }
      goto LABEL_24;
    }
    v14 = (_QWORD*)v14[3];
  } while (v14 != nullptr);
  v19 = v43;
  if (v13 == 0) {
    goto LABEL_60;
  }
LABEL_24:
  if (*(_QWORD*)(*(_QWORD*)(v13 + 24) + 24LL) == 0) {
    goto LABEL_60;
  }
  v20 = *game_g_frame_clock_ptr[0];
  result = (__int64*)LayoutEx_579180(96);
  if (result == nullptr) {
    goto LABEL_60;
  }
  v21 = result;
  v22 = GameData_2130ec0[0];
  result[2] = (__int64)(result + 1);
  v44 = v19;
  *result = v22 + 16;
  result[1] = (__int64)(result + 1);
  result[9] = (__int64)(result + 9);
  result[10] = (__int64)(result + 9);
  LayoutEx_57b150((__int64)result, v20 + 568, v13, v19, 0);
  v23 = (_BYTE*)v21[3];
  LayoutEx_58d200(v23, *a3);
  Pane_58dee0((__int64)a4, (__int64)v23);
  for (i = *(_QWORD*)(v13 + 80); i != v13 + 72; i = *(_QWORD*)(i + 8)) {
    v25 = LayoutEx_57cf40((__int64)v21, i - 40);
    if (v25 != 0) {
      Layout_1364020((_QWORD*)a1, i - 216, v25);
    }
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, __int64*))(
      *v11 + 16LL))((void*)(&v45_.v45), v11, v21);
  result = v45_.v45;
  if (v45_.v45 != nullptr &&
      (result = (__int64*)__dynamic_cast(v45_.v45, GameData_212dfc0[0],
                                         GameData_2131bb0[0], 0)) != nullptr) {
    v47_.v47 = result;
    v47_.v48 = v45_.v46;
    v26 = &v45_.v45;
  }
  else {
    v26 = &v47_.v47;
  }
  *v26 = nullptr;
  v26[1] = nullptr;
  v27 = v45_.v46;
  if (v45_.v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45_.v46 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    result = (__int64*)std___1___shared_weak_count___release_weak_alt1(v27);
  }
  v28 = v47_.v47;
  if (v47_.v47 == nullptr) {
    v36 = v47_.v48;
    if (v47_.v48 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v47_.v48 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
      result = (__int64*)std___1___shared_weak_count___release_weak_alt1(v36);
    }
    v37 = v44 + 72;
    if (*(_QWORD*)(v44 + 80) != v44 + 72) {
      v38 = *(__int64**)(*(_QWORD*)v37 + 16LL);
      if (v38 == v21) {
        v39 = *game_g_frame_clock_ptr[0];
        Layout_13639a0((_QWORD*)a1, *(_QWORD*)(*(_QWORD*)v37 + 16LL));
        v40 = *(__int64**)v37;
        v41 = *(__int64**)(*(_QWORD*)v37 + 8LL);
        v42 = *v41;
        *(_QWORD*)(**(_QWORD**)v37 + 8LL) = v41;
        *v41 = *v40;
        *(_QWORD*)(v42 + 8) = v40;
        *v40 = v42;
        Layout_579280(v38, v39 + 568);
        (*(void (**)(__int64*))(*v38 + 8))(v38);
        result = (__int64*)LayoutEx_5791a0((__int64)v38);
      }
    }
  LABEL_60:
    v35 = 0;
    goto LABEL_61;
  }
  v29 = v47_.v48;
  v45_.v45 = v47_.v47;
  v45_.v46 = v47_.v48;
  if (v47_.v48 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v47_.v48 + 8), 1u,
                              memory_order_relaxed);
  }
  v30 = *(_QWORD*)(a1 + 2280);
  v31 = a1 + 2272;
  if (v30 == a1 + 2272) {
    goto LABEL_44;
  }
  while (*(__int64**)(v30 + 16) != v28) {
    v30 = *(_QWORD*)(v30 + 8);
    if (v30 == v31) {
      goto LABEL_44;
    }
  }
  if (v30 == v31) {
  LABEL_44:
    v32 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v32[2] = v28;
    v32[3] = v29;
    if (v29 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                memory_order_relaxed);
    }
    v33 = *(_QWORD*)(a1 + 2272);
    *v32 = v33;
    v32[1] = v31;
    *(_QWORD*)(v33 + 8) = v32;
    *(_QWORD*)(a1 + 2272) = v32;
    ++*(_QWORD*)(a1 + 2288);
    result = (__int64*)(*(__int64 (**)(__int64*, __int64**))(*v28 + 128))(
        v28, &v45_.v45);
    v29 = v45_.v46;
  }
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    result = (__int64*)std___1___shared_weak_count___release_weak_alt1(v29);
  }
  v34 = v47_.v48;
  *a5 = v47_.v47;
  a5[1] = (__int64*)v34;
  if (v34 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      result = (__int64*)std___1___shared_weak_count___release_weak_alt1(v34);
    }
  }
  v35 = 1;
LABEL_61:
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 1),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v35 & 1) != 0) {
      result;
      return;
    }
    goto LABEL_63;
  }
  (*(void (**)(__int64*))(*v12 + 16))(v12);
  result =
      (__int64*)std___1___shared_weak_count___release_weak_alt1((__int64)v12);
  if ((v35 & 1) == 0) {
  LABEL_63:
    *a5 = nullptr;
    a5[1] = nullptr;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

game_16d5e40(PSEUDO_X8 x8_, _QWORD* a1, _QWORD** a2, _BYTE** a3, __int64 a4)
{
  __int64** a5 = (__int64**)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v12;
  struct {
    __int64* v13;
    __int64 v14;
  } v13_;

  game_16d5fc0_alt1((void*)(&v13_.v13), a1[10], a2, a3, a4);
  v7 = v13_.v14;
  if (v13_.v14 == 0) {
    goto LABEL_15;
  }
  v8 = std___1___shared_weak_count_lock(v13_.v14);
  v9 = v13_.v13;
  v10 = v8;
  std___1___shared_weak_count___release_weak_alt1(v7);
  if (v10 == 0 || v9 == nullptr) {
    if (v10 == 0) {
      goto LABEL_15;
    }
  }
  else {
    v13_.v13 = v9;
    v13_.v14 = v10;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_18855c0(a1, &v13_.v13);
    v12 = v13_.v14;
    if (v13_.v14 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v13_.v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
    *a5 = v9;
    a5[1] = (__int64*)v10;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 != nullptr) {
      return;
    }
    goto LABEL_15;
  }
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  std___1___shared_weak_count___release_weak_alt1(v10);
  if (v9 == nullptr) {
  LABEL_15:
    *a5 = nullptr;
    a5[1] = nullptr;
  }
}

__attribute__((swiftcall)) void

game_16d5fc0(PSEUDO_X8 x8_, __int64 a1, _QWORD** a2, _BYTE** a3, _QWORD* a4)
{
  __int64** a5 = (__int64**)PSEUDO_X8_VALUE(x8_);
  __int64* result;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  atomic_uchar* v16;
  __int64* v17;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  _BYTE* v23;
  __int64 i;
  __int64 v25;
  __int64** v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  struct {
    __int64* v45;
    __int64 v46;
  } v45_;
  struct {
    __int64* v47;
    __int64 v48;
  } v47_;

  result = a2[1];
  if (result == nullptr) {
    goto LABEL_63;
  }
  result = (__int64*)std___1___shared_weak_count_lock((__int64)result);
  if (result == nullptr) {
    goto LABEL_63;
  }
  v11 = *a2;
  v12 = result;
  if (*a2 == nullptr) {
    goto LABEL_60;
  }
  v13 = v11[1];
  if (*(_QWORD*)(*(_QWORD*)(v13 + 24) + 24LL) == 0) {
    goto LABEL_60;
  }
  v14 = a4;
  v15 = *(_BYTE*)(a1 + 24) != 0 ? a1 + 152 : 0LL;
  v43 = v15;
  v16 = (atomic_uchar*)GameData_212dfd0;
  v17 = GameData_212dfc8;
  do {
    if ((atomic_load_explicit(v16, memory_order_acquire) & 1) == 0 &&
        __cxa_guard_acquire((__int64)v16) != 0) {
      *v17 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      __cxa_guard_release((__int64)v16);
    }
    result = (__int64*)(*(__int64 (**)(_QWORD*))(*v14 + 16LL))(v14);
    if (result == v17) {
      goto LABEL_21;
    }
    do {
      result = (__int64*)*result;
    } while (result != v17 && result != nullptr);
    if (result != nullptr) {
    LABEL_21:
      v19 = v14[29];
      if (v13 == 0) {
        goto LABEL_60;
      }
      goto LABEL_24;
    }
    v14 = (_QWORD*)v14[3];
  } while (v14 != nullptr);
  v19 = v43;
  if (v13 == 0) {
    goto LABEL_60;
  }
LABEL_24:
  if (*(_QWORD*)(*(_QWORD*)(v13 + 24) + 24LL) == 0) {
    goto LABEL_60;
  }
  v20 = *game_g_frame_clock_ptr[0];
  result = (__int64*)LayoutEx_579180(96);
  if (result == nullptr) {
    goto LABEL_60;
  }
  v21 = result;
  v22 = GameData_2130ec0[0];
  result[2] = (__int64)(result + 1);
  v44 = v19;
  *result = v22 + 16;
  result[1] = (__int64)(result + 1);
  result[9] = (__int64)(result + 9);
  result[10] = (__int64)(result + 9);
  LayoutEx_57b150((__int64)result, v20 + 568, v13, v19, 0);
  v23 = (_BYTE*)v21[3];
  LayoutEx_58d200(v23, *a3);
  Pane_58dee0((__int64)a4, (__int64)v23);
  for (i = *(_QWORD*)(v13 + 80); i != v13 + 72; i = *(_QWORD*)(i + 8)) {
    v25 = LayoutEx_57cf40((__int64)v21, i - 40);
    if (v25 != 0) {
      Layout_1364020((_QWORD*)a1, i - 216, v25);
    }
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, __int64*))(
      *v11 + 16LL))((void*)(&v45_.v45), v11, v21);
  result = v45_.v45;
  if (v45_.v45 != nullptr &&
      (result = (__int64*)__dynamic_cast(v45_.v45, GameData_212dfc0[0],
                                         GameData_2131bd0[0], 0)) != nullptr) {
    v47_.v47 = result;
    v47_.v48 = v45_.v46;
    v26 = &v45_.v45;
  }
  else {
    v26 = &v47_.v47;
  }
  *v26 = nullptr;
  v26[1] = nullptr;
  v27 = v45_.v46;
  if (v45_.v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45_.v46 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    result = (__int64*)std___1___shared_weak_count___release_weak_alt1(v27);
  }
  v28 = v47_.v47;
  if (v47_.v47 == nullptr) {
    v36 = v47_.v48;
    if (v47_.v48 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v47_.v48 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
      result = (__int64*)std___1___shared_weak_count___release_weak_alt1(v36);
    }
    v37 = v44 + 72;
    if (*(_QWORD*)(v44 + 80) != v44 + 72) {
      v38 = *(__int64**)(*(_QWORD*)v37 + 16LL);
      if (v38 == v21) {
        v39 = *game_g_frame_clock_ptr[0];
        Layout_13639a0((_QWORD*)a1, *(_QWORD*)(*(_QWORD*)v37 + 16LL));
        v40 = *(__int64**)v37;
        v41 = *(__int64**)(*(_QWORD*)v37 + 8LL);
        v42 = *v41;
        *(_QWORD*)(**(_QWORD**)v37 + 8LL) = v41;
        *v41 = *v40;
        *(_QWORD*)(v42 + 8) = v40;
        *v40 = v42;
        Layout_579280(v38, v39 + 568);
        (*(void (**)(__int64*))(*v38 + 8))(v38);
        result = (__int64*)LayoutEx_5791a0((__int64)v38);
      }
    }
  LABEL_60:
    v35 = 0;
    goto LABEL_61;
  }
  v29 = v47_.v48;
  v45_.v45 = v47_.v47;
  v45_.v46 = v47_.v48;
  if (v47_.v48 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v47_.v48 + 8), 1u,
                              memory_order_relaxed);
  }
  v30 = *(_QWORD*)(a1 + 2280);
  v31 = a1 + 2272;
  if (v30 == a1 + 2272) {
    goto LABEL_44;
  }
  while (*(__int64**)(v30 + 16) != v28) {
    v30 = *(_QWORD*)(v30 + 8);
    if (v30 == v31) {
      goto LABEL_44;
    }
  }
  if (v30 == v31) {
  LABEL_44:
    v32 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v32[2] = v28;
    v32[3] = v29;
    if (v29 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                memory_order_relaxed);
    }
    v33 = *(_QWORD*)(a1 + 2272);
    *v32 = v33;
    v32[1] = v31;
    *(_QWORD*)(v33 + 8) = v32;
    *(_QWORD*)(a1 + 2272) = v32;
    ++*(_QWORD*)(a1 + 2288);
    result = (__int64*)(*(__int64 (**)(__int64*, __int64**))(*v28 + 128))(
        v28, &v45_.v45);
    v29 = v45_.v46;
  }
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    result = (__int64*)std___1___shared_weak_count___release_weak_alt1(v29);
  }
  v34 = v47_.v48;
  *a5 = v47_.v47;
  a5[1] = (__int64*)v34;
  if (v34 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      result = (__int64*)std___1___shared_weak_count___release_weak_alt1(v34);
    }
  }
  v35 = 1;
LABEL_61:
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 1),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v35 & 1) != 0) {
      result;
      return;
    }
    goto LABEL_63;
  }
  (*(void (**)(__int64*))(*v12 + 16))(v12);
  result =
      (__int64*)std___1___shared_weak_count___release_weak_alt1((__int64)v12);
  if ((v35 & 1) == 0) {
  LABEL_63:
    *a5 = nullptr;
    a5[1] = nullptr;
  }
  {
    result;
    return;
  }
}

__int64 game_17358f0(__int64* a1, float a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64* v5;
  __int64 v7;
  __int64 v8;
  char v9;
  int v10;
  __int64 v11;
  __int64 v12;
  const char* v13;
  float v14;
  char v15;
  __int64 result;
  float v17;
  struct {
    __int64* v18;
    __int64 v19;
  } v18_;

  LayoutAccessor_1560070((void*)(&v18_.v18), a1, "L_Bg");
  if (v18_.v19 == 0) {
    goto LABEL_20;
  }
  v4 = std___1___shared_weak_count_lock(v18_.v19);
  v5 = v18_.v18;
  if (v18_.v19 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v18_.v19);
  }
  if (v4 == 0 || v5 == nullptr) {
    if (v4 == 0) {
      goto LABEL_20;
    }
  }
  else {
    v7 = ui_LayoutAccessor_FindPane(v5, (__int64)"Bg");
    if (v7 != 0) {
      v8 = __dynamic_cast(v7, GameData_212d670[0], GameData_212fc70[0], 0);
      if (v8 != 0) {
        v9 = *(_BYTE*)(v8 + 88);
        v10 = *(_DWORD*)(v8 + 80);
        *(float*)(v8 + 84) = a2;
        *(_BYTE*)(v8 + 88) = v9 | 0x10;
        v11 = ui_LayoutAccessor_FindPane(v5, (__int64)"Pattern");
        if (v11 != 0) {
          v12 = v11;
          v13 = Pane_58fac0(v11, "Margin_Height");
          if (v13 != nullptr) {
            v14 = (float)*(int*)&v13[*((unsigned int*)v13 + 1)];
          }
          else {
            v14 = -0x1.a000000000000p+4f;
          }
          v15 = *(_BYTE*)(v12 + 88);
          *(_DWORD*)(v12 + 80) = v10;
          *(float*)(v12 + 84) = a2 + v14;
          *(_BYTE*)(v12 + 88) = v15 | 0x10;
        }
      }
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt1(v4);
  }
LABEL_20:
  result = ui_LayoutAccessor_FindPane(a1, (__int64)"Overlay");
  if (result != 0) {
    v17 = ui_LayoutAccessor_GetPaneSize(a1, (__int64)"Overlay");
    return ui_LayoutAccessor_SetPaneSize((__int64)a1, (__int64)"Overlay", v17,
                                         a2);
  }
  return result;
}

void game_183b740(__int64* a1, __int64 a2, char* a3, char* a4, __int64 a5)
{
  __int64 v5;
  unsigned __int64 v6;
  char* v8;
  __int64 v9;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  char* v24;
  int v25;
  int v26;
  __int64 v27;
  int* v28;
  _DWORD* i;
  int v30;
  unsigned __int64 v31;
  _DWORD* v32;
  __int64 v33;
  __int64 v34;
  int v35;
  bool v36;
  int v37;

  if (a5 >= 1) {
    v6 = a1[1];
    v5 = a1[2];
    v8 = a3;
    v9 = a2;
    if (a5 <= (__int64)(v5 - v6) >> 2) {
      v16 = v6 - a2;
      v17 = (__int64)(v6 - a2) >> 2;
      if (a5 <= v17) {
        v27 = a2 + 4 * a5;
        v28 = (int*)(v6 - 4 * a5);
        for (i = (_DWORD*)a1[1]; (unsigned __int64)v28 < v6; ++i) {
          v30 = *v28++;
          *i = v30;
        }
        a1[1] = (__int64)i;
        if (v6 != v27) {
          memmove_alt1(a2 + 4 * a5, a2, v6 - v27);
        }
        v31 = 4 * a5 - 4;
        if ((~(_BYTE)v31 & 0x1C) != 0) {
          v34 = -(__int64)(((unsigned __int8)((unsigned int)v31 >> 2) + 1) & 7);
          v32 = (_DWORD*)v9;
          do {
            v35 = *(_DWORD*)v8;
            v8 += 4;
            v36 = __CFADD__(v34++, 1);
            *v32++ = v35;
          } while (!v36);
        }
        else {
          v32 = (_DWORD*)v9;
        }
        if (v31 >= 0x1C) {
          do {
            *v32 = *(_DWORD*)v8;
            v32[1] = *((_DWORD*)v8 + 1);
            v32[2] = *((_DWORD*)v8 + 2);
            v32[3] = *((_DWORD*)v8 + 3);
            v32[4] = *((_DWORD*)v8 + 4);
            v32[5] = *((_DWORD*)v8 + 5);
            v32[6] = *((_DWORD*)v8 + 6);
            v37 = *((_DWORD*)v8 + 7);
            v8 += 32;
            v32[7] = v37;
            v32 += 8;
          } while (v32 != (_DWORD*)(v9 + 4 * a5));
        }
      }
      else {
        v18 = a4 - &a3[v16];
        if (a4 != &a3[v16]) {
          v19 = a4;
          memmove_alt1(a1[1], (__int64)&a3[v16], a4 - &a3[v16]);
          a4 = v19;
        }
        v20 = v6 + v18;
        a1[1] = v6 + v18;
        if (v17 >= 1) {
          v21 = v9 + 4 * a5;
          v22 = v6 + v18;
          if (v20 - 4 * a5 < v6) {
            v23 = &a4[v9];
            v24 = &a4[v9 + -4 * a5];
            do {
              v25 = *(_DWORD*)(v24 - v8);
              v24 += 4;
              *(_DWORD*)(v23 - v8) = v25;
              v23 += 4;
            } while (v24 - v8 < v6);
            v22 = v23 - v8;
          }
          a1[1] = v22;
          if (v20 != v21) {
            memmove_alt1(v9 + 4 * a5, v9, v20 - v21);
          }
          do {
            v26 = *(_DWORD*)v8;
            v8 += 4;
            v16 -= 4;
            *(_DWORD*)v9 = v26;
            v9 += 4;
          } while (v16 != 0);
        }
      }
    }
    else {
      v11 = *a1;
      v12 = a5 + ((__int64)(v6 - *a1) >> 2);
      if (v12 >> 62 != 0) {
        GameRoutine_6e3e20();
      }
      v13 = v5 - v11;
      if (v13 >> 1 > v12) {
        v12 = v13 >> 1;
      }
      if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFFCLL) {
        v14 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v14 = v12;
      }
      if (v14 != 0) {
        if (v14 >> 62 != 0) {
          GameRoutine_60a210();
        }
        v15 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 4 * v14,
                                             16, 0);
      }
      else {
        v15 = 0;
      }
      memcpy_alt1(v15 + v9 - v11, (__int64)v8, 4 * a5);
      memcpy_alt1(v15 + v9 - v11 + 4 * a5, v9, v6 - v9);
      a1[1] = v9;
      memcpy_alt1(v15, v11, v9 - v11);
      *a1 = v15;
      a1[1] = v15 - v11 + 4 * a5 + v6;
      a1[2] = v15 + 4 * v14;
      if (v11 != 0) {
        v33 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v11);
      }
    }
  }
}

__attribute__((swiftcall)) void game_185a6a0(PSEUDO_X8 x8_, unsigned __int8 a1,
                                             unsigned int a2, unsigned int a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v5;
  __int64** v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BYTE* v12;
  __int64 v13;
  struct {
    __int64* v14[2];
    __int64** v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
  } v14_;
  struct {
    _QWORD v20[2];
    unsigned __int64 v21;
    __int64 (*v22)();
    __int64 v23;
  } v20_;
  struct {
    _BYTE v24[256];
    _BYTE* v25;
  } v24_;
  struct {
    __int64* v26[2];
    unsigned __int64 v27;
    __int64 v28;
    __int64 v29;
    char v30;
  } v26_;
  struct {
    _QWORD v31[2];
    int v32;
    char gap444_[4];
    __int64 v33;
    __int64 v34;
  } v31_;

  if (a2 != 1) {
    v26_.v27 = a3;
    v26_.v28 = 0;
    v26_.v26[0] = (__int64*)a2;
    v26_.v26[1] = nullptr;
    v20_.v23 = 0;
    v20_.v21 = 0;
    v20_.v22 = GameRoutine_64be60;
    v26_.v29 = 99;
    v6 = v14_.v14;
    v31_.v32 = 0;
    LOBYTE(v14_.v17) = 0;
    LOBYTE(v14_.v18) = 0;
    v20_.v20[0] = v24_.v24;
    v20_.v20[1] = 256;
    v24_.v25 = v24_.v24;
    v31_.v31[0] = "Layout/Textures/Chapter/Chapter_{}_{:02}.bntx";
    v31_.v31[1] = "";
    v31_.v33 = 0;
    v31_.v34 = 2;
    v14_.v15 = v26_.v26;
    v14_.v16 = 99;
    v14_.v14[0] = v20_.v20;
    v14_.v14[1] = (_QWORD*)(((_UNKNOWN*)0x0LL) + 2);
    GameRoutine_6380e0((__int64)v31_.v31, v14_.v14);
    if ((unsigned __int8)v14_.v18 != 1) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (a1 == 10) {
    v5 = nullptr;
  }
  else {
    v5 = (__int64*)GameData_20660e0[a1];
  }
  v14_.v14[0] = v5;
  v14_.v16 = 0;
  v14_.v17 = a3;
  v20_.v23 = 0;
  v14_.v15 = (__int64**)(((_UNKNOWN*)0x0LL) + 1);
  v14_.v18 = 0;
  v14_.v19 = 3180;
  v20_.v21 = 0;
  v20_.v22 = GameRoutine_64be60;
  v6 = v26_.v26;
  v31_.v32 = 0;
  LOBYTE(v26_.v29) = 0;
  v26_.v30 = 0;
  v31_.v31[0] = "Layout/Textures/Chapter/Chapter_{}_{}_{:02}.bntx";
  v31_.v31[1] = "";
  v20_.v20[0] = v24_.v24;
  v20_.v20[1] = 256;
  v24_.v25 = v24_.v24;
  v31_.v33 = 0;
  v31_.v34 = 3;
  v26_.v27 = (unsigned __int64)v14_.v14;
  v26_.v28 = 3180;
  v26_.v26[0] = v20_.v20;
  v26_.v26[1] = (_QWORD*)(((_UNKNOWN*)0x0LL) + 3);
  GameRoutine_6380e0((__int64)v31_.v31, v26_.v26);
  if (v26_.v30 == 1) {
  LABEL_5:
    std___1_locale_Destroy_locale((__int64)(v6 + 4));
  }
LABEL_6:
  v7 = v20_.v21;
  if (v20_.v21 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v8 = (__int64)v24_.v25;
  if (v20_.v21 >= 0x17) {
    if ((v20_.v21 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v20_.v21 | 7) + 1;
    }
    v11 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10, 16, 0);
    a4[1] = v7;
    a4[2] = v11;
    *a4 = v10 | 1;
    v9 = v11;
  }
  else {
    *(_BYTE*)a4 = 2 * v20_.v21;
    v9 = (__int64)a4 + 1;
    if (v7 == 0) {
      goto LABEL_15;
    }
  }
  memmove_alt1(v9, v8, v7);
LABEL_15:
  v12 = v24_.v25;
  *(_BYTE*)(v9 + v7) = 0;
  if (v12 != v24_.v24 && v12 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, (__int64)v12);
  }
}

void game_18c3220(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v4;
  _BYTE* v5;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  _BYTE* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  _QWORD* v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  float v33;
  float v34;
  float v35;
  _BOOL8 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  _QWORD* v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  _QWORD** v63;
  _QWORD* v64;
  __int64 v65;
  unsigned __int64 v66;
  _QWORD* v67;
  __int64 v68;
  unsigned __int64 v69;
  _QWORD* v70;
  _QWORD* v71;
  unsigned __int64 v72;
  __int64 v73;
  _QWORD* v74;
  _QWORD* v75;
  float v76;
  float v77;
  float v78;
  _BOOL8 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 primeEm;
  unsigned __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  _QWORD* v93;
  __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  _QWORD* v97;
  unsigned __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  _QWORD* v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  _QWORD** v106;
  _QWORD* v107;
  __int64 v108;
  unsigned __int64 v109;
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
  __int64* v120;
  unsigned __int64 v121;
  __int64 v122;
  __int64 v123;
  char* v124;
  unsigned __int64 v125;
  __int64 v126;
  unsigned __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64* v130;
  unsigned __int64 v131;
  __int64 v132;
  unsigned __int64 v133;
  char* v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64* v144;
  unsigned __int64 v145;
  __int64 v146;
  __int64 v147;
  char* v148;
  unsigned __int64 v149;
  __int64 v150;
  unsigned __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64* v154;
  unsigned __int64 v155;
  __int64 v156;
  unsigned __int64 v157;
  char* v158;
  __int64 v159;
  _QWORD v160[2];
  struct {
    const char* v161;
    __int64 v162;
  } v161_;
  struct {
    const char* v163;
    __int64 v164;
  } v163_;
  struct {
    __int64 v165;
    __int64 v166;
  } v165_;

  ui_LayoutAccessor_SetPriority(a1 + 24, -2);
  LayoutAccessor_155e830(a1 + 24, 1);
  v4 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 24), (__int64)"N_HudPool");
  *(_QWORD*)(a1 + 136) = v4;
  if (v4 == 0) {
    v5 = (_BYTE*)LayoutEx_579160(224, 16);
    if (v5 != nullptr) {
      v6 = v5;
      GameRoutine_58c890((__int64)v5);
      v5 = v6;
    }
    *(_QWORD*)(a1 + 136) = v5;
    LayoutEx_58d200(v5, "N_HudPool");
    *(_BYTE*)(*(_QWORD*)(a1 + 136) + 88LL) &= ~1u;
    v7 = std___1___shared_weak_count_lock(*(_QWORD*)(a1 + 32));
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v8 = v7;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt1(v8);
    }
    Pane_58dee0(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 24LL), *(_QWORD*)(a1 + 136));
  }
  v9 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 24), (__int64)"N_HudRoot");
  *(_QWORD*)(a1 + 128) = v9;
  if (v9 == 0) {
    v10 = (_BYTE*)LayoutEx_579160(224, 16);
    if (v10 != nullptr) {
      v11 = v10;
      GameRoutine_58c890((__int64)v10);
      v10 = v11;
    }
    *(_QWORD*)(a1 + 128) = v10;
    LayoutEx_58d200(v10, "N_HudRoot");
    *(_BYTE*)(*(_QWORD*)(a1 + 128) + 88LL) |= 1u;
    v12 = std___1___shared_weak_count_lock(*(_QWORD*)(a1 + 32));
    if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v13 = v12;
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v13);
    }
    Pane_58dee0(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 24LL), *(_QWORD*)(a1 + 128));
  }
  v14 = *(_QWORD*)(a1 + 32);
  v160[0] = "L_Popup_Damage";
  v160[1] = 14;
  if (v14 == 0) {
    goto LABEL_219;
  }
  v15 = std___1___shared_weak_count_lock(v14);
  if (v15 == 0) {
    goto LABEL_219;
  }
  v16 = *(_QWORD*)(a1 + 24);
  v17 = v15;
  if (v16 != 0) {
    Layout_1363e00((void*)(&v161_.v161), *(_QWORD*)(a1 + 24), (__int64)v160);
    v163_.v163 = nullptr;
    v163_.v164 = 0;
    if (v161_.v162 != 0 &&
        (v18 = std___1___shared_weak_count_lock(v161_.v162), v163_.v164 = v18,
         v18 != 0) &&
        (v163_.v163 = v161_.v161, v161_.v161 != nullptr) &&
        (v19 = v18, (v20 = __dynamic_cast(v161_.v161, GameData_212dfc0[0],
                                          GameData_21320c8[0], 0)) != 0)) {
      v21 = (__int64*)&v163_.v163;
      v165_.v165 = v20;
      v165_.v166 = v19;
    }
    else {
      v21 = &v165_.v165;
    }
    *v21 = 0;
    v21[1] = 0;
    v2 = v165_.v165;
    v1 = v165_.v166;
    if (v165_.v166 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v165_.v166 + 16), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
        std___1___shared_weak_count___release_weak_alt1(v1);
      }
    }
    v22 = v163_.v164;
    if (v163_.v164 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v163_.v164 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak_alt1(v22);
    }
    if (v161_.v162 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v161_.v162);
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v16 == 0) {
      goto LABEL_219;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt1(v17);
    if (v16 == 0) {
      goto LABEL_219;
    }
  }
  if (v1 == 0) {
    goto LABEL_219;
  }
  v23 = std___1___shared_weak_count_lock(v1);
  if (v23 == 0) {
    v24 = v1;
  LABEL_218:
    std___1___shared_weak_count___release_weak_alt1(v24);
    goto LABEL_219;
  }
  v24 = v23;
  std___1___shared_weak_count___release_weak_alt1(v1);
  if (v2 != 0) {
    v25 = *(_QWORD*)(a1 + 160);
    v26 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v25 != 0) {
      v27 = **(_QWORD***)(a1 + 152);
      if (v27 != nullptr) {
        v28 = (_QWORD*)*v27;
        if (v28 != nullptr) {
          if ((v25 & (v25 - 1)) == 0) {
            while (1) {
              v30 = v28[1];
              if (v30 != 0) {
                if ((v30 & (v25 - 1)) != 0) {
                  goto LABEL_55;
                }
              }
              else if (v28[2] == 0) {
                goto LABEL_126;
              }
              v28 = (_QWORD*)*v28;
              if (v28 == nullptr) {
                goto LABEL_55;
              }
            }
          }
          do {
            v29 = v28[1];
            if (v29 != 0) {
              if (v29 < v25 || v29 % v25 != 0) {
                break;
              }
            }
            else if (v28[2] == 0) {
              goto LABEL_126;
            }
            v28 = (_QWORD*)*v28;
          } while (v28 != nullptr);
        }
      }
    }
  LABEL_55:
    v31 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    *v31 = 0;
    v31[1] = 0;
    v31[2] = 0;
    v31[3] = v2;
    v32 = v31;
    v31[4] = v24;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                              memory_order_relaxed);
    v33 = *(float*)(a1 + 184);
    v34 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 176) + 1LL);
    if (v25 != 0 && (float)(v33 * (float)v25) >= v34) {
    LABEL_117:
      v63 = *(_QWORD***)(a1 + 152);
      v64 = *v63;
      if (*v63 != nullptr) {
        *v32 = *v64;
        *v64 = v32;
      }
      else {
        v65 = *(_QWORD*)(a1 + 168);
        *(_QWORD*)(a1 + 168) = v32;
        *v32 = v65;
        *v63 = (_QWORD*)(a1 + 168);
        if (*v32 != 0) {
          v66 = *(_QWORD*)(*v32 + 8LL);
          if ((v25 & (v25 - 1)) != 0) {
            if (v66 >= v25) {
              v66 %= v25;
            }
          }
          else {
            v66 &= v25 - 1;
          }
          *(_QWORD*)(*(_QWORD*)(a1 + 152) + 8 * v66) = v32;
        }
      }
      ++*(_QWORD*)(a1 + 176);
    LABEL_126:
      v67 = (_QWORD*)fw_memory_HeapManager_Allocate(*v26, 16, 16, 0);
      *v67 = v2;
      v67[1] = v24;
      v68 = (__int64)v67;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                                memory_order_relaxed);
      v69 = *(_QWORD*)(a1 + 200);
      if (v69 != 0) {
        v70 = **(_QWORD***)(a1 + 192);
        if (v70 != nullptr) {
          v71 = (_QWORD*)*v70;
          if (v71 != nullptr) {
            if ((v69 & (v69 - 1)) == 0) {
              while (1) {
                v73 = v71[1];
                if (v73 != 0) {
                  if ((v73 & (v69 - 1)) != 0) {
                    goto LABEL_141;
                  }
                }
                else if (v71[2] == 0) {
                  goto LABEL_278;
                }
                v71 = (_QWORD*)*v71;
                if (v71 == nullptr) {
                  goto LABEL_141;
                }
              }
            }
            do {
              v72 = v71[1];
              if (v72 != 0) {
                if (v72 < v69 || v72 % v69 != 0) {
                  break;
                }
              }
              else if (v71[2] == 0) {
              LABEL_278:
                v110 = v24;
                goto LABEL_212;
              }
              v71 = (_QWORD*)*v71;
            } while (v71 != nullptr);
          }
        }
      }
    LABEL_141:
      v74 = (_QWORD*)fw_memory_HeapManager_Allocate(*v26, 48, 16, 0);
      *v74 = 0;
      v74[1] = 0;
      v74[2] = 0;
      v75 = (_QWORD*)fw_memory_HeapManager_Allocate(*v26, 16, 16, 0);
      v74[3] = v75;
      *v75 = v2;
      v75[1] = v24;
      v74[5] = v75 + 2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                                memory_order_relaxed);
      v74[4] = v75 + 2;
      v76 = *(float*)(a1 + 224);
      v77 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 216) + 1LL);
      if (v69 != 0 && (float)(v76 * (float)v69) >= v77) {
        goto LABEL_203;
      }
      v78 = v77 / v76;
      v79 = true;
      if (v69 >= 3) {
        v79 = (v69 & (v69 - 1)) != 0;
      }
      v80 = v79 | (2 * v69);
      v81 = vcvtps_u64_f32(v78);
      if (v80 <= v81) {
        primeEm = v81;
      }
      else {
        primeEm = v80;
      }
      if (primeEm == 1) {
        primeEm = 2;
      }
      else if ((primeEm & (primeEm - 1)) != 0) {
        primeEm = std___1___next_prime(primeEm);
      }
      v83 = *(_QWORD*)(a1 + 200);
      if (primeEm <= v83) {
        if (primeEm >= v83) {
          goto LABEL_202;
        }
        v89 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 216) /
                             *(float*)(a1 + 224));
        if (v83 < 3 || (v83 & (v83 - 1)) != 0) {
          v89 = std___1___next_prime(v89);
        }
        else {
          v90 = 1LL << (-(char)__clz(v89 - 1) & 63);
          if (v89 >= 2) {
            v89 = v90;
          }
        }
        if (primeEm <= v89) {
          primeEm = v89;
        }
        if (primeEm >= v83) {
          goto LABEL_202;
        }
        if (primeEm == 0) {
          v104 = *(_QWORD*)(a1 + 192);
          *(_QWORD*)(a1 + 192) = 0;
          if (v104 != 0) {
            v105 = 128;
            if (*(_QWORD*)(*v26 + 200) == 0) {
              v105 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v26 + v105, v104);
          }
          *(_QWORD*)(a1 + 200) = 0;
          goto LABEL_202;
        }
      }
      if (primeEm >> 61 != 0) {
        goto LABEL_279;
      }
      v84 = fw_memory_HeapManager_Allocate(*v26, 8 * primeEm, 16, 0);
      v85 = *(_QWORD*)(a1 + 192);
      *(_QWORD*)(a1 + 192) = v84;
      if (v85 != 0) {
        v86 = 128;
        if (*(_QWORD*)(*v26 + 200) == 0) {
          v86 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v26 + v86, v85);
      }
      v87 = primeEm & 7;
      *(_QWORD*)(a1 + 200) = primeEm;
      if (primeEm >= 8) {
        v88 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 192) + 8 * v88) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 192) + 8 * v88 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 192) + 8 * v88 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 192) + 8 * v88 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 192) + 8 * v88 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 192) + 8 * v88 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 192) + 8 * v88 + 48) = 0;
          v91 = *(_QWORD*)(a1 + 192) + 8 * v88;
          v88 += 8;
          *(_QWORD*)(v91 + 56) = 0;
        } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v88);
      }
      else {
        v88 = 0;
      }
      if ((primeEm & 7) != 0) {
        v92 = 8 * v88;
        do {
          --v87;
          *(_QWORD*)(*(_QWORD*)(a1 + 192) + v92) = 0;
          v92 += 8;
        } while (v87 != 0);
      }
      v94 = a1 + 208;
      v93 = *(_QWORD**)(a1 + 208);
      if (v93 == nullptr) {
        goto LABEL_202;
      }
      v95 = v93[1];
      v96 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) == 0) {
        v100 = v95 & v96;
        *(_QWORD*)(*(_QWORD*)(a1 + 192) + 8 * v100) = v94;
        while (1) {
          v101 = (_QWORD*)*v93;
          if (*v93 == 0) {
            break;
          }
          v102 = v101[1] & v96;
          if (v102 == v100) {
            v93 = (_QWORD*)*v93;
          }
          else {
            v103 = *(_QWORD*)(a1 + 192);
            if (*(_QWORD*)(v103 + 8 * v102) != 0) {
              *v93 = *v101;
              *v101 = **(_QWORD**)(*(_QWORD*)(a1 + 192) + 8 * v102);
              **(_QWORD**)(*(_QWORD*)(a1 + 192) + 8 * v102) = v101;
            }
            else {
              *(_QWORD*)(v103 + 8 * v102) = v93;
              v93 = v101;
              v100 = v102;
            }
          }
        }
      LABEL_202:
        v69 = *(_QWORD*)(a1 + 200);
      LABEL_203:
        v106 = *(_QWORD***)(a1 + 192);
        v107 = *v106;
        if (*v106 != nullptr) {
          *v74 = *v107;
          *v107 = v74;
        }
        else {
          v108 = *(_QWORD*)(a1 + 208);
          *(_QWORD*)(a1 + 208) = v74;
          *v74 = v108;
          *v106 = (_QWORD*)(a1 + 208);
          if (v108 != 0) {
            v109 = *(_QWORD*)(v108 + 8);
            if ((v69 & (v69 - 1)) != 0) {
              if (v109 >= v69) {
                v109 %= v69;
              }
            }
            else {
              v109 &= v69 - 1;
            }
            *(_QWORD*)(*(_QWORD*)(a1 + 192) + 8 * v109) = v74;
          }
        }
        v110 = *(_QWORD*)(v68 + 8);
        ++*(_QWORD*)(a1 + 216);
        if (v110 != 0) {
        LABEL_212:
          std___1___shared_weak_count___release_weak_alt1(v110);
        }
        v111 = 128;
        if (*(_QWORD*)(*v26 + 200) == 0) {
          v111 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v26 + v111, v68);
        goto LABEL_216;
      }
      if (v95 >= primeEm) {
        v95 %= primeEm;
      }
      *(_QWORD*)(*(_QWORD*)(a1 + 192) + 8 * v95) = v94;
      v97 = (_QWORD*)*v93;
      if (*v93 == 0) {
        goto LABEL_202;
      }
      while (1) {
        v98 = v97[1];
        if (v98 >= primeEm) {
          v98 %= primeEm;
        }
        if (v98 != v95) {
          v99 = *(_QWORD*)(a1 + 192);
          if (*(_QWORD*)(v99 + 8 * v98) == 0) {
            *(_QWORD*)(v99 + 8 * v98) = v93;
            goto LABEL_179;
          }
          *v93 = *v97;
          *v97 = **(_QWORD**)(*(_QWORD*)(a1 + 192) + 8 * v98);
          **(_QWORD**)(*(_QWORD*)(a1 + 192) + 8 * v98) = v97;
          v97 = v93;
        }
        v98 = v95;
      LABEL_179:
        v93 = v97;
        v97 = (_QWORD*)*v97;
        v95 = v98;
        if (v97 == nullptr) {
          goto LABEL_202;
        }
      }
    }
    v35 = v34 / v33;
    v36 = true;
    if (v25 >= 3) {
      v36 = (v25 & (v25 - 1)) != 0;
    }
    v37 = v36 | (2 * v25);
    v38 = vcvtps_u64_f32(v35);
    if (v37 <= v38) {
      v39 = v38;
    }
    else {
      v39 = v37;
    }
    if (v39 == 1) {
      v39 = 2;
    }
    else if ((v39 & (v39 - 1)) != 0) {
      v39 = std___1___next_prime(v39);
    }
    v40 = *(_QWORD*)(a1 + 160);
    if (v39 <= v40) {
      if (v39 >= v40) {
        goto LABEL_116;
      }
      v46 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 176) /
                           *(float*)(a1 + 184));
      if (v40 < 3 || (v40 & (v40 - 1)) != 0) {
        v46 = std___1___next_prime(v46);
      }
      else {
        v47 = 1LL << (-(char)__clz(v46 - 1) & 63);
        if (v46 >= 2) {
          v46 = v47;
        }
      }
      if (v39 <= v46) {
        v39 = v46;
      }
      if (v39 >= v40) {
        goto LABEL_116;
      }
      if (v39 == 0) {
        v61 = *(_QWORD*)(a1 + 152);
        *(_QWORD*)(a1 + 152) = 0;
        if (v61 != 0) {
          v62 = 128;
          if (*(_QWORD*)(*v26 + 200) == 0) {
            v62 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v26 + v62, v61);
        }
        *(_QWORD*)(a1 + 160) = 0;
        goto LABEL_116;
      }
    }
    if (v39 >> 61 != 0) {
      goto LABEL_279;
    }
    v41 = fw_memory_HeapManager_Allocate(*v26, 8 * v39, 16, 0);
    v42 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)(a1 + 152) = v41;
    if (v42 != 0) {
      v43 = 128;
      if (*(_QWORD*)(*v26 + 200) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v26 + v43, v42);
    }
    v44 = v39 & 7;
    *(_QWORD*)(a1 + 160) = v39;
    if (v39 >= 8) {
      v45 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)(a1 + 152) + 8 * v45) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 152) + 8 * v45 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 152) + 8 * v45 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 152) + 8 * v45 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 152) + 8 * v45 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 152) + 8 * v45 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 152) + 8 * v45 + 48) = 0;
        v48 = *(_QWORD*)(a1 + 152) + 8 * v45;
        v45 += 8;
        *(_QWORD*)(v48 + 56) = 0;
      } while ((v39 & 0x1FFFFFFFFFFFFFF8LL) != v45);
    }
    else {
      v45 = 0;
    }
    if ((v39 & 7) != 0) {
      v49 = 8 * v45;
      do {
        --v44;
        *(_QWORD*)(*(_QWORD*)(a1 + 152) + v49) = 0;
        v49 += 8;
      } while (v44 != 0);
    }
    v51 = a1 + 168;
    v50 = *(_QWORD**)(a1 + 168);
    if (v50 == nullptr) {
      goto LABEL_116;
    }
    v52 = v50[1];
    v53 = v39 - 1;
    if ((v39 & (v39 - 1)) == 0) {
      v57 = v52 & v53;
      *(_QWORD*)(*(_QWORD*)(a1 + 152) + 8 * v57) = v51;
      while (1) {
        v58 = (_QWORD*)*v50;
        if (*v50 == 0) {
          break;
        }
        v59 = v58[1] & v53;
        if (v59 == v57) {
          v50 = (_QWORD*)*v50;
        }
        else {
          v60 = *(_QWORD*)(a1 + 152);
          if (*(_QWORD*)(v60 + 8 * v59) != 0) {
            *v50 = *v58;
            *v58 = **(_QWORD**)(*(_QWORD*)(a1 + 152) + 8 * v59);
            **(_QWORD**)(*(_QWORD*)(a1 + 152) + 8 * v59) = v58;
          }
          else {
            *(_QWORD*)(v60 + 8 * v59) = v50;
            v50 = v58;
            v57 = v59;
          }
        }
      }
    LABEL_116:
      v25 = *(_QWORD*)(a1 + 160);
      goto LABEL_117;
    }
    if (v52 >= v39) {
      v52 %= v39;
    }
    *(_QWORD*)(*(_QWORD*)(a1 + 152) + 8 * v52) = v51;
    v54 = (_QWORD*)*v50;
    if (*v50 == 0) {
      goto LABEL_116;
    }
    while (1) {
      v55 = v54[1];
      if (v55 >= v39) {
        v55 %= v39;
      }
      if (v55 != v52) {
        v56 = *(_QWORD*)(a1 + 152);
        if (*(_QWORD*)(v56 + 8 * v55) == 0) {
          *(_QWORD*)(v56 + 8 * v55) = v50;
          goto LABEL_93;
        }
        *v50 = *v54;
        *v54 = **(_QWORD**)(*(_QWORD*)(a1 + 152) + 8 * v55);
        **(_QWORD**)(*(_QWORD*)(a1 + 152) + 8 * v55) = v54;
        v54 = v50;
      }
      v55 = v52;
    LABEL_93:
      v50 = v54;
      v54 = (_QWORD*)*v54;
      v52 = v55;
      if (v54 == nullptr) {
        goto LABEL_116;
      }
    }
  }
LABEL_216:
  if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    goto LABEL_218;
  }
LABEL_219:
  v112 = *(_QWORD*)(a1 + 32);
  v163_.v163 = "L_Popup_Gauge";
  v163_.v164 = 13;
  if (v112 == 0) {
    goto LABEL_248;
  }
  v113 = std___1___shared_weak_count_lock(v112);
  if (v113 == 0) {
    goto LABEL_248;
  }
  v114 = *(_QWORD*)(a1 + 24);
  v115 = v113;
  if (v114 != 0) {
    GameRoutine_18c7f30((void*)(&v165_.v165), *(_QWORD*)(a1 + 24),
                        (__int64)&v163_.v163);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v115 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v114 == 0) {
      goto LABEL_248;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v115 + 16LL))(v115);
    std___1___shared_weak_count___release_weak_alt1(v115);
    if (v114 == 0) {
      goto LABEL_248;
    }
  }
  v116 = v165_.v166;
  if (v165_.v166 == 0) {
    goto LABEL_248;
  }
  v117 = std___1___shared_weak_count_lock(v165_.v166);
  v118 = v165_.v165;
  v119 = v117;
  std___1___shared_weak_count___release_weak_alt1(v116);
  if (v119 != 0 && v118 != 0) {
    v120 = *(__int64**)(a1 + 240);
    v121 = *(_QWORD*)(a1 + 248);
    if ((unsigned __int64)v120 >= v121) {
      v123 = *(_QWORD*)(a1 + 232);
      v124 = (char*)v120 - v123;
      v125 = (((__int64)v120 - v123) >> 4) + 1;
      if (v125 >> 60 != 0) {
        goto LABEL_280;
      }
      v126 = v121 - v123;
      if (v126 >> 3 > v125) {
        v125 = v126 >> 3;
      }
      if ((unsigned __int64)v126 >= 0x7FFFFFFFFFFFFFF0LL) {
        v127 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v127 = v125;
      }
      if (v127 >> 60 != 0) {
        goto LABEL_279;
      }
      v128 = fw_memory_g_heap_manager_ptr;
      v129 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v127, 16, 0);
      v130 = (__int64*)&v124[v129];
      v131 = v129 + 16 * v127;
      *v130 = v118;
      v130[1] = v119;
      v122 = (__int64)&v124[v129 + 16];
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v119 + 16), 1u,
                                memory_order_relaxed);
      v132 = *(_QWORD*)(a1 + 232);
      v133 = *(_QWORD*)(a1 + 240) - v132;
      v134 = (char*)v130 - v133;
      memcpy_alt1((__int64)v130 - v133, v132, v133);
      *(_QWORD*)(a1 + 232) = v134;
      *(_QWORD*)(a1 + 240) = v122;
      *(_QWORD*)(a1 + 248) = v131;
      if (v132 != 0) {
        v135 = 128;
        if (*(_QWORD*)(*(_QWORD*)v128 + 200LL) == 0) {
          v135 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v128 + v135, v132);
      }
    }
    else {
      *v120 = v118;
      v120[1] = v119;
      v122 = (__int64)(v120 + 2);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v119 + 16), 1u,
                                memory_order_relaxed);
    }
    *(_QWORD*)(a1 + 240) = v122;
    goto LABEL_246;
  }
  if (v119 != 0) {
  LABEL_246:
    if (atomic_fetch_add((atomic_ullong* volatile)(v119 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v119 + 16LL))(v119);
      std___1___shared_weak_count___release_weak_alt1(v119);
    }
  }
LABEL_248:
  v136 = *(_QWORD*)(a1 + 32);
  v163_.v163 = "L_Popup_GaugeSub";
  v163_.v164 = 16;
  if (v136 != 0) {
    v137 = std___1___shared_weak_count_lock(v136);
    if (v137 != 0) {
      v138 = *(_QWORD*)(a1 + 24);
      v139 = v137;
      if (v138 != 0) {
        GameRoutine_18c7f30((void*)(&v165_.v165), *(_QWORD*)(a1 + 24),
                            (__int64)&v163_.v163);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v139 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v138 == 0) {
          return;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v139 + 16LL))(v139);
        std___1___shared_weak_count___release_weak_alt1(v139);
        if (v138 == 0) {
          return;
        }
      }
      v140 = v165_.v166;
      if (v165_.v166 != 0) {
        v141 = std___1___shared_weak_count_lock(v165_.v166);
        v142 = v165_.v165;
        v143 = v141;
        std___1___shared_weak_count___release_weak_alt1(v140);
        if (v143 == 0 || v142 == 0) {
          if (v143 == 0) {
            return;
          }
          goto LABEL_275;
        }
        v144 = *(__int64**)(a1 + 240);
        v145 = *(_QWORD*)(a1 + 248);
        if ((unsigned __int64)v144 < v145) {
          *v144 = v142;
          v144[1] = v143;
          v146 = (__int64)(v144 + 2);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v143 + 16), 1u,
                                    memory_order_relaxed);
        LABEL_274:
          *(_QWORD*)(a1 + 240) = v146;
        LABEL_275:
          if (atomic_fetch_add((atomic_ullong* volatile)(v143 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v143 + 16LL))(v143);
            std___1___shared_weak_count___release_weak_alt1(v143);
          }
          return;
        }
        v147 = *(_QWORD*)(a1 + 232);
        v148 = (char*)v144 - v147;
        v149 = (((__int64)v144 - v147) >> 4) + 1;
        if (v149 >> 60 == 0) {
          v150 = v145 - v147;
          if (v150 >> 3 > v149) {
            v149 = v150 >> 3;
          }
          if ((unsigned __int64)v150 >= 0x7FFFFFFFFFFFFFF0LL) {
            v151 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v151 = v149;
          }
          if (v151 >> 60 == 0) {
            v152 = fw_memory_g_heap_manager_ptr;
            v153 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v151, 16, 0);
            v154 = (__int64*)&v148[v153];
            v155 = v153 + 16 * v151;
            *v154 = v142;
            v154[1] = v143;
            v146 = (__int64)&v148[v153 + 16];
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v143 + 16), 1u,
                                      memory_order_relaxed);
            v156 = *(_QWORD*)(a1 + 232);
            v157 = *(_QWORD*)(a1 + 240) - v156;
            v158 = (char*)v154 - v157;
            memcpy_alt1((__int64)v154 - v157, v156, v157);
            *(_QWORD*)(a1 + 232) = v158;
            *(_QWORD*)(a1 + 240) = v146;
            *(_QWORD*)(a1 + 248) = v155;
            if (v156 != 0) {
              v159 = 128;
              if (*(_QWORD*)(*(_QWORD*)v152 + 200LL) == 0) {
                v159 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v152 + v159, v156);
            }
            goto LABEL_274;
          }
        LABEL_279:
          GameRoutine_60a210();
        }
      LABEL_280:
        GameRoutine_18c7090();
      }
    }
  }
}

void game_18d6580(_QWORD* a1)
{
  int v2;
  int v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  unsigned int v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int8* v18;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  int v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  char v32;
  unsigned __int64 v33;
  const char* v34;
  unsigned __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  bool v51;
  unsigned __int64 v52;
  char* v53;
  unsigned __int64 v54;
  int* v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 (**v59)();
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 (**v64)();
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned int* v69;
  unsigned int* v70;
  unsigned __int64 v71;
  int v72;
  unsigned __int64 v73;
  __int64 v74;
  int v75;
  __int64 v76;
  char v77;
  int v78;
  unsigned int* v79;
  unsigned int* v80;
  unsigned __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  int v87;
  __int64 v88;
  int v89;
  unsigned int v90;
  unsigned int v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  char* v96;
  __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  char* v103;
  unsigned __int64 v104;
  __int64 v105;
  unsigned __int8* v106;
  int v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64* v112;
  __int64* v113;
  __int64 v114;
  __int64 v115;
  struct {
    unsigned __int64 v116;
    unsigned __int64 v117;
    __int64 v118;
  } v116_;
  struct {
    _QWORD v119[3];
    __int64 v120;
    __int64 v121;
    __int64 v122;
    unsigned __int8* v123;
  } v119_;
  struct {
    int8x16_t v124;
    __int64* v125;
    __int64 v126;
  } v124_;
  struct {
    _DWORD v127[2];
    __int64 v128;
    __int64 v129;
  } v127_;
  struct {
    __int64 v130;
    unsigned __int64 v131;
    __int64 (**v132)();
  } v130_;
  unsigned __int64 v133;
  struct {
    __int64 v134;
    unsigned __int64 v135;
    int* v136;
  } v134_;
  struct {
    __int64 (**v137)();
    __int64 v138;
    unsigned __int64 v139;
    __int64 (*v140)();
    __int64 v141;
  } v137_;
  struct {
    _QWORD v142[2];
    __int16 v143;
    char gap314_[2];
    int v144;
    __int64 v145;
    __int64 v146;
    char gap336_[216];
    _QWORD* v147;
  } v142_;
  struct {
    __int64 v148;
    __int64 v149;
    __int64 v150;
    __int64 v151;
    __int64 v152;
    __int64 v153;
  } v148_;

  v71 = COERCE_AS(__typeof__(v71),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = nn_aoc_CountAddOnContent(),
  v71 = COERCE_AS(__typeof__(v71),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v2 >= 1) {
    v3 = v2;
    v4 = 4LL * (unsigned int)v2;
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v4, 16, 0),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    memset(v6, 0, v4),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v7 = nn_aoc_ListAddOnContent(v6, 0, v3),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v7 >= 1) {
      v8 = 0;
      v9 = (unsigned int)v7;
      v114 = v6;
      v115 = (unsigned int)v7;
      while (1) {
        v10 = *(_DWORD*)(v6 + 4 * v8);
        v11 = a1[8];
        v12 = a1[9];
        if (v11 != v12) {
          while (*(_DWORD*)(*(_QWORD*)v11 + 4LL) != v10) {
            v11 += 8;
            if (v11 == v12) {
              goto LABEL_9;
            }
          }
        }
        if (v11 != v12) {
          goto LABEL_5;
        }
      LABEL_9:
        v13 = a1[1];
        LOWORD(v134_.v134) = 0;
        v14 = *(__int64**)(v13 + 24);
        if (v14 != nullptr) {
          do {
            v18 = (unsigned __int8*)(v14 + 2);
            if (&v134_.v134 != v14 + 2 && *((_DWORD*)v14 + 10) == v10) {
              v20 = *v18;
              if ((v134_.v134 & 1) != 0) {
                if ((v20 & 1) != 0) {
                  v16 = v14[4];
                }
                else {
                  v16 = (__int64)v14 + 17;
                }
                if ((v20 & 1) != 0) {
                  v17 = v14[3];
                }
                else {
                  v17 = v20 >> 1;
                }
                SpineModel_64dde0(&v134_.v134, v16, v17),
                    v71 = COERCE_AS(
                        __typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v81 = COERCE_AS(
                        __typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else if ((v20 & 1) != 0) {
                GameRoutine_64df20(&v134_.v134, v14[4], v14[3]),
                    v71 = COERCE_AS(
                        __typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v81 = COERCE_AS(
                        __typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v21 = *(_QWORD*)v18;
                v22 = v14[3];
                v23 = v14[4];
                v134_.v134 = v21;
                v134_.v135 = v22;
                v134_.v136 = (int*)v23;
              }
            }
            v14 = (__int64*)*v14;
          } while (v14 != nullptr);
          v15 = (unsigned __int8)v134_.v134;
        }
        else {
          v15 = 0;
        }
        v24 = v15 & 1;
        v25 = v15 >> 1;
        if (v24 != 0) {
          v25 = v134_.v135;
        }
        if (v25 != 0) {
          break;
        }
      LABEL_153:
        if (v24 != 0 && v134_.v136 != nullptr) {
          v110 = 128;
          if (*(_QWORD*)(*v5 + 200) == 0) {
            v110 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v5 + v110, (__int64)v134_.v136),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      LABEL_5:
        if (++v8 == v9) {
          goto LABEL_159;
        }
      }
      LODWORD(v137_.v137) =
          nn_fs_QueryMountAddOnContentCacheSize((__int64)&v133, v10),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((_DWORD)v137_.v137 != 0) {
        nn_diag_detail_AbortImpl_1a0a080((__int64)&v137_.v137),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v26 = fw_memory_HeapManager_Allocate(*v5, 40, 16, 0),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)v26 = 0;
      *(_QWORD*)(v26 + 8) = 0;
      *(_QWORD*)(v26 + 24) = 0;
      *(_QWORD*)(v26 + 32) = 0;
      v27 = v133;
      v28 = v133;
      *(_BYTE*)v26 = 1;
      v29 = *v5;
      *(_QWORD*)(v26 + 16) = 0;
      v30 = (_QWORD*)(v26 + 16);
      *(_DWORD*)(v26 + 4) = v10;
      v31 = fw_memory_HeapManager_Allocate(v29, v28, 16, 0),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      memset(v31, 0, v27),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v32 = v134_.v134;
      *(_QWORD*)(v26 + 8) = v31;
      if ((v32 & 1) != 0) {
        GameRoutine_64df20(v30, (__int64)v134_.v136, v134_.v135),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v10 = *(_DWORD*)(v26 + 4);
        v31 = *(_QWORD*)(v26 + 8);
        v27 = v133;
      }
      else {
        v33 = v134_.v135;
        *v30 = v134_.v134;
        *(_QWORD*)(v26 + 24) = v33;
        *(_QWORD*)(v26 + 32) = v134_.v136;
      }
      if ((*(_BYTE*)(v26 + 16) & 1) != 0) {
        v34 = *(const char**)(v26 + 32);
      }
      else {
        v34 = (const char*)(v26 + 17);
      }
      LODWORD(v137_.v137) = nn_fs_MountAddOnContent(v34, v10, v31, v27),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((_DWORD)v137_.v137 != 0) {
        nn_diag_detail_AbortImpl_1a0a080((__int64)&v137_.v137),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v36 = (__int64*)a1[9];
      v35 = a1[10];
      if ((unsigned __int64)v36 >= v35) {
        v38 = a1[8];
        v39 = (char*)v36 - v38;
        v40 = ((__int64)v36 - v38) >> 3;
        v41 = v40 + 1;
        if ((unsigned __int64)(v40 + 1) >> 61 != 0) {
          GameRoutine_18d8270(),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v42 = v35 - v38;
        if (v42 >> 2 > v41) {
          v41 = v42 >> 2;
        }
        if ((unsigned __int64)v42 >= 0x7FFFFFFFFFFFFFF8LL) {
          v43 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v43 = v41;
        }
        if (v43 != 0) {
          if (v43 >> 61 != 0) {
            GameRoutine_60a210(),
                v71 =
                    COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v44 = fw_memory_HeapManager_Allocate(*v5, 8 * v43, 16, 0),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          v44 = 0;
        }
        v45 = v44 + 8 * v43;
        v46 = (unsigned __int64)v36 - v38;
        v47 = (__int64)&v39[v44 + -8 * v40];
        *(_QWORD*)&v39[v44] = v26;
        v37 = (__int64)&v39[v44 + 8];
        memcpy_alt1(v47, v38, v46),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        a1[8] = v47;
        a1[9] = v37;
        a1[10] = v45;
        if (v38 != 0) {
          v48 = 128;
          if (*(_QWORD*)(*v5 + 200) == 0) {
            v48 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v5 + v48, v38),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v6 = v114;
      }
      else {
        *v36 = v26;
        v37 = (__int64)(v36 + 1);
      }
      v50 = v134_.v135;
      v49 = (__int64)v134_.v136;
      v51 = (v134_.v134 & 1) == 0;
      v52 = (unsigned __int64)(unsigned __int8)v134_.v134 >> 1;
      a1[9] = v37;
      if (v51) {
        v53 = (char*)&v134_.v134 + 1;
      }
      else {
        v53 = (char*)v49;
      }
      if (v51) {
        v54 = v52;
      }
      else {
        v54 = v50;
      }
      game_18d6470((__int64)a1, (__int64)v53, v54, 0),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v137_.v141 = 0;
      LODWORD(v119_.v119[2]) = 0;
      v137_.v137 = (__int64 (**)(void))v142_.v142,
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v137_.v138 = 256;
      v142_.v147 = v142_.v142;
      v124_.v125 = &v148_.v148;
      v124_.v126 = 13;
      LOBYTE(v127_.v127[0]) = 0;
      LOBYTE(v127_.v128) = 0;
      v137_.v139 = 0;
      v137_.v140 = GameRoutine_64be60;
      v55 = v134_.v136;
      if ((v134_.v134 & 1) != 0) {
        v56 = v134_.v135;
      }
      else {
        v55 = (int*)((char*)&v134_.v134 + 1);
        v56 = (unsigned __int64)(unsigned __int8)v134_.v134 >> 1;
      }
      v148_.v148 = (__int64)v55;
      v148_.v149 = v56;
      v148_.v150 = 13;
      v119_.v119[0] = "{}:/Fs.bin";
      v119_.v119[1] = "";
      v119_.v120 = 0;
      v119_.v121 = 1;
      LANES128(v124_.v124).n128_u64[1] = 1;
      LANES128(v124_.v124).n128_u64[0] = (unsigned __int64)&v137_.v137;
      GameRoutine_6380e0((__int64)v119_.v119, (__int64**)&v124_.v124),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((unsigned __int8)v127_.v128 == 1) {
        std___1_locale_Destroy_locale((__int64)v127_.v127),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v57 = v137_.v139;
      if (v137_.v139 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0(),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v58 = (__int64)v142_.v147;
      if (v137_.v139 >= 0x17) {
        if ((v137_.v139 | 7) == 0x17) {
          v60 = 26;
        }
        else {
          v60 = (v137_.v139 | 7) + 1;
        }
        v59 =
            (__int64 (**)(void))fw_memory_HeapManager_Allocate(*v5, v60, 16, 0),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v130_.v131 = v57;
        v130_.v132 = v59;
        v130_.v130 = v60 | 1;
      }
      else {
        v59 = (__int64 (**)(void))((char*)&v130_.v130 + 1),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LOBYTE(v130_.v130) = 2 * v137_.v139;
        if (v137_.v139 == 0) {
          goto LABEL_77;
        }
      }
      memmove_alt1((__int64)v59, v58, v57),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_77:
      v61 = v142_.v147;
      *((_BYTE*)v59 + v57) = 0;
      if (v61 != v142_.v142 && v61 != nullptr) {
        v62 = 128;
        if (*(_QWORD*)(*v5 + 200) == 0) {
          v62 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v5 + v62, (__int64)v61),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v63 = v130_.v131;
      v64 = v130_.v132;
      if ((v130_.v130 & 1) == 0) {
        v64 = (__int64 (**)(void))((char*)&v130_.v130 + 1),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v63 = (unsigned __int64)(unsigned __int8)v130_.v130 >> 1;
      }
      v137_.v137 = v64;
      v137_.v138 = v63;
      v137_.v139 = (unsigned __int64)&fs_Memory_vtable_ptr;
      LODWORD(v137_.v140) = 1;
      v65 = GameRoutine_6544c0(snd_g_fileIndex, (__int64)&v137_.v137),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v66 = *(_QWORD*)(v65 + 592);
      v67 = v65;
      if (v66 == 0) {
        goto LABEL_147;
      }
      v68 = *(_QWORD*)(v65 + 576);
      v142_.v144 = 0;
      v148_.v148 = 0;
      v148_.v153 = 0;
      LODWORD(v148_.v149) = 0;
      v148_.v151 = 0;
      v148_.v152 = 0;
      v137_.v138 = 0;
      v137_.v139 = 0;
      v137_.v140 = nullptr;
      v142_.v145 = v66;
      v142_.v146 = v68;
      v142_.v142[0] = 0;
      v142_.v142[1] = 0;
      LANES128(v124_.v124).n128_u64[0] = 0x2000;
      v142_.v143 = 257;
      LANES128(v124_.v124).n128_u64[1] = 256;
      v137_.v141 = -1;
      v124_.v125 = (_QWORD*)((_UNKNOWN*)0x800LL);
      v124_.v126 = 16;
      v127_.v127[1] = 0;
      v127_.v128 = 0;
      v127_.v129 = 0;
      v127_.v127[0] = 2;
      v137_.v137 = nn_nlib_MemoryInputStream_vtable;
      v148_.v150 = 0xFFFFFFFFLL;
      if ((unsigned int)timeline_7910((__int64)&v148_.v148, &v124_.v124) != 0) {
        LODWORD(v148_.v149) = 14;
        LODWORD(v119_.v119[1]) = 14;
        v119_.v119[0] = v148_.v148;
      }
      else {
        if ((unsigned int)GameHr_7aa0((int**)&v148_.v148, &v137_.v137) == 0) {
          timeline_6530((void*)(&v116_.v116), (int*)&v148_.v148, nullptr),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v99 = v148_.v148;
          v148_.v148 = 0;
          v119_.v119[0] = v99;
          LODWORD(v119_.v119[1]) = v148_.v149;
          v119_.v119[2] = v148_.v150;
          v119_.v120 = v148_.v151;
          v148_.v151 = 0;
          v119_.v121 = v148_.v152;
          v119_.v122 = v148_.v153;
          v119_.v123 = (unsigned __int8*)v116_.v116;
          goto LABEL_90;
        }
        v119_.v119[0] = v148_.v148;
        LODWORD(v119_.v119[1]) = v148_.v149;
      }
      v148_.v148 = 0;
      v119_.v123 = nullptr;
      v119_.v119[2] = v148_.v150;
      v119_.v120 = v148_.v151;
      v148_.v151 = 0;
      v119_.v121 = v148_.v152;
      v119_.v122 = v148_.v153;
    LABEL_90:
      Value_77d0(&v148_.v148),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((*v119_.v123 & 0x7F) == 8 &&
          (v69 = *(unsigned int**)(v119_.v123 + 1),
           v148_.v148 = (__int64)"ReleaseVersion", v148_.v149 = 14,
           v70 = game_6b7f00(v69, 0, v69, v69[1], &v148_.v148),
           v71 != v69[1])) {
        v73 = *v70;
        if (v71 >= v73) {
          v75 = v71 - v73;
          v76 = __clz(v75 + 16);
          v74 = *(_QWORD*)(*((_QWORD*)v70 + 2) + 8 * (27 - v76) + 8) +
                32LL * (unsigned int)(v75 -
                                      *((_DWORD*)GameData_212ce38 + 28 - v76));
        }
        else {
          v74 = *((_QWORD*)v70 + 1) + 32 * v71;
        }
        v77 = *(_BYTE*)(v74 + 16);
        v78 = *(_DWORD*)(v74 + 24);
        if ((v77 & 0xFE) == 2) {
          v72 = v78;
        }
        else {
          v72 = 0;
        }
      }
      else {
        v72 = 0;
      }
      v116_.v117 = 0;
      v116_.v118 = 0;
      v116_.v116 = 0;
      if ((*v119_.v123 & 0x7F) != 8) {
        v83 = 0;
        v84 = 0;
        LODWORD(v82) = 0;
        goto LABEL_129;
      }
      v79 = *(unsigned int**)(v119_.v123 + 1);
      v148_.v148 = (__int64)"ContentsName";
      v148_.v149 = 12;
      v80 = ({
        unsigned __int128 r_ =
            game_6b7f00_pair(v79, 0, v79, v79[1], &v148_.v148);
        v71 = COERCE_AS(__typeof__(v71), (unsigned long long)(r_ >> 64));
        v81 = COERCE_AS(__typeof__(v81), (unsigned long long)(r_ >> 64));
        (unsigned int*)(unsigned long long)r_;
      });
      if (v81 == v79[1]) {
        LODWORD(v82) = (unsigned __int8)v116_.v116;
        v83 = v116_.v117;
        v84 = v116_.v118;
      LABEL_129:
        if ((v82 & 1) != 0) {
          v103 = (char*)v84;
        }
        else {
          v103 = (char*)&v116_.v116 + 1;
        }
        if ((v82 & 1) != 0) {
          v104 = v83;
        }
        else {
          v104 = (unsigned int)v82 >> 1;
        }
        game_18d6470((__int64)a1, (__int64)v103, v104, v72),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((v116_.v116 & 1) != 0 && v116_.v118 != 0) {
          v105 = 128;
          if (*(_QWORD*)(*v5 + 200) == 0) {
            v105 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v5 + v105, v116_.v118),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v106 = v119_.v123;
        v119_.v123 = nullptr;
        if (v106 != nullptr) {
          v107 = *v106;
          if ((unsigned int)(v107 - 6) <= 4) {
            GameRoutine_6b55a0((__int64)v106, v107),
                v71 =
                    COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v108 = 128;
          if (*(_QWORD*)(*v5 + 200) == 0) {
            v108 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v5 + v108, (__int64)v106),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        Value_77d0(v119_.v119),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        ((void (*)(__int64 (***)(void)))v137_.v137[3])(&v137_.v137),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LABEL_147:
        GameRoutine_634d80(*(_QWORD*)(v67 + 8), v67),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((v130_.v130 & 1) != 0 && v130_.v132 != nullptr) {
          v109 = 128;
          if (*(_QWORD*)(*v5 + 200) == 0) {
            v109 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v5 + v109, (__int64)v130_.v132),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v9 = v115;
        v24 = v134_.v134 & 1;
        goto LABEL_153;
      }
      v85 = *v80;
      if (v81 >= v85) {
        v87 = v81 - v85;
        v88 = __clz(v87 + 16);
        v86 = *(_QWORD*)(*((_QWORD*)v80 + 2) + 8 * (27 - v88) + 8) +
              32LL *
                  (unsigned int)(v87 - *((_DWORD*)GameData_212ce38 + 28 - v88));
      }
      else {
        v86 = *((_QWORD*)v80 + 1) + 32 * v81;
      }
      v89 = *(unsigned __int8*)(v86 + 16);
      if ((v89 & 0x7F) != 6) {
        v97 = 0;
        v98 = 0;
        v83 = 0;
        v84 = 0;
        v82 = 0;
        if ((v116_.v116 & 1) != 0) {
          goto LABEL_124;
        }
        goto LABEL_128;
      }
      v90 = *(unsigned __int8*)(v86 + 17);
      v91 = *(_DWORD*)(v86 + 20);
      v92 = *(_QWORD*)(v86 + 24);
      v93 = v86 + 18;
      if (v89 == 134) {
        v94 = v90;
      }
      else {
        v94 = v91;
      }
      if (v89 == 6) {
        v95 = v92;
      }
      else {
        v95 = v93;
      }
      if ((unsigned int)v94 >= 0x17) {
        v100 = *v5;
        if ((v94 | 7) == 0x17) {
          v101 = 26;
        }
        else {
          v101 = (v94 | 7) + 1;
        }
        v96 = (char*)fw_memory_HeapManager_Allocate(v100, v101, 16, 0),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v148_.v149 = v94;
        v148_.v150 = (__int64)v96;
        v148_.v148 = v101 | 1;
      }
      else {
        v96 = (char*)&v148_.v148 + 1;
        LOBYTE(v148_.v148) = 2 * v94;
        if ((_DWORD)v94 == 0) {
        LABEL_123:
          v96[v94] = 0;
          v83 = v148_.v149;
          v84 = v148_.v150;
          v98 = v148_.v148 & 0xFFFFFFFFFFFF0000LL;
          v97 = (unsigned __int16)v148_.v148 & 0xFF00;
          v82 = (unsigned __int8)v148_.v148;
          if ((v116_.v116 & 1) != 0) {
          LABEL_124:
            if (v116_.v118 != 0) {
              v102 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v102 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v102, v116_.v118),
                  v71 = COERCE_AS(
                      __typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v81 = COERCE_AS(
                      __typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
        LABEL_128:
          v116_.v116 = v98 | v97 | v82;
          v116_.v117 = v83;
          v116_.v118 = v84;
          v5 = &fw_memory_g_heap_manager;
          v6 = v114;
          goto LABEL_129;
        }
      }
      memmove_alt1((__int64)v96, v95, v94),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_123;
    }
  LABEL_159:
    v111 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v111 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v5 + v111, v6),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v112 = (__int64*)a1[8];
  v113 = (__int64*)a1[9];
  if (v112 != v113) {
    GameRoutine_18d82a0(v112, v113, (2 * __clz(v113 - v112)) ^ 0x7E, 1),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

void game_18f26a0(__int64 a1, double a2, double a3, double a4, double a5,
                  double a6, float a7)
{

#pragma clang fp contract(off)
  __int64 v8;
  __int64 v9;
  __int64* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned int v17;
  unsigned __int64 v18;
  unsigned __int64 v20;
  unsigned __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64* v41;
  unsigned __int64 v42;
  const char* v43;
  const char* v44;
  __int64* v45;
  _BYTE* v46;
  __int64 v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  unsigned int v53;
  unsigned int v54;
  __int64* v55;
  char v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v64;
  unsigned __int64 v65;
  _QWORD* v66;
  _QWORD* v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v74;
  unsigned __int64 v75;
  _QWORD* v76;
  _QWORD* v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64* v85;
  unsigned __int64 v86;
  const char* v87;
  const char* v88;
  __int64* v89;
  _BYTE* v90;
  unsigned int v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  unsigned int v98;
  __int64 v99;
  float v100;
  float v101;
  float v102;
  float v103;
  unsigned int v104;
  unsigned int v105;
  float v106;
  __int64* v107;
  char v108;
  __int64 v109;
  __int64 v110;
  __int64* v111;
  float* v112;
  float v113;
  float v114;
  float v115;
  float v116;
  unsigned int v117;
  unsigned int v118;
  __int64* v119;
  __int64 v120;
  __int64 v121;
  float v122;
  __int64 v123;
  __int64* v124;
  __int64 v125;
  float v126;
  bool v127;
  float v128;
  _BOOL4 v129;
  float v130;
  char v131;
  __int64 v132;
  __int64* v133;
  __int64* v134;
  __int64 v135;
  __int64 v136;
  __int64* v137;
  __int64* v138;
  unsigned __int64 v139;
  int v140;

  v8 = *(_QWORD*)(a1 + 24);
  if (v8 != 0) {
    v9 = std___1___shared_weak_count_lock(v8);
    if (v9 != 0) {
      v10 = *(__int64**)(a1 + 16);
    }
    else {
      v10 = nullptr;
    }
  }
  else {
    v9 = 0;
    v10 = nullptr;
  }
  v11 = *(_DWORD*)(a1 + 8);
  if ((unsigned int)(v11 - 1) <= 1) {
    v139 = 0;
    v140 = 0;
    ui_LayoutAccessor_SetPaneTranslate(v10, "N_Top", (__int64)&v139);
    v11 = *(_DWORD*)(a1 + 8);
    if (v11 == 0) {
      goto LABEL_8;
    }
  LABEL_13:
    if (v11 != 1) {
    LABEL_9:
      if (v11 == 0) {
        goto LABEL_96;
      }
      goto LABEL_10;
    }
    goto LABEL_14;
  }
  if (v11 != 0) {
    goto LABEL_13;
  }
LABEL_8:
  ui_LayoutAccessor_SetPaneTranslate(v10, "N_Top", a1 + 88);
  v11 = *(_DWORD*)(a1 + 8);
  if (v11 != 1) {
    goto LABEL_9;
  }
LABEL_14:
  v12 = *(_QWORD*)(a1 + 24);
  if (v12 != 0) {
    v13 = std___1___shared_weak_count_lock(v12);
    if (v13 != 0) {
      v14 = *(__int64**)(a1 + 16);
    }
    else {
      v14 = nullptr;
    }
  }
  else {
    v13 = 0;
    v14 = nullptr;
  }
  if ((*(_BYTE*)(a1 + 624) & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 640);
  }
  else {
    v15 = a1 + 625;
  }
  v16 = game_HashString(v15);
  if (v16 == 0) {
    goto LABEL_48;
  }
  v18 = *(_QWORD*)(GameData_21c9f40 + 96);
  if (v18 == 0 || *(_QWORD*)(GameData_21c9f40 + 112) == 0) {
    goto LABEL_48;
  }
  v20 = v18 - 1;
  if ((v18 & (v18 - 1)) != 0) {
    v21 = v16;
    if (v16 >= v18) {
      v21 = v16 % v18;
    }
  }
  else {
    v21 = v20 & v16;
  }
  v22 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f40 + 88) + 8 * v21);
  if (v22 == nullptr || (v23 = (_QWORD*)*v22) == nullptr) {
  LABEL_48:
    v27 = game_HashString((__int64)"NoMap");
    if (v27 != 0) {
      v28 = *(_QWORD*)(GameData_21c9f40 + 96);
      if (v28 != 0 && *(_QWORD*)(GameData_21c9f40 + 112) != 0) {
        v30 = v28 - 1;
        if ((v28 & (v28 - 1)) != 0) {
          v31 = v27;
          if (v27 >= v28) {
            v31 = v27 % v28;
          }
        }
        else {
          v31 = v30 & v27;
        }
        v32 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f40 + 88) + 8 * v31);
        if (v32 != nullptr) {
          v33 = (_QWORD*)*v32;
          if (v33 != nullptr) {
            if ((v28 & v30) == 0) {
              while (1) {
                v35 = v33[1];
                if (v35 == v27) {
                  if (v33[2] == v27) {
                    goto LABEL_131;
                  }
                }
                else if ((v35 & v30) != v31) {
                  goto LABEL_72;
                }
                v33 = (_QWORD*)*v33;
                v26 = 0;
                if (v33 == nullptr) {
                  goto LABEL_73;
                }
              }
            }
            do {
              v34 = v33[1];
              if (v34 == v27) {
                if (v33[2] == v27) {
                LABEL_131:
                  v26 = v33[3];
                  goto LABEL_73;
                }
              }
              else {
                if (v34 >= v28) {
                  v34 %= v28;
                }
                if (v34 != v31) {
                  break;
                }
              }
              v33 = (_QWORD*)*v33;
            } while (v33 != nullptr);
          }
        }
      }
    }
  LABEL_72:
    v26 = 0;
    goto LABEL_73;
  }
  if ((v18 & v20) == 0) {
    while (1) {
      v25 = v23[1];
      if (v25 == v16) {
        if (v23[2] == v16) {
          goto LABEL_47;
        }
      }
      else if ((v25 & v20) != v21) {
        goto LABEL_48;
      }
      v23 = (_QWORD*)*v23;
      if (v23 == nullptr) {
        goto LABEL_48;
      }
    }
  }
  while (1) {
    v24 = v23[1];
    if (v24 == v16) {
      break;
    }
    if (v24 >= v18) {
      v24 %= v18;
    }
    if (v24 != v21) {
      goto LABEL_48;
    }
  LABEL_36:
    v23 = (_QWORD*)*v23;
    if (v23 == nullptr) {
      goto LABEL_48;
    }
  }
  if (v23[2] != v16) {
    goto LABEL_36;
  }
LABEL_47:
  v26 = v23[3];
  if (v26 == 0) {
    goto LABEL_48;
  }
LABEL_73:
  v133 = v14;
  v135 = v13;
  v137 = v10;
  v36 = v9;
  v37 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               64LL);
  if (v37 != 0 &&
      (v38 = *(unsigned __int16*)(v26 + 40), *(_WORD*)(v26 + 40) != 0)) {
    v39 = *(_QWORD*)(v26 + 48);
    v40 = *(unsigned __int16*)(v26 + 64);
    v41 = *(__int64**)(v26 + 72);
    v42 = 0;
    while (1) {
      v43 = *(const char**)(v39 + 8 * v42);
      if (v43 != nullptr) {
        v44 = (*(_BYTE*)(v37 + 64) & 1) != 0 ? *(const char**)(v37 + 80)
                                             : (const char*)(v37 + 65);
        if (v44 != nullptr && strcmp(v43, v44) == 0) {
          v45 = game_vstring_kEmpty_ptr[0];
          if (v42 < v40) {
            v45 = v41;
          }
          v46 = (_BYTE*)*v45;
          if (v46 != nullptr) {
            break;
          }
        }
      }
      ++v42;
      ++v41;
      if (v38 == v42) {
        goto LABEL_87;
      }
    }
  }
  else {
  LABEL_87:
    v46 = *(_BYTE**)(v26 + 56);
  }
  v10 = v137;
  v9 = v36;
  if (v46 == nullptr) {
    v47 = (__int64)v133;
    goto LABEL_92;
  }
  v47 = (__int64)v133;
  if (*v46 == 0) {
  LABEL_92:
    v56 = 0;
    goto LABEL_93;
  }
  v48 = *(float*)(v26 + 92);
  LOWORD(v17) = *(_WORD*)(a1 + 34);
  v49 = (float)(*(float*)(v26 + 100) * v48) * *(float*)(a1 + 12);
  v50 = *(float*)(a1 + 68);
  v51 = v48 * *(float*)(a1 + 64);
  v52 = v48 * v50;
  LOWORD(v50) = *(_WORD*)(a1 + 32);
  *(float*)&v53 =
      (float)(v49 * (float)(*(float*)(v26 + 104) * (float)LODWORD(v50))) / v51;
  *(float*)&v54 =
      (float)(v49 * (float)(*(float*)(v26 + 108) * (float)v17)) / v52;
  v55 = LayoutAccessor_155fbe0(v133, "L_MapImage");
  v139 = __PAIR64__(v54, v53);
  ui_LayoutAccessor_SetPaneScale((__int64)v55, "Img_", &v139);
  v56 = 1;
LABEL_93:
  ui_LayoutAccessor_SetPaneVisible(v47, (__int64)"L_MapImage", v56);
  if (v135 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v135 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) != 0) {
    v11 = *(_DWORD*)(a1 + 8);
    if (v11 == 0) {
      goto LABEL_96;
    }
  LABEL_10:
    if (v11 == 2) {
      goto LABEL_181;
    }
    goto LABEL_189;
  }
  (*(void (**)(__int64))(*(_QWORD*)v135 + 16LL))(v135);
  std___1___shared_weak_count___release_weak_alt1(v135);
  v11 = *(_DWORD*)(a1 + 8);
  if (v11 != 0) {
    goto LABEL_10;
  }
LABEL_96:
  v57 = *(_QWORD*)(a1 + 24);
  v132 = v9;
  if (v57 != 0) {
    v58 = std___1___shared_weak_count_lock(v57);
    v59 = *(__int64**)(a1 + 16);
    if (v58 == 0) {
      v59 = nullptr;
    }
    v134 = v59;
    v136 = v58;
  }
  else {
    v134 = nullptr;
    v136 = 0;
  }
  if ((*(_BYTE*)(a1 + 624) & 1) != 0) {
    v60 = *(_QWORD*)(a1 + 640);
  }
  else {
    v60 = a1 + 625;
  }
  v61 = game_HashString(v60);
  if (v61 == 0) {
    goto LABEL_133;
  }
  v62 = *(_QWORD*)(GameData_21c9f40 + 96);
  if (v62 == 0 || *(_QWORD*)(GameData_21c9f40 + 112) == 0) {
    goto LABEL_133;
  }
  v64 = v62 - 1;
  if ((v62 & (v62 - 1)) != 0) {
    v65 = v61;
    if (v61 >= v62) {
      v65 = v61 % v62;
    }
  }
  else {
    v65 = v64 & v61;
  }
  v66 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f40 + 88) + 8 * v65);
  if (v66 == nullptr || (v67 = (_QWORD*)*v66) == nullptr) {
  LABEL_133:
    v71 = game_HashString((__int64)"NoMap");
    if (v71 != 0) {
      v72 = *(_QWORD*)(GameData_21c9f40 + 96);
      if (v72 != 0 && *(_QWORD*)(GameData_21c9f40 + 112) != 0) {
        v74 = v72 - 1;
        if ((v72 & (v72 - 1)) != 0) {
          v75 = v71;
          if (v71 >= v72) {
            v75 = v71 % v72;
          }
        }
        else {
          v75 = v74 & v71;
        }
        v76 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f40 + 88) + 8 * v75);
        if (v76 != nullptr) {
          v77 = (_QWORD*)*v76;
          if (v77 != nullptr) {
            if ((v72 & v74) == 0) {
              while (1) {
                v79 = v77[1];
                if (v79 == v71) {
                  if (v77[2] == v71) {
                    goto LABEL_209;
                  }
                }
                else if ((v79 & v74) != v75) {
                  goto LABEL_157;
                }
                v77 = (_QWORD*)*v77;
                v70 = 0;
                if (v77 == nullptr) {
                  goto LABEL_158;
                }
              }
            }
            do {
              v78 = v77[1];
              if (v78 == v71) {
                if (v77[2] == v71) {
                LABEL_209:
                  v70 = v77[3];
                  goto LABEL_158;
                }
              }
              else {
                if (v78 >= v72) {
                  v78 %= v72;
                }
                if (v78 != v75) {
                  break;
                }
              }
              v77 = (_QWORD*)*v77;
            } while (v77 != nullptr);
          }
        }
      }
    }
  LABEL_157:
    v70 = 0;
    goto LABEL_158;
  }
  if ((v62 & v64) == 0) {
    while (1) {
      v69 = v67[1];
      if (v69 == v61) {
        if (v67[2] == v61) {
          goto LABEL_132;
        }
      }
      else if ((v69 & v64) != v65) {
        goto LABEL_133;
      }
      v67 = (_QWORD*)*v67;
      if (v67 == nullptr) {
        goto LABEL_133;
      }
    }
  }
  while (2) {
    v68 = v67[1];
    if (v68 != v61) {
      if (v68 >= v62) {
        v68 %= v62;
      }
      if (v68 != v65) {
        goto LABEL_133;
      }
    }
    else if (v67[2] == v61) {
      break;
    }
    v67 = (_QWORD*)*v67;
    if (v67 == nullptr) {
      goto LABEL_133;
    }
    continue;
  }
LABEL_132:
  v70 = v67[3];
  if (v70 == 0) {
    goto LABEL_133;
  }
LABEL_158:
  v138 = v10;
  v80 = *(_QWORD*)(a1 + 672);
  v81 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               64LL);
  if (v81 != 0 &&
      (v82 = *(unsigned __int16*)(v80 + 40), *(_WORD*)(v80 + 40) != 0)) {
    v83 = *(_QWORD*)(v80 + 48);
    v84 = *(unsigned __int16*)(v80 + 64);
    v85 = *(__int64**)(v80 + 72);
    v86 = 0;
    while (1) {
      v87 = *(const char**)(v83 + 8 * v86);
      if (v87 != nullptr) {
        v88 = (*(_BYTE*)(v81 + 64) & 1) != 0 ? *(const char**)(v81 + 80)
                                             : (const char*)(v81 + 65);
        if (v88 != nullptr && strcmp(v87, v88) == 0) {
          v89 = game_vstring_kEmpty_ptr[0];
          if (v86 < v84) {
            v89 = v85;
          }
          v90 = (_BYTE*)*v89;
          if (v90 != nullptr) {
            break;
          }
        }
      }
      ++v86;
      ++v85;
      if (v82 == v86) {
        goto LABEL_172;
      }
    }
  }
  else {
  LABEL_172:
    v90 = *(_BYTE**)(v80 + 56);
  }
  v10 = v138;
  if (v90 != nullptr && *v90 != 0) {
    v91 = *(unsigned __int16*)(a1 + 32);
    v92 = *(float*)(v70 + 96);
    v93 = *(float*)(v70 + 88);
    v94 = vcvts_n_f32_u32(v91, 1u);
    v95 = *(float*)(v80 + 112);
    v96 = *(float*)(v80 + 116);
    v97 = (float)v91;
    v98 = *(unsigned __int16*)(a1 + 34);
    v99 = (__int64)v134;
    v140 = 0;
    v100 = v94 - v95;
    v101 = *(float*)(v80 + 104);
    v102 = *(float*)(v80 + 108);
    v103 = (float)(v92 * v93) * *(float*)(a1 + 12);
    *(float*)&v104 = (float)(v103 * (float)(v101 * v97)) / *(float*)(a1 + 80);
    *(float*)&v105 =
        (float)(v103 * (float)(v102 * (float)v98)) / *(float*)(a1 + 84);
    v106 =
        v103 * (float)(*(float*)(a1 + 128) -
                       (float)(v102 * (float)(vcvts_n_f32_u32(v98, 1u) - v96)));
    *(float*)&v139 =
        -(float)(v103 * (float)(*(float*)(a1 + 124) - (float)(v101 * v100)));
    *((float*)&v139 + 1) = v106;
    ui_LayoutAccessor_SetPaneTranslate(v134, "L_MapImage", (__int64)&v139);
    v107 = LayoutAccessor_155fbe0(v134, "L_MapImage");
    v139 = __PAIR64__(v105, v104);
    ui_LayoutAccessor_SetPaneScale((__int64)v107, "Img_", &v139);
    v108 = 1;
  }
  else {
    v99 = (__int64)v134;
    v108 = 0;
  }
  ui_LayoutAccessor_SetPaneVisible(v99, (__int64)"L_MapImage", v108);
  v9 = v132;
  if (v136 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v136 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v136 + 16LL))(v136);
    std___1___shared_weak_count___release_weak_alt1(v136);
  }
  if (*(_DWORD*)(a1 + 8) == 2) {
  LABEL_181:
    v109 = *(_QWORD*)(a1 + 24);
    if (v109 != 0) {
      v110 = std___1___shared_weak_count_lock(v109);
      if (v110 != 0) {
        v111 = *(__int64**)(a1 + 16);
      }
      else {
        v111 = nullptr;
      }
    }
    else {
      v111 = nullptr;
      v110 = 0;
    }
    v112 = *(float**)(a1 + 672);
    LOWORD(a7) = *(_WORD*)(a1 + 34);
    v113 = v112[23];
    v114 = v112[25] * *(float*)(a1 + 12);
    v115 = *(float*)(a1 + 64) * v113;
    v116 = *(float*)(a1 + 68) * v113;
    LOWORD(v113) = *(_WORD*)(a1 + 32);
    *(float*)&v117 =
        (float)(v114 * (float)(v112[26] * (float)LODWORD(v113))) / v115;
    *(float*)&v118 =
        (float)(v114 * (float)(v112[27] * (float)LODWORD(a7))) / v116;
    v119 = LayoutAccessor_155fbe0(v111, "L_MapImage");
    v139 = __PAIR64__(v118, v117);
    ui_LayoutAccessor_SetPaneScale((__int64)v119, "Img_", &v139);
    ui_LayoutAccessor_SetPaneVisible((__int64)v111, (__int64)"L_MapImage", 1);
    if (v110 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v110 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v110 + 16LL))(v110);
      std___1___shared_weak_count___release_weak_alt1(v110);
    }
  }
LABEL_189:
  v120 = ui_LayoutAccessor_FindPane(v10, (__int64)"N_RotCenter");
  v121 = v120;
  if (*(_DWORD*)(a1 + 8) == 0) {
    if (v120 == 0) {
      goto LABEL_204;
    }
    v123 = *(_QWORD*)GameData_212dc38[0];
    v124 = game_8224a0(0x1Fu);
    if (game_GameModeData_instance_ != 0 &&
        (v125 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)v124)) != 0 &&
        *(_DWORD*)(v125 + 32) == 1) {
      v126 = *(float*)(v123 + 100);
      v127 = v126 <= 0x1.6800000000000p+8f;
      v128 = 0x1.6800000000000p+8f - v126;
      v129 = !v127;
    }
    else {
      v122 = *(float*)(*(_QWORD*)(a1 + 672) + 120LL);
      if (v122 == 0x0.0p+0f) {
        v130 = 0x0.0p+0f;
      LABEL_203:
        v131 = *(_BYTE*)(v121 + 88);
        *(_QWORD*)(v121 + 60) = 0;
        *(float*)(v121 + 68) = v130;
        *(_BYTE*)(v121 + 88) = v131 | 0x10;
        goto LABEL_204;
      }
    LABEL_200:
      v128 = 0x1.6800000000000p+8f - v122;
      v129 = v128 < 0x0.0p+0f;
    }
    v130 = fmodf(v128, 0x1.6800000000000p+8f);
    if (v129) {
      v130 = v130 + 0x1.6800000000000p+8f;
    }
    goto LABEL_203;
  }
  if (v120 != 0) {
    v122 = *(float*)(*(_QWORD*)(a1 + 672) + 120LL);
    goto LABEL_200;
  }
LABEL_204:
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt1(v9);
  }
}

float32x2_t* game_19132c0(float32x2_t* result, __int64* a2, __int64 a3,
                          __int64 a4, __int64 a5)
{
  float32x2_t* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  void* v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float* v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float* v38;
  float v39;
  float v40;
  unsigned int v41;
  unsigned int v42;
  unsigned __int64 v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  unsigned __int64 v52;
  float32x4_t v53;
  unsigned int v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  int8x16_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  int8x16_t v64;
  float32x4_t v65;
  float32x4_t v66;
  int8x16_t v67;
  float32x4_t v68;
  float32x4_t v69;
  int8x16_t v70;
  int8x16_t v71;
  int8x16_t v72;
  unsigned __int64 v73;
  float32x2_t** v74;
  __int64 v75;
  float v76;
  float v77;
  float v78;
  float v79;
  __int64 v80;
  float v81;
  float v82;
  float v83;
  float v84;
  unsigned int v85;
  unsigned int v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  __int64 v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float* v99;
  __int64 v100;
  __int64 v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float* v109;
  float v110;
  float v111;
  float v112;
  float v113;
  unsigned __int64 v114;
  __int64 v115;
  __int128 v116;
  int v117;
  unsigned __int32 v118;
  int v119;
  bool v120;
  int v121;
  float v122;
  __int128 v123;
  int v124;
  unsigned __int32 v125;
  int v126;
  int v127;
  __int128 v128;
  float v129;
  __int64 v130;
  float32x2_t* v131;
  float32x2_t* v132;
  unsigned __int64 v133;
  __int64 v134;
  float v135;
  float v136;
  __int128 v137;
  float v138;
  __int128 v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  __int128 v145;
  float v146;
  __int128 v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float32x2_t* v152;
  float32x2_t* v153;
  unsigned __int64 v154;
  unsigned __int64 v155;
  __int64 v156;
  unsigned __int64 v157;
  __int64 v158;
  char v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  signed __int64 v165;
  __int64 v166;
  unsigned __int64 v167;
  unsigned __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  const char** v174;
  unsigned __int64 v175;
  unsigned __int64 v176;
  unsigned __int64 v177;
  unsigned __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  _QWORD* v182;
  unsigned __int64 v183;
  float v184;
  float v185;
  float v186;
  float v187;
  unsigned __int64 v188;
  float v189;
  float v190;
  float v191;
  float v192;
  unsigned __int64 v193;
  float v194;
  float v195;
  float v196;
  float v197;
  unsigned __int64 v198;
  float v199;
  __int64 v200;
  unsigned __int64 v201;
  __int64 v202;
  unsigned __int64 v203;
  __int64 v204;
  __int64 v205;
  unsigned __int64 v206;
  unsigned __int64 v207;
  unsigned __int64 v208;
  unsigned __int64 v209;
  __int64 v210;
  const char** v211;
  unsigned __int64 v212;
  unsigned __int64 v213;
  unsigned __int64 v214;
  unsigned __int64 v215;
  unsigned __int64 v216;
  unsigned int v217;
  int v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  _QWORD* v222;
  unsigned __int64 v223;
  float v224;
  float v225;
  float v226;
  float v227;
  unsigned __int64 v228;
  float v229;
  float v230;
  float v231;
  float v232;
  unsigned __int64 v233;
  float v234;
  float v235;
  float v236;
  float v237;
  unsigned __int64 v238;
  float v239;
  __int64 v240;
  __int64 v241;
  unsigned __int64 v242;
  __int64 v243;
  unsigned __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  float32x2_t* v249;
  __int64 v250;
  __int64 v251;
  unsigned __int64 v252;
  unsigned __int64 v253;
  unsigned __int64 v254;
  float32x2_t* v255;
  unsigned __int64 v256;
  unsigned int v257;
  int v258;
  __int64 v259;
  __int64 v260;
  float32x2_t* v261;
  __int64 v262;
  _QWORD* v263;
  __int64 v264;
  unsigned __int64 v265;
  __int64 v266;
  unsigned __int64 v267;
  unsigned __int64 v268;
  unsigned __int64 v269;
  int v270;
  unsigned __int64 v271;
  __int64 v272;
  unsigned __int64 v273;
  unsigned __int64 v274;
  unsigned __int64 v275;
  unsigned __int64 v276;
  unsigned int v277;
  int v278;
  __int64 v279;
  const char** v280;
  unsigned __int64 v281;
  unsigned __int64 v282;
  __int64 v283;
  unsigned __int64 v284;
  unsigned __int64 v285;
  __int64 v286;
  unsigned __int64 v287;
  __int16 v288;
  int v289;
  unsigned __int64 v290;
  __int64 v291;
  __int64 v292;
  __int64 v293;
  unsigned __int64 v294;
  unsigned __int64 v295;
  __int64 v296;
  __int64 v297;
  float32x2_t* v298;
  __int64 v299;
  __int64 v300;
  unsigned __int64 v301;
  unsigned __int64 v302;
  unsigned __int64 v303;
  float32x2_t* v304;
  unsigned __int64 v305;
  unsigned int v306;
  int v307;
  __int64 v308;
  float32x2_t* v309;
  __int64 v310;
  _QWORD* v311;
  __int64 v312;
  unsigned __int64 v313;
  __int64 v314;
  unsigned __int64 v315;
  unsigned __int64 v316;
  unsigned __int64 v317;
  int v318;
  unsigned __int64 v319;
  __int64 v320;
  unsigned __int64 v321;
  unsigned __int64 v322;
  unsigned __int64 v323;
  unsigned __int64 v324;
  unsigned int v325;
  int v326;
  __int64 v327;
  __int64 v328;
  __int64 v329;
  __int64 v330;
  unsigned __int64 v331;
  unsigned __int64 v332;
  __int64 v333;
  unsigned __int64 v334;
  __int64 v335;
  __int64 v336;
  const char* v337;
  unsigned __int64 v338;
  int v339;
  unsigned __int64 v340;
  __int64 v341;
  int v342;
  int v343;
  bool v344;
  int v345;
  _QWORD* v346;
  _QWORD* v347;
  unsigned __int8* v348;
  unsigned __int64 v349;
  unsigned __int64 v350;
  __int64 v351;
  char* v352;
  float32x2_t* v353;
  unsigned __int64 v354;
  __int64 v355;
  unsigned __int64 v356;
  __int64 v357;
  _QWORD* v358;
  _QWORD* v359;
  int v360;
  float* v361;
  bool v362;
  int v363;
  __int64 v364;
  __int64 v365;
  __int64 v366;
  __int64 v367;
  __int64 v368;
  unsigned __int64 v369;
  unsigned __int64 v370;
  __int64 v371;
  unsigned __int64 v372;
  __int64* v373;
  unsigned __int8* v374;
  unsigned __int8* v375;
  int v376;
  __int64 v377;
  unsigned __int64 v378;
  __int64 v379;
  unsigned __int64 v380;
  unsigned __int64 v381;
  int v382;
  unsigned __int64 v383;
  unsigned __int64 v384;
  __int64 v385;
  unsigned __int64 v386;
  unsigned __int64 v387;
  __int64 v388;
  unsigned __int64 v389;
  unsigned __int64 v390;
  __int64 v391;
  __int64 v392;
  __int64 v393;
  unsigned __int64 v394;
  int v395;
  __int64 v396;
  __int64 v397;
  __int64 v398;
  int v399;
  int v400;
  unsigned int v401;
  int v402;
  __int64 v403;
  __int64 v404;
  __int64 v405;
  void (**v406)(__int64, __int64);
  unsigned int v407;
  unsigned int v408;
  __int64* v409;
  __int64 v410;
  __int64 v411;
  __int64 v412;
  __int64 v413;
  __int64 v414;
  unsigned int v415;
  unsigned __int64 v416;
  __int64 v417;
  unsigned __int64 v418;
  __int64 v419;
  __int64 v420;
  __int64 v421;
  void (**v422)(__int64, __int64, __int64, __int64, __int64);
  float v423;
  int v424;
  unsigned __int64 v425;
  unsigned int v426;
  __int64* v427;
  unsigned int v428;
  unsigned int v429;
  __int64 v430;
  __int64 v431;
  __int64 v432;
  __int64 v433;
  __int64 v434;
  __int64 v435;
  unsigned int v436;
  __int64 v437;
  __int64 v438;
  unsigned int v439;
  __int64 v440;
  __int64 v441;
  __int64 v442;
  __int64 v443;
  __int64 v444;
  __int64 v445;
  unsigned int v446;
  __int64 v447;
  unsigned int v448;
  __int64 v449;
  __int64 v450;
  __int64 v451;
  __int64 v452;
  __int64 v453;
  __int64 v454;
  unsigned int v455;
  __int64 v456;
  __int64 v457;
  unsigned int v458;
  __int64* v459;
  unsigned int v460;
  __int64 v461;
  __int64 v462;
  __int64 v463;
  __int64 v464;
  __int64 v465;
  __int64 v466;
  unsigned int v467;
  __int64 v468;
  unsigned __int64 v469;
  __int64 v470;
  __int64 v471;
  _QWORD* v472;
  _BYTE* v473;
  _BYTE* v474;
  char** v475;
  __int64 v476;
  __int64 v477;
  __int64 v478;
  __int64 v479;
  __int64 v480;
  __int64 v481;
  __int64 v482;
  __int64 v483;
  _QWORD* v484;
  __int64 v485;
  float32x2_t* v486;
  __int64 v487;
  __int64 v489;
  __int64 v490;
  int v491;
  int v492;
  float v493;
  float v494;
  float v495;
  float v496;
  __int64* v497;
  unsigned __int8* v498;
  float v499;
  __int64 v500;
  float v501;
  float v502;
  float v503;
  float v504;
  float v505;
  float v506;
  __int64 v507;
  int v508;
  const char* v510;
  struct {
    _BYTE v511[32];
    _BYTE* v512;
  } v511_;
  struct {
    _BYTE v513[32];
    _BYTE* v514;
  } v513_;
  struct {
    _BYTE v515[32];
    _BYTE* v516;
  } v515_;
  struct {
    float32x2_t* v517;
    unsigned __int64 v518;
  } v517_;
  struct {
    _QWORD v519[4];
    _QWORD* v520;
  } v519_;
  struct {
    _BYTE v521[32];
    _BYTE* v522;
  } v521_;
  struct {
    float32x2_t* v523;
    float32x2_t* v524;
    float32x2_t* v525;
    float32x2_t* v526;
    float32x2_t* v527;
    float32x2_t* v528;
    float32x2_t* v529;
    float32x2_t* v530;
  } v523_;
  struct {
    int v531[8];
    int* v532;
  } v531_;
  struct {
    __int64* v533[4];
    __int64** v534;
    char gap936_[32];
    float32x2_t* v535;
  } v533_;
  float32x4x4_t v536;

  v412 = COERCE_AS(__typeof__(v412),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v415 = COERCE_AS(__typeof__(v415),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v432 = COERCE_AS(__typeof__(v432),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v436 = COERCE_AS(__typeof__(v436),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v442 = COERCE_AS(__typeof__(v442),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v446 = COERCE_AS(__typeof__(v446),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v451 = COERCE_AS(__typeof__(v451),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v455 = COERCE_AS(__typeof__(v455),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v458 = COERCE_AS(__typeof__(v458),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v463 = COERCE_AS(__typeof__(v463),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v467 = COERCE_AS(__typeof__(v467),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v484 = COERCE_AS(__typeof__(v484),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (LANES64(result[130]).n64_u8[1] != 1) {
    return result;
  }
  v5 = result;
  if ((LANES64(result[130]).n64_u8[3] & 1) == 0 ||
      *(_DWORD*)LANES64(result[1]).n64_u64[0] != 0) {
    return result;
  }
  v6 = LANES64(result[16]).n64_u64[0];
  v7 = LANES64(result[17]).n64_u64[0];
  v533_.v535 = result;
  if (v6 != v7) {
    v8 = a3;
    v9 = a5;
    v10 = 0;
    do {
      v12 = *(__int64**)v6;
      if (*(_BYTE*)(*(_QWORD*)v6 + 120LL) == 1) {
        v13 = *v12;
        nn_os_AcquireReadLock(*v12 + 696),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v14 = *(_DWORD*)(v13 + 656);
        result = (float32x2_t*)nn_os_ReleaseReadLock(v13 + 696),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((v14 & 8) != 0) {
          result = (float32x2_t*)GameRoutine_5fc1f0(*(_QWORD*)(*v12 + 592)),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v12[1] = (__int64)result;
          v15 = *(_QWORD*)(*(_QWORD*)LANES64(result[5]).n64_u64[0] + 144LL);
          *((_WORD*)v12 + 60) = 256;
          v12[11] = v15;
        }
      }
      v11 = *(__int64**)v6;
      v6 += 8LL;
      v10 |= *((_BYTE*)v11 + 121) ^ 1;
    } while (v6 != v7);
    a5 = v9;
    v5 = v533_.v535;
    a3 = v8;
    if ((v10 & 1) != 0) {
      return result;
    }
  }
  result = *(float32x2_t**)(a5 + 32);
  v16 = a5;
  v17 = a3;
  if (result != nullptr) {
    v523_.v523 = v5;
    result = (float32x2_t*)(*(__int64 (**)(float32x2_t*, float32x2_t**))(
        LANES64(*(result)).n64_u64[0] + 48))(result, &v523_.v523),
    v412 = COERCE_AS(__typeof__(v412),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v415 = COERCE_AS(__typeof__(v415),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v432 = COERCE_AS(__typeof__(v432),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v436 = COERCE_AS(__typeof__(v436),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v442 = COERCE_AS(__typeof__(v442),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v446 = COERCE_AS(__typeof__(v446),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v451 = COERCE_AS(__typeof__(v451),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v455 = COERCE_AS(__typeof__(v455),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v458 = COERCE_AS(__typeof__(v458),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v463 = COERCE_AS(__typeof__(v463),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v467 = COERCE_AS(__typeof__(v467),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v484 = COERCE_AS(__typeof__(v484),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  LANES64(v5[106]).n64_u64[0] ^= 1u;
  v18 = GameData_212e3b0[0];
  if (LANES64(v5[130]).n64_u8[4] == 1) {
    v19 = *a2;
    SpineModel_19160e0((__int64)v5, (float32x2_t*)LANES64(v5[170]).n64_u64),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v20 = LANES64(v5[171]).n64_u64[0];
    if (v20 != 0) {
      v21 = LANES64(v5[173]).n64_u64[0];
      v22 = LANES64(v5[171]).n64_u64[0] & 3;
      if (v20 >= 4) {
        v28 = (float*)(v21 + 64);
        v29 = 0;
        v24 = 0x1.fffffe0000000p+127f;
        v30 = -(__int64)(v20 & 0xFFFFFFFFFFFFFFFCLL);
        v25 = -0x1.fffffe0000000p+127f;
        v26 = 0x1.fffffe0000000p+127f;
        v27 = -0x1.fffffe0000000p+127f;
        do {
          v31 = *(v28 - 16);
          v32 = *(v28 - 15);
          v29 -= 4;
          if (v26 >= v31) {
            v26 = *(v28 - 16);
          }
          if (v24 >= v32) {
            v24 = *(v28 - 15);
          }
          if (v31 >= v27) {
            v27 = *(v28 - 16);
          }
          if (v32 >= v25) {
            v25 = *(v28 - 15);
          }
          v33 = *(v28 - 8);
          v34 = *(v28 - 7);
          if (v26 >= v33) {
            v26 = *(v28 - 8);
          }
          if (v24 >= v34) {
            v24 = *(v28 - 7);
          }
          if (v33 >= v27) {
            v27 = *(v28 - 8);
          }
          if (v34 >= v25) {
            v25 = *(v28 - 7);
          }
          v35 = v28[1];
          if (v26 >= *v28) {
            v26 = *v28;
          }
          if (v24 >= v35) {
            v24 = v28[1];
          }
          if (*v28 >= v27) {
            v27 = *v28;
          }
          if (v35 >= v25) {
            v25 = v28[1];
          }
          v36 = v28[8];
          v37 = v28[9];
          v28 += 32;
          if (v26 >= v36) {
            v26 = v36;
          }
          if (v24 >= v37) {
            v24 = v37;
          }
          if (v36 >= v27) {
            v27 = v36;
          }
          if (v37 >= v25) {
            v25 = v37;
          }
        } while (v30 != v29);
        v23 = -v29;
      }
      else {
        v23 = 0;
        v24 = 0x1.fffffe0000000p+127f;
        v25 = -0x1.fffffe0000000p+127f;
        v26 = 0x1.fffffe0000000p+127f;
        v27 = -0x1.fffffe0000000p+127f;
      }
      if (v22 != 0) {
        v38 = (float*)(v21 + 32 * v23 + 4);
        do {
          v39 = *(v38 - 1);
          v40 = *v38;
          v38 += 8;
          if (v26 >= v39) {
            v26 = v39;
          }
          if (v24 >= v40) {
            v24 = v40;
          }
          if (v39 >= v27) {
            v27 = v39;
          }
          if (v40 >= v25) {
            v25 = v40;
          }
          --v22;
        } while (v22 != 0);
      }
    }
    else {
      v27 = -0x1.fffffe0000000p+127f;
      v26 = 0x1.fffffe0000000p+127f;
      v25 = -0x1.fffffe0000000p+127f;
      v24 = 0x1.fffffe0000000p+127f;
    }
    *(float*)&v41 = v27 - v26;
    *(float*)&v42 = v25 - v24;
    v43 = LANES64_OF(
              vmul_f32(v5[109], COERCE_AS(float32x2_t, __PAIR64__(v42, v41))))
              .n64_u64[0];
    v44 = *((float*)&v43 + 1);
    v45 = v26 - *(float*)&v43;
    v501 = *(float*)&v43;
    v46 = *(float*)&v41 + v45;
    *(float*)&v43 = v24 - *((float*)&v43 + 1);
    v47 = v46 - v45;
    v48 = v45 + v46;
    v49 = 0x1.0000000000000p+0f / v47;
    v50 = *(float*)&v43 + (float)(*(float*)&v42 + *(float*)&v43);
    v51 = 0x1.0000000000000p+0f /
          (float)((float)(*(float*)&v42 + *(float*)&v43) - *(float*)&v43);
    LODWORD(v52) = 0;
    LANES128(v53).n128_f32[0] = -(float)(PSEUDO_UNFUSED(v48 * v49));
    *(float*)&v54 = v49 + v49;
    *((float*)&v52 + 1) = v51 + v51;
    LANES128(v53).n128_f32[1] = -(float)(v50 * v51);
    LANES128(v53).n128_u32[2] = 0x80000000;
    LANES128(v55).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1120403456LL),
                             COERCE_AS(float32x2_t, 1120403456LL)))
            .n64_u64[0];
    LANES128(v53).n128_u32[3] =
        COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
    LANES128(v55).n128_u64[1] = LANES128(v55).n128_u64[0];
    v56 = vrsqrteq_f32(v55);
    v57 = vmulq_f32(v56, vrsqrtsq_f32(v56, vmulq_f32(v55, v56)));
    v58 = vbicq_s8(
        vmulq_f32(vmulq_f32(v57, vrsqrtsq_f32(v57, vmulq_f32(v55, v57))),
                  COERCE_AS(float32x4_t, GameData_1a831e0)),
        vceqzq_f32(v55));
    LANES128(v59).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v59).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                  COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v60).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v60).n128_i8[8] =
        vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v61).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                  COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v62).n128_i8[8] =
        vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v63 = vmlsq_f32(vmulq_f32(v59, v60), v62, v61);
    v64 = vmulq_f32(v63, v63);
    LANES128(v64).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v64, v64, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
            .n64_u64[0];
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
            .n64_u64[0];
    LANES128(v64).n128_u64[1] = LANES128(v64).n128_u64[0];
    v65 = vrsqrteq_f32(v64);
    v66 = vmulq_f32(v65, vrsqrtsq_f32(v65, vmulq_f32(v64, v65)));
    v67 = vbicq_s8(
        vmulq_f32(v63, vmulq_f32(v66, vrsqrtsq_f32(v66, vmulq_f32(v64, v66)))),
        vceqzq_f32(v64));
    LANES128(v68).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v68).n128_i8[8] =
        vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    *(int8x8_t*)&LANES128(v57).n128_i8[8] =
        vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v69 = vmlsq_f32(vmulq_f32(v62, v68), v57, v60);
    v70 = vmulq_f32(v67, COERCE_AS(float32x4_t, GameData_1a829b0));
    LANES128(v70).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v70, v70, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0])))
            .n64_u64[0];
    v71 = vmulq_f32(v69, COERCE_AS(float32x4_t, GameData_1a829b0));
    v72 = vmulq_f32(v58, COERCE_AS(float32x4_t, GameData_1a829b0));
    LANES128(v71).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v71, v71, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
            .n64_u64[0];
    LANES128(v72).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v72, v72, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0])))
            .n64_u64[0];
    v536.val[0] = vmlaq_n_f32(
        vmlaq_n_f32(
            vmulq_n_f32(COERCE_AS(float32x4_t, v54), LANES128(v67).n128_f32[0]),
            COERCE_AS(float32x4_t, v52), LANES128(v69).n128_f32[0]),
        COERCE_AS(float32x4_t, GameData_1a83330), LANES128(v58).n128_f32[0]);
    v536.val[1] = vmlaq_lane_f32(
        vmlaq_lane_f32(
            vmulq_lane_f32(COERCE_AS(float32x4_t, v54),
                           COERCE_AS(float32x2_t, LANES128(v67).n128_u64[0]),
                           1),
            COERCE_AS(float32x4_t, v52),
            COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83330),
        COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0]), 1);
    v536.val[2] = vmlaq_laneq_f32(
        vmlaq_laneq_f32(vmulq_laneq_f32(COERCE_AS(float32x4_t, v54), v67, 2),
                        COERCE_AS(float32x4_t, v52), v69, 2),
        COERCE_AS(float32x4_t, GameData_1a83330), v58, 2);
    v536.val[3] = vaddq_f32(
        v53,
        vmlaq_lane_f32(
            vmlaq_lane_f32(
                vmulq_lane_f32(
                    COERCE_AS(float32x4_t, v54),
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0])),
                    1),
                COERCE_AS(float32x4_t, v52),
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])),
                1),
            COERCE_AS(float32x4_t, GameData_1a83330),
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0])),
            1));
    vst4q_f32((float*)&v523_.v523, v536);
    v73 = LANES64(v5[LANES64(v5[106]).n64_u64[0] + 47]).n64_u64[0];
    v74 = (float32x2_t**)(*(__int64 (**)(unsigned __int64))(*(_QWORD*)v73 +
                                                            56LL))(v73),
    v412 = COERCE_AS(__typeof__(v412),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v415 = COERCE_AS(__typeof__(v415),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v432 = COERCE_AS(__typeof__(v432),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v436 = COERCE_AS(__typeof__(v436),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v442 = COERCE_AS(__typeof__(v442),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v446 = COERCE_AS(__typeof__(v446),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v451 = COERCE_AS(__typeof__(v451),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v455 = COERCE_AS(__typeof__(v455),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v458 = COERCE_AS(__typeof__(v458),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v463 = COERCE_AS(__typeof__(v463),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v467 = COERCE_AS(__typeof__(v467),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v484 = COERCE_AS(__typeof__(v484),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v74[4] = v523_.v527;
    v74[5] = v523_.v528;
    v74[6] = v523_.v529;
    v74[7] = v523_.v530;
    *v74 = v523_.v523;
    v74[1] = v523_.v524;
    v74[2] = v523_.v525;
    v74[3] = v523_.v526;
    (*(void (**)(__int64, _QWORD, _QWORD, unsigned __int64, unsigned __int64))
         v18)(v19 + 8, 0, 0,
              LANES64(v5[2 * LANES64(v5[106]).n64_u64[0] + 49]).n64_u64[0],
              LANES64(v5[2 * LANES64(v5[106]).n64_u64[0] + 50]).n64_u64[0]),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v75 = (*(__int64 (**)(unsigned __int64))(
        *(_QWORD*)LANES64(v5[32]).n64_u64[0] + 56LL))(
        LANES64(v5[32]).n64_u64[0]),
    v412 = COERCE_AS(__typeof__(v412),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v415 = COERCE_AS(__typeof__(v415),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v432 = COERCE_AS(__typeof__(v432),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v436 = COERCE_AS(__typeof__(v436),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v442 = COERCE_AS(__typeof__(v442),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v446 = COERCE_AS(__typeof__(v446),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v451 = COERCE_AS(__typeof__(v451),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v455 = COERCE_AS(__typeof__(v455),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v458 = COERCE_AS(__typeof__(v458),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v463 = COERCE_AS(__typeof__(v463),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v467 = COERCE_AS(__typeof__(v467),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v484 = COERCE_AS(__typeof__(v484),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (LANES64(v5[171]).n64_u64[0] == 0) {
      goto LABEL_444;
    }
    *(float*)v75 = *(float*)LANES64(v5[173]).n64_u64[0] - v501;
    if (LANES64(v5[171]).n64_u64[0] == 0) {
      goto LABEL_444;
    }
    v76 = *(float*)(LANES64(v5[173]).n64_u64[0] + 4);
    *(_QWORD*)(v75 + 8) = 1065353216;
    *(float*)(v75 + 4) = v76 - v44;
    if (LANES64(v5[171]).n64_u64[0] < 2) {
      goto LABEL_444;
    }
    *(float*)(v75 + 32) = *(float*)(LANES64(v5[173]).n64_u64[0] + 32) - v501;
    if (LANES64(v5[171]).n64_u64[0] < 2) {
      goto LABEL_444;
    }
    v77 = *(float*)(LANES64(v5[173]).n64_u64[0] + 36);
    *(_QWORD*)(v75 + 40) = 0;
    *(float*)(v75 + 36) = v77 - v44;
    if (LANES64(v5[171]).n64_u64[0] < 4) {
      goto LABEL_444;
    }
    *(float*)(v75 + 64) = *(float*)(LANES64(v5[173]).n64_u64[0] + 96) - v501;
    if (LANES64(v5[171]).n64_u64[0] < 4) {
      goto LABEL_444;
    }
    v78 = *(float*)(LANES64(v5[173]).n64_u64[0] + 100);
    *(_QWORD*)(v75 + 72) = 0x3F8000003F800000LL;
    *(float*)(v75 + 68) = v78 - v44;
    if (LANES64(v5[171]).n64_u64[0] < 3) {
      goto LABEL_444;
    }
    *(float*)(v75 + 96) = *(float*)(LANES64(v5[173]).n64_u64[0] + 64) - v501;
    if (LANES64(v5[171]).n64_u64[0] < 3) {
      goto LABEL_444;
    }
    v79 = *(float*)(LANES64(v5[173]).n64_u64[0] + 68);
    *(_QWORD*)(v75 + 104) = 0x3F80000000000000LL;
    *(float*)(v75 + 100) = v79 - v44;
    (*(void (**)(unsigned __int64))(*(_QWORD*)LANES64(v5[32]).n64_u64[0] +
                                    64LL))(LANES64(v5[32]).n64_u64[0]),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v80 = (*(__int64 (**)(unsigned __int64))(
        *(_QWORD*)LANES64(v5[33]).n64_u64[0] + 56LL))(
        LANES64(v5[33]).n64_u64[0]),
    v412 = COERCE_AS(__typeof__(v412),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v415 = COERCE_AS(__typeof__(v415),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v432 = COERCE_AS(__typeof__(v432),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v436 = COERCE_AS(__typeof__(v436),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v442 = COERCE_AS(__typeof__(v442),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v446 = COERCE_AS(__typeof__(v446),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v451 = COERCE_AS(__typeof__(v451),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v455 = COERCE_AS(__typeof__(v455),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v458 = COERCE_AS(__typeof__(v458),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v463 = COERCE_AS(__typeof__(v463),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v467 = COERCE_AS(__typeof__(v467),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v484 = COERCE_AS(__typeof__(v484),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (LANES64(v5[171]).n64_u64[0] == 0) {
      goto LABEL_444;
    }
    *(float*)v80 = *(float*)LANES64(v5[173]).n64_u64[0] - v501;
    if (LANES64(v5[171]).n64_u64[0] == 0) {
      goto LABEL_444;
    }
    v81 = *(float*)(LANES64(v5[173]).n64_u64[0] + 4);
    *(_QWORD*)(v80 + 8) = 1065353216;
    *(float*)(v80 + 4) = v81 - v44;
    if (LANES64(v5[171]).n64_u64[0] < 2) {
      goto LABEL_444;
    }
    *(float*)(v80 + 32) = *(float*)(LANES64(v5[173]).n64_u64[0] + 32) - v501;
    if (LANES64(v5[171]).n64_u64[0] < 2) {
      goto LABEL_444;
    }
    v82 = *(float*)(LANES64(v5[173]).n64_u64[0] + 36);
    *(_QWORD*)(v80 + 40) = 0;
    *(float*)(v80 + 36) = v82 - v44;
    if (LANES64(v5[171]).n64_u64[0] < 4) {
      goto LABEL_444;
    }
    *(float*)(v80 + 64) = *(float*)(LANES64(v5[173]).n64_u64[0] + 96) - v501;
    if (LANES64(v5[171]).n64_u64[0] < 4) {
      goto LABEL_444;
    }
    v83 = *(float*)(LANES64(v5[173]).n64_u64[0] + 100);
    *(_QWORD*)(v80 + 72) = 0x3F8000003F800000LL;
    *(float*)(v80 + 68) = v83 - v44;
    if (LANES64(v5[171]).n64_u64[0] < 3) {
      goto LABEL_444;
    }
    *(float*)(v80 + 96) = *(float*)(LANES64(v5[173]).n64_u64[0] + 64) - v501;
    if (LANES64(v5[171]).n64_u64[0] < 3) {
      goto LABEL_444;
    }
    v84 = *(float*)(LANES64(v5[173]).n64_u64[0] + 68);
    *(_QWORD*)(v80 + 104) = 0x3F80000000000000LL;
    *(float*)(v80 + 100) = v84 - v44;
    (*(void (**)(unsigned __int64))(*(_QWORD*)LANES64(v5[33]).n64_u64[0] +
                                    64LL))(LANES64(v5[33]).n64_u64[0]),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(unsigned __int64))(*(_QWORD*)v73 + 64LL))(v73),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v85 = (int)COERCE_FLOAT(LANES64(v5[105]).n64_u64[0]);
    v86 = (int)COERCE_FLOAT(HIDWORD(LANES64(v5[105]).n64_u64[0]));
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))GameData_2132310[0])(
        v19 + 8, 0, 0, v85, v86),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))GameData_2132318[0])(
        v19 + 8, 0, 0, v85, v86),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v87 = *a2;
    v88 = (*(__int64 (**)(unsigned __int64))(
        *(_QWORD*)LANES64(v5[101]).n64_u64[0] + 32LL))(
        LANES64(v5[101]).n64_u64[0]),
    v412 = COERCE_AS(__typeof__(v412),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v415 = COERCE_AS(__typeof__(v415),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v432 = COERCE_AS(__typeof__(v432),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v436 = COERCE_AS(__typeof__(v436),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v442 = COERCE_AS(__typeof__(v442),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v446 = COERCE_AS(__typeof__(v446),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v451 = COERCE_AS(__typeof__(v451),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v455 = COERCE_AS(__typeof__(v455),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v458 = COERCE_AS(__typeof__(v458),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v463 = COERCE_AS(__typeof__(v463),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v467 = COERCE_AS(__typeof__(v467),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v484 = COERCE_AS(__typeof__(v484),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v87 + 96LL))(v87, v88,
                                                                    v89),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v523_.v523 = nullptr;
    v523_.v524 = nullptr;
    result = (float32x2_t*)(*(__int64 (**)(__int64, _QWORD, float32x2_t**,
                                           __int64))GameData_2132320[0])(
        v19 + 8, 0, &v523_.v523, 15),
    v412 = COERCE_AS(__typeof__(v412),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v415 = COERCE_AS(__typeof__(v415),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v432 = COERCE_AS(__typeof__(v432),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v436 = COERCE_AS(__typeof__(v436),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v442 = COERCE_AS(__typeof__(v442),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v446 = COERCE_AS(__typeof__(v446),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v451 = COERCE_AS(__typeof__(v451),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v455 = COERCE_AS(__typeof__(v455),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v458 = COERCE_AS(__typeof__(v458),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v463 = COERCE_AS(__typeof__(v463),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v467 = COERCE_AS(__typeof__(v467),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v484 = COERCE_AS(__typeof__(v484),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (LANES64(v5[12]).n64_u64[0] == 0) {
    return result;
  }
  v90 = *a2;
  SpineModel_19160e0((__int64)v5, (float32x2_t*)LANES64(v5[170]).n64_u64),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v91 = LANES64(v5[171]).n64_u64[0];
  if (v91 != 0) {
    v92 = LANES64(v5[173]).n64_u64[0];
    v93 = LANES64(v5[171]).n64_u64[0] & 3;
    if (v91 >= 4) {
      v99 = (float*)(v92 + 64);
      v100 = 0;
      v95 = 0x1.fffffe0000000p+127f;
      v101 = -(__int64)(v91 & 0xFFFFFFFFFFFFFFFCLL);
      v96 = -0x1.fffffe0000000p+127f;
      v97 = 0x1.fffffe0000000p+127f;
      v98 = -0x1.fffffe0000000p+127f;
      do {
        v102 = *(v99 - 16);
        v103 = *(v99 - 15);
        v100 -= 4;
        if (v97 >= v102) {
          v97 = *(v99 - 16);
        }
        if (v95 >= v103) {
          v95 = *(v99 - 15);
        }
        if (v102 >= v98) {
          v98 = *(v99 - 16);
        }
        if (v103 >= v96) {
          v96 = *(v99 - 15);
        }
        v104 = *(v99 - 8);
        v105 = *(v99 - 7);
        if (v97 >= v104) {
          v97 = *(v99 - 8);
        }
        if (v95 >= v105) {
          v95 = *(v99 - 7);
        }
        if (v104 >= v98) {
          v98 = *(v99 - 8);
        }
        if (v105 >= v96) {
          v96 = *(v99 - 7);
        }
        v106 = v99[1];
        if (v97 >= *v99) {
          v97 = *v99;
        }
        if (v95 >= v106) {
          v95 = v99[1];
        }
        if (*v99 >= v98) {
          v98 = *v99;
        }
        if (v106 >= v96) {
          v96 = v99[1];
        }
        v107 = v99[8];
        v108 = v99[9];
        v99 += 32;
        if (v97 >= v107) {
          v97 = v107;
        }
        if (v95 >= v108) {
          v95 = v108;
        }
        if (v107 >= v98) {
          v98 = v107;
        }
        if (v108 >= v96) {
          v96 = v108;
        }
      } while (v101 != v100);
      v94 = -v100;
    }
    else {
      v94 = 0;
      v95 = 0x1.fffffe0000000p+127f;
      v96 = -0x1.fffffe0000000p+127f;
      v97 = 0x1.fffffe0000000p+127f;
      v98 = -0x1.fffffe0000000p+127f;
    }
    if (v93 != 0) {
      v109 = (float*)(v92 + 32 * v94 + 4);
      do {
        v110 = *(v109 - 1);
        v111 = *v109;
        v109 += 8;
        if (v97 >= v110) {
          v97 = v110;
        }
        if (v95 >= v111) {
          v95 = v111;
        }
        if (v110 >= v98) {
          v98 = v110;
        }
        if (v111 >= v96) {
          v96 = v111;
        }
        --v93;
      } while (v93 != 0);
    }
  }
  else {
    v98 = -0x1.fffffe0000000p+127f;
    v97 = 0x1.fffffe0000000p+127f;
    v96 = -0x1.fffffe0000000p+127f;
    v95 = 0x1.fffffe0000000p+127f;
  }
  v499 = v97;
  v502 = v95;
  v112 = v98 - v97;
  v113 = v96 - v95;
  v114 = LANES64(v5[LANES64(v5[106]).n64_u64[0] + 35]).n64_u64[0];
  v115 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)v114 + 56LL))(v114),
  v412 = COERCE_AS(__typeof__(v412),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v415 = COERCE_AS(__typeof__(v415),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v432 = COERCE_AS(__typeof__(v432),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v436 = COERCE_AS(__typeof__(v436),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v442 = COERCE_AS(__typeof__(v442),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v446 = COERCE_AS(__typeof__(v446),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v451 = COERCE_AS(__typeof__(v451),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v455 = COERCE_AS(__typeof__(v455),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v458 = COERCE_AS(__typeof__(v458),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v463 = COERCE_AS(__typeof__(v463),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v467 = COERCE_AS(__typeof__(v467),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v484 = COERCE_AS(__typeof__(v484),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)&v116 = __PAIR64__(LODWORD(v502), LODWORD(v499));
  *((float*)&v116 + 2) = v499 + v112;
  *((float*)&v116 + 3) = v502 + v113;
  *(_OWORD*)v115 = v116;
  v117 = LANES64(v5[153]).n64_i32[1];
  v118 = LANES64(v5[153]).n64_u32[0];
  v119 = LANES64(v5[152]).n64_i32[1];
  v120 = __OFSUB__(v118, v119);
  v121 = v118 - v119;
  if ((v121 < 0) ^ v120 | (v121 == 0)) {
    *((float*)&v123 + 1) =
        (float)(LANES64(v5[154]).n64_u32[0] - v117) / 0x1.fe00000000000p+7f;
    *((_QWORD*)&v123 + 1) = COERCE_UNSIGNED_INT(0x1.0000000000000p+0f);
  }
  else {
    v122 = (float)v121 / 0x1.fe00000000000p+7f;
    *((float*)&v123 + 1) =
        (float)(LANES64(v5[154]).n64_u32[0] - v117) / 0x1.fe00000000000p+7f;
    *((float*)&v123 + 2) = 0x1.0000000000000p+0f / v122;
    *((float*)&v123 + 3) = (float)((float)v119 / -0x1.fe00000000000p+7f) / v122;
  }
  *(float*)&v123 = (float)v117 / 0x1.fe00000000000p+7f;
  *(_OWORD*)(v115 + 16) = v123;
  *(float*)(v115 + 32) = 0x1.0000000000000p+0f / LANES64(v5[154]).n64_f32[1];
  *(_DWORD*)(v115 + 36) = LANES64(v5[155]).n64_u32[1];
  if (LANES64(v5[156]).n64_u8[0] == 1) {
    v124 = LANES64(v5[157]).n64_i32[1];
    v125 = LANES64(v5[157]).n64_u32[0];
    v126 = LANES64(v5[156]).n64_i32[1];
    v120 = __OFSUB__(v125, v126);
    v127 = v125 - v126;
    *(float*)&v128 = (float)v124 / 0x1.fe00000000000p+7f;
    if ((v127 < 0) ^ v120 | (v127 == 0)) {
      *((float*)&v128 + 1) =
          (float)(LANES64(v5[158]).n64_u32[0] - v124) / 0x1.fe00000000000p+7f;
      *((_QWORD*)&v128 + 1) = COERCE_UNSIGNED_INT(0x1.0000000000000p+0f);
    }
    else {
      v129 = (float)v127 / 0x1.fe00000000000p+7f;
      *((float*)&v128 + 1) =
          (float)(LANES64(v5[158]).n64_u32[0] - v124) / 0x1.fe00000000000p+7f;
      *((float*)&v128 + 2) = 0x1.0000000000000p+0f / v129;
      *((float*)&v128 + 3) =
          (float)((float)v126 / -0x1.fe00000000000p+7f) / v129;
    }
  }
  else {
    v128 = GameData_1a83940;
  }
  *(_OWORD*)(v115 + 48) = v128;
  *(float*)(v115 + 64) = 0x1.0000000000000p+0f / LANES64(v5[158]).n64_f32[1];
  *(float*)&v130 =
      0x1.0000000000000p+0f / (float)(v112 * 0x1.0000000000000p-1f);
  *((float*)&v130 + 1) =
      0x1.0000000000000p+0f / (float)(v113 * 0x1.0000000000000p-1f);
  *(_QWORD*)(v115 + 40) = v130;
  v131 = &v5[2 * LANES64(v5[106]).n64_u64[0] + 37];
  (*(void (**)(__int64, _QWORD, __int64, unsigned __int64,
               unsigned __int64))v18)(
      v90 + 8, 0, 5, LANES64(*(v131)).n64_u64[0], LANES64(v131[1]).n64_u64[0]),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v500 = v90;
  v132 = &v5[2 * LANES64(v5[106]).n64_u64[0] + 37];
  (*(void (**)(__int64, __int64, __int64, unsigned __int64,
               unsigned __int64))v18)(
      v90 + 8, 1, 5, LANES64(*(v132)).n64_u64[0], LANES64(v132[1]).n64_u64[0]),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(unsigned __int64))(*(_QWORD*)v114 + 64LL))(v114),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v133 = LANES64(v5[LANES64(v5[106]).n64_u64[0] + 41]).n64_u64[0];
  v134 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)v133 + 56LL))(v133),
  v412 = COERCE_AS(__typeof__(v412),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v415 = COERCE_AS(__typeof__(v415),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v432 = COERCE_AS(__typeof__(v432),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v436 = COERCE_AS(__typeof__(v436),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v442 = COERCE_AS(__typeof__(v442),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v446 = COERCE_AS(__typeof__(v446),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v451 = COERCE_AS(__typeof__(v451),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v455 = COERCE_AS(__typeof__(v455),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v458 = COERCE_AS(__typeof__(v458),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v463 = COERCE_AS(__typeof__(v463),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v467 = COERCE_AS(__typeof__(v467),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v484 = COERCE_AS(__typeof__(v484),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v135 = *(float*)GameData_212ea30;
  v503 = powf(LANES64(v5[134]).n64_f32[0], *(float*)GameData_212ea30),
  v412 = COERCE_AS(__typeof__(v412),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v415 = COERCE_AS(__typeof__(v415),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v432 = COERCE_AS(__typeof__(v432),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v436 = COERCE_AS(__typeof__(v436),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v442 = COERCE_AS(__typeof__(v442),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v446 = COERCE_AS(__typeof__(v446),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v451 = COERCE_AS(__typeof__(v451),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v455 = COERCE_AS(__typeof__(v455),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v458 = COERCE_AS(__typeof__(v458),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v463 = COERCE_AS(__typeof__(v463),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v467 = COERCE_AS(__typeof__(v467),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v484 = COERCE_AS(__typeof__(v484),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v493 = powf(LANES64(v5[134]).n64_f32[1], v135),
  v412 = COERCE_AS(__typeof__(v412),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v415 = COERCE_AS(__typeof__(v415),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v432 = COERCE_AS(__typeof__(v432),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v436 = COERCE_AS(__typeof__(v436),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v442 = COERCE_AS(__typeof__(v442),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v446 = COERCE_AS(__typeof__(v446),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v451 = COERCE_AS(__typeof__(v451),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v455 = COERCE_AS(__typeof__(v455),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v458 = COERCE_AS(__typeof__(v458),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v463 = COERCE_AS(__typeof__(v463),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v467 = COERCE_AS(__typeof__(v467),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v484 = COERCE_AS(__typeof__(v484),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v136 = powf(LANES64(v5[135]).n64_f32[0], v135),
  v412 = COERCE_AS(__typeof__(v412),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v415 = COERCE_AS(__typeof__(v415),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v432 = COERCE_AS(__typeof__(v432),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v436 = COERCE_AS(__typeof__(v436),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v442 = COERCE_AS(__typeof__(v442),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v446 = COERCE_AS(__typeof__(v446),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v451 = COERCE_AS(__typeof__(v451),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v455 = COERCE_AS(__typeof__(v455),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v458 = COERCE_AS(__typeof__(v458),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v463 = COERCE_AS(__typeof__(v463),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v467 = COERCE_AS(__typeof__(v467),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v484 = COERCE_AS(__typeof__(v484),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)&v137 = __PAIR64__(LODWORD(v493), LODWORD(v503));
  *((float*)&v137 + 2) = v136;
  DWORD3(v137) = LANES64(v5[135]).n64_u32[1];
  *(_OWORD*)v134 = v137;
  v504 = powf(LANES64(v5[136]).n64_f32[0], v135),
  v412 = COERCE_AS(__typeof__(v412),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v415 = COERCE_AS(__typeof__(v415),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v432 = COERCE_AS(__typeof__(v432),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v436 = COERCE_AS(__typeof__(v436),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v442 = COERCE_AS(__typeof__(v442),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v446 = COERCE_AS(__typeof__(v446),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v451 = COERCE_AS(__typeof__(v451),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v455 = COERCE_AS(__typeof__(v455),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v458 = COERCE_AS(__typeof__(v458),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v463 = COERCE_AS(__typeof__(v463),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v467 = COERCE_AS(__typeof__(v467),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v484 = COERCE_AS(__typeof__(v484),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v494 = powf(LANES64(v5[136]).n64_f32[1], v135),
  v412 = COERCE_AS(__typeof__(v412),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v415 = COERCE_AS(__typeof__(v415),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v432 = COERCE_AS(__typeof__(v432),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v436 = COERCE_AS(__typeof__(v436),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v442 = COERCE_AS(__typeof__(v442),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v446 = COERCE_AS(__typeof__(v446),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v451 = COERCE_AS(__typeof__(v451),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v455 = COERCE_AS(__typeof__(v455),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v458 = COERCE_AS(__typeof__(v458),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v463 = COERCE_AS(__typeof__(v463),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v467 = COERCE_AS(__typeof__(v467),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v484 = COERCE_AS(__typeof__(v484),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v138 = powf(LANES64(v5[137]).n64_f32[0], v135),
  v412 = COERCE_AS(__typeof__(v412),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v415 = COERCE_AS(__typeof__(v415),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v432 = COERCE_AS(__typeof__(v432),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v436 = COERCE_AS(__typeof__(v436),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v442 = COERCE_AS(__typeof__(v442),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v446 = COERCE_AS(__typeof__(v446),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v451 = COERCE_AS(__typeof__(v451),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v455 = COERCE_AS(__typeof__(v455),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v458 = COERCE_AS(__typeof__(v458),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v463 = COERCE_AS(__typeof__(v463),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v467 = COERCE_AS(__typeof__(v467),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v484 = COERCE_AS(__typeof__(v484),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)&v139 = __PAIR64__(LODWORD(v494), LODWORD(v504));
  *((float*)&v139 + 2) = v138;
  DWORD3(v139) = LANES64(v5[137]).n64_u32[1];
  *(_OWORD*)(v134 + 16) = v139;
  v140 = LANES64(v5[139]).n64_f32[0];
  v141 = LANES64(v5[138]).n64_f32[1];
  if (vabds_f32(v140, v141) >= 0x1.0000000000000p-23f) {
    v143 = 0x1.0000000000000p+0f / (float)(v140 - v141);
    *(float*)(v134 + 64) = v143;
    v142 = -(float)(LANES64(v5[138]).n64_f32[1] * v143);
  }
  else {
    v142 = 0x0.0p+0f;
    *(_DWORD*)(v134 + 64) = 1259902592;
  }
  *(float*)(v134 + 72) = v142;
  *(float*)(v134 + 80) = 0x1.0000000000000p+0f / LANES64(v5[138]).n64_f32[0];
  *(float*)(v134 + 88) = (float)LANES64(v5[140]).n64_i32[0];
  *(_DWORD*)(v134 + 96) = LANES64(v5[139]).n64_u32[1];
  v505 = powf(LANES64(v5[144]).n64_f32[0], v135),
  v412 = COERCE_AS(__typeof__(v412),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v415 = COERCE_AS(__typeof__(v415),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v432 = COERCE_AS(__typeof__(v432),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v436 = COERCE_AS(__typeof__(v436),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v442 = COERCE_AS(__typeof__(v442),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v446 = COERCE_AS(__typeof__(v446),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v451 = COERCE_AS(__typeof__(v451),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v455 = COERCE_AS(__typeof__(v455),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v458 = COERCE_AS(__typeof__(v458),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v463 = COERCE_AS(__typeof__(v463),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v467 = COERCE_AS(__typeof__(v467),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v484 = COERCE_AS(__typeof__(v484),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v495 = powf(LANES64(v5[144]).n64_f32[1], v135),
  v412 = COERCE_AS(__typeof__(v412),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v415 = COERCE_AS(__typeof__(v415),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v432 = COERCE_AS(__typeof__(v432),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v436 = COERCE_AS(__typeof__(v436),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v442 = COERCE_AS(__typeof__(v442),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v446 = COERCE_AS(__typeof__(v446),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v451 = COERCE_AS(__typeof__(v451),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v455 = COERCE_AS(__typeof__(v455),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v458 = COERCE_AS(__typeof__(v458),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v463 = COERCE_AS(__typeof__(v463),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v467 = COERCE_AS(__typeof__(v467),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v484 = COERCE_AS(__typeof__(v484),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v144 = powf(LANES64(v5[145]).n64_f32[0], v135),
  v412 = COERCE_AS(__typeof__(v412),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v415 = COERCE_AS(__typeof__(v415),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v432 = COERCE_AS(__typeof__(v432),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v436 = COERCE_AS(__typeof__(v436),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v442 = COERCE_AS(__typeof__(v442),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v446 = COERCE_AS(__typeof__(v446),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v451 = COERCE_AS(__typeof__(v451),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v455 = COERCE_AS(__typeof__(v455),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v458 = COERCE_AS(__typeof__(v458),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v463 = COERCE_AS(__typeof__(v463),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v467 = COERCE_AS(__typeof__(v467),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v484 = COERCE_AS(__typeof__(v484),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)&v145 = __PAIR64__(LODWORD(v495), LODWORD(v505));
  *((float*)&v145 + 2) = v144;
  DWORD3(v145) = LANES64(v5[145]).n64_u32[1];
  *(_OWORD*)(v134 + 32) = v145;
  v506 = powf(LANES64(v5[146]).n64_f32[0], v135),
  v412 = COERCE_AS(__typeof__(v412),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v415 = COERCE_AS(__typeof__(v415),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v432 = COERCE_AS(__typeof__(v432),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v436 = COERCE_AS(__typeof__(v436),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v442 = COERCE_AS(__typeof__(v442),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v446 = COERCE_AS(__typeof__(v446),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v451 = COERCE_AS(__typeof__(v451),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v455 = COERCE_AS(__typeof__(v455),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v458 = COERCE_AS(__typeof__(v458),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v463 = COERCE_AS(__typeof__(v463),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v467 = COERCE_AS(__typeof__(v467),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v484 = COERCE_AS(__typeof__(v484),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v496 = powf(LANES64(v5[146]).n64_f32[1], v135),
  v412 = COERCE_AS(__typeof__(v412),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v415 = COERCE_AS(__typeof__(v415),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v432 = COERCE_AS(__typeof__(v432),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v436 = COERCE_AS(__typeof__(v436),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v442 = COERCE_AS(__typeof__(v442),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v446 = COERCE_AS(__typeof__(v446),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v451 = COERCE_AS(__typeof__(v451),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v455 = COERCE_AS(__typeof__(v455),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v458 = COERCE_AS(__typeof__(v458),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v463 = COERCE_AS(__typeof__(v463),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v467 = COERCE_AS(__typeof__(v467),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v484 = COERCE_AS(__typeof__(v484),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v146 = powf(LANES64(v5[147]).n64_f32[0], v135),
  v412 = COERCE_AS(__typeof__(v412),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v415 = COERCE_AS(__typeof__(v415),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v432 = COERCE_AS(__typeof__(v432),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v436 = COERCE_AS(__typeof__(v436),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v442 = COERCE_AS(__typeof__(v442),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v446 = COERCE_AS(__typeof__(v446),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v451 = COERCE_AS(__typeof__(v451),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v455 = COERCE_AS(__typeof__(v455),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v458 = COERCE_AS(__typeof__(v458),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v463 = COERCE_AS(__typeof__(v463),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v467 = COERCE_AS(__typeof__(v467),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v484 = COERCE_AS(__typeof__(v484),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)&v147 = __PAIR64__(LODWORD(v496), LODWORD(v506));
  v485 = v16;
  v487 = v17;
  *((float*)&v147 + 2) = v146;
  DWORD3(v147) = LANES64(v5[147]).n64_u32[1];
  *(_OWORD*)(v134 + 48) = v147;
  v148 = LANES64(v5[149]).n64_f32[0];
  v149 = LANES64(v5[148]).n64_f32[1];
  if (vabds_f32(v148, v149) >= 0x1.0000000000000p-23f) {
    v151 = 0x1.0000000000000p+0f / (float)(v148 - v149);
    *(float*)(v134 + 68) = v151;
    v150 = -(float)(LANES64(v5[148]).n64_f32[1] * v151);
  }
  else {
    v150 = 0x0.0p+0f;
    *(_DWORD*)(v134 + 68) = 1259902592;
  }
  *(float*)(v134 + 76) = v150;
  *(float*)(v134 + 84) = 0x1.0000000000000p+0f / LANES64(v5[148]).n64_f32[0];
  *(float*)(v134 + 92) = (float)LANES64(v5[150]).n64_i32[0];
  *(_DWORD*)(v134 + 100) = LANES64(v5[149]).n64_u32[1];
  v152 = &v5[2 * LANES64(v5[106]).n64_u64[0] + 43];
  (*(void (**)(__int64, _QWORD, __int64, unsigned __int64,
               unsigned __int64))v18)(
      v90 + 8, 0, 6, LANES64(*(v152)).n64_u64[0], LANES64(v152[1]).n64_u64[0]),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v153 = &v5[2 * LANES64(v5[106]).n64_u64[0] + 43];
  (*(void (**)(__int64, __int64, __int64, unsigned __int64,
               unsigned __int64))v18)(
      v90 + 8, 1, 6, LANES64(*(v153)).n64_u64[0], LANES64(v153[1]).n64_u64[0]),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(unsigned __int64))(*(_QWORD*)v133 + 64LL))(v133),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v154 = LANES64(v5[168]).n64_u64[0];
  v155 = LANES64(v5[167]).n64_u64[0];
  v156 = a4;
  if (v155 != v154) {
    v157 = LANES64(v5[168]).n64_u64[0];
    v158 = fw_memory_g_heap_manager_ptr;
    do {
      v159 = *(_BYTE*)(v157 - 64);
      v157 -= 64LL;
      if ((v159 & 1) != 0) {
        v160 = *(_QWORD*)(v154 - 48);
        if (v160 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v158 + 200LL) != 0) {
            v161 = 128;
          }
          else {
            v161 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v158 + v161, v160),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v415 = COERCE_AS(__typeof__(v415),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v432 = COERCE_AS(__typeof__(v432),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v442 = COERCE_AS(__typeof__(v442),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v446 = COERCE_AS(__typeof__(v446),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v451 = COERCE_AS(__typeof__(v451),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v455 = COERCE_AS(__typeof__(v455),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v458 = COERCE_AS(__typeof__(v458),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v463 = COERCE_AS(__typeof__(v463),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v467 = COERCE_AS(__typeof__(v467),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v484 = COERCE_AS(__typeof__(v484),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v154 = v157;
    } while (v157 != v155);
  }
  v162 = LANES64(v5[23]).n64_i64[0];
  v163 = LANES64(v5[24]).n64_u64[0];
  LANES64(v5[168]).n64_u64[0] = v155;
  if ((__int64)(v163 - v162) >= 1) {
    memset(v162, 0, v163 - v162),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v164 = LANES64(v5[29]).n64_i64[0];
  v165 = LANES64(v5[30]).n64_u64[0] - v164;
  if (v165 >= 1) {
    memset(v164, 0, v165),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  spine_SkeletonClipping_SkeletonClipping(&v523_.v523),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v166 = *(_QWORD*)(spine_Skeleton_getSlots(LANES64(v5[12]).n64_u64[0]) + 8),
  v412 = COERCE_AS(__typeof__(v412),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v415 = COERCE_AS(__typeof__(v415),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v432 = COERCE_AS(__typeof__(v432),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v436 = COERCE_AS(__typeof__(v436),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v442 = COERCE_AS(__typeof__(v442),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v446 = COERCE_AS(__typeof__(v446),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v451 = COERCE_AS(__typeof__(v451),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v455 = COERCE_AS(__typeof__(v455),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v458 = COERCE_AS(__typeof__(v458),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v463 = COERCE_AS(__typeof__(v463),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v467 = COERCE_AS(__typeof__(v467),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v484 = COERCE_AS(__typeof__(v484),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v166 != 0) {
    v507 = 0;
    v167 = 0;
    v168 = 0;
    v497 = (__int64*)&v5[167];
    while (1) {
      v169 = spine_Skeleton_getDrawOrder(LANES64(v5[12]).n64_u64[0]),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v168 >= *(_QWORD*)(v169 + 8)) {
        goto LABEL_444;
      }
      v170 = *(_QWORD*)(*(_QWORD*)(v169 + 24) + 8 * v168);
      v171 = spine_Slot_getAttachment(v170),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v171 == 0) {
        goto LABEL_215;
      }
      v172 = v171;
      if (*(float*)(spine_Slot_getColor(v170) + 20) == 0x0.0p+0f) {
        goto LABEL_215;
      }
      v173 = spine_Slot_getBone(v170),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v173 + 32LL))(v173) & 1) == 0) {
        goto LABEL_215;
      }
      v174 =
          (const char**)(*(__int64 (**)(__int64))(*(_QWORD*)v172 + 16LL))(v172),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (spine_RTTI_isExactly(v174, (const char**)&GameData_2177278)) {
        break;
      }
      v211 =
          (const char**)(*(__int64 (**)(__int64))(*(_QWORD*)v172 + 16LL))(v172),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (spine_RTTI_isExactly(v211, (const char**)&GameData_2177268)) {
        if (*(float*)(spine_MeshAttachment_getColor(v172) + 20) != 0x0.0p+0f) {
          v212 = spine_VertexAttachment_getWorldVerticesLength(v172),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v213 = LANES64(v5[171]).n64_u64[0];
          v214 = LANES64(v5[172]).n64_u64[0];
          v215 = v212 >> 1;
          LANES64(v5[171]).n64_u64[0] = v212 >> 1;
          if (v214 < v212 >> 1) {
            v216 = LANES64(v5[173]).n64_u64[0];
            v217 = (int)(float)((float)v215 * 0x1.c000000000000p+0f);
            if (v217 <= 8) {
              v218 = 8;
            }
            else {
              v218 = v217;
            }
            LANES64(v5[172]).n64_u64[0] = v218;
            v219 = GameRoutine_19e10(),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v220 =
                (*(__int64 (**)(__int64, unsigned __int64, __int64, const char*,
                                __int64))(*(_QWORD*)v219 + 32LL))(
                    v219, v216, 32LL * v218,
                    "/Program/Externals/Spine/include\\spine/Vector.h", 82),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v215 = LANES64(v5[171]).n64_u64[0];
            LANES64(v5[173]).n64_u64[0] = v220;
          }
          if (v213 < v215) {
            v221 = 32 * v213;
            do {
              ++v213;
              v222 = (_QWORD*)(LANES64(v5[173]).n64_u64[0] + v221);
              v221 += 32;
              v222[2] = 0;
              v222[3] = 0;
              *v222 = 0;
              v222[1] = 0;
            } while (v213 < LANES64(v5[171]).n64_u64[0]);
          }
          v223 = LANES64(v5[12]).n64_u64[0];
          v517_.v517 = (float32x2_t*)spine_Color_vtable;
          v517_.v518 = 0;
          v519_.v519[0] = 0;
          v224 = *(float*)(spine_Skeleton_getColor(v223) + 8),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v225 = v224 *
                 *(float*)(spine_Skeleton_getColor(LANES64(v5[12]).n64_u64[0]) +
                           20),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v226 = v225 * *(float*)(spine_Slot_getColor(v170) + 8),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v227 = *(float*)(spine_Slot_getColor(v170) + 20),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v228 = LANES64(v5[12]).n64_u64[0];
          *(float*)&v517_.v518 = v226 * v227;
          v229 = *(float*)(spine_Skeleton_getColor(v228) + 12),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v230 = v229 *
                 *(float*)(spine_Skeleton_getColor(LANES64(v5[12]).n64_u64[0]) +
                           20),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v231 = v230 * *(float*)(spine_Slot_getColor(v170) + 12),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v232 = *(float*)(spine_Slot_getColor(v170) + 20),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v233 = LANES64(v5[12]).n64_u64[0];
          *((float*)&v517_.v518 + 1) = v231 * v232;
          v234 = *(float*)(spine_Skeleton_getColor(v233) + 16),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v235 = v234 *
                 *(float*)(spine_Skeleton_getColor(LANES64(v5[12]).n64_u64[0]) +
                           20),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v236 = v235 * *(float*)(spine_Slot_getColor(v170) + 16),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v237 = *(float*)(spine_Slot_getColor(v170) + 20),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v238 = LANES64(v5[12]).n64_u64[0];
          *(float*)v519_.v519 = v236 * v237;
          v239 = *(float*)(spine_Skeleton_getColor(v238) + 20),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          *((float*)v519_.v519 +
            1) = v239 * *(float*)(spine_Slot_getColor(v170) + 20),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v240 = spine_VertexAttachment_getWorldVerticesLength(v172),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(__int64, __int64, _QWORD, __int64, unsigned __int64,
                       _QWORD, __int64))(*(_QWORD*)v172 + 32LL))(
              v172, v170, 0, v240, LANES64(v5[173]).n64_u64[0], 0, 8),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v415 = COERCE_AS(__typeof__(v415),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v432 = COERCE_AS(__typeof__(v432),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v442 = COERCE_AS(__typeof__(v442),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v446 = COERCE_AS(__typeof__(v446),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v451 = COERCE_AS(__typeof__(v451),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v455 = COERCE_AS(__typeof__(v455),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v458 = COERCE_AS(__typeof__(v458),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v463 = COERCE_AS(__typeof__(v463),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v467 = COERCE_AS(__typeof__(v467),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v484 = COERCE_AS(__typeof__(v484),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v241 = ((__int64 (*)(__int64))GameRoutine_1a740)(v172),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (LANES64(v5[171]).n64_u64[0] != 0) {
            v242 = 1;
            v243 = 0;
            v244 = 0;
            while (v242 - 1 < *(_QWORD*)(v241 + 8)) {
              v245 = LANES64(v5[173]).n64_u64[0] + 4 * v243;
              *(_DWORD*)(v245 + 8) = *(_DWORD*)(*(_QWORD*)(v241 + 24) + v243);
              if (v242 >= *(_QWORD*)(v241 + 8)) {
                break;
              }
              ++v244;
              v242 += 2LL;
              v246 = *(_QWORD*)(v241 + 24) + v243;
              v243 += 8;
              *(_DWORD*)(v245 + 12) = *(_DWORD*)(v246 + 4);
              *(_QWORD*)(v245 + 16) = v517_.v518;
              *(_QWORD*)(v245 + 24) = v519_.v519[0];
              if (v244 >= LANES64(v5[171]).n64_u64[0]) {
                goto LABEL_194;
              }
            }
          LABEL_444:
            v483 = __assert_fail(
                "inIndex < _size",
                "/Program/Externals/Spine/include\\spine/Vector.h", 162,
                "operator[]"),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            return (float32x2_t*)SpineModel_19160e0(v483, v484);
          }
        LABEL_194:
          v247 = spine_MeshAttachment_getTriangles(v172),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (spine_SkeletonClipping_isClipping((__int64)&v523_.v523)) {
            v489 = v166;
            spine_SkeletonClipping_clipTriangles(
                (__int64)&v523_.v523, LANES64(v5[173]).n64_i64[0],
                *(_QWORD*)(v247 + 24), *(_QWORD*)(v247 + 8),
                LANES64(v5[173]).n64_u64[0] + 8, 8),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v415 =
                    COERCE_AS(__typeof__(v415),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v432 =
                    COERCE_AS(__typeof__(v432),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v442 =
                    COERCE_AS(__typeof__(v442),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v446 =
                    COERCE_AS(__typeof__(v446),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v451 =
                    COERCE_AS(__typeof__(v451),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v455 =
                    COERCE_AS(__typeof__(v455),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v458 =
                    COERCE_AS(__typeof__(v458),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v463 =
                    COERCE_AS(__typeof__(v463),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v467 =
                    COERCE_AS(__typeof__(v467),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v484 =
                    COERCE_AS(__typeof__(v484),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v248 = spine_SkeletonClipping_getClippedVertices(&v523_.v523),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v249 = v5;
            v250 = spine_SkeletonClipping_getClippedUVs(&v523_.v523),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v251 = spine_SkeletonClipping_getClippedVertices(&v523_.v523),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v252 = LANES64(v249[171]).n64_u64[0];
            v253 = LANES64(v249[172]).n64_u64[0];
            v254 = *(_QWORD*)(v251 + 8) >> 1;
            LANES64(v249[171]).n64_u64[0] = v254;
            if (v253 < v254) {
              v255 = v533_.v535;
              v256 = LANES64(v533_.v535[173]).n64_u64[0];
              v257 = (int)(float)((float)v254 * 0x1.c000000000000p+0f);
              if (v257 <= 8) {
                v258 = 8;
              }
              else {
                v258 = v257;
              }
              LANES64(v533_.v535[172]).n64_u64[0] = v258;
              v259 = GameRoutine_19e10(),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v415 = COERCE_AS(__typeof__(v415),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v432 = COERCE_AS(__typeof__(v432),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v442 = COERCE_AS(__typeof__(v442),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v446 = COERCE_AS(__typeof__(v446),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v451 = COERCE_AS(__typeof__(v451),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v455 = COERCE_AS(__typeof__(v455),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v458 = COERCE_AS(__typeof__(v458),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v463 = COERCE_AS(__typeof__(v463),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v467 = COERCE_AS(__typeof__(v467),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v484 = COERCE_AS(__typeof__(v484),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v260 = (*(__int64 (**)(__int64, unsigned __int64, __int64,
                                     const char*,
                                     __int64))(*(_QWORD*)v259 + 32LL))(
                  v259, v256, 32LL * v258,
                  "/Program/Externals/Spine/include\\spine/Vector.h", 82),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v415 = COERCE_AS(__typeof__(v415),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v432 = COERCE_AS(__typeof__(v432),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v442 = COERCE_AS(__typeof__(v442),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v446 = COERCE_AS(__typeof__(v446),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v451 = COERCE_AS(__typeof__(v451),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v455 = COERCE_AS(__typeof__(v455),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v458 = COERCE_AS(__typeof__(v458),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v463 = COERCE_AS(__typeof__(v463),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v467 = COERCE_AS(__typeof__(v467),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v484 = COERCE_AS(__typeof__(v484),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v254 = LANES64(v255[171]).n64_u64[0];
              LANES64(v255[173]).n64_u64[0] = v260;
            }
            v166 = v489;
            if (v252 < v254) {
              v261 = v533_.v535;
              v262 = 32 * v252;
              do {
                ++v252;
                v263 = (_QWORD*)(LANES64(v261[173]).n64_u64[0] + v262);
                v262 += 32;
                v263[2] = 0;
                v263[3] = 0;
                *v263 = 0;
                v263[1] = 0;
                v254 = LANES64(v261[171]).n64_u64[0];
              } while (v252 < v254);
            }
            if (v254 != 0) {
              v264 = 28;
              v265 = 1;
              v266 = 0;
              v267 = 0;
              while (v265 - 1 < *(_QWORD*)(v248 + 8)) {
                v268 = LANES64(v533_.v535[173]).n64_u64[0];
                *(_DWORD*)(v268 + v264 - 28) =
                    *(_DWORD*)(*(_QWORD*)(v248 + 24) + v266);
                if (v265 >= *(_QWORD*)(v248 + 8)) {
                  break;
                }
                v269 = v268 + 4 * v266;
                *(_DWORD*)(v269 + 4) =
                    *(_DWORD*)(*(_QWORD*)(v248 + 24) + v266 + 4);
                if (v265 - 1 >= *(_QWORD*)(v250 + 8)) {
                  break;
                }
                *(_DWORD*)(v269 + 8) = *(_DWORD*)(*(_QWORD*)(v250 + 24) + v266);
                if (v265 >= *(_QWORD*)(v250 + 8)) {
                  break;
                }
                ++v267;
                v265 += 2LL;
                v270 = *(_DWORD*)(*(_QWORD*)(v250 + 24) + v266 + 4);
                v271 = v268 + 4 * v266;
                v266 += 8;
                *(_DWORD*)(v271 + 12) = v270;
                *(_QWORD*)(v271 + 16) = v517_.v518;
                *(_DWORD*)(v271 + 24) = v519_.v519[0];
                *(_DWORD*)(v268 + v264) = HIDWORD(v519_.v519[0]);
                v264 += 32;
                if (v267 >= LANES64(v533_.v535[171]).n64_u64[0]) {
                  goto LABEL_210;
                }
              }
              goto LABEL_444;
            }
          LABEL_210:
            v272 = spine_SkeletonClipping_getClippedTriangles(&v523_.v523),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v5 = v533_.v535;
            v273 = *(_QWORD*)(v272 + 8);
            v274 = LANES64(v533_.v535[175]).n64_u64[0];
            v275 = LANES64(v533_.v535[176]).n64_u64[0];
            LANES64(v533_.v535[175]).n64_u64[0] = v273;
            if (v275 < v273) {
              v276 = LANES64(v5[177]).n64_u64[0];
              v277 = (int)(float)((float)v273 * 0x1.c000000000000p+0f);
              if (v277 <= 8) {
                v278 = 8;
              }
              else {
                v278 = v277;
              }
              LANES64(v5[176]).n64_u64[0] = v278;
              v279 = GameRoutine_19e10(),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v415 = COERCE_AS(__typeof__(v415),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v432 = COERCE_AS(__typeof__(v432),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v442 = COERCE_AS(__typeof__(v442),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v446 = COERCE_AS(__typeof__(v446),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v451 = COERCE_AS(__typeof__(v451),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v455 = COERCE_AS(__typeof__(v455),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v458 = COERCE_AS(__typeof__(v458),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v463 = COERCE_AS(__typeof__(v463),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v467 = COERCE_AS(__typeof__(v467),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v484 = COERCE_AS(__typeof__(v484),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              LANES64(v5[177]).n64_u64[0] = (*(
                  __int64 (**)(__int64, unsigned __int64, __int64, const char*,
                               __int64))(*(_QWORD*)v279 + 32LL))(
                  v279, v276, 2LL * v278,
                  "/Program/Externals/Spine/include\\spine/Vector.h", 82),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v415 = COERCE_AS(__typeof__(v415),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v432 = COERCE_AS(__typeof__(v432),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v442 = COERCE_AS(__typeof__(v442),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v446 = COERCE_AS(__typeof__(v446),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v451 = COERCE_AS(__typeof__(v451),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v455 = COERCE_AS(__typeof__(v455),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v458 = COERCE_AS(__typeof__(v458),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v463 = COERCE_AS(__typeof__(v463),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v467 = COERCE_AS(__typeof__(v467),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v484 = COERCE_AS(__typeof__(v484),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              goto LABEL_305;
            }
            while (v274 < v273) {
              *(_WORD*)(LANES64(v5[177]).n64_u64[0] + 2 * v274++) = 0;
            LABEL_305:
              v273 = LANES64(v5[175]).n64_u64[0];
            }
            v366 = LANES64(v5[177]).n64_i64[0];
            v367 = *(_QWORD*)(spine_SkeletonClipping_getClippedTriangles(
                                  &v523_.v523) +
                              24),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v368 = spine_SkeletonClipping_getClippedTriangles(&v523_.v523),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            memcpy_alt1(v366, v367, 2LL * *(_QWORD*)(v368 + 8)),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v415 =
                    COERCE_AS(__typeof__(v415),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v432 =
                    COERCE_AS(__typeof__(v432),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v442 =
                    COERCE_AS(__typeof__(v442),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v446 =
                    COERCE_AS(__typeof__(v446),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v451 =
                    COERCE_AS(__typeof__(v451),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v455 =
                    COERCE_AS(__typeof__(v455),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v458 =
                    COERCE_AS(__typeof__(v458),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v463 =
                    COERCE_AS(__typeof__(v463),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v467 =
                    COERCE_AS(__typeof__(v467),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v484 =
                    COERCE_AS(__typeof__(v484),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          else {
            LANES64(v5[175]).n64_u64[0] = 0;
            v281 = *(_QWORD*)(v247 + 8);
            if (LANES64(v5[176]).n64_u64[0] < v281) {
              v282 = LANES64(v5[177]).n64_u64[0];
              LANES64(v5[176]).n64_u64[0] = v281;
              v283 = GameRoutine_19e10(),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v415 = COERCE_AS(__typeof__(v415),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v432 = COERCE_AS(__typeof__(v432),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v442 = COERCE_AS(__typeof__(v442),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v446 = COERCE_AS(__typeof__(v446),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v451 = COERCE_AS(__typeof__(v451),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v455 = COERCE_AS(__typeof__(v455),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v458 = COERCE_AS(__typeof__(v458),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v463 = COERCE_AS(__typeof__(v463),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v467 = COERCE_AS(__typeof__(v467),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v484 = COERCE_AS(__typeof__(v484),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              LANES64(v5[177]).n64_u64[0] = (*(
                  __int64 (**)(__int64, unsigned __int64, unsigned __int64,
                               const char*, __int64))(*(_QWORD*)v283 + 32LL))(
                  v283, v282, 2 * v281,
                  "/Program/Externals/Spine/include\\spine/Vector.h", 94),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v415 = COERCE_AS(__typeof__(v415),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v432 = COERCE_AS(__typeof__(v432),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v442 = COERCE_AS(__typeof__(v442),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v446 = COERCE_AS(__typeof__(v446),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v451 = COERCE_AS(__typeof__(v451),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v455 = COERCE_AS(__typeof__(v455),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v458 = COERCE_AS(__typeof__(v458),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v463 = COERCE_AS(__typeof__(v463),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v467 = COERCE_AS(__typeof__(v467),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v484 = COERCE_AS(__typeof__(v484),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v281 = *(_QWORD*)(v247 + 8);
            }
            if (v281 != 0) {
              v284 = 0;
              do {
                v286 = *(_QWORD*)(v247 + 24);
                v287 = LANES64(v5[175]).n64_u64[0];
                if (v287 == LANES64(v5[176]).n64_u64[0]) {
                  v288 = *(_WORD*)(v286 + 2 * v284);
                  if ((unsigned int)(int)(float)((float)v287 *
                                                 0x1.c000000000000p+0f) <= 8) {
                    v289 = 8;
                  }
                  else {
                    v289 = (int)(float)((float)v287 * 0x1.c000000000000p+0f);
                  }
                  LANES64(v533_.v535[176]).n64_u64[0] = v289;
                  v290 = LANES64(v533_.v535[177]).n64_u64[0];
                  v291 = GameRoutine_19e10(),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v415 = COERCE_AS(
                      __typeof__(v415),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v432 = COERCE_AS(
                      __typeof__(v432),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v442 = COERCE_AS(
                      __typeof__(v442),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v446 = COERCE_AS(
                      __typeof__(v446),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v451 = COERCE_AS(
                      __typeof__(v451),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v455 = COERCE_AS(
                      __typeof__(v455),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v458 = COERCE_AS(
                      __typeof__(v458),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v463 = COERCE_AS(
                      __typeof__(v463),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v467 = COERCE_AS(
                      __typeof__(v467),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v484 = COERCE_AS(
                      __typeof__(v484),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v89 = COERCE_AS(
                      __typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v292 = 2LL * v289;
                  v5 = v533_.v535;
                  v293 = (*(__int64 (**)(__int64, unsigned __int64, __int64,
                                         const char*,
                                         __int64))(*(_QWORD*)v291 + 32LL))(
                      v291, v290, v292,
                      "/Program/Externals/Spine/include\\spine/Vector.h", 106),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v415 = COERCE_AS(
                      __typeof__(v415),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v432 = COERCE_AS(
                      __typeof__(v432),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v442 = COERCE_AS(
                      __typeof__(v442),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v446 = COERCE_AS(
                      __typeof__(v446),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v451 = COERCE_AS(
                      __typeof__(v451),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v455 = COERCE_AS(
                      __typeof__(v455),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v458 = COERCE_AS(
                      __typeof__(v458),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v463 = COERCE_AS(
                      __typeof__(v463),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v467 = COERCE_AS(
                      __typeof__(v467),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v484 = COERCE_AS(
                      __typeof__(v484),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v89 = COERCE_AS(
                      __typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v294 = LANES64(v5[175]).n64_u64[0];
                  LANES64(v5[177]).n64_u64[0] = v293;
                  LANES64(v5[175]).n64_u64[0] = v294 + 1;
                  *(_WORD*)(v293 + 2 * v294) = v288;
                }
                else {
                  v285 = LANES64(v5[177]).n64_u64[0];
                  LANES64(v5[175]).n64_u64[0] = v287 + 1;
                  *(_WORD*)(v285 + 2 * v287) = *(_WORD*)(v286 + 2 * v284);
                }
                ++v284;
              } while (v284 < *(_QWORD*)(v247 + 8));
            }
          }
          GameRoutine_1916360(v5, (int*)v533_.v533, LANES64(v5[106]).n64_i64[0],
                              LANES64(v5[173]).n64_i64[0],
                              LANES64(v5[171]).n64_i64[0]),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v415 = COERCE_AS(__typeof__(v415),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v432 = COERCE_AS(__typeof__(v432),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v442 = COERCE_AS(__typeof__(v442),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v446 = COERCE_AS(__typeof__(v446),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v451 = COERCE_AS(__typeof__(v451),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v455 = COERCE_AS(__typeof__(v455),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v458 = COERCE_AS(__typeof__(v458),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v463 = COERCE_AS(__typeof__(v463),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v467 = COERCE_AS(__typeof__(v467),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v484 = COERCE_AS(__typeof__(v484),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v369 = LANES64(v5[167]).n64_u64[0];
          if (v369 != LANES64(v5[168]).n64_u64[0] &&
              *(_DWORD*)(v369 + (v507 << 6) + 24) != LODWORD(v533_.v533[0])) {
            v167 = (*(_QWORD*)(LANES64(v5[23]).n64_u64[0] +
                               8LL * SLODWORD(v533_.v533[0])) >>
                    5) -
                   LANES64(v5[171]).n64_u64[0];
          }
          if (LANES64(v5[175]).n64_u64[0] != 0) {
            v370 = 0;
            do {
              v371 = 2 * v370++;
              *(_WORD*)(LANES64(v5[177]).n64_u64[0] + v371) += v167;
              v372 = LANES64(v5[175]).n64_u64[0];
            } while (v370 < v372);
          }
          else {
            v372 = 0;
          }
          GameRoutine_19164c0(v5, v531_.v531, LANES64(v5[106]).n64_i64[0],
                              LANES64(v5[177]).n64_i64[0], v372),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v415 = COERCE_AS(__typeof__(v415),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v432 = COERCE_AS(__typeof__(v432),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v442 = COERCE_AS(__typeof__(v442),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v446 = COERCE_AS(__typeof__(v446),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v451 = COERCE_AS(__typeof__(v451),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v455 = COERCE_AS(__typeof__(v455),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v458 = COERCE_AS(__typeof__(v458),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v463 = COERCE_AS(__typeof__(v463),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v467 = COERCE_AS(__typeof__(v467),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v484 = COERCE_AS(__typeof__(v484),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v335 = spine_MeshAttachment_getRegion(v172),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LABEL_268:
          v336 = *(_QWORD*)(v335 + 64);
          v337 = *(const char**)(v336 + 24);
          v338 = strlen_alt1(v337),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v339 = *(unsigned __int8*)(v336 + 100);
          v340 = v338;
          v341 = spine_Slot_getData(v170),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v342 = spine_SlotData_getBlendMode(v341),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v343 = 0;
          if (v342 <= 1) {
            if (v342 != 0) {
              if (v342 == 1) {
                if (v339 != 0) {
                  v343 = 3;
                }
                else {
                  v343 = 2;
                }
              }
            }
            else {
              v343 = v339;
            }
            goto LABEL_282;
          }
          if (v342 != 2) {
            if (v342 == 3) {
              v344 = v339 == 0;
              v345 = 6;
            LABEL_279:
              if (v344) {
                v343 = v345;
              }
              else {
                v343 = v345 + 1;
              }
            }
          LABEL_282:
            v346 = (_QWORD*)LANES64(v533_.v535[167]).n64_u64[0];
            v347 = (_QWORD*)LANES64(v533_.v535[168]).n64_u64[0];
            if (v346 == v347) {
              goto LABEL_294;
            }
            v348 = (unsigned __int8*)&v346[8 * v507];
            v349 = *v348;
            v350 = *((_QWORD*)v348 + 1);
            if ((v349 & 1) == 0) {
              v350 = v349 >> 1;
            }
            if (v340 == v350 &&
                ((v349 & 1) == 0 ? (v351 = (__int64)(v348 + 1))
                                 : (v351 = *((_QWORD*)v348 + 2)),
                 memcmp((__int64)v337, v351, v340) == 0 &&
                     *((_DWORD*)v348 + 6) == LODWORD(v533_.v533[0]) &&
                     *((_DWORD*)v348 + 7) == v531_.v531[0] &&
                     *((_DWORD*)v348 + 12) == v343)) {
              v5 = v533_.v535;
              *((_QWORD*)v348 + 5) += LANES64(v533_.v535[175]).n64_u64[0];
            }
            else {
            LABEL_294:
              if ((unsigned __int64)v347 >=
                  LANES64(v533_.v535[169]).n64_u64[0]) {
                v352 = (char*)GameHr_1918160(v497),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v415 =
                    COERCE_AS(__typeof__(v415),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v432 =
                    COERCE_AS(__typeof__(v432),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v442 =
                    COERCE_AS(__typeof__(v442),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v446 =
                    COERCE_AS(__typeof__(v446),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v451 =
                    COERCE_AS(__typeof__(v451),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v455 =
                    COERCE_AS(__typeof__(v455),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v458 =
                    COERCE_AS(__typeof__(v458),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v463 =
                    COERCE_AS(__typeof__(v463),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v467 =
                    COERCE_AS(__typeof__(v467),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v484 =
                    COERCE_AS(__typeof__(v484),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v347[6] = 0;
                v347[7] = 0;
                v347[4] = 0;
                v347[5] = 0;
                v352 = (char*)(v347 + 8);
                v347[2] = 0;
                v347[3] = 0;
                *v347 = 0;
                v347[1] = 0;
              }
              v353 = v533_.v535;
              v354 = v340;
              LANES64(v533_.v535[168]).n64_u64[0] = (unsigned __int64)v352;
              v5 = v353;
              GameRoutine_60a060(v352 - 64, (__int64)v337, v354),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v415 = COERCE_AS(
                      __typeof__(v415),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v432 = COERCE_AS(
                      __typeof__(v432),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v442 = COERCE_AS(
                      __typeof__(v442),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v446 = COERCE_AS(
                      __typeof__(v446),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v451 = COERCE_AS(
                      __typeof__(v451),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v455 = COERCE_AS(
                      __typeof__(v455),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v458 = COERCE_AS(
                      __typeof__(v458),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v463 = COERCE_AS(
                      __typeof__(v463),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v467 = COERCE_AS(
                      __typeof__(v467),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v484 = COERCE_AS(
                      __typeof__(v484),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v89 = COERCE_AS(
                      __typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              *((_DWORD*)v352 - 10) = v533_.v533[0];
              v355 = v531_.v531[0];
              *((_DWORD*)v352 - 9) = v531_.v531[0];
              *((_QWORD*)v352 - 4) =
                  *(_QWORD*)(LANES64(v5[29]).n64_u64[0] + 8 * v355) -
                  2 * LANES64(v5[175]).n64_u64[0];
              v356 = LANES64(v5[175]).n64_u64[0];
              *((_DWORD*)v352 - 4) = v343;
              *((_QWORD*)v352 - 3) = v356;
              v507 = ((__int64)(LANES64(v5[168]).n64_u64[0] -
                                LANES64(v5[167]).n64_u64[0]) >>
                      6) -
                     1;
            }
            v167 += LANES64(v5[171]).n64_u64[0];
            spine_SpineObject_Destroy_SpineObject_4e8a0(&v517_.v517),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v415 =
                    COERCE_AS(__typeof__(v415),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v432 =
                    COERCE_AS(__typeof__(v432),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v442 =
                    COERCE_AS(__typeof__(v442),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v446 =
                    COERCE_AS(__typeof__(v446),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v451 =
                    COERCE_AS(__typeof__(v451),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v455 =
                    COERCE_AS(__typeof__(v455),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v458 =
                    COERCE_AS(__typeof__(v458),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v463 =
                    COERCE_AS(__typeof__(v463),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v467 =
                    COERCE_AS(__typeof__(v467),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v484 =
                    COERCE_AS(__typeof__(v484),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v156 = a4;
          LABEL_299:
            spine_SkeletonClipping_clipEnd_3af70(&v523_.v523, v170),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v415 =
                    COERCE_AS(__typeof__(v415),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v432 =
                    COERCE_AS(__typeof__(v432),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v442 =
                    COERCE_AS(__typeof__(v442),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v446 =
                    COERCE_AS(__typeof__(v446),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v451 =
                    COERCE_AS(__typeof__(v451),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v455 =
                    COERCE_AS(__typeof__(v455),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v458 =
                    COERCE_AS(__typeof__(v458),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v463 =
                    COERCE_AS(__typeof__(v463),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v467 =
                    COERCE_AS(__typeof__(v467),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v484 =
                    COERCE_AS(__typeof__(v484),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v357 = spine_Slot_getData(v170),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v517_.v517 = *(float32x2_t**)(spine_SlotData_getName(v357) + 16),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v517_.v518 = strlen_alt1((const char*)v517_.v517),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v533_.v533[0] = (__int64*)&v517_.v517;
            v358 = SpineModel_19184e0((float*)&v5[160], (__int64*)&v517_.v517,
                                      v533_.v533),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v359 = v358 + 4;
            if (*((int*)v358 + 24) >= 1) {
              v360 = *((_DWORD*)v358 + 12);
              v361 = (float*)v358;
              v362 = v360 < -1;
              v363 = ((_BYTE)v360 + 1) & 1;
              if (v362) {
                v363 = -v363;
              }
              *((_DWORD*)v358 + 12) = v363;
              v364 = v359[v363];
              v365 = (*(__int64 (**)(__int64))(*(_QWORD*)v364 + 56LL))(v364),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v415 = COERCE_AS(__typeof__(v415),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v432 = COERCE_AS(__typeof__(v432),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v442 = COERCE_AS(__typeof__(v442),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v446 = COERCE_AS(__typeof__(v446),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v451 = COERCE_AS(__typeof__(v451),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v455 = COERCE_AS(__typeof__(v455),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v458 = COERCE_AS(__typeof__(v458),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v463 = COERCE_AS(__typeof__(v463),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v467 = COERCE_AS(__typeof__(v467),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v484 = COERCE_AS(__typeof__(v484),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              *(float*)v365 = v361[22] + 0x1.0000000000000p+0f;
              *(float*)(v365 + 4) = v361[23];
              (*(void (**)(__int64))(*(_QWORD*)v364 + 64LL))(v364),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v415 = COERCE_AS(
                      __typeof__(v415),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v432 = COERCE_AS(
                      __typeof__(v432),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v442 = COERCE_AS(
                      __typeof__(v442),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v446 = COERCE_AS(
                      __typeof__(v446),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v451 = COERCE_AS(
                      __typeof__(v451),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v455 = COERCE_AS(
                      __typeof__(v455),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v458 = COERCE_AS(
                      __typeof__(v458),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v463 = COERCE_AS(
                      __typeof__(v463),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v467 = COERCE_AS(
                      __typeof__(v467),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v484 = COERCE_AS(
                      __typeof__(v484),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v89 = COERCE_AS(
                      __typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              --*((_DWORD*)v361 + 24);
            }
            *(_QWORD*)(*v497 + (v507 << 6) + 56) = v359;
            goto LABEL_216;
          }
          v344 = v339 == 0;
          v345 = 4;
          goto LABEL_279;
        }
        goto LABEL_215;
      }
      v280 =
          (const char**)(*(__int64 (**)(__int64))(*(_QWORD*)v172 + 16LL))(v172),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (!spine_RTTI_isExactly(v280, (const char**)&GameData_21771f0)) {
        goto LABEL_299;
      }
      spine_SkeletonClipping_clipStart(&v523_.v523, v170, v172),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_216:
      if (++v168 == v166) {
        goto LABEL_317;
      }
    }
    if (*(float*)(spine_RegionAttachment_getColor(v172) + 20) != 0x0.0p+0f) {
      v175 = LANES64(v5[171]).n64_u64[0];
      v176 = LANES64(v5[172]).n64_u64[0];
      LANES64(v5[171]).n64_u64[0] = 4;
      v177 = 4;
      if (v176 <= 3) {
        v178 = LANES64(v5[173]).n64_u64[0];
        LANES64(v5[172]).n64_u64[0] = 8;
        v179 = GameRoutine_19e10(),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v180 = (*(__int64 (**)(__int64, unsigned __int64, __int64, const char*,
                               __int64))(*(_QWORD*)v179 + 32LL))(
            v179, v178, 256, "/Program/Externals/Spine/include\\spine/Vector.h",
            82),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v177 = LANES64(v5[171]).n64_u64[0];
        LANES64(v5[173]).n64_u64[0] = v180;
      }
      if (v175 < v177) {
        v181 = 32 * v175;
        do {
          ++v175;
          v182 = (_QWORD*)(LANES64(v5[173]).n64_u64[0] + v181);
          v181 += 32;
          v182[2] = 0;
          v182[3] = 0;
          *v182 = 0;
          v182[1] = 0;
        } while (v175 < LANES64(v5[171]).n64_u64[0]);
      }
      ((void (*)(__int64, __int64, unsigned __int64, _QWORD,
                 __int64))GameRoutine_1bc10)(v172, v170,
                                             LANES64(v5[173]).n64_u64[0], 0, 8),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v183 = LANES64(v5[12]).n64_u64[0];
      v517_.v517 = (float32x2_t*)spine_Color_vtable;
      v517_.v518 = 0;
      v519_.v519[0] = 0;
      v184 = *(float*)(spine_Skeleton_getColor(v183) + 8),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v185 =
          v184 *
          *(float*)(spine_Skeleton_getColor(LANES64(v5[12]).n64_u64[0]) + 20),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v186 = v185 * *(float*)(spine_Slot_getColor(v170) + 8),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v187 = *(float*)(spine_Slot_getColor(v170) + 20),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v188 = LANES64(v5[12]).n64_u64[0];
      *(float*)&v517_.v518 = v186 * v187;
      v189 = *(float*)(spine_Skeleton_getColor(v188) + 12),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v190 =
          v189 *
          *(float*)(spine_Skeleton_getColor(LANES64(v5[12]).n64_u64[0]) + 20),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v191 = v190 * *(float*)(spine_Slot_getColor(v170) + 12),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v192 = *(float*)(spine_Slot_getColor(v170) + 20),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v193 = LANES64(v5[12]).n64_u64[0];
      *((float*)&v517_.v518 + 1) = v191 * v192;
      v194 = *(float*)(spine_Skeleton_getColor(v193) + 16),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v195 =
          v194 *
          *(float*)(spine_Skeleton_getColor(LANES64(v5[12]).n64_u64[0]) + 20),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v196 = v195 * *(float*)(spine_Slot_getColor(v170) + 16),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v197 = *(float*)(spine_Slot_getColor(v170) + 20),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v198 = LANES64(v5[12]).n64_u64[0];
      *(float*)v519_.v519 = v196 * v197;
      v199 = *(float*)(spine_Skeleton_getColor(v198) + 20),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *((float*)v519_.v519 +
        1) = v199 * *(float*)(spine_Slot_getColor(v170) + 20),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v200 = spine_RegionAttachment_getUVs(v172),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (LANES64(v5[171]).n64_u64[0] != 0) {
        v201 = 1;
        v202 = 0;
        v203 = 0;
        while (v201 - 1 < *(_QWORD*)(v200 + 8)) {
          v204 = LANES64(v5[173]).n64_u64[0] + 4 * v202;
          *(_DWORD*)(v204 + 8) = *(_DWORD*)(*(_QWORD*)(v200 + 24) + v202);
          if (v201 >= *(_QWORD*)(v200 + 8)) {
            break;
          }
          ++v203;
          v201 += 2LL;
          v205 = *(_QWORD*)(v200 + 24) + v202;
          v202 += 8;
          *(_DWORD*)(v204 + 12) = *(_DWORD*)(v205 + 4);
          *(_QWORD*)(v204 + 16) = v517_.v518;
          *(_QWORD*)(v204 + 24) = v519_.v519[0];
          if (v203 >= LANES64(v5[171]).n64_u64[0]) {
            goto LABEL_177;
          }
        }
        goto LABEL_444;
      }
    LABEL_177:
      v206 = LANES64(v5[175]).n64_u64[0];
      v207 = LANES64(v5[176]).n64_u64[0];
      LANES64(v5[175]).n64_u64[0] = 6;
      v208 = 6;
      if (v207 <= 5) {
        v209 = LANES64(v5[177]).n64_u64[0];
        LANES64(v5[176]).n64_u64[0] = 10;
        v210 = GameRoutine_19e10(),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LANES64(v5[177]).n64_u64[0] =
            (*(__int64 (**)(__int64, unsigned __int64, __int64, const char*,
                            __int64))(*(_QWORD*)v210 + 32LL))(
                v210, v209, 20,
                "/Program/Externals/Spine/include\\spine/Vector.h", 82),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_232;
      }
      while (v206 < v208) {
        *(_WORD*)(LANES64(v5[177]).n64_u64[0] + 2 * v206++) = 0;
      LABEL_232:
        v208 = LANES64(v5[175]).n64_u64[0];
      }
      v295 = LANES64(v5[177]).n64_u64[0];
      v296 = GameData_2175a30;
      *(_DWORD*)(v295 + 8) = GameData_2175a38;
      *(_QWORD*)v295 = v296;
      if (spine_SkeletonClipping_isClipping((__int64)&v523_.v523)) {
        spine_SkeletonClipping_clipTriangles(
            (__int64)&v523_.v523, LANES64(v5[173]).n64_i64[0],
            (__int64)&GameData_2175a30, 6u, LANES64(v5[173]).n64_u64[0] + 8, 8),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v297 = spine_SkeletonClipping_getClippedVertices(&v523_.v523),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v298 = v5;
        v299 = spine_SkeletonClipping_getClippedUVs(&v523_.v523),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v300 = spine_SkeletonClipping_getClippedVertices(&v523_.v523),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v301 = LANES64(v298[171]).n64_u64[0];
        v302 = LANES64(v298[172]).n64_u64[0];
        v303 = *(_QWORD*)(v300 + 8) >> 1;
        LANES64(v298[171]).n64_u64[0] = v303;
        if (v302 < v303) {
          v490 = v166;
          v304 = v533_.v535;
          v305 = LANES64(v533_.v535[173]).n64_u64[0];
          v306 = (int)(float)((float)v303 * 0x1.c000000000000p+0f);
          if (v306 <= 8) {
            v307 = 8;
          }
          else {
            v307 = v306;
          }
          LANES64(v533_.v535[172]).n64_u64[0] = v307;
          v308 = GameRoutine_19e10(),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          LANES64(v304[173]).n64_u64[0] =
              (*(__int64 (**)(__int64, unsigned __int64, __int64, const char*,
                              __int64))(*(_QWORD*)v308 + 32LL))(
                  v308, v305, 32LL * v307,
                  "/Program/Externals/Spine/include\\spine/Vector.h", 82),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v303 = LANES64(v304[171]).n64_u64[0];
          v166 = v490;
        }
        if (v301 < v303) {
          v309 = v533_.v535;
          v310 = 32 * v301;
          do {
            ++v301;
            v311 = (_QWORD*)(LANES64(v309[173]).n64_u64[0] + v310);
            v310 += 32;
            v311[2] = 0;
            v311[3] = 0;
            *v311 = 0;
            v311[1] = 0;
            v303 = LANES64(v309[171]).n64_u64[0];
          } while (v301 < v303);
        }
        if (v303 != 0) {
          v312 = 28;
          v313 = 1;
          v314 = 0;
          v315 = 0;
          while (v313 - 1 < *(_QWORD*)(v297 + 8)) {
            v316 = LANES64(v533_.v535[173]).n64_u64[0];
            *(_DWORD*)(v316 + v312 - 28) =
                *(_DWORD*)(*(_QWORD*)(v297 + 24) + v314);
            if (v313 >= *(_QWORD*)(v297 + 8)) {
              break;
            }
            v317 = v316 + 4 * v314;
            *(_DWORD*)(v317 + 4) = *(_DWORD*)(*(_QWORD*)(v297 + 24) + v314 + 4);
            if (v313 - 1 >= *(_QWORD*)(v299 + 8)) {
              break;
            }
            *(_DWORD*)(v317 + 8) = *(_DWORD*)(*(_QWORD*)(v299 + 24) + v314);
            if (v313 >= *(_QWORD*)(v299 + 8)) {
              break;
            }
            ++v315;
            v313 += 2LL;
            v318 = *(_DWORD*)(*(_QWORD*)(v299 + 24) + v314 + 4);
            v319 = v316 + 4 * v314;
            v314 += 8;
            *(_DWORD*)(v319 + 12) = v318;
            *(_QWORD*)(v319 + 16) = v517_.v518;
            *(_DWORD*)(v319 + 24) = v519_.v519[0];
            *(_DWORD*)(v316 + v312) = HIDWORD(v519_.v519[0]);
            v312 += 32;
            if (v315 >= LANES64(v533_.v535[171]).n64_u64[0]) {
              goto LABEL_250;
            }
          }
          goto LABEL_444;
        }
      LABEL_250:
        v320 = spine_SkeletonClipping_getClippedTriangles(&v523_.v523),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v5 = v533_.v535;
        v321 = *(_QWORD*)(v320 + 8);
        v322 = LANES64(v533_.v535[175]).n64_u64[0];
        v323 = LANES64(v533_.v535[176]).n64_u64[0];
        LANES64(v533_.v535[175]).n64_u64[0] = v321;
        if (v323 < v321) {
          v324 = LANES64(v5[177]).n64_u64[0];
          v325 = (int)(float)((float)v321 * 0x1.c000000000000p+0f);
          if (v325 <= 8) {
            v326 = 8;
          }
          else {
            v326 = v325;
          }
          LANES64(v5[176]).n64_u64[0] = v326;
          v327 = GameRoutine_19e10(),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          LANES64(v5[177]).n64_u64[0] =
              (*(__int64 (**)(__int64, unsigned __int64, __int64, const char*,
                              __int64))(*(_QWORD*)v327 + 32LL))(
                  v327, v324, 2LL * v326,
                  "/Program/Externals/Spine/include\\spine/Vector.h", 82),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          goto LABEL_256;
        }
        while (v322 < v321) {
          *(_WORD*)(LANES64(v5[177]).n64_u64[0] + 2 * v322++) = 0;
        LABEL_256:
          v321 = LANES64(v5[175]).n64_u64[0];
        }
        v328 = LANES64(v5[177]).n64_i64[0];
        v329 =
            *(_QWORD*)(spine_SkeletonClipping_getClippedTriangles(&v523_.v523) +
                       24),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v330 = spine_SkeletonClipping_getClippedTriangles(&v523_.v523),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        memcpy_alt1(v328, v329, 2LL * *(_QWORD*)(v330 + 8)),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      GameRoutine_1916360(v5, (int*)v533_.v533, LANES64(v5[106]).n64_i64[0],
                          LANES64(v5[173]).n64_i64[0],
                          LANES64(v5[171]).n64_i64[0]),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v331 = LANES64(v5[167]).n64_u64[0];
      if (v331 != LANES64(v5[168]).n64_u64[0] &&
          *(_DWORD*)(v331 + (v507 << 6) + 24) != LODWORD(v533_.v533[0])) {
        v167 = (*(_QWORD*)(LANES64(v5[23]).n64_u64[0] +
                           8LL * SLODWORD(v533_.v533[0])) >>
                5) -
               LANES64(v5[171]).n64_u64[0];
      }
      if (LANES64(v5[175]).n64_u64[0] != 0) {
        v332 = 0;
        do {
          v333 = 2 * v332++;
          *(_WORD*)(LANES64(v5[177]).n64_u64[0] + v333) += v167;
          v334 = LANES64(v5[175]).n64_u64[0];
        } while (v332 < v334);
      }
      else {
        v334 = 0;
      }
      GameRoutine_19164c0(v5, v531_.v531, LANES64(v5[106]).n64_i64[0],
                          LANES64(v5[177]).n64_i64[0], v334),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v335 = spine_RegionAttachment_getRegion(v172),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_268;
    }
  LABEL_215:
    spine_SkeletonClipping_clipEnd_3af70(&v523_.v523, v170),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_216;
  }
LABEL_317:
  spine_SkeletonClipping_clipEnd_3afb0(&v523_.v523),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v373 = game_spine_g_resource_releaser_ptr;
  if ((LANES64(v5[130]).n64_u8[4] & 1) != 0) {
    v374 = (unsigned __int8*)LANES64(v5[167]).n64_u64[0];
    v375 = (unsigned __int8*)LANES64(v5[168]).n64_u64[0];
    if (v374 == v375) {
      goto LABEL_364;
    }
  }
  else {
    if ((*(_BYTE*)(*game_spine_g_resource_releaser_ptr + 80) & 1) == 0) {
      goto LABEL_375;
    }
    v374 = (unsigned __int8*)LANES64(v5[167]).n64_u64[0];
    v375 = (unsigned __int8*)LANES64(v5[168]).n64_u64[0];
    if (v374 == v375) {
      goto LABEL_375;
    }
  }
  v376 = 9;
  v377 = 0;
  v378 = 0;
  v498 = v375;
  v486 = v5 + 110;
  v492 = -1;
  v491 = -1;
  do {
    v508 = v376;
    v379 = *((_QWORD*)v374 + 7) + 16LL * *(int*)(*((_QWORD*)v374 + 7) + 16LL);
    (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 224LL))(*a2, 3, 7, *(_QWORD*)(v379 + 24),
                                *(_QWORD*)(v379 + 32)),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v380 = *v374;
    v381 = *((_QWORD*)v374 + 1);
    v382 = v380 & 1;
    v383 = v380 >> 1;
    if ((v380 & 1) != 0) {
      v384 = *((_QWORD*)v374 + 1);
    }
    else {
      v384 = v380 >> 1;
    }
    if (v378 != v384 || ((v380 & 1) != 0 ? (v385 = *((_QWORD*)v374 + 2))
                                         : (v385 = (__int64)(v374 + 1)),
                         memcmp(v377, v385, v378) != 0)) {
      v386 = LANES64(v533_.v535[16]).n64_u64[0];
      v387 = LANES64(v533_.v535[17]).n64_u64[0];
      if (v386 == v387) {
        v377 = 0;
        v378 = 0;
      LABEL_362:
        v376 = v508;
        v5 = v533_.v535;
        goto LABEL_324;
      }
      while (1) {
        v388 = *(_QWORD*)v386;
        v389 = *(unsigned __int8*)(*(_QWORD*)v386 + 96LL);
        v390 = *(_QWORD*)(*(_QWORD*)v386 + 104LL);
        if ((v389 & 1) == 0) {
          v390 = v389 >> 1;
        }
        if (v390 == v384) {
          v391 = *((_QWORD*)v374 + 2);
          v392 = (v389 & 1) != 0 ? *(_QWORD*)(v388 + 112) : v388 + 97;
          v393 = v382 != 0 ? *((_QWORD*)v374 + 2) : (__int64)(v374 + 1);
          if (memcmp(v392, v393, v384) == 0) {
            break;
          }
        }
        v386 += 8LL;
        if (v386 == v387) {
          v376 = v508;
          v5 = v533_.v535;
          v375 = v498;
          v377 = 0;
          v378 = 0;
          goto LABEL_324;
        }
      }
      if (*(_BYTE*)(v388 + 121) == 1) {
        GameRoutine_5fe0a0(v487, 0, 4u, (unsigned int*)(v388 + 88),
                           (unsigned int*)&v533_.v535[84]),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v394 = *v374;
        v381 = *((_QWORD*)v374 + 1);
        v391 = *((_QWORD*)v374 + 2);
        v382 = v394 & 1;
        v383 = v394 >> 1;
      }
      if (v382 != 0) {
        v377 = v391;
      }
      else {
        v377 = (__int64)(v374 + 1);
      }
      v375 = v498;
      if (v382 != 0) {
        v378 = v381;
      }
      else {
        v378 = v383;
      }
    }
    if (v378 == 0) {
      goto LABEL_362;
    }
    v395 = *((_DWORD*)v374 + 6);
    if (v491 != v395) {
      v396 = *(_QWORD*)(LANES64(v533_.v535[20]).n64_u64[0] + 16LL * v395 +
                        8 * LANES64(v533_.v535[106]).n64_u64[0]);
      v397 = (*(__int64 (**)(__int64))(*(_QWORD*)v396 + 48LL))(v396),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v398 = (*(__int64 (**)(__int64))(*(_QWORD*)v396 + 40LL))(v396),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, _QWORD, __int64, __int64))GameData_2132328[0])(
          v500 + 8, 0, v397, v398),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v491 = v395;
    }
    v399 = *((_DWORD*)v374 + 12);
    v400 = v508;
    v5 = v533_.v535;
    v376 = v508;
    if (v508 != v399) {
      (*(void (**)(__int64, float32x2_t*))GameData_212e888[0])(v500 + 8,
                                                               &v486[v399]),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v400 = *((_DWORD*)v374 + 12);
      v376 = v399;
    }
    v401 = v400 & 0xFFFFFFFD;
    v402 = v401 == 4;
    if (v492 != v402) {
      v403 =
          GameRoutine_5fb900(*(_QWORD*)(*(_QWORD*)(LANES64(v5[119]).n64_u64[0] +
                                                   16LL * (v401 == 4)) +
                                        136LL)),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, _QWORD, __int64))GameData_2132330[0])(
          v500 + 8, *(_QWORD*)(v403 + 8), 3),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v492 = v402;
    }
    v404 = *(_QWORD*)(LANES64(v5[26]).n64_u64[0] + 16LL * *((int*)v374 + 7) +
                      8 * LANES64(v5[106]).n64_u64[0]);
    v405 = (*(__int64 (**)(__int64))(*(_QWORD*)v404 + 48LL))(v404),
    v412 = COERCE_AS(__typeof__(v412),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v415 = COERCE_AS(__typeof__(v415),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v432 = COERCE_AS(__typeof__(v432),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v436 = COERCE_AS(__typeof__(v436),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v442 = COERCE_AS(__typeof__(v442),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v446 = COERCE_AS(__typeof__(v446),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v451 = COERCE_AS(__typeof__(v451),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v455 = COERCE_AS(__typeof__(v455),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v458 = COERCE_AS(__typeof__(v458),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v463 = COERCE_AS(__typeof__(v463),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v467 = COERCE_AS(__typeof__(v467),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v484 = COERCE_AS(__typeof__(v484),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    ((void (*)(__int64, __int64, __int64, _QWORD, __int64))*GameData_2132338)(
        v500 + 8, 4, 1, *((unsigned int*)v374 + 10),
        *((_QWORD*)v374 + 4) + v405),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LABEL_324:
    v374 += 64;
  } while (v374 != v375);
  v156 = a4;
  v373 = game_spine_g_resource_releaser_ptr;
  if (LANES64(v5[130]).n64_u8[4] == 1) {
  LABEL_364:
    v406 = (void (**)(__int64, __int64))GameData_212e738,
    v412 = COERCE_AS(__typeof__(v412),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v415 = COERCE_AS(__typeof__(v415),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v432 = COERCE_AS(__typeof__(v432),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v436 = COERCE_AS(__typeof__(v436),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v442 = COERCE_AS(__typeof__(v442),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v446 = COERCE_AS(__typeof__(v446),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v451 = COERCE_AS(__typeof__(v451),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v455 = COERCE_AS(__typeof__(v455),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v458 = COERCE_AS(__typeof__(v458),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v463 = COERCE_AS(__typeof__(v463),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v467 = COERCE_AS(__typeof__(v467),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v484 = COERCE_AS(__typeof__(v484),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    ((void (*)(__int64, __int64))*GameData_212e738)(v500 + 8, 18),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((LANES64(v5[132]).n64_u8[0] & 1) != 0 ||
        (LANES64(v5[142]).n64_u8[0] & 1) != 0 ||
        (LANES64(v5[152]).n64_u8[0] & 1) != 0 ||
        (LANES64(v5[155]).n64_u8[0] & 1) != 0) {
      v407 = (int)COERCE_FLOAT(LANES64(v5[105]).n64_u64[0]);
      v408 = (int)COERCE_FLOAT(HIDWORD(LANES64(v5[105]).n64_u64[0]));
      (*(void (**)(__int64, _QWORD, _QWORD, _QWORD,
                   _QWORD))GameData_2132310[0])(v500 + 8, 0, 0, v407, v408),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, _QWORD, _QWORD, _QWORD,
                   _QWORD))GameData_2132318[0])(v500 + 8, 0, 0, v407, v408),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v409 = a2;
      v410 = *a2;
      v411 = (*(__int64 (**)(unsigned __int64))(
          *(_QWORD*)LANES64(v5[102]).n64_u64[0] + 32LL))(
          LANES64(v5[102]).n64_u64[0]),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v410 + 96LL))(
          v410, v411, v412),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v517_.v517 = nullptr;
      v517_.v518 = 0;
      (*(void (**)(__int64, _QWORD, float32x2_t**,
                   __int64))GameData_2132320[0])(v500 + 8, 0, &v517_.v517, 15),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v413 = *a2;
      v414 = (*(__int64 (**)(unsigned __int64))(
          *(_QWORD*)LANES64(v5[101]).n64_u64[0] + 40LL))(
          LANES64(v5[101]).n64_u64[0]),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
          *(_QWORD*)v413 + 248LL))(v413, 2, 0, v414, v415,
                                   LANES64(v5[68]).n64_u32[0]),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v416 = LANES64(v5[LANES64(v5[106]).n64_u64[0] + 32]).n64_u64[0];
      v417 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)v416 + 48LL))(v416),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v418 = LANES64(v5[LANES64(v5[106]).n64_u64[0] + 32]).n64_u64[0];
      v419 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)v418 + 40LL))(v418),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, _QWORD, __int64, __int64))GameData_2132328[0])(
          v500 + 8, 0, v417, v419),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      gxc_NvnStateCache_Reset(a2[1]),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      gxc_NvnStateCache_SetCommandList(v409[1], *v409),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v420 = a2[1];
      gxc_NvnStateCache_BindDepthStencilState(v420, GameData_21fdeb8),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      gxc_NvnStateCache_BindBlendState(v420, GameData_21fdee4),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      gxc_NvnStateCache_BindPolygonState(v420, GameData_21fdf08),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      gxc_NvnStateCache_BindMultisampleState(v420, GameData_21fdf14),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      gxc_NvnStateCache_ClearCommandList(a2[1]),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*v409 + 200LL))(
          *v409, 3,
          *(_QWORD*)(*(_QWORD*)(LANES64(v5[122]).n64_u64[0] +
                                16LL *
                                    (((unsigned __int8)(LANES64(v5[132])
                                                            .n64_u8[0] |
                                                        (2 * LANES64(v5[142])
                                                                 .n64_u8[0])) |
                                      (unsigned __int8)(4 * LANES64(v5[152])
                                                                .n64_u8[0])) &
                                     7) +
                                128) +
                     144LL)),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v421 = (*(__int64 (**)(unsigned __int64))(
          *(_QWORD*)LANES64(v5[34]).n64_u64[0] + 48LL))(
          LANES64(v5[34]).n64_u64[0]),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v422 = (void (**)(__int64, __int64, __int64, __int64,
                        __int64))GameData_2132338,
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      ((void (*)(__int64, __int64, __int64, __int64,
                 __int64))*GameData_2132338)(v500 + 8, 4, 1, 6, v421),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v423 = LANES64(v5[155]).n64_f32[1];
      v424 = LANES64(v5[155]).n64_u8[0];
      (*v406)(v500 + 8, 18);
      v425 = LANES64(v5[105]).n64_u64[0];
      v426 = (int)*(float*)&v425;
      if (v424 == 1 && v423 > 0x0.0p+0f) {
        v427 = a2;
        v428 = (int)v426 / 2;
        v429 = (int)*((float*)&v425 + 1) / 2;
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*a2 + 72LL))(*a2, 0, 0, v428, v429),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*v427 + 88LL))(*v427, 0, 0, v428, v429),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v430 = *a2;
        v431 = (*(__int64 (**)(unsigned __int64))(
            *(_QWORD*)LANES64(v5[104]).n64_u64[0] + 32LL))(
            LANES64(v5[104]).n64_u64[0]),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v430 + 96LL))(
            v430, v431, v432),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v433 = *a2;
        v517_.v517 = nullptr;
        v517_.v518 = 0;
        (*(void (**)(__int64, _QWORD, float32x2_t**))(*(_QWORD*)v433 + 144LL))(
            v433, 0, &v517_.v517),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*v427 + 200LL))(
            *v427, 3,
            *(_QWORD*)(*(_QWORD*)LANES64(v5[125]).n64_u64[0] + 144LL)),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v434 = *a2;
        v435 = (*(__int64 (**)(unsigned __int64))(
            *(_QWORD*)LANES64(v5[102]).n64_u64[0] + 40LL))(
            LANES64(v5[102]).n64_u64[0]),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
            *(_QWORD*)v434 + 248LL))(v434, 2, 0, v435, v436,
                                     LANES64(v5[68]).n64_u32[0]),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v437 = (*(__int64 (**)(unsigned __int64))(
            *(_QWORD*)LANES64(v5[34]).n64_u64[0] + 48LL))(
            LANES64(v5[34]).n64_u64[0]),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v438 = v500;
        (*v422)(v500 + 8, 4, 1, 6, v437);
        (*v406)(v500 + 8, 18);
        LODWORD(v434) = (int)COERCE_FLOAT(LANES64(v5[105]).n64_u64[0]) / 2;
        v439 = (int)COERCE_FLOAT(HIDWORD(LANES64(v5[105]).n64_u64[0])) / 2;
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*v427 + 72LL))(*v427, 0, 0, (unsigned int)v434, v439),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*v427 + 88LL))(*v427, 0, 0, (unsigned int)v434, v439),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v440 = *a2;
        v441 = (*(__int64 (**)(unsigned __int64))(
            *(_QWORD*)LANES64(v5[103]).n64_u64[0] + 32LL))(
            LANES64(v5[103]).n64_u64[0]),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v440 + 96LL))(
            v440, v441, v442),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v443 = *a2;
        v517_.v517 = nullptr;
        v517_.v518 = 0;
        (*(void (**)(__int64, _QWORD, float32x2_t**))(*(_QWORD*)v443 + 144LL))(
            v443, 0, &v517_.v517),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*v427 + 200LL))(
            *v427, 3,
            *(_QWORD*)(*(_QWORD*)(LANES64(v5[125]).n64_u64[0] + 16) + 144LL)),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v444 = *a2;
        v445 = (*(__int64 (**)(unsigned __int64))(
            *(_QWORD*)LANES64(v5[104]).n64_u64[0] + 40LL))(
            LANES64(v5[104]).n64_u64[0]),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
            *(_QWORD*)v444 + 248LL))(v444, 2, 0, v445, v446,
                                     LANES64(v5[68]).n64_u32[0]),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v447 = (*(__int64 (**)(unsigned __int64))(
            *(_QWORD*)LANES64(v5[34]).n64_u64[0] + 48LL))(
            LANES64(v5[34]).n64_u64[0]),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*v422)(v500 + 8, 4, 1, 6, v447);
        (*v406)(v500 + 8, 18);
        LODWORD(v444) = (int)COERCE_FLOAT(LANES64(v5[105]).n64_u64[0]);
        v448 = (int)COERCE_FLOAT(HIDWORD(LANES64(v5[105]).n64_u64[0]));
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*v427 + 72LL))(*v427, 0, 0, (unsigned int)v444, v448),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*v427 + 88LL))(*v427, 0, 0, (unsigned int)v444, v448),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v449 = *a2;
        v450 = (*(__int64 (**)(unsigned __int64))(
            *(_QWORD*)LANES64(v5[101]).n64_u64[0] + 32LL))(
            LANES64(v5[101]).n64_u64[0]),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v449 + 96LL))(
            v449, v450, v451),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v452 = *a2;
        v517_.v517 = nullptr;
        v517_.v518 = 0;
        (*(void (**)(__int64, _QWORD, float32x2_t**))(*(_QWORD*)v452 + 144LL))(
            v452, 0, &v517_.v517),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*v427 + 200LL))(
            *v427, 3,
            *(_QWORD*)(*(_QWORD*)(LANES64(v5[125]).n64_u64[0] + 32) + 144LL)),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v453 = *a2;
        v454 = (*(__int64 (**)(unsigned __int64))(
            *(_QWORD*)LANES64(v5[102]).n64_u64[0] + 40LL))(
            LANES64(v5[102]).n64_u64[0]),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
            *(_QWORD*)v453 + 248LL))(v453, 2, 0, v454, v455,
                                     LANES64(v5[68]).n64_u32[0]),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v456 = *a2;
        v457 = (*(__int64 (**)(unsigned __int64))(
            *(_QWORD*)LANES64(v5[103]).n64_u64[0] + 40LL))(
            LANES64(v5[103]).n64_u64[0]),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
            *(_QWORD*)v456 + 248LL))(v456, 2, 1, v457, v458,
                                     LANES64(v5[68]).n64_u32[0]),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v459 = a2;
        v460 = (int)*((float*)&v425 + 1);
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*a2 + 72LL))(*a2, 0, 0, v426,
                                   (unsigned int)(int)*((float*)&v425 + 1)),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*v459 + 88LL))(*v459, 0, 0, v426, v460),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v461 = *a2;
        v462 = (*(__int64 (**)(unsigned __int64))(
            *(_QWORD*)LANES64(v5[101]).n64_u64[0] + 32LL))(
            LANES64(v5[101]).n64_u64[0]),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v461 + 96LL))(
            v461, v462, v463),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v464 = *a2;
        v517_.v517 = nullptr;
        v517_.v518 = 0;
        (*(void (**)(__int64, _QWORD, float32x2_t**))(*(_QWORD*)v464 + 144LL))(
            v464, 0, &v517_.v517),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*v459 + 200LL))(
            *v459, 3, *(_QWORD*)(LANES64(v5[128]).n64_u64[0] + 144)),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v465 = *a2;
        v466 = (*(__int64 (**)(unsigned __int64))(
            *(_QWORD*)LANES64(v5[102]).n64_u64[0] + 40LL))(
            LANES64(v5[102]).n64_u64[0]),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
            *(_QWORD*)v465 + 248LL))(v465, 2, 0, v466, v467,
                                     LANES64(v5[68]).n64_u32[0]),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v438 = v500;
      }
      v468 = (*(__int64 (**)(unsigned __int64))(
          *(_QWORD*)LANES64(v5[34]).n64_u64[0] + 48LL))(
          LANES64(v5[34]).n64_u64[0]),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v415 = COERCE_AS(__typeof__(v415),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v432 = COERCE_AS(__typeof__(v432),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v442 = COERCE_AS(__typeof__(v442),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v446 = COERCE_AS(__typeof__(v446),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v451 = COERCE_AS(__typeof__(v451),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v455 = COERCE_AS(__typeof__(v455),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v458 = COERCE_AS(__typeof__(v458),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v463 = COERCE_AS(__typeof__(v463),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v467 = COERCE_AS(__typeof__(v467),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v484 = COERCE_AS(__typeof__(v484),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*v422)(v438 + 8, 4, 1, 6, v468);
      (*v406)(v438 + 8, 18);
      v156 = a4;
    }
    v469 = LANES64(v5[165]).n64_u64[0];
    if (v469 != 0) {
      (*(void (**)(unsigned __int64, float32x2_t*, __int64*, unsigned __int64))(
          *(_QWORD*)v469 + 56LL))(v469, v5, a2, LANES64(v5[101]).n64_u64[0]),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
LABEL_375:
  if (LANES64(v5[130]).n64_u8[4] == 1 && *(_BYTE*)(*v373 + 80) == 1) {
    v470 = *(_QWORD*)(v156 + 32);
    v517_.v517 = v5;
    if (v470 != 0) {
      if (v470 == v156) {
        v519_.v520 = v519_.v519;
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v470 + 24LL))(v470,
                                                                v519_.v519),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v519_.v520 =
            (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v470 + 16LL))(v470),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else {
      v519_.v520 = nullptr;
    }
    v471 = *(_QWORD*)(v485 + 32);
    if (v471 != 0) {
      if (v471 == v485) {
        v521_.v522 = v521_.v521;
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v471 + 24LL))(v471,
                                                               v521_.v521),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v521_.v522 =
            (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v471 + 16LL))(v471),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else {
      v521_.v522 = nullptr;
    }
    v510 = (const char*)v517_.v517;
    if (v519_.v520 != nullptr) {
      if (v519_.v520 == v519_.v519) {
        v511_.v512 = v511_.v511;
        (*(void (**)(__int64))(*v519_.v520 + 24LL))((__int64)v519_.v520),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v511_.v512 = (_BYTE*)(*(__int64 (**)(__int64))(*v519_.v520 + 16LL))(
            (__int64)v519_.v520),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else {
      v511_.v512 = nullptr;
    }
    if (v521_.v522 != nullptr) {
      if (v521_.v522 == v521_.v521) {
        v513_.v514 = v513_.v513;
        (*(void (**)(__int64))(*(_QWORD*)v521_.v522 + 24LL))(
            (__int64)v521_.v522),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v513_.v514 = (_BYTE*)(*(__int64 (**)(__int64))(
            *(_QWORD*)v521_.v522 + 16LL))((__int64)v521_.v522),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else {
      v513_.v514 = nullptr;
    }
    v472 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0),
    v412 = COERCE_AS(__typeof__(v412),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v415 = COERCE_AS(__typeof__(v415),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v432 = COERCE_AS(__typeof__(v432),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v436 = COERCE_AS(__typeof__(v436),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v442 = COERCE_AS(__typeof__(v442),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v446 = COERCE_AS(__typeof__(v446),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v451 = COERCE_AS(__typeof__(v451),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v455 = COERCE_AS(__typeof__(v455),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v458 = COERCE_AS(__typeof__(v458),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v463 = COERCE_AS(__typeof__(v463),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v467 = COERCE_AS(__typeof__(v467),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v484 = COERCE_AS(__typeof__(v484),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *v472 = cspine_SpineModel_Draw_lambda0_Destructor_ptr;
    v473 = v511_.v512;
    v472[2] = v510;
    if (v473 != nullptr) {
      if (v473 == v511_.v511) {
        v472[8] = v472 + 4;
        (*(void (**)(_BYTE*))(*(_QWORD*)v473 + 24LL))(v473),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v472[8] = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v473 + 16LL))(v473),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else {
      v472[8] = 0;
    }
    v474 = v513_.v514;
    if (v513_.v514 != nullptr) {
      if (v513_.v514 == v513_.v513) {
        v472[14] = v472 + 10;
        (*(void (**)(_BYTE*))(*(_QWORD*)v474 + 24LL))(v474),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v415 = COERCE_AS(__typeof__(v415),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v432 = COERCE_AS(__typeof__(v432),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v442 = COERCE_AS(__typeof__(v442),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v446 = COERCE_AS(__typeof__(v446),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v451 = COERCE_AS(__typeof__(v451),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v455 = COERCE_AS(__typeof__(v455),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v458 = COERCE_AS(__typeof__(v458),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v463 = COERCE_AS(__typeof__(v463),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v467 = COERCE_AS(__typeof__(v467),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v484 = COERCE_AS(__typeof__(v484),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v472[14] = (*(__int64 (**)(__int64))(*(_QWORD*)v513_.v514 + 16LL))(
            (__int64)v513_.v514),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else {
      v472[14] = 0;
    }
    v515_.v516 = v472;
    v533_.v534 = v533_.v533;
    v531_.v532 = v531_.v531;
    v475 = *(char***)(*game_g_frame_clock_ptr[0] + 16664);
    v533_.v533[0] = (__int64*)GameData_2109ae8;
    *(_QWORD*)v531_.v531 = GameData_2109b78;
    GameRoutine_beefc0(v475, (__int64)v515_.v515, (__int64)v533_.v533,
                       (__int64)v531_.v531, 3u, 0, 0),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v415 = COERCE_AS(__typeof__(v415),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v432 = COERCE_AS(__typeof__(v432),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v442 = COERCE_AS(__typeof__(v442),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v446 = COERCE_AS(__typeof__(v446),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v451 = COERCE_AS(__typeof__(v451),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v455 = COERCE_AS(__typeof__(v455),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v458 = COERCE_AS(__typeof__(v458),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v463 = COERCE_AS(__typeof__(v463),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v467 = COERCE_AS(__typeof__(v467),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v484 = COERCE_AS(__typeof__(v484),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v531_.v532 == v531_.v531) {
      v476 = 32;
    LABEL_411:
      (*(void (**)(__int64))(*(_QWORD*)v531_.v532 + v476))((__int64)v531_.v532),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else if (v531_.v532 != nullptr) {
      v476 = 40;
      goto LABEL_411;
    }
    if (v533_.v534 == v533_.v533) {
      v477 = 4;
    LABEL_416:
      ((void (*)(void*))(*v533_.v534)[v477])(v533_.v534),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else if (v533_.v534 != nullptr) {
      v477 = 5;
      goto LABEL_416;
    }
    if (v515_.v516 == v515_.v515) {
      v478 = 32;
    LABEL_421:
      (*(void (**)(__int64))(*(_QWORD*)v515_.v516 + v478))((__int64)v515_.v516),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else if (v515_.v516 != nullptr) {
      v478 = 40;
      goto LABEL_421;
    }
    if (v513_.v514 == v513_.v513) {
      v479 = 32;
    LABEL_426:
      (*(void (**)(__int64))(*(_QWORD*)v513_.v514 + v479))((__int64)v513_.v514),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else if (v513_.v514 != nullptr) {
      v479 = 40;
      goto LABEL_426;
    }
    if (v511_.v512 == v511_.v511) {
      v480 = 32;
    LABEL_431:
      (*(void (**)(__int64))(*(_QWORD*)v511_.v512 + v480))((__int64)v511_.v512),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else if (v511_.v512 != nullptr) {
      v480 = 40;
      goto LABEL_431;
    }
    if (v521_.v522 == v521_.v521) {
      v481 = 32;
    LABEL_436:
      (*(void (**)(__int64))(*(_QWORD*)v521_.v522 + v481))((__int64)v521_.v522),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else if (v521_.v522 != nullptr) {
      v481 = 40;
      goto LABEL_436;
    }
    if (v519_.v520 == v519_.v519) {
      v482 = 32;
    LABEL_441:
      (*(void (**)(__int64))(*v519_.v520 + v482))((__int64)v519_.v520),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v415 = COERCE_AS(__typeof__(v415),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v432 = COERCE_AS(__typeof__(v432),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v442 = COERCE_AS(__typeof__(v442),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v446 = COERCE_AS(__typeof__(v446),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v451 = COERCE_AS(__typeof__(v451),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v455 = COERCE_AS(__typeof__(v455),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v458 = COERCE_AS(__typeof__(v458),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v463 = COERCE_AS(__typeof__(v463),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v467 = COERCE_AS(__typeof__(v467),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v484 = COERCE_AS(__typeof__(v484),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else if (v519_.v520 != nullptr) {
      v482 = 40;
      goto LABEL_441;
    }
  }
  return (float32x2_t*)SkeletonClipping_Destructor(&v523_.v523);
}

__int64 game_1919b00()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;

  v0 = *GameData_212c740;
  if (*GameData_212c740 != 0) {
    *(_QWORD*)(v0 + 64) = "Contents:/UI/Face/Default.sprop";
    *(_QWORD*)(v0 + 72) = 31;
  }
  GameRoutine_191d520((void*)(&v16_.v16), 1);
  v1 = v16_.v17;
  if (v16_.v17 != 0) {
    v2 = std___1___shared_weak_count_lock(v16_.v17);
    v3 = v16_.v16;
    v4 = v2;
    std___1___shared_weak_count___release_weak_alt1(v1);
    if (v4 != 0 && v3 != 0) {
      game_191d680(v3, 0);
    }
    else if (v4 == 0) {
      goto LABEL_10;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt1(v4);
    }
  }
LABEL_10:
  v5 = GameData_226b6b0;
  if (GameData_226b6b0 == 0) {
    v6 = fw_memory_g_heap_manager_ptr;
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        81976, 16, 0);
    v8 = (_QWORD*)(v7 + 81920);
    *(_QWORD*)v7 = GameData_21300f8 + 2;
    *(_DWORD*)(v7 + 8) = 32;
    memset(v7 + 16, 0, 0x14000u);
    v5 = v7;
    v9 = 0;
    v10 = GameData_212dea8 + 2;
    v11 = GameData_212fca0[0] + 2;
    do {
      v12 = v7 + v9;
      v9 += 640;
      *(_QWORD*)(v12 + 16) = 0;
      *(_QWORD*)(v12 + 24) = 0;
      *(_QWORD*)(v12 + 32) = 0;
      *(_QWORD*)(v12 + 40) = v10;
      *(_QWORD*)(v12 + 48) = 0;
      *(_QWORD*)(v12 + 56) = 0;
      *(_QWORD*)(v12 + 64) = 0;
      *(_QWORD*)(v12 + 120) = v11;
      *(_QWORD*)(v12 + 128) = -1;
      *(_DWORD*)(v12 + 136) = 0;
      *(_DWORD*)(v12 + 168) = 0;
      *(_BYTE*)(v12 + 48) = 0;
      *(_DWORD*)(v12 + 72) = 0;
      *(_BYTE*)(v12 + 76) = 0;
      *(_QWORD*)(v12 + 80) = 0;
      *(_QWORD*)(v12 + 88) = 0;
      *(_QWORD*)(v12 + 96) = 0;
      *(_QWORD*)(v12 + 104) = 0;
      *(_BYTE*)(v12 + 112) = 0;
      *(_DWORD*)(v12 + 116) = 1;
      *(_QWORD*)(v12 + 144) = 0;
      *(_QWORD*)(v12 + 152) = 0;
      *(_QWORD*)(v12 + 160) = 0;
      *(_QWORD*)(v12 + 176) = 0;
      *(_QWORD*)(v12 + 184) = 0;
      *(_QWORD*)(v12 + 192) = 0;
      *(_QWORD*)(v12 + 200) = v10;
      *(_QWORD*)(v12 + 208) = 0;
      *(_QWORD*)(v12 + 216) = 0;
      *(_QWORD*)(v12 + 224) = 0;
      *(_QWORD*)(v12 + 280) = v11;
      *(_QWORD*)(v12 + 288) = -1;
      *(_DWORD*)(v12 + 296) = 0;
      *(_DWORD*)(v12 + 328) = 0;
      *(_BYTE*)(v12 + 208) = 0;
      *(_BYTE*)(v12 + 236) = 0;
      *(_DWORD*)(v12 + 232) = 0;
      *(_BYTE*)(v12 + 272) = 0;
      *(_QWORD*)(v12 + 256) = 0;
      *(_QWORD*)(v12 + 264) = 0;
      *(_QWORD*)(v12 + 240) = 0;
      *(_QWORD*)(v12 + 248) = 0;
      *(_DWORD*)(v12 + 276) = 1;
      *(_QWORD*)(v12 + 312) = 0;
      *(_QWORD*)(v12 + 320) = 0;
      *(_QWORD*)(v12 + 304) = 0;
      *(_QWORD*)(v12 + 336) = 0;
      *(_QWORD*)(v12 + 344) = 0;
      *(_QWORD*)(v12 + 352) = 0;
      *(_QWORD*)(v12 + 360) = v10;
      *(_QWORD*)(v12 + 376) = 0;
      *(_QWORD*)(v12 + 384) = 0;
      *(_QWORD*)(v12 + 368) = 0;
      *(_QWORD*)(v12 + 440) = v11;
      *(_QWORD*)(v12 + 448) = -1;
      *(_DWORD*)(v12 + 456) = 0;
      *(_DWORD*)(v12 + 488) = 0;
      *(_BYTE*)(v12 + 368) = 0;
      *(_DWORD*)(v12 + 392) = 0;
      *(_BYTE*)(v12 + 396) = 0;
      *(_BYTE*)(v12 + 432) = 0;
      *(_QWORD*)(v12 + 416) = 0;
      *(_QWORD*)(v12 + 424) = 0;
      *(_QWORD*)(v12 + 400) = 0;
      *(_QWORD*)(v12 + 408) = 0;
      *(_DWORD*)(v12 + 436) = 1;
      *(_QWORD*)(v12 + 472) = 0;
      *(_QWORD*)(v12 + 480) = 0;
      *(_QWORD*)(v12 + 464) = 0;
      *(_QWORD*)(v12 + 504) = 0;
      *(_QWORD*)(v12 + 512) = 0;
      *(_QWORD*)(v12 + 496) = 0;
      *(_QWORD*)(v12 + 520) = v10;
      *(_QWORD*)(v12 + 544) = 0;
      *(_QWORD*)(v12 + 536) = 0;
      *(_QWORD*)(v12 + 528) = 0;
      *(_QWORD*)(v12 + 608) = -1;
      *(_QWORD*)(v12 + 600) = v11;
      *(_DWORD*)(v12 + 616) = 0;
      *(_DWORD*)(v12 + 648) = 0;
      *(_BYTE*)(v12 + 528) = 0;
      *(_BYTE*)(v12 + 556) = 0;
      *(_DWORD*)(v12 + 552) = 0;
      *(_BYTE*)(v12 + 592) = 0;
      *(_QWORD*)(v12 + 584) = 0;
      *(_QWORD*)(v12 + 576) = 0;
      *(_QWORD*)(v12 + 568) = 0;
      *(_QWORD*)(v12 + 560) = 0;
      *(_DWORD*)(v12 + 596) = 1;
      *(_QWORD*)(v12 + 640) = 0;
      *(_QWORD*)(v12 + 632) = 0;
      *(_QWORD*)(v12 + 624) = 0;
    } while (v9 != 81920);
    v13 = GameData_226b6b0;
    GameData_226b6b0 = v5;
    v8[3] = v8 + 3;
    v8[4] = v8 + 3;
    *(_QWORD*)(v5 + 81960) = 0;
    *(_QWORD*)(v5 + 81968) = 0;
    v8[2] = v8 + 2;
    if (v13 != 0) {
      FaceTextureGenerator_Destructor(v13);
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v14, v13);
      v5 = GameData_226b6b0;
    }
  }
  GameRoutine_111b280(v5, 0x20u, 0x1F4u, 0x1F4u);
  return DGame_111aac0((_QWORD*)GameData_226b6b0);
}

void game_191f9e0(__int64 a1, __int64* a2, __int64* a3, __int64* a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  float v21;
  _QWORD* v22;
  float v23;
  float v24;
  _BOOL8 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 primeEm;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  _QWORD* v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;

  v5 = *a2;
  v54 = *a2;
  v9 = std___1___hash_memory((__int64)&v54, 8u);
  v10 = *(_QWORD*)(a1 + 8);
  v11 = v9;
  if (v10 != 0) {
    v12 = v10 - 1;
    if ((v10 & (v10 - 1)) != 0) {
      v4 = v9;
      if (v9 >= v10) {
        v4 = v9 % v10;
      }
    }
    else {
      v4 = v12 & v9;
    }
    v13 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
    if (v13 != nullptr) {
      v14 = (_QWORD*)*v13;
      if (v14 != nullptr) {
        if ((v10 & v12) == 0) {
          while (1) {
            v16 = v14[1];
            if (v16 == v9) {
              if (v14[2] == v5) {
                return;
              }
            }
            else if ((v16 & v12) != v4) {
              goto LABEL_22;
            }
            v14 = (_QWORD*)*v14;
            if (v14 == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v15 = v14[1];
          if (v15 == v9) {
            if (v14[2] == v5) {
              return;
            }
          }
          else {
            if (v15 >= v10) {
              v15 %= v10;
            }
            if (v15 != v4) {
              break;
            }
          }
          v14 = (_QWORD*)*v14;
        } while (v14 != nullptr);
      }
    }
  }
LABEL_22:
  v17 = (__int64*)fw_memory_g_heap_manager_ptr;
  v18 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v19 = *a3;
  v20 = *a4;
  v21 = *(float*)(a1 + 32);
  v22 = v18;
  *v18 = 0;
  v18[1] = v11;
  v18[2] = v19;
  v18[3] = v20;
  v23 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v10 == 0 || (float)(v21 * (float)v10) < v23) {
    v24 = v23 / v21;
    v25 = true;
    if (v10 >= 3) {
      v25 = (v10 & (v10 - 1)) != 0;
    }
    v26 = v25 | (2 * v10);
    v27 = vcvtps_u64_f32(v24);
    if (v26 <= v27) {
      v28 = v27;
    }
    else {
      v28 = v26;
    }
    if (v28 == 1) {
      v28 = 2;
    }
    else if ((v28 & (v28 - 1)) != 0) {
      primeEm = std___1___next_prime(v28);
      v10 = *(_QWORD*)(a1 + 8);
      v28 = primeEm;
    }
    if (v28 <= v10) {
      if (v28 >= v10) {
        goto LABEL_83;
      }
      v35 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v10 < 3 || (v10 & (v10 - 1)) != 0) {
        v35 = std___1___next_prime(v35);
      }
      else {
        v36 = 1LL << (-(char)__clz(v35 - 1) & 63);
        if (v35 >= 2) {
          v35 = v36;
        }
      }
      if (v28 <= v35) {
        v28 = v35;
      }
      if (v28 >= v10) {
        goto LABEL_83;
      }
      if (v28 == 0) {
        v48 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v48 != 0) {
          v49 = 128;
          if (*(_QWORD*)(*v17 + 200) == 0) {
            v49 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v17 + v49, v48);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_83;
      }
    }
    if (v28 >> 61 != 0) {
      GameRoutine_60a210();
    }
    v30 = fw_memory_HeapManager_Allocate(*v17, 8 * v28, 16, 0);
    v31 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v30;
    if (v31 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v17 + 200) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v17 + v32, v31);
    }
    v33 = v28 & 7;
    *(_QWORD*)(a1 + 8) = v28;
    if (v28 >= 8) {
      v34 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 48) = 0;
        v37 = *(_QWORD*)a1 + 8 * v34;
        v34 += 8;
        *(_QWORD*)(v37 + 56) = 0;
      } while ((v28 & 0x1FFFFFFFFFFFFFF8LL) != v34);
    }
    else {
      v34 = 0;
    }
    if ((v28 & 7) != 0) {
      v38 = 8 * v34;
      do {
        --v33;
        *(_QWORD*)(*(_QWORD*)a1 + v38) = 0;
        v38 += 8;
      } while (v33 != 0);
    }
    v40 = a1 + 16;
    v39 = *(_QWORD**)(a1 + 16);
    if (v39 != nullptr) {
      v41 = v39[1];
      v42 = v28 - 1;
      if ((v28 & (v28 - 1)) != 0) {
        if (v41 >= v28) {
          v41 %= v28;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v40;
        v43 = (_QWORD*)*v39;
        if (*v39 == 0) {
          goto LABEL_83;
        }
        while (1) {
          v44 = v43[1];
          if (v44 >= v28) {
            v44 %= v28;
          }
          if (v44 != v41) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v44) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = v39;
              goto LABEL_60;
            }
            *v39 = *v43;
            *v43 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v44);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v44) = v43;
            v43 = v39;
          }
          v44 = v41;
        LABEL_60:
          v39 = v43;
          v43 = (_QWORD*)*v43;
          v41 = v44;
          if (v43 == nullptr) {
            goto LABEL_83;
          }
        }
      }
      v45 = v41 & v42;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v45) = v40;
      while (1) {
        v46 = (_QWORD*)*v39;
        if (*v39 == 0) {
          break;
        }
        v47 = v46[1] & v42;
        if (v47 == v45) {
          v39 = (_QWORD*)*v39;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v47) != 0) {
          *v39 = *v46;
          *v46 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v47);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v47) = v46;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v47) = v39;
          v39 = v46;
          v45 = v47;
        }
      }
    }
  LABEL_83:
    v10 = *(_QWORD*)(a1 + 8);
    if ((v10 & (v10 - 1)) != 0) {
      if (v11 >= v10) {
        v4 = v11 % v10;
      }
      else {
        v4 = v11;
      }
    }
    else {
      v4 = (v10 - 1) & v11;
    }
  }
  v50 = *(_QWORD*)a1;
  v51 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v51 != nullptr) {
    *v22 = *v51;
    *v51 = v22;
  }
  else {
    v52 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v22;
    *v22 = v52;
    *(_QWORD*)(v50 + 8 * v4) = a1 + 16;
    if (*v22 != 0) {
      v53 = *(_QWORD*)(*v22 + 8LL);
      if ((v10 & (v10 - 1)) != 0) {
        if (v53 >= v10) {
          v53 %= v10;
        }
      }
      else {
        v53 &= v10 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v53) = v22;
    }
  }
  ++*(_QWORD*)(a1 + 24);
}

void game_191ff40(__int64 a1, __int64* a2, __int64* a3, __int64* a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  float v21;
  _QWORD* v22;
  float v23;
  float v24;
  _BOOL8 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 primeEm;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  _QWORD* v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;

  v5 = *a2;
  v54 = *a2;
  v9 = std___1___hash_memory((__int64)&v54, 8u);
  v10 = *(_QWORD*)(a1 + 8);
  v11 = v9;
  if (v10 != 0) {
    v12 = v10 - 1;
    if ((v10 & (v10 - 1)) != 0) {
      v4 = v9;
      if (v9 >= v10) {
        v4 = v9 % v10;
      }
    }
    else {
      v4 = v12 & v9;
    }
    v13 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
    if (v13 != nullptr) {
      v14 = (_QWORD*)*v13;
      if (v14 != nullptr) {
        if ((v10 & v12) == 0) {
          while (1) {
            v16 = v14[1];
            if (v16 == v9) {
              if (v14[2] == v5) {
                return;
              }
            }
            else if ((v16 & v12) != v4) {
              goto LABEL_22;
            }
            v14 = (_QWORD*)*v14;
            if (v14 == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v15 = v14[1];
          if (v15 == v9) {
            if (v14[2] == v5) {
              return;
            }
          }
          else {
            if (v15 >= v10) {
              v15 %= v10;
            }
            if (v15 != v4) {
              break;
            }
          }
          v14 = (_QWORD*)*v14;
        } while (v14 != nullptr);
      }
    }
  }
LABEL_22:
  v17 = (__int64*)fw_memory_g_heap_manager_ptr;
  v18 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v19 = *a3;
  v20 = *a4;
  v21 = *(float*)(a1 + 32);
  v22 = v18;
  *v18 = 0;
  v18[1] = v11;
  v18[2] = v19;
  v18[3] = v20;
  v23 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v10 == 0 || (float)(v21 * (float)v10) < v23) {
    v24 = v23 / v21;
    v25 = true;
    if (v10 >= 3) {
      v25 = (v10 & (v10 - 1)) != 0;
    }
    v26 = v25 | (2 * v10);
    v27 = vcvtps_u64_f32(v24);
    if (v26 <= v27) {
      v28 = v27;
    }
    else {
      v28 = v26;
    }
    if (v28 == 1) {
      v28 = 2;
    }
    else if ((v28 & (v28 - 1)) != 0) {
      primeEm = std___1___next_prime(v28);
      v10 = *(_QWORD*)(a1 + 8);
      v28 = primeEm;
    }
    if (v28 <= v10) {
      if (v28 >= v10) {
        goto LABEL_83;
      }
      v35 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v10 < 3 || (v10 & (v10 - 1)) != 0) {
        v35 = std___1___next_prime(v35);
      }
      else {
        v36 = 1LL << (-(char)__clz(v35 - 1) & 63);
        if (v35 >= 2) {
          v35 = v36;
        }
      }
      if (v28 <= v35) {
        v28 = v35;
      }
      if (v28 >= v10) {
        goto LABEL_83;
      }
      if (v28 == 0) {
        v48 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v48 != 0) {
          v49 = 128;
          if (*(_QWORD*)(*v17 + 200) == 0) {
            v49 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v17 + v49, v48);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_83;
      }
    }
    if (v28 >> 61 != 0) {
      GameRoutine_60a210();
    }
    v30 = fw_memory_HeapManager_Allocate(*v17, 8 * v28, 16, 0);
    v31 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v30;
    if (v31 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v17 + 200) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v17 + v32, v31);
    }
    v33 = v28 & 7;
    *(_QWORD*)(a1 + 8) = v28;
    if (v28 >= 8) {
      v34 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 48) = 0;
        v37 = *(_QWORD*)a1 + 8 * v34;
        v34 += 8;
        *(_QWORD*)(v37 + 56) = 0;
      } while ((v28 & 0x1FFFFFFFFFFFFFF8LL) != v34);
    }
    else {
      v34 = 0;
    }
    if ((v28 & 7) != 0) {
      v38 = 8 * v34;
      do {
        --v33;
        *(_QWORD*)(*(_QWORD*)a1 + v38) = 0;
        v38 += 8;
      } while (v33 != 0);
    }
    v40 = a1 + 16;
    v39 = *(_QWORD**)(a1 + 16);
    if (v39 != nullptr) {
      v41 = v39[1];
      v42 = v28 - 1;
      if ((v28 & (v28 - 1)) != 0) {
        if (v41 >= v28) {
          v41 %= v28;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v40;
        v43 = (_QWORD*)*v39;
        if (*v39 == 0) {
          goto LABEL_83;
        }
        while (1) {
          v44 = v43[1];
          if (v44 >= v28) {
            v44 %= v28;
          }
          if (v44 != v41) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v44) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = v39;
              goto LABEL_60;
            }
            *v39 = *v43;
            *v43 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v44);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v44) = v43;
            v43 = v39;
          }
          v44 = v41;
        LABEL_60:
          v39 = v43;
          v43 = (_QWORD*)*v43;
          v41 = v44;
          if (v43 == nullptr) {
            goto LABEL_83;
          }
        }
      }
      v45 = v41 & v42;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v45) = v40;
      while (1) {
        v46 = (_QWORD*)*v39;
        if (*v39 == 0) {
          break;
        }
        v47 = v46[1] & v42;
        if (v47 == v45) {
          v39 = (_QWORD*)*v39;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v47) != 0) {
          *v39 = *v46;
          *v46 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v47);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v47) = v46;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v47) = v39;
          v39 = v46;
          v45 = v47;
        }
      }
    }
  LABEL_83:
    v10 = *(_QWORD*)(a1 + 8);
    if ((v10 & (v10 - 1)) != 0) {
      if (v11 >= v10) {
        v4 = v11 % v10;
      }
      else {
        v4 = v11;
      }
    }
    else {
      v4 = (v10 - 1) & v11;
    }
  }
  v50 = *(_QWORD*)a1;
  v51 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v51 != nullptr) {
    *v22 = *v51;
    *v51 = v22;
  }
  else {
    v52 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v22;
    *v22 = v52;
    *(_QWORD*)(v50 + 8 * v4) = a1 + 16;
    if (*v22 != 0) {
      v53 = *(_QWORD*)(*v22 + 8LL);
      if ((v10 & (v10 - 1)) != 0) {
        if (v53 >= v10) {
          v53 %= v10;
        }
      }
      else {
        v53 &= v10 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v53) = v22;
    }
  }
  ++*(_QWORD*)(a1 + 24);
}

__int64 game_1929960(__int64* a1)
{
  unsigned __int64 v2;
  const char* v3;
  unsigned __int64 v4;
  char* v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  const char* v13;
  const char* v14;
  __int64 v15;
  __int64 v16;
  const char* v17;
  unsigned __int8 v18;
  __int64 v19;
  unsigned __int8 v20;
  __int64 v21;
  struct {
    __int64 v22;
    __int64 v23;
  } v22_;
  struct {
    __int64* v24;
    __int64 v25;
  } v24_;

  v2 = 0;
  v3 = "Select";
  do {
    v5 = game_util_Format("L_Cast%02d", v2);
    LayoutAccessor_1560070((void*)(&v24_.v24), a1 + 106, v5);
    result = v24_.v25;
    if (v24_.v25 == 0) {
      goto LABEL_2;
    }
    v7 = std___1___shared_weak_count_lock(v24_.v25);
    v8 = v24_.v24;
    result = v24_.v25;
    if (v24_.v25 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v24_.v25);
    }
    if (v7 == 0 || v8 == nullptr) {
      if (v7 == 0) {
        goto LABEL_2;
      }
      goto LABEL_34;
    }
    v9 = a1[149];
    v10 = a1[148];
    if (v9 == v10) {
    LABEL_15:
      v12 = 0xFFFFFFFFLL;
    }
    else {
      v11 = (v9 - v10) >> 3;
      v12 = 0;
      while (*(_QWORD*)(v10 + 8 * v12) != 0) {
        if (v11 == ++v12) {
          goto LABEL_15;
        }
      }
      v12 = (unsigned int)v12;
    }
    v13 = v3;
    if (v2 == v12) {
      goto LABEL_33;
    }
    if (*(_QWORD*)(v10 + 8 * v2) != 0) {
      v14 = "Decide";
    }
    else {
      v14 = "Default";
    }
    result = LayoutAccessor_1562cf0((__int64)v8, v14);
    v15 = *(_QWORD*)(a1[148] + 8 * v2);
    if (v15 != 0) {
      v16 = a1[152];
      v17 = v3;
      v24_.v24 = *(__int64**)(v15 + 392);
      v18 = GameHr_13e4ce0(v16, &v24_.v24, v2);
      if (v18 == 6) {
        v19 = ui_LayoutAccessor_FindPane(v8, (__int64)"Face");
        if (v19 != 0) {
          v19 =
              __dynamic_cast(v19, GameData_212d670[0], GameData_212d678[0], 0);
        }
        GameHr_1840740(v19, 0, v15, 6u, 1);
        v13 = "FaceDefault";
      }
      else {
        v20 = v18;
        LayoutAccessor_1560070((void*)(&v22_.v22), v8, "L_Favor");
        GameRoutine_15717a0(&v22_.v22, v20);
        if (v22_.v23 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v22_.v23);
        }
        v21 = ui_LayoutAccessor_FindPane(v8, (__int64)"Face");
        if (v21 != 0) {
          v21 =
              __dynamic_cast(v21, GameData_212d670[0], GameData_212d678[0], 0);
        }
        GameHr_1840740(v21, 0, v15, v20, 1);
        v13 = "FaceDefault";
        v3 = v17;
      }
    LABEL_33:
      result = LayoutAccessor_1562cf0((__int64)v8, v13);
    }
  LABEL_34:
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      result = std___1___shared_weak_count___release_weak_alt1(v7);
    }
  LABEL_2:
    ++v2;
    if (*(_BYTE*)(a1[152] + 72) == 3) {
      v4 = 5;
    }
    else {
      v4 = 3;
    }
  } while (v2 < v4);
  return result;
}

void game_19a0960(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  __int64 v6;
  double v7;
  int* v8;
  __int64* v9;
  int v10;
  unsigned __int64* v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _DWORD* v22;
  __int64 v23;
  const char* v24;
  char* i;
  bool v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  char* v30;
  const char* v31;
  const char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _BYTE* v37;
  __int64 v38;
  unsigned __int64* v39;
  _BYTE* v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  _QWORD* v45;
  unsigned __int64* v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  struct {
    __int64 v59;
    __int64 v60;
  } v59_;
  _BYTE* v61[2];
  _QWORD v62[2];
  struct {
    __int64* v63;
    __int64 v64;
  } v63_;
  struct {
    const char* v65;
    __int64 v66;
    _BYTE* v67;
  } v65_;
  struct {
    __int64 v68;
    __int64 v69;
  } v68_;
  struct {
    _QWORD* v70;
    unsigned __int64 v71;
  } v70_;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
  v3 = a2[1];
  if (v3 != 0 && (v3 = std___1___shared_weak_count_lock(v3)) != 0) {
    v5 = *a2;
  }
  else {
    v5 = 0;
  }
  v6 = *(_QWORD*)(a1 + 5608);
  *(_QWORD*)(a1 + 5600) = v5;
  *(_QWORD*)(a1 + 5608) = v3;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v6),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v7 = ui_LayoutAccessor_GetPaneTranslate(*(__int64**)(a1 + 5600), "N_Unit"),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
  v8 = GameData_2131ac0[0];
  v9 = *(__int64**)(a1 + 5600);
  v65_.v65 = nullptr;
  LODWORD(v65_.v66) = 0;
  *GameData_2131ac0[0] = LODWORD(v7);
  v8[1] = v10;
  ui_LayoutAccessor_SetPaneTranslate(v9, "N_Unit", (__int64)&v65_.v65),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
  v11 = *(unsigned __int64**)(a1 + 5600);
  v12 = "L_Unit00";
  v65_.v65 = "L_Unit00";
  v65_.v66 = 8;
  v13 = v11[1];
  if (v13 != 0) {
    v14 = std___1___shared_weak_count_lock(v13),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v14 != 0) {
      v15 = *v11;
      v16 = v14;
      if (v15 != 0) {
        GameRoutine_1685230((void*)(&v68_.v68), v15, (__int64)&v65_.v65),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v15 != 0) {
          goto LABEL_14;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v16),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v15 != 0) {
        LABEL_14:
          v17 = v68_.v69;
          if (v68_.v69 != 0) {
            v17 = std___1___shared_weak_count_lock(v68_.v69),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
            v18 = v68_.v68;
            if (v17 == 0) {
              v18 = 0;
            }
          }
          else {
            v18 = 0;
          }
          goto LABEL_20;
        }
      }
    }
  }
  v18 = 0;
  v17 = 0;
  v68_.v68 = 0;
  v68_.v69 = 0;
LABEL_20:
  v19 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 16) = v18;
  *(_QWORD*)(a1 + 24) = v17;
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v19),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v20 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v20 + 40LL))(v20, 0),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
  LayoutAccessor_1562cf0(*(_QWORD*)(a1 + 16) + 88LL, "Out"),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
  v21 = v68_.v69;
  *(_DWORD*)(a1 + 32) = 0;
  *(_BYTE*)(a1 + 36) = 0;
  *(_DWORD*)(a1 + 40) = 8;
  if (v21 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v21),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v22 = (_DWORD*)(a1 + 96);
  v23 = -99;
  v24 = "L_Unit%02d";
  for (i = game_util_Format("L_Unit%02d", 1);;
       i = game_util_Format(v24, (unsigned int)(v23 + 100))) {
    v27 = (__int64)i;
    v28 = strlen_alt1(i),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0(),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    v29 = v28;
    if (v28 >= 0x17) {
      v31 = v24;
      v32 = v12;
      if ((v28 | 7) == 0x17) {
        v33 = 26;
      }
      else {
        v33 = (v28 | 7) + 1;
      }
      v34 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v33, 16, 0),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
      v35 = v33 | 1;
      v30 = (char*)v34;
      v65_.v66 = v29;
      v65_.v67 = (_BYTE*)v34;
      v12 = v32;
      v24 = v31;
      v65_.v65 = (const char*)v35;
    LABEL_36:
      memmove_alt1((__int64)v30, v27, v29),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
      goto LABEL_37;
    }
    v30 = (char*)&v65_.v65 + 1;
    LOBYTE(v65_.v65) = 2 * v28;
    if (v28 != 0) {
      goto LABEL_36;
    }
  LABEL_37:
    v30[v29] = 0;
    v36 =
        ui_LayoutAccessor_FindPane(*(__int64**)(a1 + 5600), (__int64)"N_Unit"),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
    v37 = v65_.v67;
    v38 = v36;
    v39 = *(unsigned __int64**)(a1 + 5600);
    v40 = (_BYTE*)((unsigned __int64)(unsigned __int8)v65_.v65 >> 1);
    v62[0] = v12;
    v62[1] = 8;
    if (((unsigned __int8)v65_.v65 & 1) != 0) {
      v40 = (_BYTE*)v65_.v66;
    }
    else {
      v37 = (char*)&v65_.v65 + 1;
    }
    v61[0] = v37;
    v61[1] = v40;
    v41 = v39[1];
    if (v41 == 0 || (v42 = std___1___shared_weak_count_lock(v41)) == 0) {
    LABEL_50:
      v63_.v63 = nullptr;
      v63_.v64 = 0;
      goto LABEL_51;
    }
    v43 = *v39;
    v44 = v42;
    if (v43 != 0) {
      GameRoutine_1685230((void*)((__int64*)&v70_.v70), v43, (__int64)v62),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
      Layout_1685360((void*)(&v63_.v63), v43, &v70_.v70, v61, v38),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v70_.v71 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v70_.v71),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v43 == 0) {
        goto LABEL_50;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
      std___1___shared_weak_count___release_weak_alt1(v44),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v43 == 0) {
        goto LABEL_50;
      }
    }
    if (v63_.v64 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v63_.v64),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  LABEL_51:
    v45 = v65_.v67;
    v46 = *(unsigned __int64**)(a1 + 5600);
    v47 = (unsigned __int64)(unsigned __int8)v65_.v65 >> 1;
    if (((unsigned __int8)v65_.v65 & 1) != 0) {
      v47 = v65_.v66;
    }
    else {
      v45 = (const char**)((char*)&v65_.v65 + 1);
    }
    v70_.v70 = v45;
    v70_.v71 = v47;
    v48 = v46[1];
    if (v48 == 0 || (v49 = std___1___shared_weak_count_lock(v48)) == 0) {
    LABEL_65:
      v53 = 0;
      v52 = 0;
      v59_.v59 = 0;
      v59_.v60 = 0;
      goto LABEL_66;
    }
    v50 = *v46;
    v51 = v49;
    if (v50 != 0) {
      GameRoutine_1685230((void*)(&v59_.v59), v50, (__int64)&v70_.v70),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v50 == 0) {
        goto LABEL_65;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
      std___1___shared_weak_count___release_weak_alt1(v51),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v50 == 0) {
        goto LABEL_65;
      }
    }
    v52 = v59_.v60;
    if (v59_.v60 != 0) {
      v52 = std___1___shared_weak_count_lock(v59_.v60),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
      v53 = v59_.v59;
      if (v52 == 0) {
        v53 = 0;
      }
    }
    else {
      v53 = 0;
    }
  LABEL_66:
    v54 = *((_QWORD*)v22 - 2);
    *((_QWORD*)v22 - 3) = v53;
    *((_QWORD*)v22 - 2) = v52;
    if (v54 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
      std___1___shared_weak_count___release_weak_alt1(v54),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    v55 = *((_QWORD*)v22 - 3);
    v56 = v22 - 10;
    *v56 = 0;
    v56[1] = 0;
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v55 + 40LL))(v55, 0),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
    LayoutAccessor_1562cf0(*((_QWORD*)v22 - 3) + 88LL, "Out"),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
    v57 = v59_.v60;
    *(v22 - 2) = 0;
    *((_BYTE*)v22 - 4) = 0;
    *v22 = 8;
    if (v57 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v57),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    if (((unsigned __int8)v65_.v65 & 1) != 0 && v65_.v67 != nullptr) {
      v58 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v58 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, (__int64)v65_.v67),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    v26 = __CFADD__(v23++, 1);
    v22 += 14;
    if (v26) {
      break;
    }
  }
}

__attribute__((swiftcall)) void game_19a87a0(PSEUDO_X8 x8_, __int64 a1,
                                             __int64 a2, __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  const char* v17;
  const char* v18;
  const char* v19;
  const char* v20;
  _QWORD* v21;
  __int64* v22;
  __int64 v24;
  __int64 v25;
  struct {
    const char* v26;
    unsigned __int64 v27;
  } v26_;

  v8 = (_QWORD*)LayoutEx_579160(1136, 8);
  v9 = (__int64)(v8 + 3);
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_211f100;
  GameRoutine_18b26a0((__int64)(v8 + 3), a1, a2, a3);
  v10[138] = 0;
  v10[139] = 0;
  v10[140] = 0;
  v10[3] = game_gameui_control_JobIcon_vtable;
  *((_BYTE*)v10 + 1134) = 0;
  v10[132] = GameData_211f098;
  v10[12] = GameData_211f070;
  *((_WORD*)v10 + 564) = 257;
  *(_DWORD*)((char*)v10 + 1130) = 0;
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       64, 16, 0);
  v13 = GameData_211f0d8;
  *(_QWORD*)(v12 + 32) = GameData_211f0d0;
  *(_QWORD*)(v12 + 40) = v13;
  v14 = GameData_211f0e8;
  *(_QWORD*)(v12 + 48) = GameData_211f0e0;
  *(_QWORD*)(v12 + 56) = v14;
  v15 = GameData_211f0b8;
  *(_QWORD*)v12 = GameData_211f0b0;
  *(_QWORD*)(v12 + 8) = v15;
  v16 = GameData_211f0c8;
  *(_QWORD*)(v12 + 16) = GameData_211f0c0;
  *(_QWORD*)(v12 + 24) = v16;
  v17 = (const char*)GameRoutine_576600(a1, "Icon_Base");
  if (v17 != nullptr) {
    v26_.v26 = v17;
    v26_.v27 = strlen_alt1(v17);
    if (v26_.v27 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12, (__int64)&v26_.v26);
    }
  }
  v18 = (const char*)GameRoutine_576600(a1, *(const char**)(v12 + 16));
  if (v18 != nullptr) {
    v26_.v26 = v18;
    v26_.v27 = strlen_alt1(v18);
    if (v26_.v27 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12 + 16, (__int64)&v26_.v26);
    }
  }
  v19 = (const char*)GameRoutine_576600(a1, *(const char**)(v12 + 32));
  if (v19 != nullptr) {
    v26_.v26 = v19;
    v26_.v27 = strlen_alt1(v19);
    if (v26_.v27 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12 + 32, (__int64)&v26_.v26);
    }
  }
  v20 = (const char*)GameRoutine_576600(a1, *(const char**)(v12 + 48));
  if (v20 != nullptr) {
    v26_.v26 = v20;
    v26_.v27 = strlen_alt1(v20);
    if (v26_.v27 != 0) {
      ui_control_1888c80((__int64)(v10 + 29), v12 + 48, (__int64)&v26_.v26);
    }
  }
  v26_.v26 = "L_Gauge";
  v26_.v27 = 7;
  v21 = Element_1886290(v9, &v26_.v26);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21f8028) != 0) {
    GameData_21f8020 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release((__int64)&GameData_21f8028);
  }
  if (v21 == nullptr) {
    goto LABEL_22;
  }
  v22 = (__int64*)(*(__int64 (**)(_QWORD*))(*v21 + 16LL))(v21);
  if (v22 != &GameData_21f8020) {
    do {
      v22 = (__int64*)*v22;
    } while (v22 != &GameData_21f8020 && v22 != nullptr);
    if (v22 == nullptr) {
    LABEL_22:
      v21 = nullptr;
    }
  }
  v24 = *v11;
  v10[138] = v21;
  v25 = 128;
  if (*(_QWORD*)(v24 + 200) == 0) {
    v25 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(v24 + v25, v12);
  *a4 = v9;
  a4[1] = (__int64)v10;
  v10[3] =
      game_gameui_control_HelpableElement_Destroy_HelpableElement_18b3360_ptr;
  v10[12] = GameData_211f2d8;
  v10[132] = GameData_211f300;
}

#pragma GCC visibility pop
