#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__attribute__((swiftcall)) void SdkRoutine_81ba70(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void SdkRoutine_87cb90(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void std___1_ios_base_getloc_plt(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void std___1_ios_base_getloc_plt_alt2(
    PSEUDO_X8) __asm__("std___1_ios_base_getloc_plt");
__int64* SdkRoutine_82dbb0(__int64* result, unsigned __int64, __int64,
                           unsigned __int64);
__int64 SdkRoutine_7f7050(__int64, __int64);
__int64 SdkRoutine_7f7170(__int64, __int64);
__int64 SdkRoutine_802c60(__int64, __int64, __int64, unsigned int,
                          unsigned __int64);
__int64 SdkRoutine_802fa0(__int64, __int64, __int64, unsigned int,
                          unsigned __int64);
__int64 SdkRoutine_804160(__int64, __int64, __int64, unsigned int,
                          unsigned __int64);
__int64 SdkRoutine_8044a0(__int64, __int64, __int64, unsigned int,
                          unsigned __int64);
__int64 SdkRoutine_8047e0(__int64, __int64, __int64, unsigned int,
                          unsigned __int64);
__int64 SdkRoutine_80a740(_QWORD*, _QWORD*, _DWORD*, __int64, int);
__int64 SdkRoutine_810f00(int, int, int, int, int, void*);
__int64 SdkRoutine_812320(_QWORD);
__int64 SdkRoutine_812fa0(__int64, __int64);
__int64 SdkRoutine_8130d0(__int64, __int64);
__int64 SdkRoutine_813200(__int64, __int64);
__int64 SdkRoutine_813330(__int64, __int64);
__int64 SdkRoutine_813460(__int64, __int64);
__int64 SdkRoutine_813590(__int64, __int64);
__int64 SdkRoutine_8136c0(__int64, __int64);
__int64 SdkRoutine_8137f0(__int64, __int64);
__int64 SdkRoutine_813920(__int64, __int64);
__int64 SdkRoutine_813a50(__int64, __int64);
__int64 SdkRoutine_813b80(__int64, __int64);
__int64 SdkRoutine_813cb0(__int64, __int64);
__int64 SdkRoutine_813de0(__int64, __int64);
__int64 SdkRoutine_813f10(__int64, __int64);
__int64 SdkRoutine_814040(__int64, __int64);
__int64 SdkRoutine_814170(__int64, __int64);
__int64 SdkRoutine_8142a0(__int64, __int64);
__int64 SdkRoutine_8143d0(__int64, __int64);
__int64 SdkRoutine_814500(__int64, __int64);
__int64 SdkRoutine_814630(__int64, __int64);
__int64 SdkRoutine_814760(__int64, __int64);
__int64 SdkRoutine_814890(__int64, __int64);
__int64 SdkRoutine_8149c0(__int64, __int64);
__int64 SdkRoutine_814af0(__int64, __int64);
__int64 SdkRoutine_814c20(__int64, __int64);
__int64 SdkRoutine_814d50(__int64, __int64);
__int64 SdkRoutine_814e80(__int64, __int64);
__int64 SdkRoutine_814fb0(__int64, __int64);
__int64 SdkRoutine_8150e0(__int64, __int64);
__int64 SdkRoutine_815210(__int64, __int64);
__int64 SdkRoutine_815340(_QWORD);
__int64 SdkRoutine_81add0(_QWORD);
__int64 SdkRoutine_81b480(_QWORD);
__int64 SdkRoutine_8225a0(_QWORD);
__int64 SdkRoutine_822630(_QWORD);
__int64 SdkRoutine_829dc0(_QWORD);
__int64 SdkRoutine_82ad70(_QWORD*);
__int64 SdkRoutine_82dd20(_QWORD);
__int64 SdkRoutine_82dd20_alt1(__int64*) __asm__("SdkRoutine_82dd20");
__int64 SdkRoutine_82f0b0();
__int64 SdkRoutine_82f620(_QWORD);
__int64 SdkRoutine_830970(_QWORD);
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_85e050(unsigned __int64);
__int64 SdkRoutine_86e8b0(_QWORD);
__int64 SdkRoutine_86ee70(_QWORD, _QWORD);
__int64 SdkRoutine_86ee80(_QWORD);
__int64 SdkRoutine_86fc80(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87cb10(_QWORD);
__int64 SdkRoutine_87cb20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_87cb30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87cd80(_QWORD, _QWORD);
__int64 SdkRoutine_87ce40(_QWORD, _QWORD);
__int64 SdkRoutine_87cef0(_QWORD);
__int64 SdkRoutine_87cfe0(_QWORD);
__int64 SdkRoutine_87d080(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_87d0a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_87d120(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87d130(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87d140(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87d150(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87d250(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87d260(_QWORD, _QWORD);
__int64 SdkRoutine_87d270(_QWORD, _QWORD);
__int64 SdkRoutine_87d280(_QWORD, _QWORD);
__int64 _Unwind_Resume_plt(_QWORD);
__int64 __cxa_allocate_exception_plt(_QWORD);
__int64 __cxa_begin_catch_plt(_QWORD);
__int64 __cxa_current_primary_exception_plt(void);
__int64 __cxa_free_exception_plt(_QWORD);
__int64 __cxa_guard_abort_plt(_QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 __cxa_increment_exception_refcount_plt(void);
__int64 __cxa_rethrow_plt(_QWORD);
__int64 __cxa_throw_plt(_QWORD, _QWORD, _QWORD);
__int64 __errno_location_plt(_QWORD, _QWORD);
__int64 fclose_plt(void* this_);
__int64 fclose_plt_alt1(void* this_, void*) __asm__("fclose_plt");
__int64 fflush_plt(void* this_);
__int64 free_plt(_QWORD);
__int64 freelocale_plt(_QWORD);
__int64 fseeko_plt(_QWORD, _QWORD, _QWORD);
__int64 ftello_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 fwrite_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 iostream_7f7760(__int64, __int64, __int64);
__int64 iostream_7f7f70(__int64, __int64, __int64);
__int64 iswalpha_l_plt(_QWORD, _QWORD);
__int64 iswblank_l_plt(_QWORD, _QWORD);
__int64 iswcntrl_l_plt(_QWORD, _QWORD);
__int64 iswdigit_l_plt(_QWORD, _QWORD);
__int64 iswlower_l_plt(_QWORD, _QWORD);
__int64 iswprint_l_plt(_QWORD, _QWORD);
__int64 iswpunct_l_plt(_QWORD, _QWORD);
__int64 iswspace_l_plt(_QWORD, _QWORD);
__int64 iswupper_l_plt(_QWORD, _QWORD);
__int64 iswxdigit_l_plt(_QWORD, _QWORD);
__int64 llvmlibcxx_libcxx_7d58e0(__int64 result);
__int64
    llvmlibcxx_libcxx_7d58e0_alt1(_QWORD) __asm__("llvmlibcxx_libcxx_7d58e0");
__int64 locale_7d5890_alt1(_QWORD, _QWORD) __asm__("locale_7d5890");
__int64 locale_8087a0_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("locale_8087a0");
__int64 locale_812100_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("locale_812100");
__int64 locale_82f740_alt1(_QWORD) __asm__("locale_82f740");
__int64 locale_830290_alt1(_QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("locale_830290");
__int64 malloc_plt(_QWORD);
__int64 memchr_plt(_QWORD, _QWORD, _QWORD);
__int64 memcmp_plt(_QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_extractors_mp4_4f61b0(unsigned __int64*, __int64,
                                       unsigned __int64);
__int64 nandroid_extractors_mp4_4f61b0_alt1(_QWORD, _QWORD) __asm__(
    "nandroid_extractors_mp4_4f61b0");
__int64 newlocale_plt(_QWORD, _QWORD, _QWORD);
__int64 realloc_plt(_QWORD, _QWORD);
__int64 setbuf_plt(_QWORD, _QWORD);
__int64 std___1___call_once_plt(_QWORD, _QWORD, _QWORD);
__int64 std___1___do_nothing(void*);
__int64 std___1___hash_memory_plt(_QWORD, _QWORD);
__int64 std___1___libcpp_unique_locale_Destroy___libcpp_unique_locale(_QWORD);
__int64 std___1___shared_count_Destroy___shared_count_plt(_QWORD);
__int64 std___1___throw_runtime_error_plt(_QWORD);
__int64 std___1___time_get_Destroy___time_get(_QWORD*);
__int64 std___1_ctype_Destroy_ctype_81cab0_alt1(__int64) __asm__(
    "std___1_ctype_Destroy_ctype_81cab0");
__int64 std___1_ctype_byname_ctype_byname_81d0b0_alt1(_QWORD) __asm__(
    "std___1_ctype_byname_ctype_byname_81d0b0");
__int64 std___1_ios_base_init_plt(_QWORD, _QWORD);
__int64 std___1_locale_Destroy_locale_plt(_QWORD);
__int64 std___1_locale___imp___imp_818060(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1_locale_has_facet_plt(_QWORD, _QWORD);
__int64 std___1_locale_locale_plt_86ee50(_QWORD);
__int64 std___1_locale_locale_plt_87cd70(_QWORD, _QWORD);
__int64 std___1_locale_use_facet_plt(_QWORD, _QWORD);
__int64 std___1_time_get_get_806ce0_alt1(_QWORD) __asm__(
    "std___1_time_get_get_806ce0");
__int64 std___1_ucs4_to_utf8(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                             _QWORD, _QWORD);
__int64 std___1_utf8_to_ucs4(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                             _QWORD, _QWORD);
__int64 std___throw_bad_alloc_plt(_QWORD);
__int64 std_bad_array_new_length_bad_array_new_length_plt(void);
__int64 std_bad_cast_bad_cast_plt(void);
__int64 std_exception_ptr_Destroy_exception_ptr_plt(_QWORD);
__int64 std_logic_error_logic_error_plt_87c930(void);
__int64 strftime_l_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 strtoull_plt(_QWORD, _QWORD, _QWORD);
__int64 tolower_plt(_QWORD);
__int64 toupper_plt(_QWORD);
__int64 vsnprintf_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 wcscoll_l_plt(_QWORD, _QWORD, _QWORD);
__int64 wmemchr_plt(_QWORD, _QWORD, _QWORD);
double _Unwind_Resume_plt_alt1(_QWORD) __asm__("_Unwind_Resume_plt");
extern _DWORD SdkData_d00eb0[16];
extern _QWORD SdkData_cff750[20];
extern _UNKNOWN SdkData_1060b80;
extern _UNKNOWN SdkData_1060b90;
extern _UNKNOWN SdkData_1060ba0;
extern _UNKNOWN SdkData_1060bc0;
extern _UNKNOWN SdkData_1060be0;
extern _UNKNOWN SdkData_1060c08;
extern _UNKNOWN SdkData_1060c10;
extern _UNKNOWN SdkData_1060c18;
extern _UNKNOWN SdkData_1060c20;
extern _UNKNOWN SdkData_1060c30;
extern _UNKNOWN SdkData_1060c40;
extern _UNKNOWN SdkData_1060e18;
extern _UNKNOWN SdkData_1060e90;
extern _UNKNOWN SdkData_1060f10;
extern _UNKNOWN SdkData_1060f40;
extern _UNKNOWN SdkData_bd1200;
extern _UNKNOWN SdkData_bd1220;
extern _UNKNOWN SdkData_bd1278;
extern _UNKNOWN SdkData_bd12b8;
extern _UNKNOWN SdkData_bd12e4;
extern _UNKNOWN SdkData_bd1338;
extern _UNKNOWN SdkData_bd138c;
extern _UNKNOWN SdkData_bd13a8;
extern _UNKNOWN SdkData_bd13cc;
extern _UNKNOWN SdkData_bd14a4;
extern _UNKNOWN SdkData_bd14c8;
extern _UNKNOWN SdkData_bd14ec;
extern _UNKNOWN SdkData_bd1510;
extern _UNKNOWN SdkData_bd1610;
extern _UNKNOWN SdkData_bd1680;
extern _UNKNOWN SdkData_bd16a8;
extern _UNKNOWN SdkData_cfff70_alt2 __asm__("SdkData_cfff70");
extern _WORD SdkData_cfff70[256];
extern _WORD SdkData_cfff70_alt1[] __asm__("SdkData_cfff70");
extern _WORD SdkData_d00ef0[64];
extern _WORD SdkData_d00f70[256];
extern __int64 (*std___1_locale___imp_Destroy___imp_81ac20_ptr[])();
extern __int64 SdkData_1060b78;
extern __int64 SdkData_1060c58;
extern __int64 SdkData_1060c60;
extern __int64 SdkData_1060c68;
extern __int64 SdkData_1060c70;
extern __int64 SdkData_1060c78;
extern __int64 SdkData_1060c80;
extern __int64 SdkData_1060c88;
extern __int64 SdkData_1060c90;
extern __int64 SdkData_1060c98;
extern __int64 SdkData_1060ca0;
extern __int64 SdkData_1060ca8;
extern __int64 SdkData_1060cb0;
extern __int64 SdkData_1060cb8;
extern __int64 SdkData_1060cc0;
extern __int64 SdkData_1060cc8;
extern __int64 SdkData_1060cd0;
extern __int64 SdkData_1060cd8;
extern __int64 SdkData_1060ce0;
extern __int64 SdkData_1060ce8;
extern __int64 SdkData_1060cf0;
extern __int64 SdkData_1060cf8;
extern __int64 SdkData_1060d00;
extern __int64 SdkData_1060d08;
extern __int64 SdkData_1060d10;
extern __int64 SdkData_1060d18;
extern __int64 SdkData_1060d20;
extern __int64 SdkData_1060d28;
extern __int64 SdkData_1060d30;
extern __int64 SdkData_1060d38;
extern __int64 SdkData_1060d40;
extern __int64 SdkData_1060d48;
extern __int64 SdkData_1060d50;
extern __int64 SdkData_1060d58;
extern __int64 SdkData_1060d60;
extern __int64 SdkData_1060d68;
extern __int64 SdkData_1060d70;
extern __int64 SdkData_1060d78;
extern __int64 SdkData_1060d80;
extern __int64 SdkData_1060d88;
extern __int64 SdkData_1060d90;
extern __int64 SdkData_1060d98;
extern __int64 SdkData_1060da0;
extern __int64 SdkData_1060da8;
extern __int64 SdkData_1060db0;
extern __int64 SdkData_1060e30;
extern __int64 SdkData_1060e38;
extern __int64 SdkData_1060e40;
extern __int64 SdkData_1060e48;
extern __int64 SdkData_1060e50;
extern __int64 SdkData_1060e58;
extern __int64 SdkData_1060e60;
extern __int64 SdkData_1060e68;
extern __int64 SdkData_1060e70;
extern __int64 SdkData_1060e78;
extern __int64 SdkData_1060e80;
extern __int64 SdkData_1060e88;
extern __int64 SdkData_1060eb0;
extern __int64 SdkData_1060ec0;
extern __int64 SdkData_1060ec8;
extern __int64 SdkData_1060ed8;
extern __int64 SdkData_1060ee0;
extern __int64 SdkData_1060ef0;
extern __int64 SdkData_1060ef8;
extern __int64 SdkData_1060f08;
extern __int64 SdkData_10610c0;
extern __int64 SdkData_10610d0;
extern __int64 SdkData_10610d8;
extern __int64 SdkData_10610e8;
extern __int64 SdkData_10610f0;
extern __int64 SdkData_1061100;
extern __int64 SdkData_1061108;
extern __int64 SdkData_1061118;
extern __int64 SdkData_1061120;
extern __int64 SdkData_1061130;
extern __int64 SdkData_1061138;
extern __int64 SdkData_1061148;
extern __int64 SdkData_1061150;
extern __int64 SdkData_1061160;
extern __int64 SdkData_1061168;
extern __int64 SdkData_1061170;
extern __int64 SdkData_1061178;
extern __int64 SdkData_1061180;
extern __int64 SdkData_1061188;
extern __int64 SdkData_1061190;
extern __int64 SdkData_1061198;
extern __int64 SdkData_10611a0;
extern __int64 SdkData_10611a8;
extern __int64 SdkData_10611b0;
extern __int64 SdkData_10611b8;
extern __int64 SdkData_10611c0;
extern __int64 SdkData_10611c8;
extern __int64 SdkData_10611d0;
extern __int64 SdkData_10611d8;
extern __int64 SdkData_10611e0;
extern __int64 SdkData_10611e8;
extern __int64 SdkData_10611f0;
extern __int64 SdkData_10611f8;
extern __int64 SdkData_1061200;
extern __int64 SdkData_1061208;
extern __int64 SdkData_1061210;
extern __int64 SdkData_1061220;
extern __int64 SdkData_1061228;
extern __int64 SdkData_1061238;
extern __int64 SdkData_1061240;
extern __int64 SdkData_1061250;
extern __int64 SdkData_1061258;
extern __int64 SdkData_1061268;
extern __int64 SdkData_1061270;
extern __int64 SdkData_1061280;
extern __int64 SdkData_1061288;
extern __int64 SdkData_1061298;
extern __int64 SdkData_10612a0;
extern __int64 SdkData_10612b0;
extern __int64 SdkData_10612b8;
extern __int64 SdkData_10612c8;
extern __int64 SdkData_10612d0;
extern __int64 SdkData_10612e0;
extern __int64 SdkData_10612e8;
extern __int64 SdkData_10612f8;
extern __int64 SdkData_1061300;
extern __int64 SdkData_1061310;
extern __int64 SdkData_1061318;
extern __int64 SdkData_1061328;
extern __int64 SdkData_1061330;
extern __int64 SdkData_1061340;
extern __int64 SdkData_1061348;
extern __int64 SdkData_1061358;
extern __int64 SdkData_1061360;
extern __int64 SdkData_1061370;
extern __int64 SdkData_1061378;
extern __int64 SdkData_1061388;
extern __int64 SdkData_1061390;
extern __int64 SdkData_10613a0;
extern __int64 SdkData_10613a8;
extern __int64 SdkData_10613b8;
extern __int64 SdkData_10613c0;
extern __int64 SdkData_10613d0;
extern __int64 SdkData_10613d8;
extern __int64 SdkData_10613e8;
extern __int64 SdkData_10613f0;
extern __int64 SdkData_1061400;
extern __int64 SdkData_1061408;
extern __int64 SdkData_1061418;
extern __int64 SdkData_1061420;
extern __int64 SdkData_1061430;
extern __int64 SdkData_1061438;
extern __int64 SdkData_1061448;
extern __int64 SdkData_1061450;
extern __int64 SdkData_1061460;
extern __int64 SdkData_1061468;
extern __int64 SdkData_1061478;
extern __int64 SdkData_1061480;
extern __int64 SdkData_1061490;
extern __int64 SdkData_1061498;
extern __int64 SdkData_10614a8;
extern __int64 SdkData_10614b0;
extern __int64 SdkData_10614b8;
extern __int64 SdkData_10614c0;
extern __int64 SdkData_10614c8;
extern __int64 SdkData_10614d0;
extern __int64 SdkData_10614d8;
extern __int64 SdkData_10614e0;
extern __int64 SdkData_10614e8;
extern __int64 SdkData_10614f0;
extern __int64 SdkData_10614f8;
extern __int64 SdkData_1061508;
extern __int64 SdkData_1061510;
extern __int64 SdkData_1061520;
extern __int64 SdkData_1061528;
extern __int64 SdkData_1061538;
extern __int64 SdkData_1061540;
extern __int64 SdkData_1061550;
extern __int64 SdkData_1061558;
extern __int64 SdkData_1061568;
extern __int64 SdkData_1061570;
extern __int64 SdkData_1061578;
extern __int64 SdkData_1061580;
extern __int64 SdkData_1061588;
extern __int64 SdkData_1061590;
extern __int64 SdkData_1061598;
extern __int64 SdkData_10615a0;
extern __int64 SdkData_10615a8;
extern __int64 SdkData_10615b0;
extern __int64 SdkData_10615b8;
extern __int64 SdkData_10615c0;
extern __int64 SdkData_10615c8;
extern __int64 SdkData_10615d0;
extern __int64 SdkData_10615d8;
extern __int64 SdkData_10615e0;
extern __int64 SdkData_10615e8;
extern __int64 SdkData_10615f0;
extern __int64 SdkData_10615f8;
extern __int64 SdkData_1061600;
extern __int64 SdkData_1061608;
extern __int64 SdkData_1061610;
extern __int64 SdkData_1061618;
extern __int64 SdkData_1061620;
extern __int64 SdkData_1061628;
extern __int64 SdkData_1061630;
extern __int64 SdkData_1061638;
extern __int64 SdkData_1061640;
extern __int64 SdkData_1061648;
extern __int64 SdkData_1061650;
extern __int64 SdkData_1061658;
extern __int64 SdkData_1061660;
extern __int64 SdkData_1061668;
extern __int64 SdkData_1061670;
extern __int64 SdkData_1061678;
extern __int64 SdkData_1061680;
extern __int64 SdkData_1061688;
extern __int64 SdkData_e86b48;
extern __int64 SdkData_e888e8;
extern __int64 SdkData_e892e0;
extern __int64 SdkData_e892f0;
extern __int64 SdkData_e89328;
extern __int64 SdkData_e89330;
extern __int64 SdkData_e89338;
extern __int64 SdkData_e89340;
extern __int64 SdkData_e89348;
extern __int64 SdkData_e89450;
extern __int64 SdkData_e89490;
extern __int64 SdkData_e894b8;
extern __int64 SdkData_e894c8;
extern __int64 SdkData_e894d0;
extern __int64 SdkData_e894d8;
extern __int64 SdkData_e894e0;
extern __int64 SdkData_e894e8;
extern __int64 SdkData_e89548;
extern __int64 SdkData_e89578;
extern __int64 SdkData_e89580;
extern __int64 SdkData_e89588;
extern __int64 SdkData_e89590;
extern __int64 SdkData_e89598;
extern __int64 SdkData_e895a0;
extern __int64 SdkData_e895a8;
extern __int64 SdkData_e895b0;
extern __int64 SdkData_e895b8;
extern __int64 SdkData_e895c0;
extern __int64 SdkData_e895c8;
extern __int64 SdkData_e895d0;
extern __int64 SdkData_e895d8;
extern __int64 SdkData_e895e0;
extern __int64 SdkData_e895e8;
extern __int64 SdkData_e895f0;
extern __int64 SdkData_e895f8;
extern __int64 SdkData_e89600;
extern __int64 SdkData_e89608;
extern __int64 SdkData_e89610;
extern __int64 SdkData_e89618;
extern __int64 SdkData_e89620;
extern __int64 SdkData_e89628;
extern __int64 SdkData_e89630;
extern __int64 SdkData_e89638;
extern __int64 SdkData_e89640;
extern __int64 SdkData_e89648;
extern __int64 SdkData_e89760;
extern __int64 SdkData_e89768;
extern char SdkData_bba743[3];
extern char SdkData_bbbd5c;
extern char SdkData_bbf545[9];
extern char SdkData_bc6c59[37];
extern char SdkData_bc86e9[17];
extern char SdkData_cdee2d[237];
extern void (*SdkData_e86b68[37])();
extern void (*SdkData_e86e30[305])();
extern void (*SdkData_e89298)();
extern void (*SdkData_e89440[137])();
extern void (*SdkData_e89448[136])();
extern void (*SdkData_e89458[134])();
extern void (*SdkData_e89480[129])();
extern void (*SdkData_e89488[128])();
extern void (*SdkData_e89498[126])();
extern void (*SdkData_e894c0[121])();
extern void (*SdkData_e894f0[115])();
extern void (*SdkData_e894f8[114])();
extern void (*SdkData_e89500[113])();
extern void (*SdkData_e89508[112])();
extern void (*SdkData_e89510[111])();
extern void (*SdkData_e89518[110])();
extern void (*SdkData_e89520[109])();
extern void (*SdkData_e89528[108])();
extern void (*SdkData_e89530[107])();
extern void (*SdkData_e89540[105])();
extern void (*SdkData_e89550[103])();
extern void (*SdkData_e89558[102])();
extern void (*SdkData_e89560[101])();
extern void (*SdkData_e89568[100])();
extern void (*SdkData_e89570[99])();
extern void (*SdkData_e89650[71])();
extern void (*SdkData_e89658[70])();
extern void (*SdkData_e89660[69])();
extern void (*SdkData_e89668[68])();
extern void (*SdkData_e89670[67])();
extern void (*SdkData_e89678[66])();
extern void (*SdkData_e89680[65])();
extern void (*SdkData_e89688[64])();
extern void (*SdkData_e89690[63])();
extern void (*SdkData_e89698[62])();
extern void (*SdkData_e896a0[61])();
extern void (*SdkData_e896a8[60])();
extern void (*SdkData_e896b0[59])();
extern void (*SdkData_e896b8[58])();
extern void (*SdkData_e896c0[57])();
extern void (*SdkData_e896c8[56])();
struct PseudoSret std___1_ios_base_getloc_plt_alt1(_QWORD) __asm__(
    "std___1_ios_base_getloc_plt");
unsigned __int64* llvmlibcxx_libcxx_7d5b60(unsigned __int64* result);
unsigned __int64 SdkRoutine_812ef0(unsigned __int64*, __int64);
unsigned __int8* SdkRoutine_7f8a00(_QWORD**, _QWORD*, unsigned __int8*,
                                   unsigned __int8*, __int64, _DWORD*, char);
unsigned __int8* SdkRoutine_7fd440(_QWORD**, _QWORD*, unsigned __int8*,
                                   unsigned __int8*, __int64, _DWORD*, char);
unsigned __int8* SdkRoutine_827580(unsigned __int8**, unsigned __int8*,
                                   unsigned __int8*, unsigned __int8*, __int64,
                                   _DWORD*, char);
void SdkRoutine_513100();
void SdkRoutine_7cdb80();
void SdkRoutine_7e04e0();
void SdkRoutine_85c8b0(void*, void*);
void SdkRoutine_85c8b0_alt1(void*) __asm__("SdkRoutine_85c8b0");
void __attribute__((noreturn)) SdkRoutine_7cd620();
void __attribute__((noreturn))
SdkRoutine_7cd620_alt1(_QWORD) __asm__("SdkRoutine_7cd620");
void __attribute__((noreturn)) ios_instantiations_7d3940(_QWORD);
void __attribute__((noreturn))
locale_7d5830_alt1(_QWORD) __asm__("locale_7d5830");
__attribute__((swiftcall)) void
std_exception_ptr___from_native_exception_pointer(PSEUDO_X8 x8_, void* this_);
__int64 std_nested_exception_nested_exception(void* this_);
__attribute__((swiftcall)) void std_current_exception(PSEUDO_X8 x8_);
void std_nested_exception_Destroy_nested_exception(void* this_);
__int64 locale_7d3740(__int64 a1);
__attribute__((swiftcall)) void locale_7d3820(PSEUDO_X8 x8_, __int64 a1,
                                              _QWORD* a2);
void __attribute__((noreturn)) locale_7d38f0(__int64 a1);
void __attribute__((noreturn)) locale_7d3920();
unsigned __int64* locale_7d39e0(unsigned __int64* result, unsigned __int64 a2);
void* std___1___fs_filesystem_path_replace_extension(void* this_, void* a2);
void __attribute__((noreturn)) locale_7d3c64(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12);
__attribute__((swiftcall)) void locale_7d3ca0(PSEUDO_X8 x8_, void* a1);
__int64 std___1___fs_filesystem_path___root_name(void* this_);
const char* std___1___fs_filesystem_path___root_directory(void* this_);
const char* std___1___fs_filesystem_path___root_path_raw(void* this_);
__int64 std___1___fs_filesystem_path___relative_path(void* this_);
__int64 std___1___fs_filesystem_path___parent_path(void* this_);
char* std___1___fs_filesystem_path___filename(void* this_);
char* std___1___fs_filesystem_path___stem(void* this_);
char* std___1___fs_filesystem_path___extension(void* this_);
void __attribute__((noreturn)) locale_7d4f24(__int64 a1);
__int64 std___1___fs_filesystem_path___compare(unsigned __int8* a1, __int64 a2,
                                               __int64 a3);
__int64 std___1___fs_filesystem_hash_value(void* this_, void* a2);
__attribute__((swiftcall)) void
std___1___fs_filesystem_path_begin(PSEUDO_X8 x8_, void* this_);
__attribute__((swiftcall)) void std___1___fs_filesystem_path_end(PSEUDO_X8 x8_,
                                                                 __int64 this_);
void* std___1___fs_filesystem_path_iterator___increment(void* this_);
void* std___1___fs_filesystem_path_iterator___decrement(void* this_);
void __attribute__((noreturn)) std_7d57d0();
void __attribute__((noreturn)) locale_7d5810();
void __attribute__((noreturn)) locale_7d5830(__int64 a1);
__int64 locale_7d5890(_QWORD* a1);
__int64 std___1_basic_filebuf_basic_filebuf_7f5500(__int64 a1);
void __attribute__((noreturn)) locale_7f5604(__int64 a1);
__int64 std___1_basic_filebuf_basic_filebuf_7f5650(__int64 a1, __int64 a2);
void* std___1_basic_filebuf_close(void* a1);
void __attribute__((noreturn)) locale_7f5934(__int64 a1, void* a2);
__int64 std___1_basic_filebuf_swap(__int64 a1, __int64 a2);
const char* locale_7f5ca0(int a1);
bool std___1_basic_filebuf___read_mode(__int64 a1);
void __attribute__((noreturn)) locale_7f6090();
__int64 std___1_basic_filebuf_pbackfail(__int64 a1, unsigned int a2);
__int64 std___1_basic_filebuf___write_mode(__int64 result);
__int64 std___1_basic_filebuf_setbuf(__int64 a1, void* a2, __int64 a3);
__int64 std___1_basic_filebuf_seekoff(_QWORD* a1, __int64 a2, unsigned int a3);
__int64 std___1_basic_filebuf_seekpos(_QWORD* a1, __int64 a2, __int64 a3);
__int64 std___1_basic_filebuf_sync(__int64 a1);
void std___1_basic_filebuf_imbue(__int64 a1, __int64 a2);
__int64 locale_7f69c0(_QWORD* a1);
__int64 std___1_codecvt_Destroy_codecvt(_QWORD* a1);
__int64 locale_7f6a90(_QWORD* a1);
__int64 locale_7f6b00(_QWORD* a1);
__int64 std___1_time_get_byname_Destroy_time_get_byname_7f6b80(_QWORD* a1);
__int64 std___1_time_get_byname_Destroy_time_get_byname_7f6be0(_QWORD* a1);
__int64 std___1___time_get_temp_Destroy___time_get_temp_7f6c50(_QWORD* a1);
__int64 std___1___time_get_temp_Destroy___time_get_temp_7f6cc0(_QWORD* a1);
__int64 locale_7f6d40();
void __attribute__((noreturn)) locale_7f6fd0(__int64 a1);
void __attribute__((noreturn))
locale_7f8960(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
              __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
              __int64 a11, __int64 a12, __int64 a13, __int64 a14);
void __attribute__((noreturn)) locale_7f9500(__int64 a1);
void __attribute__((noreturn)) locale_7f9bc0(__int64 a1);
void __attribute__((noreturn)) locale_7fa280(__int64 a1);
void __attribute__((noreturn)) locale_7fa940(__int64 a1);
void __attribute__((noreturn)) locale_7fb000(__int64 a1);
void __attribute__((noreturn)) locale_7fb6c0(__int64 a1);
void __attribute__((noreturn)) locale_7fbce4(__int64 a1);
void __attribute__((noreturn)) locale_7fc304(__int64 a1);
void __attribute__((noreturn)) locale_7fc924(__int64 a1);
void __attribute__((noreturn)) locale_7fcecc(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12, __int64 a13);
void __attribute__((noreturn)) locale_7fd170(__int64 a1);
void __attribute__((noreturn)) locale_7fd3d8(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8,
                                             __int64 a9);
void __attribute__((noreturn)) locale_7fdf3c(__int64 a1);
void __attribute__((noreturn)) locale_7fe5fc(__int64 a1);
void __attribute__((noreturn)) locale_7fecbc(__int64 a1);
void __attribute__((noreturn)) locale_7ff37c(__int64 a1);
void __attribute__((noreturn)) locale_7ffa3c(__int64 a1);
void __attribute__((noreturn)) locale_8000fc(__int64 a1);
void __attribute__((noreturn)) locale_800720(__int64 a1);
void __attribute__((noreturn)) locale_800d40(__int64 a1);
void __attribute__((noreturn)) locale_801360(__int64 a1);
__int64 std___1___num_get___stage2_int_loop(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, _DWORD** a9,
                                            __int64 a10, __int64 a11,
                                            __int64 a12);
__int64 std___1___num_get___stage2_float_prep_801b80(__int64 a1, __int64 a2,
                                                     _BYTE* a3, _BYTE* a4);
void __attribute__((noreturn)) locale_801cfc(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8,
                                             __int64 a9);
__int64 std___1___num_get___stage2_float_loop_801d30(
    unsigned __int8 a1, _BYTE* a2, _BYTE* a3, _BYTE* a4, _BYTE** a5,
    unsigned __int8 a6, unsigned __int8 a7, unsigned __int8* a8, __int64 a9,
    _DWORD** a10, _DWORD* a11, __int64 a12);
__int64 std___1___num_get___stage2_int_prep_801f90(__int64 a1, __int64 a2,
                                                   _BYTE* a3);
void __attribute__((noreturn)) locale_8020f4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10);
__int64 std___1___num_get___stage2_float_prep_802120(__int64 a1, __int64 a2,
                                                     _DWORD* a3, _DWORD* a4);
void __attribute__((noreturn)) locale_80229c(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8,
                                             __int64 a9);
__int64 std___1___num_get___stage2_float_loop_8022d0(unsigned int a1, _BYTE* a2,
                                                     _BYTE* a3, _BYTE* a4,
                                                     _BYTE** a5, int a6, int a7,
                                                     unsigned __int8* a8,
                                                     __int64 a9, _DWORD** a10,
                                                     _DWORD* a11, __int64 a12);
__int64 std___1___num_get___stage2_int_prep_802520(__int64 a1, __int64 a2,
                                                   _DWORD* a3);
void __attribute__((noreturn)) locale_802684(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10);
void __attribute__((noreturn)) locale_8028c4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             char a12);
__int64 locale_802c2c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9);
__int64 std___1_num_put_do_put_802c40(__int64 a1, __int64 a2, __int64 a3,
                                      unsigned int a4, unsigned __int64 a5);
__int64 locale_802f6c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9);
__int64 std___1_num_put_do_put_802f80(__int64 a1, __int64 a2, __int64 a3,
                                      unsigned int a4, unsigned __int64 a5);
void __attribute__((noreturn)) locale_803258(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8,
                                             __int64 a9);
void __attribute__((noreturn)) locale_803538(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8,
                                             __int64 a9);
void __attribute__((noreturn)) locale_803960(__int64 a1);
void __attribute__((noreturn)) locale_803e3c(__int64 a1);
__int64 std___1_num_put_do_put_803f00(__int64 a1, __int64 a2, __int64 a3,
                                      unsigned int a4, unsigned __int64 a5);
__int64 locale_804104(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9, __int64 a10, __int64 a11, char a12);
__int64 std___1_num_put_do_put_804140(__int64 a1, __int64 a2, __int64 a3,
                                      unsigned int a4, unsigned __int64 a5);
__int64 locale_80447c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9);
__int64 std___1_num_put_do_put_804490(__int64 a1, __int64 a2, __int64 a3,
                                      unsigned int a4, unsigned __int64 a5);
__int64 locale_8047bc(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9);
__int64 std___1_num_put_do_put_8047d0(__int64 a1, __int64 a2, __int64 a3,
                                      unsigned int a4, unsigned __int64 a5);
void __attribute__((noreturn)) locale_804ab4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8,
                                             __int64 a9);
void __attribute__((noreturn)) locale_804db4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8,
                                             __int64 a9);
void __attribute__((noreturn)) locale_8051e0(__int64 a1);
void __attribute__((noreturn)) locale_8056bc(__int64 a1);
__int64 std___1_num_put_do_put_805780(__int64 a1, __int64 a2, __int64 a3,
                                      unsigned int a4, unsigned __int64 a5);
void __attribute__((noreturn))
locale_805b9c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
              __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
              __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
              __int64 a16);
void __attribute__((noreturn))
locale_8061d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
              __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
              __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
              __int64 a16);
void __attribute__((noreturn))
locale_806634(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
              __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
              __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
              __int64 a16);
__int64 std___1_time_get_get_806c8c(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4, __int64 a5, __int64 a6,
                                    __int64 a7, __int64 a8, __int64 a9,
                                    __int64 a10, __int64 a11, __int64 a12,
                                    __int64 a13, __int64 a14, __int64 a15,
                                    __int64 a16);
_QWORD* std___1_time_get_get_806ce0(__int64 a1, _QWORD* a2, _QWORD* a3,
                                    __int64 a4, _DWORD* a5, __int64 a6,
                                    char* a7, unsigned __int8* a8);
void __attribute__((noreturn)) locale_8071d0(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8,
                                             __int64 a9);
_QWORD* std___1_time_get_do_get_weekday_8072d0(__int64 a1, _QWORD* a2,
                                               _QWORD* a3, __int64 a4,
                                               _DWORD* a5, __int64 a6);
void __attribute__((noreturn)) locale_807414(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10);
_QWORD* std___1_time_get_do_get_monthname_8074f0(__int64 a1, _QWORD* a2,
                                                 _QWORD* a3, __int64 a4,
                                                 _DWORD* a5, __int64 a6);
void __attribute__((noreturn)) locale_807628(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10);
__int64 std___1_time_get_do_get_year_8076f0(__int64 a1, __int64 a2, _QWORD* a3,
                                            __int64 a4, _DWORD* a5, __int64 a6);
void __attribute__((noreturn)) locale_8077f4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8,
                                             __int64 a9);
__int64 std___1_time_get___get_day(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5, __int64 a6,
                                   __int64 a7, __int64 a8, __int64 a9,
                                   __int64 a10, char a11);
_QWORD* std___1_time_get___get_white_space(__int64 a1, _QWORD** a2, _QWORD* a3,
                                           _DWORD* a4, __int64 a5);
__int64 locale_8087a0(_QWORD* a1, _QWORD* a2, _DWORD* a3, _QWORD* a4, int a5);
_QWORD* std___1_time_get_get_808b20(__int64 a1, _QWORD* a2, _QWORD* a3,
                                    __int64 a4, _DWORD* a5, __int64 a6,
                                    unsigned int* a7, unsigned int* a8);
void __attribute__((noreturn)) locale_8090a8(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8,
                                             __int64 a9);
_QWORD* std___1_time_get_do_get_weekday_8091c0(__int64 a1, _QWORD* a2,
                                               _QWORD* a3, __int64 a4,
                                               _DWORD* a5, __int64 a6);
void __attribute__((noreturn)) locale_809304(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10);
_QWORD* std___1_time_get_do_get_monthname_8093e0(__int64 a1, _QWORD* a2,
                                                 _QWORD* a3, __int64 a4,
                                                 _DWORD* a5, __int64 a6);
void __attribute__((noreturn)) locale_809518(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10);
__int64 std___1_time_get_do_get_year_8095e0(__int64 a1, __int64 a2, _QWORD* a3,
                                            __int64 a4, _DWORD* a5, __int64 a6);
void __attribute__((noreturn)) locale_8096e4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8,
                                             __int64 a9);
void __attribute__((noreturn)) locale_809df4(__int64 a1);
_QWORD* std___1_time_put_put_80aae0(__int64 a1, _QWORD* a2, __int64 a3,
                                    unsigned int a4, __int64 a5,
                                    unsigned __int8* a6, unsigned __int8* a7);
void __attribute__((noreturn)) locale_80ad90(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, char a11);
_QWORD* std___1_time_put_put_80af00(__int64 a1, _QWORD* a2, __int64 a3,
                                    unsigned int a4, __int64 a5,
                                    unsigned int* a6, unsigned int* a7);
void __attribute__((noreturn)) locale_80b1a4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, char a11);
void __attribute__((noreturn)) locale_80b358(__int64 a1);
__int64 std___1_money_get___do_get_80bda0(_QWORD* a1, _QWORD* a2, char a3,
                                          __int64 a4, __int16 a5, _DWORD* a6,
                                          bool* a7, __int64 a8, __int64* a9,
                                          __int64* a10, __int64 a11);
void __attribute__((noreturn)) locale_80d334(__int64 a1);
void __attribute__((noreturn))
locale_80d338(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
              __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
              __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
              __int64 a16, __int64 a17, __int64 a18, __int64 a19,
              void (*a20)(__int64), __int64 a21, __int64 a22, __int64 a23,
              __int64 a24, __int64 a25, __int64 a26, __int64 a27, __int64 a28,
              __int64 a29, __int64 a30, __int64 a31, __int64 a32, __int64 a33,
              __int64 a34, __int64 a35, __int64 a36, __int64 a37, __int64 a38,
              __int64 a39, __int64 a40, __int64 a41, __int64 a42, __int64 a43);
_QWORD* std___1_money_get_do_get_80d460(__int64 a1, _QWORD* a2, _QWORD* a3,
                                        char a4, __int64 a5, _DWORD* a6,
                                        unsigned __int8* a7);
unsigned __int64* locale_80d8a0(unsigned __int64* a1, unsigned __int64 a2,
                                __int64 a3);
void __attribute__((noreturn)) locale_80dae4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12);
__int64 std___1_money_get___do_get_80e200(_QWORD* a1, _QWORD* a2, char a3,
                                          __int64 a4, __int16 a5, _DWORD* a6,
                                          bool* a7, __int64 a8, __int64* a9,
                                          __int64* a10, unsigned __int64 a11);
void __attribute__((noreturn)) locale_80f6c8(__int64 a1);
void __attribute__((noreturn)) locale_80f6cc(__int64 a1);
void __attribute__((noreturn))
locale_80f6d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
              __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
              __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
              __int64 a16, __int64 a17, __int64 a18, void (*a19)(__int64),
              __int64 a20, __int64 a21, __int64 a22, __int64 a23, __int64 a24,
              __int64 a25, __int64 a26, __int64 a27, __int64 a28, __int64 a29,
              __int64 a30, __int64 a31, __int64 a32, __int64 a33, __int64 a34,
              __int64 a35, __int64 a36, __int64 a37, __int64 a38, __int64 a39,
              __int64 a40, __int64 a41);
_QWORD* std___1_money_get_do_get_80f820(__int64 a1, _QWORD* a2, _QWORD* a3,
                                        char a4, __int64 a5, _DWORD* a6,
                                        unsigned __int8* a7);
_QWORD* locale_80fb50(_QWORD* a1, unsigned __int64 a2, __int64 a3);
void __attribute__((noreturn))
locale_80fdbc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
              __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
              __int64 a11, __int64 a12, __int64 a13, __int64 a14);
void __attribute__((noreturn)) locale_811078(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12);
__int64 locale_812100(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, int a6);
__int64 std___1_money_put_do_put_8122f8(__int64 a1, __int64 a2, __int64 a3,
                                        __int64 a4, __int64 a5, __int64 a6,
                                        __int64 a7, __int64 a8, __int64 a9,
                                        __int64 a10, __int64 a11, __int64 a12);
__attribute__((swiftcall)) void
std___1_messages_do_get(PSEUDO_X8 x8_, __int64 unused_int0, __int64 unused_int1,
                        __int64 unused_int2, __int64 unused_int3, __int64 a1);
__int64 std___1_locale___imp___imp_812950(__int64 a1, __int64 a2);
void __attribute__((noreturn)) locale_812e88(__int64 a1);
void __attribute__((noreturn)) locale_8158d0(__int64 a1);
void __attribute__((noreturn)) locale_815acc(__int64 a1);
void __attribute__((noreturn)) locale_816ad0(__int64 a1);
void __attribute__((noreturn)) locale_816d10(__int64 a1);
void __attribute__((noreturn)) locale_816f40(__int64 a1);
void __attribute__((noreturn)) locale_817120(__int64 a1);
void __attribute__((noreturn)) locale_817db0(__int64 a1);
__int64 std___1_build_name(__int64 result, char* a2, __int64 a3, int a4);
__int64 std___1_locale___imp_install_from_8183c0(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_8184d0(__int64 a1);
__int64 std___1_locale___imp_install_from_818500(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_818610(__int64 a1);
__int64 std___1_locale___imp_install_from_818640(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_818750(__int64 a1);
__int64 std___1_locale___imp_install_from_818780(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_818890(__int64 a1);
__int64 std___1_locale___imp_install_from_8188c0(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_8189d0(__int64 a1);
__int64 std___1_locale___imp_install_from_818a00(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_818b10(__int64 a1);
__int64 std___1_locale___imp_install_from_818b40(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_818c50(__int64 a1);
__int64 std___1_locale___imp_install_from_818c80(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_818d90(__int64 a1);
__int64 std___1_locale___imp_install_from_818dc0(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_818ed0(__int64 a1);
__int64 std___1_locale___imp_install_from_818f00(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_819010(__int64 a1);
__int64 std___1_locale___imp_install_from_819040(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_819150(__int64 a1);
__int64 std___1_locale___imp_install_from_819180(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_819290(__int64 a1);
__int64 std___1_locale___imp_install_from_8192c0(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_8193d0(__int64 a1);
__int64 std___1_locale___imp_install_from_819400(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_819510(__int64 a1);
__int64 std___1_locale___imp_install_from_819540(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_819650(__int64 a1);
__int64 std___1_locale___imp_install_from_819680(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_819790(__int64 a1);
__int64 std___1_locale___imp_install_from_8197c0(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_8198d0(__int64 a1);
__int64 std___1_locale___imp_install_from_819900(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_819a10(__int64 a1);
__int64 std___1_locale___imp_install_from_819a40(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_819b50(__int64 a1);
__int64 std___1_locale___imp_install_from_819b80(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_819c90(__int64 a1);
__int64 std___1_locale___imp_install_from_819cc0(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_819dd0(__int64 a1);
__int64 std___1_locale___imp_install_from_819e00(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_819f10(__int64 a1);
__int64 std___1_locale___imp_install_from_819f40(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_81a050(__int64 a1);
__int64 std___1_locale___imp_install_from_81a080(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_81a190(__int64 a1);
__int64 std___1_locale___imp_install_from_81a1c0(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_81a2d0(__int64 a1);
__int64 std___1_locale___imp_install_from_81a300(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_81a410(__int64 a1);
__int64 std___1_locale___imp_install_from_81a440(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_81a550(__int64 a1);
__int64 std___1_locale___imp_install_from_81a580(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_81a690(__int64 a1);
__int64 std___1_locale___imp_install_from_81a6c0(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_81a7d0(__int64 a1);
__int64 std___1_locale___imp_install_from_81a800(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4);
void __attribute__((noreturn)) locale_81a910(__int64 a1);
__int64 std___1_locale_locale_81adb8(__int64 a1);
void __attribute__((noreturn)) locale_81ae5c();
void __attribute__((noreturn)) locale_81b084(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12);
void __attribute__((noreturn)) locale_81b124(__int64 a1);
void __attribute__((noreturn)) locale_81b25c(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12);
__int64 std___1_locale_locale_81b318(__int64 a1);
void std___1_locale_name_81b398(__int64 a1);
__int64 std___1_locale_global(__int64 a1);
bool locale_81b850(__int64* a1, __int64* a2);
void __attribute__((noreturn))
locale_81bde0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
              __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
              __int64 a11, __int64 a12, __int64 a13, __int64 a14);
void __attribute__((noreturn)) locale_81bfd8(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12);
__int64 std___1_collate_byname_do_compare(__int64 a1, __int64 a2, __int64 a3,
                                          __int64 a4, __int64 a5);
void __attribute__((noreturn))
locale_81c4a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
              __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
              __int64 a11, __int64 a12, __int64 a13, __int64 a14);
bool std___1_ctype_do_is_81c730(__int64 a1, __int16 a2, unsigned int a3);
unsigned int* std___1_ctype_do_is_81c780(__int64 a1, unsigned int* a2,
                                         unsigned int* a3, _WORD* a4);
unsigned int* std___1_ctype_do_scan_is(__int64 a1, unsigned __int16 a2,
                                       unsigned int* a3, unsigned int* a4);
unsigned int* std___1_ctype_do_scan_not(__int64 a1, unsigned __int16 a2,
                                        unsigned int* a3, unsigned int* a4);
__int64 std___1_ctype_do_toupper_81c890(__int64 a1, unsigned int a2);
int* std___1_ctype_do_toupper_81c8c0(__int64 a1, int* a2, int* a3);
__int64 std___1_ctype_do_tolower_81c910(__int64 a1, unsigned int a2);
int* std___1_ctype_do_tolower_81c940(__int64 a1, int* a2, int* a3);
__int64 std___1_ctype_ctype(__int64 result, __int64 a2, char a3, __int64 a4);
__int64 std___1_ctype_Destroy_ctype_81cab0(__int64 a1, void* a2);
__int64 std___1_ctype_do_toupper_81cb30(__int64 a1, unsigned __int8 a2);
unsigned __int8* std___1_ctype_do_toupper_81cb60(__int64 a1,
                                                 unsigned __int8* a2,
                                                 unsigned __int8* a3);
__int64 std___1_ctype_do_tolower_81cc80(__int64 a1, unsigned __int8 a2);
unsigned __int8* std___1_ctype_do_tolower_81cca0(__int64 a1,
                                                 unsigned __int8* a2,
                                                 unsigned __int8* a3);
__int64 std___1_ctype_byname_ctype_byname_81cf80(__int64 a1, __int64 a2,
                                                 __int64 a3);
__int64 std___1_ctype_byname_ctype_byname_81d0b0(__int64 a1, __int64 a2,
                                                 __int64 a3);
bool std___1_ctype_byname_do_is_81d530(__int64 a1, __int16 a2, unsigned int a3);
unsigned int* std___1_ctype_byname_do_is_81d6a0(__int64 a1, unsigned int* a2,
                                                unsigned int* a3, _WORD* a4);
unsigned int* std___1_ctype_byname_do_scan_is(__int64 a1, __int16 a2,
                                              unsigned int* a3,
                                              unsigned int* a4);
unsigned int* std___1_ctype_byname_do_scan_not(__int64 a1, __int16 a2,
                                               unsigned int* a3,
                                               unsigned int* a4);
void __attribute__((noreturn)) locale_81dbf4(__int64 a1);
void __attribute__((noreturn)) locale_81dbf8(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10);
void __attribute__((noreturn)) locale_81dcbc(__int64 a1);
void __attribute__((noreturn)) locale_81dcc0(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10);
void __attribute__((noreturn)) locale_81dd3c(__int64 a1);
void __attribute__((noreturn)) locale_81dd40(__int64 a1);
void __attribute__((noreturn)) locale_81de04(__int64 a1);
void __attribute__((noreturn)) locale_81de08(__int64 a1);
void __attribute__((noreturn)) locale_81df4c(__int64 a1);
void __attribute__((noreturn)) locale_81e454(__int64 a1);
void __attribute__((noreturn)) locale_81e488(__int64 a1);
void __attribute__((noreturn)) locale_81e808(__int64 a1);
void __attribute__((noreturn)) locale_81e83c(__int64 a1);
void __attribute__((noreturn)) locale_81ea1c(__int64 a1);
void __attribute__((noreturn)) locale_81ea20(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10);
void __attribute__((noreturn)) locale_81eaf4(__int64 a1);
void __attribute__((noreturn)) locale_81eb0c(__int64 a1);
void __attribute__((noreturn)) locale_81ec24(__int64 a1);
void __attribute__((noreturn)) locale_81ec28(__int64 a1);
void __attribute__((noreturn)) locale_81eca8(__int64 a1);
void __attribute__((noreturn)) locale_81ecac(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10);
__int64 std___1_codecvt_do_in_81fa00(__int64 a1, __int64 a2, __int64 a3,
                                     __int64 a4, _QWORD* a5, __int64 a6,
                                     __int64 a7, _QWORD* a8);
__int64 std___1_codecvt_do_in_8200b0(__int64 a1, __int64 a2, __int64 a3,
                                     __int64 a4, _QWORD* a5, __int64 a6,
                                     __int64 a7, _QWORD* a8);
__int64 std___1___codecvt_utf8_do_out_820170(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, _QWORD* a5, __int64 a6,
                                             __int64 a7, _QWORD* a8);
__int64 std___1___codecvt_utf8_do_in_8201e0(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, _QWORD* a5, __int64 a6,
                                            __int64 a7, _QWORD* a8);
__int64 std___1___codecvt_utf8_do_out_8207a0(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, _QWORD* a5, __int64 a6,
                                             __int64 a7, _QWORD* a8);
__int64 std___1___codecvt_utf8_do_in_820810(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, _QWORD* a5, __int64 a6,
                                            __int64 a7, _QWORD* a8);
void __attribute__((noreturn)) locale_822928(__int64 a1);
void __attribute__((noreturn)) locale_822ab4(__int64 a1);
void __attribute__((noreturn)) locale_822ab8(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12, char a13);
void __attribute__((noreturn)) locale_822b48(__int64 a1);
void __attribute__((noreturn)) locale_822c54(__int64 a1);
void __attribute__((noreturn)) locale_822c58(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10);
void __attribute__((noreturn)) locale_822ce8(__int64 a1);
void __attribute__((noreturn)) locale_822e74(__int64 a1);
void __attribute__((noreturn)) locale_822e78(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12, char a13);
void __attribute__((noreturn)) locale_822f08(__int64 a1);
void __attribute__((noreturn)) locale_823004(__int64 a1);
void __attribute__((noreturn)) locale_823008(__int64 a1);
void __attribute__((noreturn)) locale_8237e0(__int64 a1);
__int64 std___1_init_wweeks();
void __attribute__((noreturn)) locale_824360(__int64 a1);
__int64 std___1_init_wmonths();
void __attribute__((noreturn)) locale_824c30(__int64 a1);
void __attribute__((noreturn)) locale_824d50(__int64 a1);
void __attribute__((noreturn)) locale_824e70(__int64 a1);
void __attribute__((noreturn)) locale_824f90(__int64 a1);
__attribute__((swiftcall)) void
std___1___time_get_storage___analyze(PSEUDO_X8 x8_, unsigned __int8* a1,
                                     unsigned __int8 a2, _QWORD* a3);
void __attribute__((noreturn)) locale_827538(__int64 a1);
void __attribute__((noreturn)) locale_829d34(__int64 a1);
void __attribute__((noreturn)) locale_829d38(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8,
                                             __int64 a9);
void __attribute__((noreturn)) locale_829d64(__int64 a1);
void __attribute__((noreturn)) locale_829d68(__int64 a1);
void __attribute__((noreturn)) locale_829d6c(__int64 a1);
__int64 locale_829d70(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9);
void __attribute__((noreturn)) locale_829e6c(__int64 a1);
void __attribute__((noreturn)) std___1___time_get_storage___time_get_storage(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8, __int64 a9, char a10);
__int64 std___1_ctype_byname_Destroy_ctype_byname(__int64 a1);
void __attribute__((noreturn)) locale_82a58c(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10);
void __attribute__((noreturn)) locale_82ab2c(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12);
void __attribute__((noreturn)) locale_82abe8(__int64 a1);
__int64 locale_82abec(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9, __int64 a10);
void __attribute__((noreturn)) locale_82ae98(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12);
void __attribute__((noreturn)) locale_82b7d8(__int64 a1);
void __attribute__((noreturn)) locale_82d320(__int64 a1);
__int64 locale_82e000();
__int64 locale_82e2f0();
__int64 locale_82e780();
__int64 locale_82ec70();
__int64 locale_82ecd0();
void __attribute__((noreturn)) locale_82f1ac(__int64 a1);
__int64 locale_82f410(__int64 a1, _BYTE* a2);
void __attribute__((noreturn)) locale_82f4e4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8,
                                             __int64 a9);
__int64 locale_82f608(__int64 a1);
__int64 locale_82f728(__int64 a1);
unsigned __int64 locale_82f740(unsigned __int8* a1, unsigned __int8* a2,
                               _DWORD* a3, unsigned int a4);
void __attribute__((noreturn)) locale_82f870(__int64 a1);
unsigned __int64 locale_82f890(unsigned __int8* a1, unsigned __int8* a2,
                               _DWORD* a3, unsigned int a4);
void __attribute__((noreturn)) locale_82f9c0(__int64 a1);
void __attribute__((noreturn)) locale_82fb00(__int64 a1);
void __attribute__((noreturn)) locale_82fc40(__int64 a1);
void __attribute__((noreturn)) locale_82fd74(__int64 a1);
void __attribute__((noreturn)) locale_82fea4(__int64 a1);
void __attribute__((noreturn)) locale_82ffe4(__int64 a1);
__int64 locale_8300c0(__int64 a1, _DWORD* a2);
void __attribute__((noreturn)) locale_830194(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8,
                                             __int64 a9);
__int64 locale_8301b0(__int64 a1, __int64 a2, __int64 a3);
__int64 locale_83027c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9, char a10);
char* locale_830290(char* a1, char* a2, unsigned __int64 a3, signed int a4);
__int64 locale_830500(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 locale_8305c0(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 locale_8306a0(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 locale_830760(unsigned __int64 a1, unsigned int a2);
void __attribute__((noreturn)) locale_830958(__int64 a1);
__int64 locale_83095c(__int64 a1);
__int64 SdkRoutine_810f00_alt1(__int64, __int64, __int64, __int64, __int64,
                               void*) __asm__("SdkRoutine_810f00");
__int64 SdkRoutine_857220_alt1(__int64,
                               unsigned __int64) __asm__("SdkRoutine_857220");
__int64 SdkRoutine_87d160(__int64, char, __int64, __int64, __int64, __int64,
                          __int64, __int64, __int64, __int64);
__int64 SdkRoutine_87d170(__int64, __int64, __int64, __int16, __int64, __int64,
                          __int64, char, __int64, char, char, __int64, __int64,
                          __int64, int);
__int64 SdkRoutine_87d180(__int64, char, __int64, __int64, __int64, __int64,
                          __int64, __int64, __int64, __int64);
__int64 SdkRoutine_87d190(__int64, __int64, __int64, __int16, __int64,
                          unsigned __int64, __int64, char, __int64, int, int,
                          __int64, __int64, __int64, int);
__int64 __cxa_begin_catch_plt_alt1(__int64) __asm__("__cxa_begin_catch_plt");
__int64 malloc_plt_alt1(unsigned __int64) __asm__("malloc_plt");
__int64 newlocale_plt_alt1(char, __int64, __int64) __asm__("newlocale_plt");
__int64
std___1___call_once_plt_alt1(__int64, __int64,
                             __int64) __asm__("std___1___call_once_plt");
__int64 std___1___libcpp_asprintf_l(__int64, __int64, __int64, ...);
int __cxa_guard_acquire_plt_alt1(__int64) __asm__("__cxa_guard_acquire_plt");
int snprintf_plt(__int64, unsigned __int64, const char*, ...);
void _Unwind_Resume_plt_alt2(__int64) __asm__("_Unwind_Resume_plt");
void __cxa_end_catch_plt();
void __cxa_guard_abort_plt_alt1(__int64) __asm__("__cxa_guard_abort_plt");
void __cxa_guard_release_plt_alt1(__int64) __asm__("__cxa_guard_release_plt");
void __cxa_rethrow_plt_alt1() __asm__("__cxa_rethrow_plt");
void free_plt_alt1(__int64) __asm__("free_plt");
void std___1_locale_Destroy_locale_plt_alt1(__int64) __asm__(
    "std___1_locale_Destroy_locale_plt");
void __attribute__((noreturn)) locale_7d37f8(__int64 a1);
__int64 std___1_money_put_do_put_810040(long double a1, __int64 a2, __int64 a3,
                                        char a4, __int64 a5, unsigned int a6);
__int64 std___1_money_put_do_put_8110a0(__int64 a1, __int64 a2, char a3,
                                        __int64 a4, unsigned int a5,
                                        unsigned __int8* a6);
__int64 std___1_money_put_do_put_811490(long double a1, __int64 a2, __int64 a3,
                                        char a4, __int64 a5, int a6);
__int64 std___1_money_put_do_put_812320(__int64 a1, __int64 a2, char a3,
                                        __int64 a4, int a5,
                                        unsigned __int8* a6);
__attribute__((swiftcall)) void

std_exception_ptr___from_native_exception_pointer(PSEUDO_X8 x8_, void* this_)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  *a2 = this_;
  {
    __cxa_increment_exception_refcount_plt();
    return;
  }
}

__int64 std_nested_exception_nested_exception(void* this_)
{
  __int64 result;

  *(_QWORD*)this_ = SdkData_e892f0 + 16;
  result = __cxa_current_primary_exception_plt();
  *((_QWORD*)this_ + 1) = result;
  return result;
}

__attribute__((swiftcall)) void std_current_exception(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 result;

  result = __cxa_current_primary_exception_plt();
  *a1 = result;
  {
    result;
    return;
  }
}

void std_nested_exception_Destroy_nested_exception(void* this_)
{
  *(_QWORD*)this_ = SdkData_e892f0 + 16;
  std_exception_ptr_Destroy_exception_ptr_plt((char*)this_ + 8);
}

__int64 locale_7d3740(__int64 a1)
{
  __int64 v1;
  char v2;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 32);
  v2 = *(_BYTE*)(v1 + 48);
  v3 = *(_QWORD*)(v1 + 64);
  v4 = v1 + 49;
  if ((v2 & 1) != 0) {
    return v3;
  }
  else {
    return v4;
  }
}

void __attribute__((noreturn)) locale_7d37f8(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __cxa_begin_catch_plt_alt1(a1),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  __cxa_rethrow_plt_alt1(),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v2 = v1;
  __cxa_end_catch_plt(),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  _Unwind_Resume_plt_alt2(v2),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_7cd620(),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
}

__attribute__((swiftcall)) void locale_7d3820(PSEUDO_X8 x8_, __int64 a1,
                                              _QWORD* a2)
{
  unsigned __int64* a3 = (unsigned __int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  signed int v9;
  __int64 v10;
  char* v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[4];
  struct {
    _QWORD v16[4];
    _QWORD v17[4];
  } v16_;
  _BYTE v18[256];

  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  v16_.v17[0] = *a2;
  v16_.v17[1] = v4;
  v16_.v17[2] = v5;
  v16_.v17[3] = v6;
  qmemcpy(v16_.v16, v16_.v17, sizeof(v16_.v16));
  v9 = vsnprintf_plt(v18, 256, a1, v16_.v16);
  v10 = v9;
  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  if ((unsigned int)v9 <= 0xFF) {
    ((__int64 (*)(unsigned __int64*, _BYTE*, _QWORD))SdkRoutine_513100)(a3, v18,
                                                                        v9);
    return;
  }
  locale_7d39e0(a3, v9);
  if ((*(_BYTE*)a3 & 1) != 0) {
    v12 = (char*)a3[2];
  }
  else {
    v12 = (char*)a3 + 1;
  }
  v13 = a2[1];
  v15[0] = *a2;
  v15[1] = v13;
  v14 = a2[3];
  v15[2] = a2[2];
  v15[3] = v14;
  {
    vsnprintf_plt(v12, v10 + 1, a1, v15);
    return;
  }
}

void __attribute__((noreturn)) locale_7d38f0(__int64 a1)
{
  _QWORD* v1;

  if ((*(_BYTE*)v1 & 1) != 0) {
    SdkRoutine_857220(v1[2], *v1 & 0xFFFFFFFFFFFFFFFELL);
  }
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_7d3920()
{
  ios_instantiations_7d3940("basic_string");
}

unsigned __int64* locale_7d39e0(unsigned __int64* result, unsigned __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64* v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;

  if (a2 != 0) {
    v2 = *result;
    if ((*(_BYTE*)result & 1) != 0) {
      v3 = (*result & 0xFFFFFFFFFFFFFFFELL) - 1;
    }
    else {
      v3 = 22;
    }
    if ((v2 & 1) != 0) {
      v4 = result[1];
    }
    else {
      v4 = (unsigned __int8)v2 >> 1;
    }
    if (v3 - v4 >= a2) {
      v5 = v4 + a2;
      if ((v2 & 1) != 0) {
        v12 = (char*)result[2];
      }
      else {
        v12 = (char*)result + 1;
      }
      if ((*result & 1) == 0) {
        *(_BYTE*)result = 2 * v5;
      LABEL_35:
        v12[v5] = 0;
        return result;
      }
    LABEL_34:
      result[1] = v5;
      goto LABEL_35;
    }
    v5 = v4 + a2;
    if (v4 + a2 - v3 > -10LL - v3) {
      locale_7d3920();
    }
    v6 = result;
    if ((v2 & 1) != 0) {
      v7 = (char*)result[2];
    }
    else {
      v7 = (char*)result + 1;
    }
    if (v3 > 0x7FFFFFFFFFFFFFF2LL) {
      v10 = -9;
      v11 = SdkRoutine_85e050(0xFFFFFFFFFFFFFFF7LL);
      if (v4 == 0) {
      LABEL_31:
        if (v3 != 22) {
          SdkRoutine_857220(v7, v3 + 1);
        }
        result = v6;
        v6[1] = v4;
        v6[2] = v11;
        *v6 = v10 | 1;
        v12 = (char*)v11;
        goto LABEL_34;
      }
    }
    else {
      v8 = 2 * v3;
      if (v5 > 2 * v3) {
        v8 = v4 + a2;
      }
      if ((v8 | 7) == 0x17) {
        v9 = 26;
      }
      else {
        v9 = (v8 | 7) + 1;
      }
      if (v8 >= 0x17) {
        v10 = v9;
      }
      else {
        v10 = 23;
      }
      v11 = SdkRoutine_85e050(v10);
      if (v4 == 0) {
        goto LABEL_31;
      }
    }
    memmove_plt(v11, v7, v4);
    goto LABEL_31;
  }
  return result;
}

void* std___1___fs_filesystem_path_replace_extension(void* this_, void* a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  bool v7;
  unsigned __int64 v8;
  char* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  int v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  _BYTE* v16;
  unsigned __int64 v17;
  char* v18;
  unsigned __int64 v19;
  __int64 v21[3];

  locale_7d3ca0((void*)(v21), this_);
  if ((v21[0] & 1) != 0) {
    v4 = v21[1];
  }
  else {
    v4 = (unsigned __int64)LOBYTE(v21[0]) >> 1;
  }
  if (v4 != 0) {
    v5 = *(unsigned __int8*)this_;
    v6 = *((_QWORD*)this_ + 1);
    if ((v5 & 1) == 0) {
      v6 = v5 >> 1;
    }
    v7 = v6 >= v4;
    v8 = v6 - v4;
    if (!v7) {
      locale_7d5810();
    }
    if ((v5 & 1) != 0) {
      v9 = *((char**)this_ + 2);
      *((_QWORD*)this_ + 1) = v8;
    }
    else {
      *(_BYTE*)this_ = 2 * v8;
      v9 = (char*)this_ + 1;
    }
    v9[v8] = 0;
  }
  v10 = *(unsigned __int8*)a2;
  v11 = *((_QWORD*)a2 + 1);
  v12 = v10 & 1;
  v13 = v10 >> 1;
  if (v12 != 0) {
    v14 = *((_QWORD*)a2 + 1);
  }
  else {
    v14 = v13;
  }
  if (v14 != 0) {
    v15 = *((char**)a2 + 2);
    if (v12 != 0) {
      v16 = *((_BYTE**)a2 + 2);
    }
    else {
      v16 = (char*)a2 + 1;
    }
    if (*v16 != 46) {
      SdkRoutine_86fc80(this_, ".", 1);
      v17 = *(unsigned __int8*)a2;
      v11 = *((_QWORD*)a2 + 1);
      v15 = *((char**)a2 + 2);
      v12 = v17 & 1;
      v13 = v17 >> 1;
    }
    if (v12 != 0) {
      v18 = v15;
    }
    else {
      v18 = (char*)a2 + 1;
    }
    if (v12 != 0) {
      v19 = v11;
    }
    else {
      v19 = v13;
    }
    SdkRoutine_86fc80(this_, v18, v19);
  }
  if ((v21[0] & 1) != 0) {
    SdkRoutine_857220(v21[2], v21[0] & 0xFFFFFFFFFFFFFFFELL);
  }
  return this_;
}

void __attribute__((noreturn)) locale_7d3c64(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12)
{
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__attribute__((swiftcall)) void locale_7d3ca0(PSEUDO_X8 x8_, void* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _WORD* result;
  unsigned __int64 v4;
  char* v5;
  __int64 v6;
  char* v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  unsigned __int64 v11;
  struct {
    __int64 v12;
    __int64 v13;
    __int64 v14;
  } v12_;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = std___1___fs_filesystem_path___filename(a1),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v4 == 0) {
    goto LABEL_11;
  }
  if (v4 == 2) {
    if (*result == 11822) {
      goto LABEL_11;
    }
  }
  else if (v4 == 1 && *(_BYTE*)result == 46) {
    goto LABEL_11;
  }
  v5 = (char*)result + v4;
  v6 = 0;
  while (-(__int64)v4 != v6) {
    v7 = &v5[v6--];
    if (*(v7 - 1) == 46) {
      if (v4 + v6 + 1 < 2) {
        break;
      }
      if (v4 + v6 > v4) {
        locale_7d5830((__int64)"string_view::substr"),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v8 = -v6;
      if ((unsigned __int64)-v6 >= 0xFFFFFFFFFFFFFFF7LL) {
        locale_7d3920(),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (v8 >= 0x17) {
        if ((v8 | 7) == 0x17) {
          v11 = 26;
        }
        else {
          v11 = (v8 | 7) + 1;
        }
        v9 = (char*)SdkRoutine_85e050(v11),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v12_.v13 = -v6;
        v12_.v14 = (__int64)v9;
        v12_.v12 = v11 | 1;
      }
      else {
        LOBYTE(v12_.v12) = -2 * v6;
        v9 = (char*)&v12_.v12 + 1;
        if (v6 == 0) {
          v8 = 0;
          goto LABEL_12;
        }
      }
      result = (_WORD*)memmove_plt(v9, &v5[v6], -v6),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_12;
    }
  }
LABEL_11:
  v8 = 0;
  LOBYTE(v12_.v12) = 0;
  v9 = (char*)&v12_.v12 + 1;
LABEL_12:
  v9[v8] = 0;
  v10 = v12_.v13;
  *a2 = v12_.v12;
  a2[1] = v10;
  a2[2] = v12_.v14;
  {
    result;
    return;
  }
}

__int64 std___1___fs_filesystem_path___root_name(void* this_)
{
  unsigned __int64 v1;
  char* v2;
  unsigned __int64 v3;
  bool v4;
  unsigned __int64 v5;
  struct {
    _QWORD v7[2];
    __int64 v8;
    __int64 v9;
    char v10;
  } v7_;

  v1 = *(unsigned __int8*)this_;
  v3 = *((_QWORD*)this_ + 1);
  v2 = *((char**)this_ + 2);
  v4 = (v1 & 1) == 0;
  v5 = v1 >> 1;
  v7_.v8 = 0;
  v7_.v9 = 0;
  if (v4) {
    v2 = (char*)this_ + 1;
  }
  if (!v4) {
    v5 = v3;
  }
  v7_.v7[0] = v2;
  v7_.v7[1] = v5;
  v7_.v10 = 1;
  llvmlibcxx_libcxx_7d58e0((__int64)v7_.v7);
  if (v7_.v10 == 2) {
    return v7_.v8;
  }
  else {
    return 0;
  }
}

const char* std___1___fs_filesystem_path___root_directory(void* this_)
{
  unsigned __int64 v1;
  char* v2;
  unsigned __int64 v3;
  bool v4;
  unsigned __int64 v5;
  int v6;
  struct {
    _QWORD v8[2];
    _BYTE* v9;
    __int64 v10;
    unsigned __int8 v11;
  } v8_;

  v1 = *(unsigned __int8*)this_;
  v3 = *((_QWORD*)this_ + 1);
  v2 = *((char**)this_ + 2);
  v4 = (v1 & 1) == 0;
  v5 = v1 >> 1;
  v8_.v9 = nullptr;
  v8_.v10 = 0;
  if (v4) {
    v2 = (char*)this_ + 1;
  }
  if (!v4) {
    v5 = v3;
  }
  v8_.v8[0] = v2;
  v8_.v8[1] = v5;
  v8_.v11 = 1;
  llvmlibcxx_libcxx_7d58e0((__int64)v8_.v8);
  v6 = v8_.v11;
  if (v8_.v11 == 2) {
    llvmlibcxx_libcxx_7d58e0((__int64)v8_.v8);
    v6 = v8_.v11;
  }
  if (v6 != 3) {
    return nullptr;
  }
  if (*v8_.v9 == 92) {
    return "\\";
  }
  return "/";
}

const char* std___1___fs_filesystem_path___root_path_raw(void* this_)
{
  unsigned __int64 v1;
  char* v2;
  unsigned __int64 v3;
  bool v5;
  unsigned __int64 v6;
  const char* result;
  char* v8;
  bool v9;
  struct {
    char* v10;
    unsigned __int64 v11;
    const char* v12;
    __int64 v13;
    char v14;
  } v10_;

  v1 = *(unsigned __int8*)this_;
  v3 = *((_QWORD*)this_ + 1);
  v2 = *((char**)this_ + 2);
  v5 = (v1 & 1) == 0;
  v6 = v1 >> 1;
  v10_.v12 = nullptr;
  v10_.v13 = 0;
  if (v5) {
    v2 = (char*)this_ + 1;
  }
  if (!v5) {
    v6 = v3;
  }
  v10_.v10 = v2;
  v10_.v11 = v6;
  v10_.v14 = 1;
  llvmlibcxx_libcxx_7d58e0((__int64)&v10_.v10);
  if (v10_.v14 == 3) {
    if (*v10_.v12 == 92) {
      return "\\";
    }
    else {
      return "/";
    }
  }
  else {
    result = nullptr;
    if (v10_.v14 == 2) {
      result = v10_.v12;
      v8 = (char*)&v10_.v12[v10_.v13];
      v9 = &v10_.v12[v10_.v13] == nullptr || v8 == &v10_.v10[v10_.v11];
      if (!v9 && *v8 == 47) {
        llvmlibcxx_libcxx_7d58e0((__int64)&v10_.v10);
        if ((*(_BYTE*)this_ & 1) != 0) {
          return *((const char**)this_ + 2);
        }
        else {
          return (char*)this_ + 1;
        }
      }
    }
  }
  return result;
}

__int64 std___1___fs_filesystem_path___relative_path(void* this_)
{
  unsigned __int64 v1;
  char* v2;
  unsigned __int64 v3;
  bool v4;
  unsigned __int64 v5;
  int v6;
  struct {
    _QWORD v8[2];
    __int64 v9;
    __int64 v10;
    unsigned __int8 v11;
  } v8_;

  v1 = *(unsigned __int8*)this_;
  v3 = *((_QWORD*)this_ + 1);
  v2 = *((char**)this_ + 2);
  v4 = (v1 & 1) == 0;
  v5 = v1 >> 1;
  v8_.v9 = 0;
  v8_.v10 = 0;
  if (v4) {
    v2 = (char*)this_ + 1;
  }
  if (!v4) {
    v5 = v3;
  }
  v8_.v8[0] = v2;
  v8_.v8[1] = v5;
  v8_.v11 = 1;
  llvmlibcxx_libcxx_7d58e0((__int64)v8_.v8);
  v6 = v8_.v11;
  if (v8_.v11 <= 3u) {
    do {
      llvmlibcxx_libcxx_7d58e0((__int64)v8_.v8);
      v6 = v8_.v11;
    } while (v8_.v11 < 4u);
  }
  if (v6 == 6) {
    return 0;
  }
  else {
    return v8_.v9;
  }
}

__int64 std___1___fs_filesystem_path___parent_path(void* this_)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  char* v3;
  char* v5;
  int v6;
  unsigned __int64 v8;
  char* v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  char* v13;
  struct {
    unsigned __int64 v14[2];
    char* v15;
    __int64 v16;
    unsigned __int8 v17;
  } v14_;

  v1 = *(unsigned __int8*)this_;
  v2 = *((_QWORD*)this_ + 1);
  if ((v1 & 1) == 0) {
    v2 = v1 >> 1;
  }
  if (v2 == 0) {
    return 0;
  }
  v3 = *((char**)this_ + 2);
  v14_.v15 = nullptr;
  v14_.v16 = 0;
  if ((v1 & 1) != 0) {
    v5 = v3;
  }
  else {
    v5 = (char*)this_ + 1;
  }
  v14_.v14[0] = (unsigned __int64)v5;
  v14_.v14[1] = v2;
  v14_.v17 = 1;
  llvmlibcxx_libcxx_7d58e0((__int64)v14_.v14);
  v6 = v14_.v17;
  if (v14_.v17 <= 3u) {
    do {
      llvmlibcxx_libcxx_7d58e0((__int64)v14_.v14);
      v6 = v14_.v17;
    } while (v14_.v17 < 4u);
  }
  if (v6 == 6) {
    if ((*(_BYTE*)this_ & 1) != 0) {
      return *((_QWORD*)this_ + 2);
    }
    else {
      return (__int64)this_ + 1;
    }
  }
  else {
    v8 = *(unsigned __int8*)this_;
    v10 = *((_QWORD*)this_ + 1);
    v9 = *((char**)this_ + 2);
    v11 = (v8 & 1) == 0;
    v12 = v8 >> 1;
    v14_.v15 = nullptr;
    v14_.v16 = 0;
    if (v11) {
      v9 = (char*)this_ + 1;
    }
    else {
      v12 = v10;
    }
    v14_.v14[0] = (unsigned __int64)v9;
    v14_.v14[1] = v12;
    v14_.v17 = 6;
    llvmlibcxx_libcxx_7d5b60(v14_.v14);
    if ((*(_BYTE*)this_ & 1) != 0) {
      v13 = *((char**)this_ + 2);
    }
    else {
      v13 = (char*)this_ + 1;
    }
    if (v14_.v15 == v13) {
      return 0;
    }
    else {
      llvmlibcxx_libcxx_7d5b60(v14_.v14);
      if ((*(_BYTE*)this_ & 1) != 0) {
        return *((_QWORD*)this_ + 2);
      }
      else {
        return (__int64)this_ + 1;
      }
    }
  }
}

char* std___1___fs_filesystem_path___filename(void* this_)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  char* v3;
  char* v5;
  int v6;
  char* result;
  unsigned __int64 v8;
  char* v9;
  unsigned __int64 v10;
  char* v11;
  bool v12;
  unsigned __int64 v13;
  struct {
    unsigned __int64 v14[2];
    _BYTE* v15;
    __int64 v16;
    unsigned __int8 v17;
  } v14_;

  v1 = *(unsigned __int8*)this_;
  v2 = *((_QWORD*)this_ + 1);
  if ((v1 & 1) == 0) {
    v2 = v1 >> 1;
  }
  if (v2 == 0) {
    return nullptr;
  }
  v3 = *((char**)this_ + 2);
  v14_.v15 = nullptr;
  v14_.v16 = 0;
  if ((v1 & 1) != 0) {
    v5 = v3;
  }
  else {
    v5 = (char*)this_ + 1;
  }
  v14_.v14[0] = (unsigned __int64)v5;
  v14_.v14[1] = v2;
  v14_.v17 = 1;
  llvmlibcxx_libcxx_7d58e0((__int64)v14_.v14);
  v6 = v14_.v17;
  if (v14_.v17 <= 3u) {
    do {
      llvmlibcxx_libcxx_7d58e0((__int64)v14_.v14);
      v6 = v14_.v17;
    } while (v14_.v17 < 4u);
  }
  if (v6 == 6) {
    return nullptr;
  }
  v8 = *(unsigned __int8*)this_;
  v10 = *((_QWORD*)this_ + 1);
  v9 = *((char**)this_ + 2);
  v11 = (char*)this_ + 1;
  v12 = (v8 & 1) == 0;
  v13 = v8 >> 1;
  v14_.v15 = nullptr;
  v14_.v16 = 0;
  if (!v12) {
    v11 = v9;
    v13 = v10;
  }
  v14_.v14[0] = (unsigned __int64)v11;
  v14_.v14[1] = v13;
  v14_.v17 = 6;
  llvmlibcxx_libcxx_7d5b60(v14_.v14);
  result = &SdkData_bbbd5c;
  if (((1 << v14_.v17) & 0x62) == 0) {
    if (((1 << v14_.v17) & 0x14) != 0) {
      return v14_.v15;
    }
    else if (*v14_.v15 == 92) {
      return "\\";
    }
    else {
      return "/";
    }
  }
  return result;
}

char* std___1___fs_filesystem_path___stem(void* this_)
{
  char* result;
  unsigned __int64 v2;
  unsigned __int64 v3;
  int v4;
  unsigned __int64 v5;

  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = std___1___fs_filesystem_path___filename(this_),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  switch (v2) {
  case 2uLL:
    if (*(_WORD*)result == 11822) {
      return result;
    }
    break;
  case 1uLL:
    if (*result == 46) {
      return result;
    }
    break;
  case 0uLL:
    return result;
  default:
    break;
  }
  v3 = v2;
  while (v3 != 0) {
    v4 = (unsigned __int8)result[v3 - 1];
    v5 = v3--;
    if (v4 == 46) {
      if (v5 >= 2 && v3 > v2) {
        locale_7d5830((__int64)"string_view::substr"),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      return result;
    }
  }
  return result;
}

char* std___1___fs_filesystem_path___extension(void* this_)
{
  char* v1;
  unsigned __int64 v2;
  char* v4;
  __int64 v5;
  char* v6;

  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = std___1___fs_filesystem_path___filename(this_),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v2 == 0) {
    return &SdkData_bbbd5c;
  }
  if (v2 == 2) {
    if (*(_WORD*)v1 == 11822) {
      return &SdkData_bbbd5c;
    }
  }
  else if (v2 == 1 && *v1 == 46) {
    return &SdkData_bbbd5c;
  }
  v4 = &v1[v2];
  v5 = 0;
  do {
    if (-(__int64)v2 == v5) {
      return nullptr;
    }
    v6 = &v4[v5--];
  } while (*(v6 - 1) != 46);
  if (v2 + v5 + 1 < 2) {
    return nullptr;
  }
  if (v2 + v5 > v2) {
    locale_7d5830((__int64)"string_view::substr"),
        v2 = COERCE_AS(__typeof__(v2),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return &v4[v5];
}

void __attribute__((noreturn)) locale_7d4f24(__int64 a1)
{
  _QWORD* v1;

  if ((*(_BYTE*)v1 & 1) != 0) {
    SdkRoutine_857220(v1[2], *v1 & 0xFFFFFFFFFFFFFFFELL);
  }
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 std___1___fs_filesystem_path___compare(unsigned __int8* a1, __int64 a2,
                                               __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int8* v4;
  unsigned __int64 v5;
  bool v8;
  unsigned __int64 v9;
  unsigned int v10;
  char* v11;
  unsigned __int64 v12;
  unsigned int v13;
  char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 result;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  int i;
  int v23;
  unsigned __int64 v25;
  char* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  const char* v29;
  __int64 v30;
  _QWORD v32[2];
  char* v33;
  unsigned __int64 v34;
  unsigned __int8 v35;
  _QWORD v36[2];
  char* v37;
  unsigned __int64 v38;
  unsigned __int8 v39;

  v3 = *a1;
  v5 = *((_QWORD*)a1 + 1);
  v4 = *((unsigned __int8**)a1 + 2);
  v8 = (v3 & 1) == 0;
  v9 = v3 >> 1;
  v37 = nullptr;
  v38 = 0;
  v39 = 1;
  if (v8) {
    v4 = a1 + 1;
  }
  if (!v8) {
    v9 = v5;
  }
  v36[0] = v4;
  v36[1] = v9;
  llvmlibcxx_libcxx_7d58e0_alt1(v36);
  v32[0] = a2;
  v32[1] = a3;
  v33 = nullptr;
  v34 = 0;
  v35 = 1;
  llvmlibcxx_libcxx_7d58e0_alt1(v32);
  v10 = v39;
  if (v39 == 2) {
    v11 = v37;
    v12 = v38;
    v13 = v35;
    if (v35 != 2) {
      v14 = &SdkData_bbbd5c;
      v15 = 0;
      goto LABEL_12;
    }
  }
  else {
    v13 = v35;
    if (v35 != 2) {
      goto LABEL_34;
    }
    v11 = &SdkData_bbbd5c;
    v12 = 0;
  }
  v14 = v33;
  v15 = v34;
  v13 = 2;
LABEL_12:
  if (v15 >= v12) {
    v16 = v12;
  }
  else {
    v16 = v15;
  }
  LODWORD(result) = memcmp_plt(v11, v14, v16);
  if (v12 < v15) {
    v18 = -1;
  }
  else {
    v18 = 1;
  }
  if (v12 == v15) {
    v18 = 0;
  }
  if ((_DWORD)result != 0) {
    result = (unsigned int)result;
  }
  else {
    result = v18;
  }
  if (v10 > 2) {
    if (v13 > 2) {
      goto LABEL_27;
    }
  LABEL_30:
    v20 = result;
    do {
      llvmlibcxx_libcxx_7d58e0_alt1(v32);
      v13 = v35;
    } while (v35 < 3u);
    result = v20;
    if (v20 != 0) {
      return result;
    }
    goto LABEL_33;
  }
  v19 = result;
  do {
    llvmlibcxx_libcxx_7d58e0_alt1(v36);
  } while (v39 < 3u);
  v13 = v35;
  result = v19;
  if (v35 <= 2u) {
    goto LABEL_30;
  }
LABEL_27:
  if ((_DWORD)result != 0) {
    return result;
  }
LABEL_33:
  v10 = v39;
LABEL_34:
  if (v10 == 3) {
    if (v13 != 3) {
      return 1;
    }
  }
  else {
    if (v13 == 3) {
      return 0xFFFFFFFFLL;
    }
    if (v10 > 3) {
      goto LABEL_41;
    }
  }
  do {
    llvmlibcxx_libcxx_7d58e0_alt1(v36);
  } while (v39 < 4u);
  v13 = v35;
LABEL_41:
  if (v13 <= 3) {
    do {
      llvmlibcxx_libcxx_7d58e0_alt1(v32);
    } while (v35 < 4u);
  }
  for (i = v39; v39 != 1 && v39 != 6; i = v39) {
    v23 = v35;
    if (v35 == 1 || v35 == 6) {
      goto LABEL_84;
    }
    if (i > 3) {
      if (i == 4) {
      LABEL_61:
        v26 = v37;
        v25 = v38;
        if (v35 > 3u) {
          goto LABEL_57;
        }
        goto LABEL_62;
      }
      v25 = 0;
      v26 = &SdkData_bbbd5c;
      if (v35 > 3u) {
        goto LABEL_57;
      }
    }
    else {
      if (i == 2) {
        goto LABEL_61;
      }
      v25 = 1;
      if (*v37 == 92) {
        v26 = "\\";
      }
      else {
        v26 = "/";
      }
      if (v35 > 3u) {
      LABEL_57:
        if (v35 != 4) {
          v27 = 0;
          result = memcmp_plt(v26, &SdkData_bbbd5c, 0);
          if ((_DWORD)result != 0) {
            return result;
          }
          goto LABEL_77;
        }
      LABEL_63:
        v27 = v34;
        if (v34 >= v25) {
          v28 = v25;
        }
        else {
          v28 = v34;
        }
        result = memcmp_plt(v26, v33, v28);
        if ((_DWORD)result != 0) {
          return result;
        }
        goto LABEL_77;
      }
    }
  LABEL_62:
    if (v35 == 2) {
      goto LABEL_63;
    }
    v27 = 1;
    if (*v33 == 92) {
      v29 = "\\";
    }
    else {
      v29 = "/";
    }
    if (v25 <= 1) {
      v30 = v25;
    }
    else {
      v30 = 1;
    }
    result = memcmp_plt(v26, v29, v30);
    if ((_DWORD)result != 0) {
      return result;
    }
  LABEL_77:
    if (v25 != v27) {
      if (v25 < v27) {
        return 0xFFFFFFFFLL;
      }
      else {
        return 1;
      }
    }
    llvmlibcxx_libcxx_7d58e0_alt1(v36);
    llvmlibcxx_libcxx_7d58e0_alt1(v32);
  }
  v23 = v35;
LABEL_84:
  if (i == 6) {
    if (v23 != 6) {
      return 0xFFFFFFFFLL;
    }
  }
  else if (v23 == 6) {
    return 1;
  }
  return 0;
}

__int64 std___1___fs_filesystem_hash_value(void* this_, void* a2)
{
  unsigned __int64 v2;
  char* v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v12[2];
    char* v13;
    __int64 v14;
    unsigned __int8 v15;
  } v12_;
  _QWORD v16[2];

  v2 = *(unsigned __int8*)this_;
  v4 = *((_QWORD*)this_ + 1);
  v3 = *((char**)this_ + 2);
  v5 = (v2 & 1) == 0;
  v6 = v2 >> 1;
  v12_.v13 = nullptr;
  v12_.v14 = 0;
  if (v5) {
    v3 = (char*)this_ + 1;
  }
  if (!v5) {
    v6 = v4;
  }
  v12_.v12[0] = v3;
  v12_.v12[1] = v6;
  v12_.v15 = 1;
  llvmlibcxx_libcxx_7d58e0((__int64)v12_.v12);
  v7 = 0;
  while (v12_.v15 <= 3u) {
    if (v12_.v15 == 2) {
      goto LABEL_7;
    }
    if (v12_.v15 != 3) {
      return v7;
    }
    v9 = 1;
    v8 = "/";
  LABEL_8:
    v10 = std___1___hash_memory_plt(v8, v9);
    v16[0] = v7;
    v16[1] = v10;
    v7 = std___1___hash_memory_plt(v16, 16);
    llvmlibcxx_libcxx_7d58e0((__int64)v12_.v12);
  }
  if (v12_.v15 == 4) {
  LABEL_7:
    v8 = v12_.v13;
    v9 = v12_.v14;
    goto LABEL_8;
  }
  if (v12_.v15 == 5) {
    v9 = 0;
    v8 = &SdkData_bbbd5c;
    goto LABEL_8;
  }
  return v7;
}

__attribute__((swiftcall)) void

std___1___fs_filesystem_path_begin(PSEUDO_X8 x8_, void* this_)
{
  char* a2 = (char*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  char* v4;
  unsigned __int64 v5;
  bool v7;
  unsigned __int64 v8;
  __int64 result;
  char v10;
  char* v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  __int64 v17;
  char* v18;
  char v19;
  __int64 v20;
  struct {
    _QWORD v21[2];
    char* v22;
    unsigned __int64 v23;
    char v24;
  } v21_;
  struct {
    __int64 v25;
    __int64 v26;
    __int64 v27;
  } v25_;

  v3 = *(unsigned __int8*)this_;
  v5 = *((_QWORD*)this_ + 1);
  v4 = *((char**)this_ + 2);
  v7 = (v3 & 1) == 0;
  v8 = v3 >> 1;
  v21_.v22 = nullptr;
  v21_.v23 = 0;
  v21_.v24 = 1;
  if (v7) {
    v4 = (char*)this_ + 1;
  }
  if (!v7) {
    v8 = v5;
  }
  v21_.v21[0] = v4;
  v21_.v21[1] = v8;
  result = llvmlibcxx_libcxx_7d58e0((__int64)v21_.v21);
  v10 = v21_.v24;
  v11 = v21_.v22;
  v12 = v21_.v23;
  v13 = &SdkData_bbbd5c;
  v14 = 0;
  *(_QWORD*)a2 = 0;
  *((_QWORD*)a2 + 1) = 0;
  *((_QWORD*)a2 + 2) = 0;
  *((_QWORD*)a2 + 3) = this_;
  *((_QWORD*)a2 + 4) = v11;
  *((_QWORD*)a2 + 5) = v12;
  a2[48] = v10;
  if (((1 << v10) & 0x62) != 0) {
    goto LABEL_17;
  }
  if (((1 << v10) & 0x14) == 0) {
    v14 = 1;
    if (*v21_.v22 == 92) {
      v13 = "\\";
    }
    else {
      v13 = "/";
    }
    goto LABEL_17;
  }
  v14 = v21_.v23;
  if (v21_.v23 >= 0xFFFFFFFFFFFFFFF7LL) {
    locale_7d3920();
  }
  v13 = v21_.v22;
  if (v21_.v23 < 0x17) {
  LABEL_17:
    LOBYTE(v25_.v25) = 2 * v14;
    v18 = (char*)&v25_.v25 + 1;
    if (v14 == 0) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v15 = v21_.v22;
  if ((v21_.v23 | 7) == 0x17) {
    v16 = 26;
  }
  else {
    v16 = (v21_.v23 | 7) + 1;
  }
  v17 = SdkRoutine_85e050(v16);
  v13 = v15;
  v18 = (char*)v17;
  v25_.v26 = v14;
  v25_.v27 = v17;
  v25_.v25 = v16 | 1;
LABEL_18:
  result = memmove_plt(v18, v13, v14);
LABEL_19:
  v19 = *a2;
  v18[v14] = 0;
  if ((v19 & 1) != 0) {
    result = SdkRoutine_857220(*((_QWORD*)a2 + 2),
                               *(_QWORD*)a2 & 0xFFFFFFFFFFFFFFFELL);
  }
  v20 = v25_.v26;
  *(_QWORD*)a2 = v25_.v25;
  *((_QWORD*)a2 + 1) = v20;
  *((_QWORD*)a2 + 2) = v25_.v27;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void std___1___fs_filesystem_path_end(PSEUDO_X8 x8_,
                                                                 __int64 this_)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  *(_QWORD*)(a2 + 32) = 0;
  *(_QWORD*)(a2 + 40) = 0;
  *(_QWORD*)a2 = 0;
  *(_QWORD*)(a2 + 8) = 0;
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)(a2 + 24) = this_;
  *(_BYTE*)(a2 + 48) = 6;
  {
    this_;
    return;
  }
}

void* std___1___fs_filesystem_path_iterator___increment(void* this_)
{
  unsigned __int8* v1;
  char* v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  unsigned __int64 v9;
  char v10;
  unsigned __int64 v11;
  char v12;
  char* v13;
  __int64 v14;
  int v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  struct {
    _QWORD v22[2];
    char* v23;
    unsigned __int64 v24;
    char v25;
  } v22_;
  struct {
    __int64 v26;
    __int64 v27;
    __int64 v28;
  } v26_;

  v1 = *((unsigned __int8**)this_ + 3);
  v2 = *((char**)this_ + 4);
  v4 = *v1;
  v5 = *((_QWORD*)v1 + 1);
  v6 = (v4 & 1) == 0;
  v7 = v4 >> 1;
  if (v6) {
    v8 = v1 + 1;
  }
  else {
    v8 = *((unsigned __int8**)v1 + 2);
  }
  if (!v6) {
    v7 = v5;
  }
  v9 = *((_QWORD*)this_ + 5);
  v22_.v22[0] = v8;
  v22_.v22[1] = v7;
  v10 = *((_BYTE*)this_ + 48);
  v22_.v23 = v2;
  v22_.v24 = v9;
  v22_.v25 = v10;
  llvmlibcxx_libcxx_7d58e0((__int64)v22_.v22);
  v11 = v22_.v24;
  v12 = v22_.v25;
  v13 = &SdkData_bbbd5c;
  v14 = 0;
  *((_QWORD*)this_ + 4) = v22_.v23;
  *((_QWORD*)this_ + 5) = v11;
  *((_BYTE*)this_ + 48) = v12;
  v15 = 1 << v12;
  if ((v15 & 0x62) != 0) {
    goto LABEL_17;
  }
  if ((v15 & 0x14) == 0) {
    v14 = 1;
    if (*v22_.v23 == 92) {
      v13 = "\\";
    }
    else {
      v13 = "/";
    }
    goto LABEL_17;
  }
  v14 = v22_.v24;
  if (v22_.v24 >= 0xFFFFFFFFFFFFFFF7LL) {
    locale_7d3920();
  }
  v13 = v22_.v23;
  if (v22_.v24 < 0x17) {
  LABEL_17:
    LOBYTE(v26_.v26) = 2 * v14;
    v19 = (char*)&v26_.v26 + 1;
    if (v14 == 0) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v16 = v22_.v23;
  if ((v22_.v24 | 7) == 0x17) {
    v17 = 26;
  }
  else {
    v17 = (v22_.v24 | 7) + 1;
  }
  v18 = SdkRoutine_85e050(v17);
  v13 = v16;
  v19 = (char*)v18;
  v26_.v27 = v14;
  v26_.v28 = v18;
  v26_.v26 = v17 | 1;
LABEL_18:
  memmove_plt(v19, v13, v14);
LABEL_19:
  v19[v14] = 0;
  if ((*(_BYTE*)this_ & 1) != 0) {
    SdkRoutine_857220(*((_QWORD*)this_ + 2),
                      *(_QWORD*)this_ & 0xFFFFFFFFFFFFFFFELL);
  }
  v20 = v26_.v27;
  *(_QWORD*)this_ = v26_.v26;
  *((_QWORD*)this_ + 1) = v20;
  *((_QWORD*)this_ + 2) = v26_.v28;
  return this_;
}

void* std___1___fs_filesystem_path_iterator___decrement(void* this_)
{
  unsigned __int8* v1;
  char* v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char v10;
  unsigned __int64 v11;
  char v12;
  char* v13;
  __int64 v14;
  int v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  struct {
    unsigned __int64 v22[2];
    char* v23;
    unsigned __int64 v24;
    char v25;
  } v22_;
  struct {
    __int64 v26;
    __int64 v27;
    __int64 v28;
  } v26_;

  v1 = *((unsigned __int8**)this_ + 3);
  v2 = *((char**)this_ + 4);
  v4 = *v1;
  v5 = *((_QWORD*)v1 + 1);
  v6 = (v4 & 1) == 0;
  v7 = v4 >> 1;
  if (v6) {
    v8 = (unsigned __int64)(v1 + 1);
  }
  else {
    v8 = *((_QWORD*)v1 + 2);
  }
  if (!v6) {
    v7 = v5;
  }
  v9 = *((_QWORD*)this_ + 5);
  v22_.v22[0] = v8;
  v22_.v22[1] = v7;
  v10 = *((_BYTE*)this_ + 48);
  v22_.v23 = v2;
  v22_.v24 = v9;
  v22_.v25 = v10;
  llvmlibcxx_libcxx_7d5b60(v22_.v22);
  v11 = v22_.v24;
  v12 = v22_.v25;
  v13 = &SdkData_bbbd5c;
  v14 = 0;
  *((_QWORD*)this_ + 4) = v22_.v23;
  *((_QWORD*)this_ + 5) = v11;
  *((_BYTE*)this_ + 48) = v12;
  v15 = 1 << v12;
  if ((v15 & 0x62) != 0) {
    goto LABEL_17;
  }
  if ((v15 & 0x14) == 0) {
    v14 = 1;
    if (*v22_.v23 == 92) {
      v13 = "\\";
    }
    else {
      v13 = "/";
    }
    goto LABEL_17;
  }
  v14 = v22_.v24;
  if (v22_.v24 >= 0xFFFFFFFFFFFFFFF7LL) {
    locale_7d3920();
  }
  v13 = v22_.v23;
  if (v22_.v24 < 0x17) {
  LABEL_17:
    LOBYTE(v26_.v26) = 2 * v14;
    v19 = (char*)&v26_.v26 + 1;
    if (v14 == 0) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v16 = v22_.v23;
  if ((v22_.v24 | 7) == 0x17) {
    v17 = 26;
  }
  else {
    v17 = (v22_.v24 | 7) + 1;
  }
  v18 = SdkRoutine_85e050(v17);
  v13 = v16;
  v19 = (char*)v18;
  v26_.v27 = v14;
  v26_.v28 = v18;
  v26_.v26 = v17 | 1;
LABEL_18:
  memmove_plt(v19, v13, v14);
LABEL_19:
  v19[v14] = 0;
  if ((*(_BYTE*)this_ & 1) != 0) {
    SdkRoutine_857220(*((_QWORD*)this_ + 2),
                      *(_QWORD*)this_ & 0xFFFFFFFFFFFFFFFELL);
  }
  v20 = v26_.v27;
  *(_QWORD*)this_ = v26_.v26;
  *((_QWORD*)this_ + 1) = v20;
  *((_QWORD*)this_ + 2) = v26_.v28;
  return this_;
}

void __attribute__((noreturn)) std_7d57d0()
{
  __int64 v0;

  v0 = __cxa_allocate_exception_plt(8);
  std_bad_array_new_length_bad_array_new_length_plt();
  __cxa_throw_plt(v0, SdkData_e89328, SdkData_e89330);
  __udf(0);
}

void __attribute__((noreturn)) locale_7d5810()
{
  locale_7d5830_alt1("basic_string");
}

void __attribute__((noreturn)) locale_7d5830(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v2 = __cxa_allocate_exception_plt(16);
  locale_7d5890_alt1(v2, a1);
  v3 = __cxa_throw_plt(v2, SdkData_e89338, SdkData_e89340);
  __cxa_free_exception_plt(v2);
  _Unwind_Resume_plt(v3);
  __udf(0);
}

__int64 locale_7d5890(_QWORD* a1)
{
  __int64 result;

  result = std_logic_error_logic_error_plt_87c930();
  *a1 = SdkData_e89348 + 16;
  return result;
}

__int64 std___1_basic_filebuf_basic_filebuf_7f5500(__int64 a1)
{
  __int64 v2;
  char v3;
  _BYTE v5[8];

  *(_QWORD*)a1 = SdkData_e888e8 + 16;
  std___1_locale_locale_plt_86ee50(a1 + 8);
  v2 = SdkData_e894b8;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_WORD*)(a1 + 160) = 0;
  *(_BYTE*)(a1 + 162) = 0;
  *(_QWORD*)a1 = v2 + 16;
  *(_DWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 156) = 32;
  std___1_locale_locale_plt_87cd70(v5, a1 + 8);
  v3 = std___1_locale_has_facet_plt(v5, SdkData_e894c0[0]);
  std___1_locale_Destroy_locale_plt(v5);
  if ((v3 & 1) != 0) {
    std___1_locale_locale_plt_87cd70(v5, a1 + 8);
    *(_QWORD*)(a1 + 128) = std___1_locale_use_facet_plt(v5, SdkData_e894c0[0]);
    std___1_locale_Destroy_locale_plt(v5);
    *(_BYTE*)(a1 + 162) =
        (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 128) + 56LL))(
            *(_QWORD*)(a1 + 128)) &
        1;
  }
  return (*(__int64 (**)(__int64, _QWORD, __int64))(*(_QWORD*)a1 + 24LL))(a1, 0,
                                                                          4096);
}

void __attribute__((noreturn)) locale_7f5604(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;

  std___1_locale_Destroy_locale_plt(v3 + 24);
  *v1 = v2 + 16;
  std___1_locale_Destroy_locale_plt(v1 + 1);
  _Unwind_Resume_plt_alt1(a1);
  v6 = v5;
  *v1 = v2 + 16;
  std___1_locale_Destroy_locale_plt(v1 + 1);
  _Unwind_Resume_plt_alt1(v6);
  SdkRoutine_7cd620();
}

__int64 std___1_basic_filebuf_basic_filebuf_7f5650(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64* v5;
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

  *(_QWORD*)a1 = SdkData_e888e8 + 16;
  result = std___1_locale_locale_plt_87cd70(a1 + 8, a2 + 8);
  v6 = *(_QWORD*)(a2 + 24);
  v5 = (__int64*)(a2 + 16);
  v7 = *(_QWORD*)(a2 + 32);
  *(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(a1 + 24) = v6;
  v8 = *(_QWORD*)(a2 + 40);
  v9 = *(_QWORD*)(a2 + 48);
  *(_QWORD*)(a1 + 32) = v7;
  *(_QWORD*)(a1 + 40) = v8;
  v11 = *(_QWORD*)(a2 + 56);
  v10 = *(_QWORD*)(a2 + 64);
  *(_QWORD*)(a1 + 48) = v9;
  *(_QWORD*)(a1 + 56) = v11;
  *(_QWORD*)a1 = SdkData_e894b8 + 16;
  if (v10 == a2 + 88) {
    v10 = a1 + 88;
    v14 = *(_QWORD*)(a2 + 80);
    *(_QWORD*)(a1 + 64) = a1 + 88;
    v15 = *(_QWORD*)(a2 + 64);
    v12 = a1 + 88 + *(_QWORD*)(a2 + 72) - v15;
    v13 = a1 + 88 + v14 - v15;
  }
  else {
    v12 = *(_QWORD*)(a2 + 72);
    v13 = *(_QWORD*)(a2 + 80);
    *(_QWORD*)(a1 + 64) = v10;
  }
  *(_QWORD*)(a1 + 72) = v12;
  *(_QWORD*)(a1 + 80) = v13;
  v16 = *(_QWORD*)(a2 + 104);
  v17 = *(_QWORD*)(a2 + 112);
  *(_QWORD*)(a1 + 96) = *(_QWORD*)(a2 + 96);
  *(_QWORD*)(a1 + 104) = v16;
  v18 = *(_QWORD*)(a2 + 120);
  v19 = *(_QWORD*)(a2 + 128);
  *(_QWORD*)(a1 + 112) = v17;
  *(_QWORD*)(a1 + 120) = v18;
  *(_QWORD*)(a1 + 128) = v19;
  *(_QWORD*)(a1 + 136) = *(_QWORD*)(a2 + 136);
  *(_QWORD*)(a1 + 144) = *(_QWORD*)(a2 + 144);
  LODWORD(v19) = *(_DWORD*)(a2 + 156);
  *(_DWORD*)(a1 + 152) = *(_DWORD*)(a2 + 152);
  *(_DWORD*)(a1 + 156) = v19;
  *(_BYTE*)(a1 + 160) = *(_BYTE*)(a2 + 160);
  *(_WORD*)(a1 + 161) = *(_WORD*)(a2 + 161);
  v20 = *(_QWORD*)(a2 + 40);
  if (v20 != 0) {
    v21 = *(_QWORD*)(a2 + 56) - v20;
    if (v20 == *(_QWORD*)(a2 + 104)) {
      v10 = v16;
    }
    *(_QWORD*)(a1 + 40) = v10;
    *(_QWORD*)(a1 + 48) = v10;
    *(_QWORD*)(a1 + 48) = v10 + *(_QWORD*)(a2 + 48) - *(_QWORD*)(a2 + 40);
    *(_QWORD*)(a1 + 56) = v10 + v21;
  }
  else {
    v22 = *v5;
    if (*v5 != 0) {
      v23 = *(_QWORD*)(a2 + 24) - v22;
      v24 = *(_QWORD*)(a2 + 32) - v22;
      if (v22 == *(_QWORD*)(a2 + 104)) {
        v25 = v16 + v24;
        *(_QWORD*)(a1 + 16) = v16;
        *(_QWORD*)(a1 + 24) = v16 + v23;
      }
      else {
        v25 = v10 + v24;
        *(_QWORD*)(a1 + 16) = v10;
        *(_QWORD*)(a1 + 24) = v10 + v23;
      }
      *(_QWORD*)(a1 + 32) = v25;
    }
  }
  *(_QWORD*)(a2 + 72) = 0;
  *(_QWORD*)(a2 + 80) = 0;
  *(_QWORD*)(a2 + 56) = 0;
  *(_QWORD*)(a2 + 64) = 0;
  *(_QWORD*)(a2 + 40) = 0;
  *(_QWORD*)(a2 + 48) = 0;
  *(_QWORD*)(a2 + 24) = 0;
  *(_QWORD*)(a2 + 32) = 0;
  *v5 = 0;
  *(_QWORD*)(a2 + 96) = 0;
  *(_QWORD*)(a2 + 104) = 0;
  *(_QWORD*)(a2 + 112) = 0;
  *(_QWORD*)(a2 + 120) = 0;
  *(_QWORD*)(a2 + 136) = 0;
  *(_QWORD*)(a2 + 144) = 0;
  *(_QWORD*)(a2 + 152) = 0;
  *(_WORD*)(a2 + 160) = 0;
  return result;
}

void* std___1_basic_filebuf_close(void* a1)
{
  void* v1;
  int v3;
  bool v5;
  __int64 v6;

  v1 = *((void**)a1 + 15);
  if (v1 != nullptr) {
    v3 = (*(__int64 (**)(void*))(*(_QWORD*)a1 + 48LL))(a1);
    v5 = ((unsigned int)fclose_plt(v1) | v3) == 0;
    v6 = *(_QWORD*)a1;
    *((_QWORD*)a1 + 15) = 0;
    if (v5) {
      v1 = a1;
    }
    else {
      v1 = nullptr;
    }
    (*(void (**)(void*, _QWORD, _QWORD))(v6 + 24))(a1, 0, 0);
  }
  return v1;
}

void __attribute__((noreturn)) locale_7f5934(__int64 a1, void* a2)
{
  void* v2;

  fclose_plt_alt1(v2, a2);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 std___1_basic_filebuf_swap(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
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
  char* v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _BYTE v46[8];

  std___1_locale_locale_plt_87cd70(v46, a1 + 8);
  SdkRoutine_87cd80(a1 + 8, a2 + 8);
  SdkRoutine_87cd80(a2 + 8, v46);
  result = std___1_locale_Destroy_locale_plt(v46);
  v5 = *(_QWORD*)(a1 + 16);
  v6 = a2 + 88;
  *(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(a2 + 16) = v5;
  v7 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = *(_QWORD*)(a2 + 24);
  *(_QWORD*)(a2 + 24) = v7;
  v8 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 32) = *(_QWORD*)(a2 + 32);
  *(_QWORD*)(a2 + 32) = v8;
  v9 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 40) = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(a2 + 40) = v9;
  v10 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 48) = *(_QWORD*)(a2 + 48);
  *(_QWORD*)(a2 + 48) = v10;
  v11 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 56) = *(_QWORD*)(a2 + 56);
  *(_QWORD*)(a2 + 56) = v11;
  v12 = (__int64*)(a1 + 88);
  v13 = *(__int64**)(a1 + 64);
  v14 = *(_QWORD*)(a2 + 64);
  if (v13 != (__int64*)(a1 + 88) && v14 != v6) {
    *(_QWORD*)(a1 + 64) = v14;
    *(_QWORD*)(a2 + 64) = v13;
    v15 = *(_QWORD*)(a1 + 72);
    *(_QWORD*)(a1 + 72) = *(_QWORD*)(a2 + 72);
    *(_QWORD*)(a2 + 72) = v15;
    v16 = *(_QWORD*)(a1 + 80);
    *(_QWORD*)(a1 + 80) = *(_QWORD*)(a2 + 80);
    *(_QWORD*)(a2 + 80) = v16;
    goto LABEL_24;
  }
  v17 = *(_QWORD*)(a1 + 72);
  v18 = *(_QWORD*)(a1 + 80);
  if (v17 != 0) {
    v19 = v17 - (_QWORD)v13;
  }
  else {
    v19 = 0;
  }
  if (v18 != 0) {
    v20 = v18 - (_QWORD)v13;
  }
  else {
    v20 = 0;
  }
  v21 = *(_QWORD*)(a2 + 72);
  v22 = *(_QWORD*)(a2 + 80);
  if (v21 != 0) {
    v23 = v21 - v14;
  }
  else {
    v23 = 0;
  }
  if (v22 != 0) {
    v24 = v22 - v14;
  }
  else {
    v24 = 0;
  }
  if (v13 == v12) {
    if (v14 != v6) {
      *(_QWORD*)(a1 + 64) = v14;
      *(_QWORD*)(a2 + 64) = v6;
      v25 = *(_QWORD*)(a1 + 88);
    LABEL_22:
      *(_QWORD*)(a2 + 88) = v25;
      goto LABEL_23;
    }
  LABEL_21:
    v25 = *v12;
    *v12 = *(_QWORD*)(a2 + 88);
    goto LABEL_22;
  }
  if (v14 != v6) {
    goto LABEL_21;
  }
  *(_QWORD*)(a2 + 64) = v13;
  *(_QWORD*)(a1 + 64) = v12;
  *(_QWORD*)(a1 + 88) = *(_QWORD*)(a2 + 88);
LABEL_23:
  v26 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 72) = v26 + v23;
  *(_QWORD*)(a1 + 80) = v26 + v24;
  v27 = *(_QWORD*)(a2 + 64);
  *(_QWORD*)(a2 + 72) = v27 + v19;
  *(_QWORD*)(a2 + 80) = v27 + v20;
LABEL_24:
  v28 = *(_QWORD*)(a1 + 96);
  v29 = *(_QWORD*)(a1 + 104);
  v30 = *(_QWORD*)(a2 + 104);
  *(_QWORD*)(a1 + 96) = *(_QWORD*)(a2 + 96);
  *(_QWORD*)(a1 + 104) = v30;
  *(_QWORD*)(a2 + 96) = v28;
  *(_QWORD*)(a2 + 104) = v29;
  v31 = *(_QWORD*)(a1 + 112);
  v32 = *(_QWORD*)(a1 + 120);
  v33 = *(_QWORD*)(a2 + 120);
  *(_QWORD*)(a1 + 112) = *(_QWORD*)(a2 + 112);
  *(_QWORD*)(a1 + 120) = v33;
  *(_QWORD*)(a2 + 112) = v31;
  *(_QWORD*)(a2 + 120) = v32;
  v34 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 128) = *(_QWORD*)(a2 + 128);
  *(_QWORD*)(a2 + 128) = v34;
  v35 = *(_QWORD*)(a1 + 136);
  *(_QWORD*)(a1 + 136) = *(_QWORD*)(a2 + 136);
  *(_QWORD*)(a2 + 136) = v35;
  v36 = *(_QWORD*)(a1 + 144);
  *(_QWORD*)(a1 + 144) = *(_QWORD*)(a2 + 144);
  *(_QWORD*)(a2 + 144) = v36;
  LODWORD(v36) = *(_DWORD*)(a1 + 152);
  *(_DWORD*)(a1 + 152) = *(_DWORD*)(a2 + 152);
  *(_DWORD*)(a2 + 152) = v36;
  LODWORD(v36) = *(_DWORD*)(a1 + 156);
  *(_DWORD*)(a1 + 156) = *(_DWORD*)(a2 + 156);
  LOBYTE(v32) = *(_BYTE*)(a2 + 160);
  *(_DWORD*)(a2 + 156) = v36;
  LOBYTE(v36) = *(_BYTE*)(a1 + 160);
  *(_BYTE*)(a1 + 160) = v32;
  *(_BYTE*)(a2 + 160) = v36;
  LOBYTE(v36) = *(_BYTE*)(a1 + 161);
  *(_BYTE*)(a1 + 161) = *(_BYTE*)(a2 + 161);
  *(_BYTE*)(a2 + 161) = v36;
  LOBYTE(v36) = *(_BYTE*)(a1 + 162);
  *(_BYTE*)(a1 + 162) = *(_BYTE*)(a2 + 162);
  v37 = *(_QWORD*)(a1 + 16);
  *(_BYTE*)(a2 + 162) = v36;
  v38 = a2 + 88;
  if (v37 != a2 + 88) {
    if (*(_QWORD*)(a1 + 40) == v38) {
      v39 = *(_QWORD*)(a1 + 48);
      v40 = *(_QWORD*)(a1 + 56);
      *(_QWORD*)(a1 + 40) = v12;
      *(_QWORD*)(a1 + 48) = (char*)v12 + v39 - v38;
      *(_QWORD*)(a1 + 56) = (char*)v12 + v40 - v38;
    }
    if (*(__int64**)(a2 + 16) != v12) {
      goto LABEL_28;
    }
  LABEL_31:
    v43 = v38 + *(_QWORD*)(a2 + 24) - (_QWORD)v12;
    v44 = v38 + *(_QWORD*)(a2 + 32) - (_QWORD)v12;
    *(_QWORD*)(a2 + 16) = v38;
    *(_QWORD*)(a2 + 24) = v43;
    *(_QWORD*)(a2 + 32) = v44;
    return result;
  }
  v41 = (char*)v12 + *(_QWORD*)(a1 + 24) - v38;
  v42 = (char*)v12 + *(_QWORD*)(a1 + 32) - v38;
  *(_QWORD*)(a1 + 16) = v12;
  *(_QWORD*)(a1 + 24) = v41;
  *(_QWORD*)(a1 + 32) = v42;
  if (*(__int64**)(a2 + 16) == v12) {
    goto LABEL_31;
  }
LABEL_28:
  if (*(__int64**)(a2 + 40) == v12) {
    v45 = *(_QWORD*)(a2 + 48) - (_QWORD)v12;
    *(_QWORD*)(a2 + 56) = v38 + *(_QWORD*)(a2 + 56) - (_QWORD)v12;
    *(_QWORD*)(a2 + 40) = v38;
    *(_QWORD*)(a2 + 48) = v38 + v45;
  }
  return result;
}

const char* locale_7f5ca0(int a1)
{
  __int64 v1;
  const char* result;

  v1 = (a1 & 0xFFFFFFFD) - 1;
  result = "w";
  switch (v1) {
  case 0LL:
  case 16LL:
    result = "a";
    break;
  case 4LL:
  case 20LL:
    result = "ab";
    break;
  case 7LL:
    result = "r";
    break;
  case 8LL:
  case 24LL:
    result = "a+";
    break;
  case 11LL:
    result = "rb";
    break;
  case 12LL:
  case 28LL:
    result = "a+b";
    break;
  case 15LL:
  case 47LL:
    return result;
  case 19LL:
  case 51LL:
    result = "wb";
    break;
  case 23LL:
    result = "r+";
    break;
  case 27LL:
    result = "r+b";
    break;
  case 55LL:
    result = "w+";
    break;
  case 59LL:
    result = "w+b";
    break;
  case 79LL:
  case 111LL:
    result = "wx";
    break;
  case 83LL:
  case 115LL:
    result = "wbx";
    break;
  case 119LL:
    result = "w+x";
    break;
  case 123LL:
    result = "w+bx";
    break;
  default:
    result = nullptr;
    break;
  }
  return result;
}

bool std___1_basic_filebuf___read_mode(__int64 a1)
{
  int v1;
  int v2;
  bool v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = *(_DWORD*)(a1 + 156);
  if ((v1 & 8) == 0) {
    v2 = *(unsigned __int8*)(a1 + 162);
    *(_QWORD*)(a1 + 48) = 0;
    *(_QWORD*)(a1 + 56) = 0;
    v3 = v2 == 0;
    v4 = 104;
    if (!v3) {
      v4 = 64;
    }
    v5 = 112;
    if (!v3) {
      v5 = 96;
    }
    v6 = *(_QWORD*)(a1 + v4);
    v7 = v6 + *(_QWORD*)(a1 + v5);
    *(_QWORD*)(a1 + 16) = v6;
    *(_QWORD*)(a1 + 24) = v7;
    *(_QWORD*)(a1 + 32) = v7;
    *(_QWORD*)(a1 + 40) = 0;
    *(_DWORD*)(a1 + 156) = 8;
  }
  return (v1 & 8) == 0;
}

void __attribute__((noreturn)) locale_7f6090()
{
  __int64 v0;

  v0 = __cxa_allocate_exception_plt(8);
  std_bad_cast_bad_cast_plt();
  __cxa_throw_plt(v0, SdkData_e892e0, SdkData_e894c8);
  __udf(0);
}

__int64 std___1_basic_filebuf_pbackfail(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2;

  if (*(_QWORD*)(a1 + 120) == 0) {
    return 0xFFFFFFFFLL;
  }
  v2 = *(_QWORD*)(a1 + 24);
  if (*(_QWORD*)(a1 + 16) >= v2) {
    return 0xFFFFFFFFLL;
  }
  if (a2 != -1) {
    if ((*(_BYTE*)(a1 + 152) & 0x10) != 0 ||
        *(unsigned __int8*)(v2 - 1) == (unsigned __int8)a2) {
      *(_QWORD*)(a1 + 24) = v2 - 1;
      *(_BYTE*)(v2 - 1) = a2;
      return a2;
    }
    return 0xFFFFFFFFLL;
  }
  *(_QWORD*)(a1 + 24) = v2 - 1;
  return 0;
}

__int64 std___1_basic_filebuf___write_mode(__int64 result)
{
  unsigned __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if ((*(_BYTE*)(result + 156) & 0x10) == 0) {
    v1 = *(_QWORD*)(result + 96);
    *(_QWORD*)(result + 24) = 0;
    *(_QWORD*)(result + 32) = 0;
    *(_QWORD*)(result + 16) = 0;
    if (v1 < 9) {
      *(_QWORD*)(result + 48) = 0;
      *(_QWORD*)(result + 56) = 0;
      *(_QWORD*)(result + 40) = 0;
    }
    else if (*(_BYTE*)(result + 162) == 1) {
      v2 = *(_QWORD*)(result + 64);
      *(_QWORD*)(result + 40) = v2;
      *(_QWORD*)(result + 48) = v2;
      *(_QWORD*)(result + 56) = v2 + v1 - 1;
    }
    else {
      v3 = *(_QWORD*)(result + 104);
      v4 = v3 + *(_QWORD*)(result + 112);
      *(_QWORD*)(result + 40) = v3;
      *(_QWORD*)(result + 48) = v3;
      *(_QWORD*)(result + 56) = v4 - 1;
    }
    *(_DWORD*)(result + 156) = 16;
  }
  return result;
}

__int64 std___1_basic_filebuf_setbuf(__int64 a1, void* a2, __int64 a3)
{
  __int64 v6;
  int v7;
  void* v8;
  void* v9;
  char v10;
  __int64 v11;

  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  if (a3 == 0 && a2 == nullptr && *(_DWORD*)(a1 + 156) == 32) {
    v6 = *(_QWORD*)(a1 + 120);
    if (v6 != 0) {
      setbuf_plt(v6, 0);
      v7 = 0;
    }
    else {
      v7 = 34;
    }
    *(_DWORD*)(a1 + 156) = v7;
  }
  if (*(_BYTE*)(a1 + 160) == 1) {
    v8 = *(void**)(a1 + 64);
    if (v8 != nullptr) {
      SdkRoutine_85c8b0(v8, a2);
    }
  }
  if (*(_BYTE*)(a1 + 161) == 1) {
    v9 = *(void**)(a1 + 104);
    if (v9 != nullptr) {
      SdkRoutine_85c8b0(v9, a2);
    }
  }
  *(_QWORD*)(a1 + 96) = a3;
  if ((unsigned __int64)a3 < 9) {
    *(_BYTE*)(a1 + 160) = 0;
    *(_QWORD*)(a1 + 64) = a1 + 88;
    *(_QWORD*)(a1 + 96) = 8;
    if ((*(_BYTE*)(a1 + 162) & 1) != 0) {
      goto LABEL_22;
    }
    v11 = 8;
    *(_QWORD*)(a1 + 112) = 8;
    goto LABEL_20;
  }
  v10 = *(_BYTE*)(a1 + 162);
  if (a2 != nullptr && *(_BYTE*)(a1 + 162) != 0) {
    *(_QWORD*)(a1 + 64) = a2;
    *(_BYTE*)(a1 + 160) = 0;
  LABEL_22:
    *(_BYTE*)(a1 + 161) = 0;
    *(_QWORD*)(a1 + 104) = 0;
    *(_QWORD*)(a1 + 112) = 0;
    return a1;
  }
  *(_QWORD*)(a1 + 64) = SdkRoutine_86e8b0(a3);
  *(_BYTE*)(a1 + 160) = 1;
  if ((v10 & 1) != 0) {
    goto LABEL_22;
  }
  if (a3 <= 8) {
    v11 = 8;
  }
  else {
    v11 = a3;
  }
  *(_QWORD*)(a1 + 112) = v11;
  if (a2 == nullptr || a3 < 9) {
  LABEL_20:
    *(_QWORD*)(a1 + 104) = SdkRoutine_86e8b0(v11);
    *(_BYTE*)(a1 + 161) = 1;
    return a1;
  }
  *(_QWORD*)(a1 + 104) = a2;
  *(_BYTE*)(a1 + 161) = 0;
  return a1;
}

__int64 std___1_basic_filebuf_seekoff(_QWORD* a1, __int64 a2, unsigned int a3)
{
  __int64 v4;
  int v7;
  int v8;
  int v9;
  __int64 result;
  __int64 v11;

  v4 = a1[16];
  if (v4 == 0) {
    locale_7f6090();
  }
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
  if (a1[15] == 0 || a2 != 0 && v7 < 1) {
    return 0;
  }
  v8 = v7;
  v9 = (*(__int64 (**)(_QWORD*))(*a1 + 48LL))(a1);
  result = 0;
  if (a3 <= 2 && v9 == 0) {
    if (v8 <= 0) {
      v11 = 0;
    }
    else {
      v11 = a2 * (unsigned int)v8;
    }
    if ((unsigned int)fseeko_plt(a1[15], v11, a3) == 0) {
      ftello_plt(a1[15]);
      return a1[17];
    }
    return 0;
  }
  return result;
}

__int64 std___1_basic_filebuf_seekpos(_QWORD* a1, __int64 a2, __int64 a3)
{
  if (a1[15] == 0 || (*(unsigned int (**)(_QWORD*))(*a1 + 48LL))(a1) != 0 ||
      (unsigned int)fseeko_plt(a1[15], a3, 0) != 0) {
    return 0;
  }
  a1[17] = a2;
  return a2;
}

__int64 std___1_basic_filebuf_sync(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 result;
  int v5;
  __int64 v6;
  __int64 v7;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;

  if (*(_QWORD*)(a1 + 120) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a1 + 128);
  if (v2 == 0) {
    locale_7f6090();
  }
  v3 = *(_DWORD*)(a1 + 156);
  if ((v3 & 0x10) != 0) {
    if (*(_QWORD*)(a1 + 48) == *(_QWORD*)(a1 + 40) ||
        (_DWORD)(result = (*(__int64 (**)(__int64, __int64))(
                     *(_QWORD*)a1 + 104LL))(a1, 0xFFFFFFFFLL)) != -1) {
      while (1) {
        v5 = (*(__int64 (**)(_QWORD, __int64, _QWORD, _QWORD, __int64*))(
            **(_QWORD**)(a1 + 128) + 40LL))(
            *(_QWORD*)(a1 + 128), a1 + 136, *(_QWORD*)(a1 + 64),
            *(_QWORD*)(a1 + 64) + *(_QWORD*)(a1 + 96), &v13);
        v6 = *(_QWORD*)(a1 + 64);
        v7 = v13 - v6;
        if (fwrite_plt(v6, 1, v13 - v6, *(_QWORD*)(a1 + 120)) != v7) {
          break;
        }
        if (v5 != 1) {
          if (v5 == 2) {
            return 0xFFFFFFFFLL;
          }
          result = fflush_plt(*(void**)(a1 + 120));
          if ((_DWORD)result != 0) {
            return 0xFFFFFFFFLL;
          }
          return result;
        }
      }
      return 0xFFFFFFFFLL;
    }
  }
  else {
    if ((v3 & 8) == 0) {
      return 0;
    }
    v13 = *(_QWORD*)(a1 + 144);
    if (*(_BYTE*)(a1 + 162) == 1) {
      v9 = 0;
      v10 = *(_QWORD*)(a1 + 32) - *(_QWORD*)(a1 + 24);
    }
    else {
      v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
      v10 = *(_QWORD*)(a1 + 80) - *(_QWORD*)(a1 + 72);
      if (v11 < 1) {
        if (*(_QWORD*)(a1 + 24) == *(_QWORD*)(a1 + 32)) {
          v9 = 0;
        }
        else {
          v9 = 1;
          v10 = v10 + *(_QWORD*)(a1 + 72) -
                (*(_QWORD*)(a1 + 64) +
                 (*(int (**)(_QWORD, __int64*, _QWORD))(
                     **(_QWORD**)(a1 + 128) + 64LL))(*(_QWORD*)(a1 + 128), &v13,
                                                     *(_QWORD*)(a1 + 64)));
        }
      }
      else {
        v9 = 0;
        v10 += (*(_QWORD*)(a1 + 32) - *(_QWORD*)(a1 + 24)) * (unsigned int)v11;
      }
    }
    if ((unsigned int)fseeko_plt(*(_QWORD*)(a1 + 120), -v10, 1) != 0) {
      return 0xFFFFFFFFLL;
    }
    if (v9 != 0) {
      *(_QWORD*)(a1 + 136) = v13;
    }
    v12 = *(_QWORD*)(a1 + 64);
    *(_DWORD*)(a1 + 156) = 0;
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 24) = 0;
    *(_QWORD*)(a1 + 32) = 0;
    *(_QWORD*)(a1 + 72) = v12;
    *(_QWORD*)(a1 + 80) = v12;
    return 0;
  }
  return result;
}

void std___1_basic_filebuf_imbue(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  char v6;
  int v8;
  void* v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  (*(void (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
  v4 = (__int64*)std___1_locale_use_facet_plt(a2, SdkData_e894c0[0]);
  v5 = *v4;
  *(_QWORD*)(a1 + 128) = v4;
  LODWORD(a2) = *(unsigned __int8*)(a1 + 162);
  v6 = (*(__int64 (**)(__int64))(v5 + 56))((__int64)v4);
  *(_BYTE*)(a1 + 162) = v6 & 1;
  if ((_DWORD)a2 != (v6 & 1)) {
    v8 = *(unsigned __int8*)(a1 + 160);
    *(_QWORD*)(a1 + 48) = 0;
    *(_QWORD*)(a1 + 56) = 0;
    *(_QWORD*)(a1 + 32) = 0;
    *(_QWORD*)(a1 + 40) = 0;
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 24) = 0;
    if ((v6 & 1) != 0) {
      if (v8 != 0) {
        v9 = *(void**)(a1 + 64);
        if (v9 != nullptr) {
          SdkRoutine_85c8b0_alt1(v9);
        }
      }
      v10 = *(_BYTE*)(a1 + 161);
      *(_BYTE*)(a1 + 161) = 0;
      *(_BYTE*)(a1 + 160) = v10;
      v12 = *(_QWORD*)(a1 + 104);
      v11 = *(_QWORD*)(a1 + 112);
      *(_QWORD*)(a1 + 104) = 0;
      *(_QWORD*)(a1 + 112) = 0;
      *(_QWORD*)(a1 + 64) = v12;
      *(_QWORD*)(a1 + 96) = v11;
    }
    else if ((v8 & 1) != 0 || (v13 = *(_QWORD*)(a1 + 64)) == a1 + 88) {
      v15 = *(_QWORD*)(a1 + 96);
      *(_QWORD*)(a1 + 112) = v15;
      *(_QWORD*)(a1 + 104) = SdkRoutine_86e8b0(v15);
      *(_BYTE*)(a1 + 161) = 1;
    }
    else {
      v14 = *(_QWORD*)(a1 + 96);
      *(_BYTE*)(a1 + 161) = 0;
      *(_QWORD*)(a1 + 104) = v13;
      *(_QWORD*)(a1 + 112) = v14;
      *(_QWORD*)(a1 + 64) = SdkRoutine_86e8b0(v14);
      *(_BYTE*)(a1 + 160) = 1;
    }
  }
}

__int64 locale_7f69c0(_QWORD* a1)
{
  __int64 v3;

  v3 = SdkData_e894d0 + 64;
  *a1 = SdkData_e894d0 + 24;
  a1[23] = v3;
  SdkRoutine_87cfe0(a1 + 2);
  SdkRoutine_87ce40(a1, SdkData_e894d8 + 8);
  return SdkRoutine_86ee80(a1 + 23);
}

__int64 std___1_codecvt_Destroy_codecvt(_QWORD* a1)
{
  __int64 v3;

  v3 = SdkData_e894d0 + 64;
  *a1 = SdkData_e894d0 + 24;
  a1[23] = v3;
  SdkRoutine_87cfe0(a1 + 2);
  SdkRoutine_87ce40(a1, SdkData_e894d8 + 8);
  SdkRoutine_86ee80(a1 + 23);
  return SdkRoutine_857220(a1, 336);
}

__int64 locale_7f6a90(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;

  v1 = (_QWORD*)((char*)a1 + *(_QWORD*)(*a1 - 24LL));
  v2 = SdkData_e894d0 + 64;
  *v1 = SdkData_e894d0 + 24;
  v1[23] = v2;
  SdkRoutine_87cfe0(v1 + 2);
  SdkRoutine_87ce40(v1, SdkData_e894d8 + 8);
  return SdkRoutine_86ee80(v1 + 23);
}

__int64 locale_7f6b00(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;

  v1 = (_QWORD*)((char*)a1 + *(_QWORD*)(*a1 - 24LL));
  v2 = SdkData_e894d0 + 64;
  *v1 = SdkData_e894d0 + 24;
  v1[23] = v2;
  SdkRoutine_87cfe0(v1 + 2);
  SdkRoutine_87ce40(v1, SdkData_e894d8 + 8);
  SdkRoutine_86ee80(v1 + 23);
  return SdkRoutine_857220(v1, 336);
}

__int64 std___1_time_get_byname_Destroy_time_get_byname_7f6b80(_QWORD* a1)
{
  __int64 v3;

  v3 = SdkData_e894e0 + 64;
  *a1 = SdkData_e894e0 + 24;
  a1[22] = v3;
  SdkRoutine_87cfe0(a1 + 1);
  SdkRoutine_86ee70(a1, SdkData_e894e8 + 8);
  return SdkRoutine_86ee80(a1 + 22);
}

__int64 std___1_time_get_byname_Destroy_time_get_byname_7f6be0(_QWORD* a1)
{
  __int64 v3;

  v3 = SdkData_e894e0 + 64;
  *a1 = SdkData_e894e0 + 24;
  a1[22] = v3;
  SdkRoutine_87cfe0(a1 + 1);
  SdkRoutine_86ee70(a1, SdkData_e894e8 + 8);
  SdkRoutine_86ee80(a1 + 22);
  return SdkRoutine_857220(a1, 328);
}

__int64 std___1___time_get_temp_Destroy___time_get_temp_7f6c50(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;

  v1 = (_QWORD*)((char*)a1 + *(_QWORD*)(*a1 - 24LL));
  v2 = SdkData_e894e0 + 64;
  *v1 = SdkData_e894e0 + 24;
  v1[22] = v2;
  SdkRoutine_87cfe0(v1 + 1);
  SdkRoutine_86ee70(v1, SdkData_e894e8 + 8);
  return SdkRoutine_86ee80(v1 + 22);
}

__int64 std___1___time_get_temp_Destroy___time_get_temp_7f6cc0(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;

  v1 = (_QWORD*)((char*)a1 + *(_QWORD*)(*a1 - 24LL));
  v2 = SdkData_e894e0 + 64;
  *v1 = SdkData_e894e0 + 24;
  v1[22] = v2;
  SdkRoutine_87cfe0(v1 + 1);
  SdkRoutine_86ee70(v1, SdkData_e894e8 + 8);
  SdkRoutine_86ee80(v1 + 22);
  return SdkRoutine_857220(v1, 328);
}

__int64 locale_7f6d40()
{
  void(__attribute__((noreturn)) * v0)();
  __int64 v1;
  void(__attribute__((noreturn)) * v2)();
  __int64 v3;
  char* v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  void(__attribute__((noreturn)) * v9)();
  __int64 v10;
  char* v11;
  char* v12;
  void(__attribute__((noreturn)) * v13)();
  char* v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  void(__attribute__((noreturn)) * v18)();
  void(__attribute__((noreturn)) * v19)();
  char* v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  void(__attribute__((noreturn)) * v25)();
  char* v26;
  char* v27;
  void(__attribute__((noreturn)) * v28)();
  char* v29;
  char* v30;
  __int64 result;
  __int64 v32;
  __int64 v33;

  v0 = SdkData_e894f0[0];
  v1 = *(_QWORD*)SdkData_e89298;
  SdkRoutine_7f7050((__int64)SdkData_e894f0[0], *(_QWORD*)SdkData_e89298);
  v2 = SdkData_e894f8[0];
  v3 = *(_QWORD*)SdkData_e86e30[0];
  v4 = (char*)SdkData_e894f8[0] + 160;
  v5 = (char*)SdkData_e894f8[0] + 256;
  *(_QWORD*)((char*)SdkData_e894f8[0] +
             (unsigned __int64)((_UNKNOWN*)0x100LL)) = 0;
  iostream_7f7760((__int64)v4, v3, (__int64)v5);
  *(__int64*)((char*)((__int64*)0x38LL) + (_QWORD)v2) = 0;
  v6 = SdkData_e89450;
  v7 = SdkData_e89450 + 64;
  v8 = SdkData_e89450 + 24;
  *(__int64*)((char*)((__int64*)0x4LL) + (_QWORD)v2 + 4) = SdkData_e89450 + 64;
  *(_QWORD*)v2 = v8;
  std___1_ios_base_init_plt((char*)((__int64*)0x4LL) + (_QWORD)v2 + 4,
                            (char*)v2 + 160);
  *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)v2) = 0;
  *(_DWORD*)((char*)((_UNKNOWN*)0x98LL) + (_QWORD)v2) = -1;
  v9 = SdkData_e89500[0];
  v10 = *(_QWORD*)SdkData_e86b68[0];
  v11 = (char*)SdkData_e89500[0] + 160;
  v12 = (char*)SdkData_e89500[0] + 256;
  *(_QWORD*)((char*)SdkData_e89500[0] +
             (unsigned __int64)((_UNKNOWN*)0x100LL)) = 0;
  iostream_7f7760((__int64)v11, v10, (__int64)v12);
  *(__int64*)((char*)((__int64*)0x4LL) + (_QWORD)v9 + 4) = v7;
  *(__int64*)((char*)((__int64*)0x38LL) + (_QWORD)v9) = 0;
  *(_QWORD*)v9 = v8;
  std___1_ios_base_init_plt((char*)((__int64*)0x4LL) + (_QWORD)v9 + 4,
                            (char*)v9 + 160);
  *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)v9) = 0;
  *(_DWORD*)((char*)((_UNKNOWN*)0x98LL) + (_QWORD)v9) = -1;
  v13 = SdkData_e89508[0];
  v14 = (char*)SdkData_e89508[0] + 160;
  v15 = (char*)SdkData_e89508[0] + 256;
  *(_QWORD*)((char*)SdkData_e89508[0] +
             (unsigned __int64)((_UNKNOWN*)0x100LL)) = 0;
  iostream_7f7760((__int64)v14, v10, (__int64)v15);
  *(__int64*)((char*)((__int64*)0x38LL) + (_QWORD)v13) = 0;
  *(_QWORD*)v13 = v6 + 24;
  *(__int64*)((char*)((__int64*)0x4LL) + (_QWORD)v13 + 4) = v6 + 64;
  std___1_ios_base_init_plt((char*)((__int64*)0x4LL) + (_QWORD)v13 + 4,
                            (char*)v13 + 160);
  v16 = *(_QWORD*)v0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)v13) = 0;
  *(_DWORD*)((char*)((_UNKNOWN*)0x98LL) + (_QWORD)v13) = -1;
  *(_QWORD*)((char*)v0 + *(_QWORD*)(v16 - 24) + 136) = v2;
  v17 = *(_QWORD*)v9;
  *(_DWORD*)((char*)v9 + *(_QWORD*)(*(_QWORD*)v9 - 24LL) + 8) |= 0x2000u;
  *(_QWORD*)((char*)v9 + *(_QWORD*)(v17 - 24) + 136) = v2;
  v18 = SdkData_e89510[0];
  SdkRoutine_7f7170((__int64)SdkData_e89510[0], v1);
  v19 = SdkData_e89518[0];
  v20 = (char*)SdkData_e89518[0] + 160;
  v21 = (char*)SdkData_e89518[0] + 256;
  *(_QWORD*)((char*)SdkData_e89518[0] +
             (unsigned __int64)((_UNKNOWN*)0x100LL)) = 0;
  iostream_7f7f70((__int64)v20, v3, (__int64)v21);
  *(__int64*)((char*)((__int64*)0x38LL) + (_QWORD)v19) = 0;
  v22 = SdkData_e89490;
  v23 = SdkData_e89490 + 64;
  v24 = SdkData_e89490 + 24;
  *(__int64*)((char*)((__int64*)0x4LL) + (_QWORD)v19 + 4) = SdkData_e89490 + 64;
  *(_QWORD*)v19 = v24;
  std___1_ios_base_init_plt((char*)((__int64*)0x4LL) + (_QWORD)v19 + 4,
                            (char*)v19 + 160);
  *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)v19) = 0;
  *(_DWORD*)((char*)((_UNKNOWN*)0x98LL) + (_QWORD)v19) = -1;
  v25 = SdkData_e89520[0];
  v26 = (char*)SdkData_e89520[0] + 160;
  v27 = (char*)SdkData_e89520[0] + 256;
  *(_QWORD*)((char*)SdkData_e89520[0] +
             (unsigned __int64)((_UNKNOWN*)0x100LL)) = 0;
  iostream_7f7f70((__int64)v26, v10, (__int64)v27);
  *(__int64*)((char*)((__int64*)0x4LL) + (_QWORD)v25 + 4) = v23;
  *(__int64*)((char*)((__int64*)0x38LL) + (_QWORD)v25) = 0;
  *(_QWORD*)v25 = v24;
  std___1_ios_base_init_plt((char*)((__int64*)0x4LL) + (_QWORD)v25 + 4,
                            (char*)v25 + 160);
  *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)v25) = 0;
  *(_DWORD*)((char*)((_UNKNOWN*)0x98LL) + (_QWORD)v25) = -1;
  v28 = SdkData_e89528[0];
  v29 = (char*)SdkData_e89528[0] + 160;
  v30 = (char*)SdkData_e89528[0] + 256;
  *(_QWORD*)((char*)SdkData_e89528[0] +
             (unsigned __int64)((_UNKNOWN*)0x100LL)) = 0;
  iostream_7f7f70((__int64)v29, v10, (__int64)v30);
  *(__int64*)((char*)((__int64*)0x38LL) + (_QWORD)v28) = 0;
  *(_QWORD*)v28 = v22 + 24;
  *(__int64*)((char*)((__int64*)0x4LL) + (_QWORD)v28 + 4) = v22 + 64;
  result = std___1_ios_base_init_plt((char*)((__int64*)0x4LL) + (_QWORD)v28 + 4,
                                     (char*)v28 + 160);
  v32 = *(_QWORD*)v18;
  *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)v28) = 0;
  *(_DWORD*)((char*)((_UNKNOWN*)0x98LL) + (_QWORD)v28) = -1;
  *(_QWORD*)((char*)v18 + *(_QWORD*)(v32 - 24) + 136) = v19;
  v33 = *(_QWORD*)v25;
  *(_DWORD*)((char*)v25 + *(_QWORD*)(*(_QWORD*)v25 - 24LL) + 8) |= 0x2000u;
  *(_QWORD*)((char*)v25 + *(_QWORD*)(v33 - 24) + 136) = v19;
  return result;
}

void __attribute__((noreturn)) locale_7f6fd0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
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

  SdkRoutine_87cef0(v4 + 8);
  _Unwind_Resume_plt_alt1(a1);
  v8 = v7;
  SdkRoutine_87cef0(v1 + 8);
  _Unwind_Resume_plt_alt1(v8);
  v10 = v9;
  SdkRoutine_87cef0(v2 + 8);
  _Unwind_Resume_plt_alt1(v10);
  v12 = v11;
  SdkRoutine_86ee80(v5 + 8);
  _Unwind_Resume_plt_alt1(v12);
  v14 = v13;
  SdkRoutine_86ee80(v4 + 8);
  _Unwind_Resume_plt_alt1(v14);
  v16 = v15;
  SdkRoutine_86ee80(v3 + 8);
  _Unwind_Resume_plt_alt1(v16);
  __udf(0);
}

void __attribute__((noreturn))

locale_7f8960(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
              __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
              __int64 a11, __int64 a12, __int64 a13, __int64 a14)
{
  __int64 v14;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  if ((a12 & 1) != 0) {
    goto LABEL_4;
  }
  while ((a9 & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(a14, a12 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  _Unwind_Resume_plt_alt1(v16);
  v18 = v17;
  std___1_locale_Destroy_locale_plt(v14 - 32);
  _Unwind_Resume_plt_alt1(v18);
  v20 = v19;
  std___1_locale_Destroy_locale_plt(v14 - 32);
  _Unwind_Resume_plt_alt1(v20);
  __udf(0);
}

void __attribute__((noreturn)) locale_7f9500(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 48),
                      *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 24),
                    *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_7f9bc0(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 48),
                      *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 24),
                    *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_7fa280(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 48),
                      *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 24),
                    *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_7fa940(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 48),
                      *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 24),
                    *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_7fb000(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 48),
                      *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 24),
                    *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_7fb6c0(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 48),
                      *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 24),
                    *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_7fbce4(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 96) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 72) & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_7fc304(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 96) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 72) & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_7fc924(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 96) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 72) & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_7fcecc(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12, __int64 a13)
{
  __cxa_guard_abort_plt(&SdkData_1060b80);
  if ((a11 & 1) != 0) {
    SdkRoutine_857220(a13, a11 & 0xFFFFFFFFFFFFFFFELL);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_7fd170(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_7fd3d8(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  SdkRoutine_87cb10(v9 + 24);
  SdkRoutine_87cb10(&a9);
  _Unwind_Resume_plt_alt1(a1);
  v13 = v12;
  SdkRoutine_87cb10(&a9);
  _Unwind_Resume_plt_alt1(v13);
  _Unwind_Resume_plt_alt1(v14);
  v16 = v15;
  std___1_locale_Destroy_locale_plt(v10 - 32);
  _Unwind_Resume_plt_alt1(v16);
  v18 = v17;
  std___1_locale_Destroy_locale_plt(v10 - 32);
  _Unwind_Resume_plt_alt1(v18);
  __udf(0);
}

void __attribute__((noreturn)) locale_7fdf3c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 152),
                      *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 128),
                    *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_7fe5fc(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 152),
                      *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 128),
                    *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_7fecbc(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 152),
                      *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 128),
                    *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_7ff37c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 152),
                      *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 128),
                    *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_7ffa3c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 152),
                      *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 128),
                    *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_8000fc(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 152),
                      *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 128),
                    *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_800720(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 152) & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_800d40(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 152) & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_801360(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 152) & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1___num_get___stage2_int_loop(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, _DWORD** a9,
                                            __int64 a10, __int64 a11,
                                            __int64 a12)
{
  unsigned int v13;
  unsigned int v14;
  char* v15;
  char** v16;
  _DWORD* v17;
  int v18;
  unsigned __int8* v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _DWORD* v24;
  __int64 result;
  char v26;
  char* v27;
  unsigned int v28;
  char** v29;
  _DWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  char* v35;
  char* v36;
  char v37;

  __cxa_guard_abort_plt(&SdkData_1060b80);
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  _Unwind_Resume_plt_alt1(a1);
  v21 = *v16;
  if (*v16 == v15) {
    if (v13 == *(_DWORD*)(a10 + 96)) {
      v26 = 43;
    }
    else {
      if (v13 != *(_DWORD*)(a10 + 100)) {
        goto LABEL_4;
      }
      v26 = 45;
    }
    *v16 = v21 + 1;
    *v21 = v26;
    *v17 = 0;
    return 0;
  }
LABEL_4:
  v22 = *v19;
  if ((v22 & 1) != 0) {
    v23 = *((_QWORD*)v19 + 1);
  }
  else {
    v23 = v22 >> 1;
  }
  if (v13 == v18 && v23 != 0) {
    v24 = *a9;
    if ((__int64)*a9 - v20 > 159) {
      return 0;
    }
    result = 0;
    *v24 = *v17;
    *v17 = 0;
    *a9 = v24 + 1;
    return result;
  }
  v27 = v15;
  v28 = v14;
  v29 = v16;
  v30 = v17;
  v31 = wmemchr_plt(a10, v13, 26);
  if (v31 != 0) {
    v32 = v31;
  }
  else {
    v32 = a10 + 104;
  }
  v33 = (v32 - a10) >> 2;
  if (v33 > 23) {
    return 0xFFFFFFFFLL;
  }
  if (v28 == 8) {
  LABEL_25:
    if (v33 >= v28) {
      return 0xFFFFFFFFLL;
    }
  LABEL_29:
    v34 = *(_BYTE*)(SdkData_e89548 + v33);
    v35 = (*v29)++;
    *v35 = v34;
    ++*v30;
    return 0;
  }
  if (v28 != 16) {
    if (v28 != 10) {
      goto LABEL_29;
    }
    goto LABEL_25;
  }
  if (v33 < 22) {
    goto LABEL_29;
  }
  v36 = *v29;
  result = 0xFFFFFFFFLL;
  if (*v29 != v27 && *v29 - v27 <= 2 && *(v36 - 1) == 48) {
    *v30 = 0;
    v37 = *(_BYTE*)(SdkData_e89548 + v33);
    *v29 = v36 + 1;
    *v36 = v37;
    return 0;
  }
  return result;
}

__int64 std___1___num_get___stage2_float_prep_801b80(__int64 a1, __int64 a2,
                                                     _BYTE* a3, _BYTE* a4)
{
  __int64 v7;
  void(__attribute__((noreturn)) * v8)();
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  void(__attribute__((noreturn)) * v13)();
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v18;
  void(__attribute__((noreturn)) * v19)();
  void(__attribute__((noreturn)) * **v20)();
  void(__attribute__((noreturn)) * *v21)();

  std___1_ios_base_getloc_plt((void*)(&v18), a1);
  v7 = v18;
  v8 = SdkData_e89440[0];
  v19 = SdkData_e89440[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89440[0],
                           memory_order_acquire) != -1) {
    v21 = &v19;
    v20 = &v21;
    std___1___call_once_plt(SdkData_e89440[0], &v20, SdkRoutine_82f0b0);
  }
  v9 = *(_QWORD*)(v7 + 16);
  v10 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v8 + 4) - 1LL;
  if (v10 >= (*(_QWORD*)(v7 + 24) - v9) >> 3 ||
      (v11 = *(_QWORD*)(v9 + 8 * v10)) == 0) {
    locale_7f6090();
  }
  (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v11 + 64LL))(
      v11, SdkData_e89548, SdkData_e89548 + 28, a2);
  v12 = v18;
  v13 = SdkData_e89540[0];
  v19 = SdkData_e89540[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89540[0],
                           memory_order_acquire) != -1) {
    v21 = &v19;
    v20 = &v21;
    std___1___call_once_plt(SdkData_e89540[0], &v20, SdkRoutine_82f0b0);
  }
  v14 = *(_QWORD*)(v12 + 16);
  v15 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v13 + 4) - 1LL;
  if (v15 >= (*(_QWORD*)(v12 + 24) - v14) >> 3 ||
      (v16 = *(_QWORD*)(v14 + 8 * v15)) == 0) {
    locale_7f6090();
  }
  *a3 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 24LL))(v16);
  *a4 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 32LL))(v16);
  (*(void (**)(__int64))(*(_QWORD*)v16 + 40LL))(v16);
  return std___1_locale_Destroy_locale_plt(&v18);
}

void __attribute__((noreturn)) locale_801cfc(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v10;
  __int64 v11;

  std___1_locale_Destroy_locale_plt(&a9);
  _Unwind_Resume_plt_alt1(a1);
  v11 = v10;
  std___1_locale_Destroy_locale_plt(&a9);
  _Unwind_Resume_plt_alt1(v11);
  __udf(0);
}

__int64 std___1___num_get___stage2_float_loop_801d30(
    unsigned __int8 a1, _BYTE* a2, _BYTE* a3, _BYTE* a4, _BYTE** a5,
    unsigned __int8 a6, unsigned __int8 a7, unsigned __int8* a8, __int64 a9,
    _DWORD** a10, _DWORD* a11, __int64 a12)
{
  _BYTE* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _DWORD* v15;
  unsigned __int64 v17;
  __int64 v18;
  _DWORD* v19;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char v28;
  _BYTE* v29;
  _QWORD* v30;
  int v31;
  int v32;
  _BYTE* v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  _DWORD* v37;
  _BYTE* v38;

  if (a1 == a6) {
    if (*a2 == 1) {
      v12 = *a5;
      *a2 = 0;
      *a5 = v12 + 1;
      *v12 = 46;
      v13 = *a8;
      if ((v13 & 1) != 0) {
        v14 = *((_QWORD*)a8 + 1);
      }
      else {
        v14 = v13 >> 1;
      }
      if (v14 != 0) {
        v15 = *a10;
        if ((__int64)*a10 - a9 <= 159) {
          *v15 = *a11;
          *a10 = v15 + 1;
          return 0;
        }
      }
      return 0;
    }
    return 0xFFFFFFFFLL;
  }
  if (a1 == a7) {
    v17 = *a8;
    v18 = (v17 & 1) != 0 ? *((_QWORD*)a8 + 1) : v17 >> 1;
    if (v18 != 0) {
      if (*a2 == 1) {
        v19 = *a10;
        if ((__int64)*a10 - a9 <= 159) {
          *v19 = *a11;
          *a11 = 0;
          *a10 = v19 + 1;
          return 0;
        }
        return 0;
      }
      return 0xFFFFFFFFLL;
    }
  }
  v25 = memchr_plt(a12, a1, 28);
  if (v25 != 0) {
    v26 = v25;
  }
  else {
    v26 = a12 + 28;
  }
  v27 = v26 - a12;
  if (v26 - a12 > 27) {
    return 0xFFFFFFFFLL;
  }
  v28 = *(_BYTE*)(SdkData_e89548 + v27);
  if ((v27 & 0xFFFFFFFFFFFFFFFELL) == 0x16) {
    *a3 = 80;
    v33 = (*a5)++;
    *v33 = v28;
    return 0;
  }
  if ((v27 & 0xFFFFFFFFFFFFFFFELL) == 0x18) {
    v29 = *a5;
    v30 = a5;
    if (*a5 == a4 ||
        (v31 = toupper_plt((unsigned __int8)*(v29 - 1)),
         v32 = toupper_plt((unsigned __int8)*a3), v30 = a5, v31 == v32)) {
      *v30 = v29 + 1;
      *v29 = v28;
      return 0;
    }
    return 0xFFFFFFFFLL;
  }
  v34 = toupper_plt(*(unsigned __int8*)(SdkData_e89548 + v27));
  if ((_DWORD)v34 == (unsigned __int8)*a3) {
    *a3 = tolower_plt(v34);
    if (*a2 == 1) {
      *a2 = 0;
      v35 = *a8;
      v36 = (v35 & 1) != 0 ? *((_QWORD*)a8 + 1) : v35 >> 1;
      if (v36 != 0) {
        v37 = *a10;
        if ((__int64)*a10 - a9 <= 159) {
          *v37 = *a11;
          *a10 = v37 + 1;
        }
      }
    }
  }
  v38 = (*a5)++;
  *v38 = v28;
  if (v27 <= 21) {
    ++*a11;
    return 0;
  }
  return 0;
}

__int64 std___1___num_get___stage2_int_prep_801f90(__int64 a1, __int64 a2,
                                                   _BYTE* a3)
{
  __int64 v5;
  void(__attribute__((noreturn)) * v6)();
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  void(__attribute__((noreturn)) * v11)();
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v16;
  void(__attribute__((noreturn)) * v17)();
  void(__attribute__((noreturn)) * **v18)();
  void(__attribute__((noreturn)) * *v19)();

  std___1_ios_base_getloc_plt((void*)(&v16), a1);
  v5 = v16;
  v6 = SdkData_e89440[0];
  v17 = SdkData_e89440[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89440[0],
                           memory_order_acquire) != -1) {
    v19 = &v17;
    v18 = &v19;
    std___1___call_once_plt(SdkData_e89440[0], &v18, SdkRoutine_82f0b0);
  }
  v7 = *(_QWORD*)(v5 + 16);
  v8 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  if (v8 >= (*(_QWORD*)(v5 + 24) - v7) >> 3 ||
      (v9 = *(_QWORD*)(v7 + 8 * v8)) == 0) {
    locale_7f6090();
  }
  (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v9 + 64LL))(
      v9, SdkData_e89548, SdkData_e89548 + 26, a2);
  v10 = v16;
  v11 = SdkData_e89540[0];
  v17 = SdkData_e89540[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89540[0],
                           memory_order_acquire) != -1) {
    v19 = &v17;
    v18 = &v19;
    std___1___call_once_plt(SdkData_e89540[0], &v18, SdkRoutine_82f0b0);
  }
  v12 = *(_QWORD*)(v10 + 16);
  v13 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v11 + 4) - 1LL;
  if (v13 >= (*(_QWORD*)(v10 + 24) - v12) >> 3 ||
      (v14 = *(_QWORD*)(v12 + 8 * v13)) == 0) {
    locale_7f6090();
  }
  *a3 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 32LL))(v14);
  (*(void (**)(__int64))(*(_QWORD*)v14 + 40LL))(v14);
  return std___1_locale_Destroy_locale_plt(&v16);
}

void __attribute__((noreturn)) locale_8020f4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10)
{
  __int64 v11;
  __int64 v12;

  std___1_locale_Destroy_locale_plt(&a10);
  _Unwind_Resume_plt_alt1(a1);
  v12 = v11;
  std___1_locale_Destroy_locale_plt(&a10);
  _Unwind_Resume_plt_alt1(v12);
  __udf(0);
}

__int64 std___1___num_get___stage2_float_prep_802120(__int64 a1, __int64 a2,
                                                     _DWORD* a3, _DWORD* a4)
{
  __int64 v7;
  void(__attribute__((noreturn)) * v8)();
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  void(__attribute__((noreturn)) * v13)();
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v18;
  void(__attribute__((noreturn)) * v19)();
  void(__attribute__((noreturn)) * **v20)();
  void(__attribute__((noreturn)) * *v21)();

  std___1_ios_base_getloc_plt((void*)(&v18), a1);
  v7 = v18;
  v8 = SdkData_e89480[0];
  v19 = SdkData_e89480[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89480[0],
                           memory_order_acquire) != -1) {
    v21 = &v19;
    v20 = &v21;
    std___1___call_once_plt(SdkData_e89480[0], &v20, SdkRoutine_82f0b0);
  }
  v9 = *(_QWORD*)(v7 + 16);
  v10 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v8 + 4) - 1LL;
  if (v10 >= (*(_QWORD*)(v7 + 24) - v9) >> 3 ||
      (v11 = *(_QWORD*)(v9 + 8 * v10)) == 0) {
    locale_7f6090();
  }
  (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v11 + 96LL))(
      v11, SdkData_e89548, SdkData_e89548 + 28, a2);
  v12 = v18;
  v13 = SdkData_e89550[0];
  v19 = SdkData_e89550[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89550[0],
                           memory_order_acquire) != -1) {
    v21 = &v19;
    v20 = &v21;
    std___1___call_once_plt(SdkData_e89550[0], &v20, SdkRoutine_82f0b0);
  }
  v14 = *(_QWORD*)(v12 + 16);
  v15 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v13 + 4) - 1LL;
  if (v15 >= (*(_QWORD*)(v12 + 24) - v14) >> 3 ||
      (v16 = *(_QWORD*)(v14 + 8 * v15)) == 0) {
    locale_7f6090();
  }
  *a3 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 24LL))(v16);
  *a4 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 32LL))(v16);
  (*(void (**)(__int64))(*(_QWORD*)v16 + 40LL))(v16);
  return std___1_locale_Destroy_locale_plt(&v18);
}

void __attribute__((noreturn)) locale_80229c(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v10;
  __int64 v11;

  std___1_locale_Destroy_locale_plt(&a9);
  _Unwind_Resume_plt_alt1(a1);
  v11 = v10;
  std___1_locale_Destroy_locale_plt(&a9);
  _Unwind_Resume_plt_alt1(v11);
  __udf(0);
}

__int64 std___1___num_get___stage2_float_loop_8022d0(unsigned int a1, _BYTE* a2,
                                                     _BYTE* a3, _BYTE* a4,
                                                     _BYTE** a5, int a6, int a7,
                                                     unsigned __int8* a8,
                                                     __int64 a9, _DWORD** a10,
                                                     _DWORD* a11, __int64 a12)
{
  _BYTE* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _DWORD* v16;
  unsigned __int64 v18;
  __int64 v19;
  _DWORD* v20;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  char v30;
  _BYTE* v31;
  int v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  _DWORD* v36;
  _BYTE* v37;

  if (a1 == a6) {
    if (*a2 == 1) {
      v13 = *a5;
      *a2 = 0;
      *a5 = v13 + 1;
      *v13 = 46;
      v14 = *a8;
      if ((v14 & 1) != 0) {
        v15 = *((_QWORD*)a8 + 1);
      }
      else {
        v15 = v14 >> 1;
      }
      if (v15 != 0) {
        v16 = *a10;
        if ((__int64)*a10 - a9 <= 159) {
          *v16 = *a11;
          *a10 = v16 + 1;
          return 0;
        }
      }
      return 0;
    }
    return 0xFFFFFFFFLL;
  }
  if (a1 == a7) {
    v18 = *a8;
    v19 = (v18 & 1) != 0 ? *((_QWORD*)a8 + 1) : v18 >> 1;
    if (v19 != 0) {
      if (*a2 == 1) {
        v20 = *a10;
        if ((__int64)*a10 - a9 <= 159) {
          *v20 = *a11;
          *a11 = 0;
          *a10 = v20 + 1;
          return 0;
        }
        return 0;
      }
      return 0xFFFFFFFFLL;
    }
  }
  v25 = wmemchr_plt(a12, a1, 28);
  if (v25 != 0) {
    v26 = v25;
  }
  else {
    v26 = a12 + 112;
  }
  v27 = v26 - a12;
  v28 = v27 >> 2;
  if (v27 >> 2 > 27) {
    return 0xFFFFFFFFLL;
  }
  v29 = v27 & 0xFFFFFFFFFFFFFFFBLL;
  v30 = *(_BYTE*)(SdkData_e89548 + v28);
  if (v29 == 88) {
    *a3 = 80;
  }
  else {
    if (v29 == 96) {
      v31 = *a5;
      if (*a5 == a4 || (v32 = toupper_plt((unsigned __int8)*(v31 - 1))) ==
                           (unsigned int)toupper_plt((unsigned __int8)*a3)) {
        *a5 = v31 + 1;
        *v31 = v30;
        return 0;
      }
      return 0xFFFFFFFFLL;
    }
    v33 = toupper_plt(*(unsigned __int8*)(SdkData_e89548 + v28));
    if ((_DWORD)v33 == (unsigned __int8)*a3) {
      *a3 = tolower_plt(v33);
      if (*a2 == 1) {
        *a2 = 0;
        v34 = *a8;
        v35 = (v34 & 1) != 0 ? *((_QWORD*)a8 + 1) : v34 >> 1;
        if (v35 != 0) {
          v36 = *a10;
          if ((__int64)*a10 - a9 <= 159) {
            *v36 = *a11;
            *a10 = v36 + 1;
          }
        }
      }
    }
  }
  v37 = (*a5)++;
  *v37 = v30;
  if (v28 <= 21) {
    ++*a11;
    return 0;
  }
  return 0;
}

__int64 std___1___num_get___stage2_int_prep_802520(__int64 a1, __int64 a2,
                                                   _DWORD* a3)
{
  __int64 v5;
  void(__attribute__((noreturn)) * v6)();
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  void(__attribute__((noreturn)) * v11)();
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v16;
  void(__attribute__((noreturn)) * v17)();
  void(__attribute__((noreturn)) * **v18)();
  void(__attribute__((noreturn)) * *v19)();

  std___1_ios_base_getloc_plt((void*)(&v16), a1);
  v5 = v16;
  v6 = SdkData_e89480[0];
  v17 = SdkData_e89480[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89480[0],
                           memory_order_acquire) != -1) {
    v19 = &v17;
    v18 = &v19;
    std___1___call_once_plt(SdkData_e89480[0], &v18, SdkRoutine_82f0b0);
  }
  v7 = *(_QWORD*)(v5 + 16);
  v8 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  if (v8 >= (*(_QWORD*)(v5 + 24) - v7) >> 3 ||
      (v9 = *(_QWORD*)(v7 + 8 * v8)) == 0) {
    locale_7f6090();
  }
  (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v9 + 96LL))(
      v9, SdkData_e89548, SdkData_e89548 + 26, a2);
  v10 = v16;
  v11 = SdkData_e89550[0];
  v17 = SdkData_e89550[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89550[0],
                           memory_order_acquire) != -1) {
    v19 = &v17;
    v18 = &v19;
    std___1___call_once_plt(SdkData_e89550[0], &v18, SdkRoutine_82f0b0);
  }
  v12 = *(_QWORD*)(v10 + 16);
  v13 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v11 + 4) - 1LL;
  if (v13 >= (*(_QWORD*)(v10 + 24) - v12) >> 3 ||
      (v14 = *(_QWORD*)(v12 + 8 * v13)) == 0) {
    locale_7f6090();
  }
  *a3 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 32LL))(v14);
  (*(void (**)(__int64))(*(_QWORD*)v14 + 40LL))(v14);
  return std___1_locale_Destroy_locale_plt(&v16);
}

void __attribute__((noreturn)) locale_802684(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10)
{
  __int64 v11;
  __int64 v12;

  std___1_locale_Destroy_locale_plt(&a10);
  _Unwind_Resume_plt_alt1(a1);
  v12 = v11;
  std___1_locale_Destroy_locale_plt(&a10);
  _Unwind_Resume_plt_alt1(v12);
  __udf(0);
}

void __attribute__((noreturn)) locale_8028c4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11, char a12)
{
  __int64 v13;
  __int64 v14;

  std___1_locale_Destroy_locale_plt(&a12);
  _Unwind_Resume_plt_alt1(a1);
  v14 = v13;
  if ((a9 & 1) != 0) {
    SdkRoutine_857220(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  }
  _Unwind_Resume_plt_alt1(v14);
  __udf(0);
}

__int64 locale_802c2c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9)
{
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  char* v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 i;
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
  char* v40;
  __int64 v42;
  __int64 v43;
  int v44;
  _BYTE v45[45];
  char v46;
  unsigned __int8 v47;
  _BYTE v48[6];
  _QWORD v49[8];

  std___1_locale_Destroy_locale_plt(&a9);
  _Unwind_Resume_plt(a1);
  v49[0] = v9;
  v49[1] = v12;
  v49[7] = a1;
  v14 = *(_DWORD*)(v13 + 8);
  v16 = v15;
  v17 = &v46;
  v18 = v13;
  v20 = v19;
  v21 = v14 & 0x4A;
  if (v21 == 8) {
    v22 = 16;
  }
  else {
    v22 = 10;
  }
  if (v21 == 64) {
    v23 = 8;
  }
  else {
    v23 = v22;
  }
  if (v11 < 0) {
    if (v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v24 = -v11;
      v17 = (char*)&v47;
      v46 = 45;
    }
  }
  else {
    if ((v14 & 0x800) == 0 || v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v17 = (char*)&v47;
      v46 = 43;
    LABEL_15:
      v24 = v11;
    }
  }
  if (v11 != 0 && (v14 & 0x200) != 0) {
    if (v21 == 64) {
      *v17++ = 48;
    }
    else if (v21 == 8) {
      *v17 = 48;
      if ((v14 & 0x4000) != 0) {
        v25 = 88;
      }
      else {
        v25 = 120;
      }
      v17[1] = v25;
      v17 += 2;
    }
  }
  v26 = locale_830290_alt1(v17, v49, v24, v23);
  v27 = v26;
  if ((~v14 & 0x4008) == 0) {
    v28 = (unsigned __int64)&v17[-v26];
    if (v17 != (char*)v26) {
      for (i = ((_BYTE)v26 - (_BYTE)v17) & 7; i != 0; *v17++ = v30) {
        v30 = (unsigned __int8)*v17;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --i;
      }
      if (v28 <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v31 = (unsigned __int8)*v17;
          if ((unsigned int)(v31 - 97) < 6) {
            LOBYTE(v31) = v31 - 32;
          }
          *v17 = v31;
          v32 = (unsigned __int8)v17[1];
          if ((unsigned int)(v32 - 97) < 6) {
            LOBYTE(v32) = v32 - 32;
          }
          v17[1] = v32;
          v33 = (unsigned __int8)v17[2];
          if ((unsigned int)(v33 - 97) < 6) {
            LOBYTE(v33) = v33 - 32;
          }
          v17[2] = v33;
          v34 = (unsigned __int8)v17[3];
          if ((unsigned int)(v34 - 97) < 6) {
            LOBYTE(v34) = v34 - 32;
          }
          v17[3] = v34;
          v35 = (unsigned __int8)v17[4];
          if ((unsigned int)(v35 - 97) < 6) {
            LOBYTE(v35) = v35 - 32;
          }
          v17[4] = v35;
          v36 = (unsigned __int8)v17[5];
          if ((unsigned int)(v36 - 97) < 6) {
            LOBYTE(v36) = v36 - 32;
          }
          v17[5] = v36;
          v37 = (unsigned __int8)v17[6];
          if ((unsigned int)(v37 - 97) < 6) {
            LOBYTE(v37) = v37 - 32;
          }
          v17[6] = v37;
          v38 = (unsigned __int8)v17[7];
          if ((unsigned int)(v38 - 97) < 6) {
            LOBYTE(v38) = v38 - 32;
          }
          v17[7] = v38;
          v17 += 8;
        } while (v17 != (char*)v26);
      }
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (char*)v26;
    goto LABEL_60;
  }
  if (v39 != 16) {
  LABEL_59:
    v40 = &v46;
    goto LABEL_60;
  }
  if (v46 != 45 && v46 != 43) {
    if (v26 - (__int64)&v46 >= 2 && v46 == 48 && (v47 | 0x20) == 0x78) {
      v40 = v48;
      goto LABEL_60;
    }
    goto LABEL_59;
  }
  v40 = (char*)&v47;
LABEL_60:
  *(struct PseudoSret*)(&v42) = std___1_ios_base_getloc_plt_alt1(v18);
  SdkRoutine_87d080(&v46, v40, v27, v45, &v44, &v43, &v42);
  std___1_locale_Destroy_locale_plt(&v42);
  return SdkRoutine_810f00(v20, (int)v45, v44, v43, v18, (void*)v16);
}

__int64 std___1_num_put_do_put_802c40(__int64 a1, __int64 a2, __int64 a3,
                                      unsigned int a4, unsigned __int64 a5)
{
  return SdkRoutine_802c60(a1, a2, a3, a4, a5);
}

__int64 locale_802f6c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9)
{
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  char* v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  char v24;
  __int64 v25;
  __int64 v26;
  __int64 v28;
  char* v29;
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
  char* v40;
  __int64 v42;
  __int64 v43;
  int v44;
  _BYTE v45[45];
  char v46;
  unsigned __int8 v47;
  _BYTE v48[22];
  _QWORD v49[8];

  std___1_locale_Destroy_locale_plt(&a9);
  _Unwind_Resume_plt(a1);
  v49[0] = v9;
  v49[1] = v12;
  v49[7] = a1;
  v14 = *(_DWORD*)(v13 + 8);
  v16 = v15;
  v17 = &v46;
  v18 = v13;
  v20 = v19;
  v21 = v14 & 0x4A;
  if (v21 == 8) {
    v22 = 16;
  }
  else {
    v22 = 10;
  }
  if (v21 == 64) {
    v23 = 8;
  }
  else {
    v23 = v22;
  }
  if (v11 != 0 && (v14 & 0x200) != 0) {
    if (v21 == 64) {
      v17 = (char*)&v47;
      v46 = 48;
    }
    else if (v21 == 8) {
      v17 = v48;
      v46 = 48;
      if ((v14 & 0x4000) != 0) {
        v24 = 88;
      }
      else {
        v24 = 120;
      }
      v47 = v24;
    }
  }
  v25 = locale_830290_alt1(v17, v49, v11, v23);
  v26 = v25;
  if ((~v14 & 0x4008) == 0 && v17 != (char*)v25) {
    v28 = ((_BYTE)v25 - (_BYTE)v17) & 7;
    v29 = v17;
    if ((((_BYTE)v25 - (_BYTE)v17) & 7) != 0) {
      v29 = v17;
      do {
        v30 = (unsigned __int8)*v29;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --v28;
        *v29++ = v30;
      } while (v28 != 0);
    }
    if ((unsigned __int64)&v17[-v25] <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        v31 = (unsigned __int8)*v29;
        if ((unsigned int)(v31 - 97) < 6) {
          LOBYTE(v31) = v31 - 32;
        }
        *v29 = v31;
        v32 = (unsigned __int8)v29[1];
        if ((unsigned int)(v32 - 97) < 6) {
          LOBYTE(v32) = v32 - 32;
        }
        v29[1] = v32;
        v33 = (unsigned __int8)v29[2];
        if ((unsigned int)(v33 - 97) < 6) {
          LOBYTE(v33) = v33 - 32;
        }
        v29[2] = v33;
        v34 = (unsigned __int8)v29[3];
        if ((unsigned int)(v34 - 97) < 6) {
          LOBYTE(v34) = v34 - 32;
        }
        v29[3] = v34;
        v35 = (unsigned __int8)v29[4];
        if ((unsigned int)(v35 - 97) < 6) {
          LOBYTE(v35) = v35 - 32;
        }
        v29[4] = v35;
        v36 = (unsigned __int8)v29[5];
        if ((unsigned int)(v36 - 97) < 6) {
          LOBYTE(v36) = v36 - 32;
        }
        v29[5] = v36;
        v37 = (unsigned __int8)v29[6];
        if ((unsigned int)(v37 - 97) < 6) {
          LOBYTE(v37) = v37 - 32;
        }
        v29[6] = v37;
        v38 = (unsigned __int8)v29[7];
        if ((unsigned int)(v38 - 97) < 6) {
          LOBYTE(v38) = v38 - 32;
        }
        v29[7] = v38;
        v29 += 8;
      } while (v29 != (char*)v25);
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (char*)v25;
    goto LABEL_54;
  }
  if (v39 != 16) {
  LABEL_53:
    v40 = &v46;
    goto LABEL_54;
  }
  if (v46 != 45 && v46 != 43) {
    if (v25 - (__int64)&v46 >= 2 && v46 == 48 && (v47 | 0x20) == 0x78) {
      v40 = v48;
      goto LABEL_54;
    }
    goto LABEL_53;
  }
  v40 = (char*)&v47;
LABEL_54:
  *(struct PseudoSret*)(&v42) = std___1_ios_base_getloc_plt_alt1(v18);
  SdkRoutine_87d080(&v46, v40, v26, v45, &v44, &v43, &v42);
  std___1_locale_Destroy_locale_plt(&v42);
  return SdkRoutine_810f00(v20, (int)v45, v44, v43, v18, (void*)v16);
}

__int64 std___1_num_put_do_put_802f80(__int64 a1, __int64 a2, __int64 a3,
                                      unsigned int a4, unsigned __int64 a5)
{
  return SdkRoutine_802fa0(a1, a2, a3, a4, a5);
}

void __attribute__((noreturn)) locale_803258(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9)
{
  std___1_locale_Destroy_locale_plt(&a9);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_803538(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9)
{
  std___1_locale_Destroy_locale_plt(&a9);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_803960(__int64 a1)
{
  __int64 v1;
  __int64 v2;
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

  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt_alt1(a1);
  v5 = v4;
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt_alt1(v5);
  v7 = v6;
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt_alt1(v7);
  v9 = v8;
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt_alt1(v9);
  _Unwind_Resume_plt_alt1(v10);
  _Unwind_Resume_plt_alt1(v11);
  v13 = v12;
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt_alt1(v13);
      free_plt(v2);
    }
  }
  free_plt(v1);
  _Unwind_Resume_plt_alt1(v13);
  __udf(0);
}

void __attribute__((noreturn)) locale_803e3c(__int64 a1)
{
  __int64 v1;
  __int64 v2;
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

  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt_alt1(a1);
  v5 = v4;
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt_alt1(v5);
  v7 = v6;
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt_alt1(v7);
  v9 = v8;
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt_alt1(v9);
  _Unwind_Resume_plt_alt1(v10);
  _Unwind_Resume_plt_alt1(v11);
  v13 = v12;
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt_alt1(v13);
      free_plt(v2);
    }
  }
  free_plt(v1);
  _Unwind_Resume_plt_alt1(v13);
  __udf(0);
}

__int64 std___1_num_put_do_put_803f00(__int64 a1, __int64 a2, __int64 a3,
                                      unsigned int a4, unsigned __int64 a5)
{
  int v5;
  __int64 result;

  v5 = *(_DWORD*)(a3 + 8);
  *(_DWORD*)(a3 + 8) = v5 & 0xFFFFBDB5 | 0x208;
  result = SdkRoutine_802fa0(a1, a2, a3, a4, a5);
  *(_DWORD*)(a3 + 8) = v5;
  return result;
}

__int64 locale_804104(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9, __int64 a10, __int64 a11, char a12)
{
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 i;
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
  char* v45;
  __int64 v47;
  __int64 v48;
  _BYTE v49[180];
  char v50;
  unsigned __int8 v51;
  _BYTE v52[6];
  _QWORD v53[2];
  _QWORD v54[7];

  std___1_locale_Destroy_locale_plt(&a12);
  _Unwind_Resume_plt_alt1(a1);
  v15 = v14;
  if ((a9 & 1) != 0) {
    SdkRoutine_857220(a11, (4 * a9) & 0xFFFFFFFFFFFFFFF8LL);
  }
  _Unwind_Resume_plt_alt1(v15);
  v53[0] = v12;
  v53[1] = v17;
  v54[6] = v15;
  v19 = *(_DWORD*)(v18 + 8);
  v21 = v20;
  v22 = &v50;
  v23 = v18;
  v25 = v24;
  v26 = v19 & 0x4A;
  if (v26 == 8) {
    v27 = 16;
  }
  else {
    v27 = 10;
  }
  if (v26 == 64) {
    v28 = 8;
  }
  else {
    v28 = v27;
  }
  if (v16 < 0) {
    if (v26 == 8) {
      goto LABEL_17;
    }
    v29 = v16;
    if (v26 != 64) {
      v29 = -v16;
      v22 = (char*)&v51;
      v50 = 45;
    }
  }
  else {
    if ((v19 & 0x800) == 0 || v26 == 8) {
      goto LABEL_17;
    }
    v29 = v16;
    if (v26 != 64) {
      v22 = (char*)&v51;
      v50 = 43;
    LABEL_17:
      v29 = v16;
    }
  }
  if (v16 != 0 && (v19 & 0x200) != 0) {
    if (v26 == 64) {
      *v22++ = 48;
    }
    else if (v26 == 8) {
      *v22 = 48;
      if ((v19 & 0x4000) != 0) {
        v30 = 88;
      }
      else {
        v30 = 120;
      }
      v22[1] = v30;
      v22 += 2;
    }
  }
  v31 = locale_830290_alt1(v22, v53, v29, v28);
  v32 = v31;
  if ((~v19 & 0x4008) == 0) {
    v33 = (unsigned __int64)&v22[-v31];
    if (v22 != (char*)v31) {
      for (i = ((_BYTE)v31 - (_BYTE)v22) & 7; i != 0; *v22++ = v35) {
        v35 = (unsigned __int8)*v22;
        if ((unsigned int)(v35 - 97) < 6) {
          LOBYTE(v35) = v35 - 32;
        }
        --i;
      }
      if (v33 <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v36 = (unsigned __int8)*v22;
          if ((unsigned int)(v36 - 97) < 6) {
            LOBYTE(v36) = v36 - 32;
          }
          *v22 = v36;
          v37 = (unsigned __int8)v22[1];
          if ((unsigned int)(v37 - 97) < 6) {
            LOBYTE(v37) = v37 - 32;
          }
          v22[1] = v37;
          v38 = (unsigned __int8)v22[2];
          if ((unsigned int)(v38 - 97) < 6) {
            LOBYTE(v38) = v38 - 32;
          }
          v22[2] = v38;
          v39 = (unsigned __int8)v22[3];
          if ((unsigned int)(v39 - 97) < 6) {
            LOBYTE(v39) = v39 - 32;
          }
          v22[3] = v39;
          v40 = (unsigned __int8)v22[4];
          if ((unsigned int)(v40 - 97) < 6) {
            LOBYTE(v40) = v40 - 32;
          }
          v22[4] = v40;
          v41 = (unsigned __int8)v22[5];
          if ((unsigned int)(v41 - 97) < 6) {
            LOBYTE(v41) = v41 - 32;
          }
          v22[5] = v41;
          v42 = (unsigned __int8)v22[6];
          if ((unsigned int)(v42 - 97) < 6) {
            LOBYTE(v42) = v42 - 32;
          }
          v22[6] = v42;
          v43 = (unsigned __int8)v22[7];
          if ((unsigned int)(v43 - 97) < 6) {
            LOBYTE(v43) = v43 - 32;
          }
          v22[7] = v43;
          v22 += 8;
        } while (v22 != (char*)v31);
      }
    }
  }
  v44 = *(_DWORD*)(v23 + 8) & 0xB0;
  if (v44 == 32) {
    v45 = (char*)v31;
    goto LABEL_62;
  }
  if (v44 != 16) {
  LABEL_61:
    v45 = &v50;
    goto LABEL_62;
  }
  if (v50 != 45 && v50 != 43) {
    if (v31 - (__int64)&v50 >= 2 && v50 == 48 && (v51 | 0x20) == 0x78) {
      v45 = v52;
      goto LABEL_62;
    }
    goto LABEL_61;
  }
  v45 = (char*)&v51;
LABEL_62:
  std___1_ios_base_getloc_plt_alt2((void*)&v47);
  SdkRoutine_87d0a0(&v50, v45, v32, v49, v54, &v48, &v47);
  std___1_locale_Destroy_locale_plt(&v47);
  return locale_812100_alt1(v25, v49, v54[0], v48, v23, v21);
}

__int64 std___1_num_put_do_put_804140(__int64 a1, __int64 a2, __int64 a3,
                                      unsigned int a4, unsigned __int64 a5)
{
  return SdkRoutine_804160(a1, a2, a3, a4, a5);
}

__int64 locale_80447c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9)
{
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 i;
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
  char* v40;
  __int64 v42;
  __int64 v43;
  _BYTE v44[180];
  char v45;
  unsigned __int8 v46;
  _BYTE v47[6];
  _QWORD v48[2];
  _QWORD v49[7];

  std___1_locale_Destroy_locale_plt(&a9);
  _Unwind_Resume_plt(a1);
  v48[0] = v9;
  v48[1] = v12;
  v49[6] = a1;
  v14 = *(_DWORD*)(v13 + 8);
  v16 = v15;
  v17 = &v45;
  v18 = v13;
  v20 = v19;
  v21 = v14 & 0x4A;
  if (v21 == 8) {
    v22 = 16;
  }
  else {
    v22 = 10;
  }
  if (v21 == 64) {
    v23 = 8;
  }
  else {
    v23 = v22;
  }
  if (v11 < 0) {
    if (v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v24 = -v11;
      v17 = (char*)&v46;
      v45 = 45;
    }
  }
  else {
    if ((v14 & 0x800) == 0 || v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v17 = (char*)&v46;
      v45 = 43;
    LABEL_15:
      v24 = v11;
    }
  }
  if (v11 != 0 && (v14 & 0x200) != 0) {
    if (v21 == 64) {
      *v17++ = 48;
    }
    else if (v21 == 8) {
      *v17 = 48;
      if ((v14 & 0x4000) != 0) {
        v25 = 88;
      }
      else {
        v25 = 120;
      }
      v17[1] = v25;
      v17 += 2;
    }
  }
  v26 = locale_830290_alt1(v17, v48, v24, v23);
  v27 = v26;
  if ((~v14 & 0x4008) == 0) {
    v28 = (unsigned __int64)&v17[-v26];
    if (v17 != (char*)v26) {
      for (i = ((_BYTE)v26 - (_BYTE)v17) & 7; i != 0; *v17++ = v30) {
        v30 = (unsigned __int8)*v17;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --i;
      }
      if (v28 <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v31 = (unsigned __int8)*v17;
          if ((unsigned int)(v31 - 97) < 6) {
            LOBYTE(v31) = v31 - 32;
          }
          *v17 = v31;
          v32 = (unsigned __int8)v17[1];
          if ((unsigned int)(v32 - 97) < 6) {
            LOBYTE(v32) = v32 - 32;
          }
          v17[1] = v32;
          v33 = (unsigned __int8)v17[2];
          if ((unsigned int)(v33 - 97) < 6) {
            LOBYTE(v33) = v33 - 32;
          }
          v17[2] = v33;
          v34 = (unsigned __int8)v17[3];
          if ((unsigned int)(v34 - 97) < 6) {
            LOBYTE(v34) = v34 - 32;
          }
          v17[3] = v34;
          v35 = (unsigned __int8)v17[4];
          if ((unsigned int)(v35 - 97) < 6) {
            LOBYTE(v35) = v35 - 32;
          }
          v17[4] = v35;
          v36 = (unsigned __int8)v17[5];
          if ((unsigned int)(v36 - 97) < 6) {
            LOBYTE(v36) = v36 - 32;
          }
          v17[5] = v36;
          v37 = (unsigned __int8)v17[6];
          if ((unsigned int)(v37 - 97) < 6) {
            LOBYTE(v37) = v37 - 32;
          }
          v17[6] = v37;
          v38 = (unsigned __int8)v17[7];
          if ((unsigned int)(v38 - 97) < 6) {
            LOBYTE(v38) = v38 - 32;
          }
          v17[7] = v38;
          v17 += 8;
        } while (v17 != (char*)v26);
      }
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (char*)v26;
    goto LABEL_60;
  }
  if (v39 != 16) {
  LABEL_59:
    v40 = &v45;
    goto LABEL_60;
  }
  if (v45 != 45 && v45 != 43) {
    if (v26 - (__int64)&v45 >= 2 && v45 == 48 && (v46 | 0x20) == 0x78) {
      v40 = v47;
      goto LABEL_60;
    }
    goto LABEL_59;
  }
  v40 = (char*)&v46;
LABEL_60:
  *(struct PseudoSret*)(&v42) = std___1_ios_base_getloc_plt_alt1(v18);
  SdkRoutine_87d0a0(&v45, v40, v27, v44, v49, &v43, &v42);
  std___1_locale_Destroy_locale_plt(&v42);
  return locale_812100_alt1(v20, v44, v49[0], v43, v18, v16);
}

__int64 std___1_num_put_do_put_804490(__int64 a1, __int64 a2, __int64 a3,
                                      unsigned int a4, unsigned __int64 a5)
{
  return SdkRoutine_8044a0(a1, a2, a3, a4, a5);
}

__int64 locale_8047bc(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9)
{
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  char v24;
  __int64 v25;
  __int64 v26;
  __int64 v28;
  char* v29;
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
  char* v40;
  __int64 v42;
  __int64 v43;
  _BYTE v44[180];
  char v45;
  unsigned __int8 v46;
  _BYTE v47[22];
  _QWORD v48[2];
  _QWORD v49[7];

  std___1_locale_Destroy_locale_plt(&a9);
  _Unwind_Resume_plt(a1);
  v48[0] = v9;
  v48[1] = v12;
  v49[6] = a1;
  v14 = *(_DWORD*)(v13 + 8);
  v16 = v15;
  v17 = &v45;
  v18 = v13;
  v20 = v19;
  v21 = v14 & 0x4A;
  if (v21 == 8) {
    v22 = 16;
  }
  else {
    v22 = 10;
  }
  if (v21 == 64) {
    v23 = 8;
  }
  else {
    v23 = v22;
  }
  if (v11 != 0 && (v14 & 0x200) != 0) {
    if (v21 == 64) {
      v17 = (char*)&v46;
      v45 = 48;
    }
    else if (v21 == 8) {
      v17 = v47;
      v45 = 48;
      if ((v14 & 0x4000) != 0) {
        v24 = 88;
      }
      else {
        v24 = 120;
      }
      v46 = v24;
    }
  }
  v25 = locale_830290_alt1(v17, v48, v11, v23);
  v26 = v25;
  if ((~v14 & 0x4008) == 0 && v17 != (char*)v25) {
    v28 = ((_BYTE)v25 - (_BYTE)v17) & 7;
    v29 = v17;
    if ((((_BYTE)v25 - (_BYTE)v17) & 7) != 0) {
      v29 = v17;
      do {
        v30 = (unsigned __int8)*v29;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --v28;
        *v29++ = v30;
      } while (v28 != 0);
    }
    if ((unsigned __int64)&v17[-v25] <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        v31 = (unsigned __int8)*v29;
        if ((unsigned int)(v31 - 97) < 6) {
          LOBYTE(v31) = v31 - 32;
        }
        *v29 = v31;
        v32 = (unsigned __int8)v29[1];
        if ((unsigned int)(v32 - 97) < 6) {
          LOBYTE(v32) = v32 - 32;
        }
        v29[1] = v32;
        v33 = (unsigned __int8)v29[2];
        if ((unsigned int)(v33 - 97) < 6) {
          LOBYTE(v33) = v33 - 32;
        }
        v29[2] = v33;
        v34 = (unsigned __int8)v29[3];
        if ((unsigned int)(v34 - 97) < 6) {
          LOBYTE(v34) = v34 - 32;
        }
        v29[3] = v34;
        v35 = (unsigned __int8)v29[4];
        if ((unsigned int)(v35 - 97) < 6) {
          LOBYTE(v35) = v35 - 32;
        }
        v29[4] = v35;
        v36 = (unsigned __int8)v29[5];
        if ((unsigned int)(v36 - 97) < 6) {
          LOBYTE(v36) = v36 - 32;
        }
        v29[5] = v36;
        v37 = (unsigned __int8)v29[6];
        if ((unsigned int)(v37 - 97) < 6) {
          LOBYTE(v37) = v37 - 32;
        }
        v29[6] = v37;
        v38 = (unsigned __int8)v29[7];
        if ((unsigned int)(v38 - 97) < 6) {
          LOBYTE(v38) = v38 - 32;
        }
        v29[7] = v38;
        v29 += 8;
      } while (v29 != (char*)v25);
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (char*)v25;
    goto LABEL_54;
  }
  if (v39 != 16) {
  LABEL_53:
    v40 = &v45;
    goto LABEL_54;
  }
  if (v45 != 45 && v45 != 43) {
    if (v25 - (__int64)&v45 >= 2 && v45 == 48 && (v46 | 0x20) == 0x78) {
      v40 = v47;
      goto LABEL_54;
    }
    goto LABEL_53;
  }
  v40 = (char*)&v46;
LABEL_54:
  *(struct PseudoSret*)(&v42) = std___1_ios_base_getloc_plt_alt1(v18);
  SdkRoutine_87d0a0(&v45, v40, v26, v44, v49, &v43, &v42);
  std___1_locale_Destroy_locale_plt(&v42);
  return locale_812100_alt1(v20, v44, v49[0], v43, v18, v16);
}

__int64 std___1_num_put_do_put_8047d0(__int64 a1, __int64 a2, __int64 a3,
                                      unsigned int a4, unsigned __int64 a5)
{
  return SdkRoutine_8047e0(a1, a2, a3, a4, a5);
}

void __attribute__((noreturn)) locale_804ab4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9)
{
  std___1_locale_Destroy_locale_plt(&a9);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_804db4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9)
{
  std___1_locale_Destroy_locale_plt(&a9);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_8051e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
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

  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt_alt1(a1);
  v5 = v4;
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt_alt1(v5);
  v7 = v6;
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt_alt1(v7);
  v9 = v8;
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt_alt1(v9);
  _Unwind_Resume_plt_alt1(v10);
  _Unwind_Resume_plt_alt1(v11);
  v13 = v12;
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt_alt1(v13);
      free_plt(v2);
    }
  }
  free_plt(v1);
  _Unwind_Resume_plt_alt1(v13);
  __udf(0);
}

void __attribute__((noreturn)) locale_8056bc(__int64 a1)
{
  __int64 v1;
  __int64 v2;
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

  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt_alt1(a1);
  v5 = v4;
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt_alt1(v5);
  v7 = v6;
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt_alt1(v7);
  v9 = v8;
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt_alt1(v9);
  _Unwind_Resume_plt_alt1(v10);
  _Unwind_Resume_plt_alt1(v11);
  v13 = v12;
  if (v1 == 0) {
    while (1) {
      _Unwind_Resume_plt_alt1(v13);
      free_plt(v2);
    }
  }
  free_plt(v1);
  _Unwind_Resume_plt_alt1(v13);
  __udf(0);
}

__int64 std___1_num_put_do_put_805780(__int64 a1, __int64 a2, __int64 a3,
                                      unsigned int a4, unsigned __int64 a5)
{
  int v5;
  __int64 result;

  v5 = *(_DWORD*)(a3 + 8);
  *(_DWORD*)(a3 + 8) = v5 & 0xFFFFBDB5 | 0x208;
  result = SdkRoutine_8047e0(a1, a2, a3, a4, a5);
  *(_DWORD*)(a3 + 8) = v5;
  return result;
}

void __attribute__((noreturn))

locale_805b9c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
              __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
              __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
              __int64 a16)
{
  if ((a14 & 1) != 0) {
    SdkRoutine_857220(a16, a14 & 0xFFFFFFFFFFFFFFFELL);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn))

locale_8061d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
              __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
              __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
              __int64 a16)
{
  __cxa_guard_abort_plt(&SdkData_1060b80);
  if ((a14 & 1) != 0) {
    SdkRoutine_857220(a16, a14 & 0xFFFFFFFFFFFFFFFELL);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn))

locale_806634(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
              __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
              __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
              __int64 a16)
{
  if ((a14 & 1) != 0) {
    SdkRoutine_857220(a16, a14 & 0xFFFFFFFFFFFFFFFELL);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_time_get_get_806c8c(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4, __int64 a5, __int64 a6,
                                    __int64 a7, __int64 a8, __int64 a9,
                                    __int64 a10, __int64 a11, __int64 a12,
                                    __int64 a13, __int64 a14, __int64 a15,
                                    __int64 a16)
{
  __int64 v17;

  __cxa_guard_abort_plt(&SdkData_1060b80);
  if ((a14 & 1) != 0) {
    SdkRoutine_857220(a16, a14 & 0xFFFFFFFFFFFFFFFELL);
  }
  v17 = _Unwind_Resume_plt(a1);
  return std___1_time_get_get_806ce0_alt1(v17);
}

_QWORD* std___1_time_get_get_806ce0(__int64 a1, _QWORD* a2, _QWORD* a3,
                                    __int64 a4, _DWORD* a5, __int64 a6,
                                    char* a7, unsigned __int8* a8)
{
  __int64 v16;
  void(__attribute__((noreturn)) * v17)();
  __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  _BOOL4 v21;
  int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int8* v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  int v35;
  __int64 v36;
  _BOOL4 v37;
  int v38;
  int v39;
  unsigned __int8* v40;
  __int64 v41;
  unsigned __int8 v42;
  __int64 v43;
  _BOOL4 v44;
  int v46;
  __int64 v47;
  void(__attribute__((noreturn)) * v48)();
  void(__attribute__((noreturn)) * **v49)();
  void(__attribute__((noreturn)) * *v50)();

  std___1_ios_base_getloc_plt((void*)(&v47), a4);
  v16 = v47;
  v17 = SdkData_e89440[0];
  v48 = SdkData_e89440[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89440[0],
                           memory_order_acquire) != -1) {
    v50 = &v48;
    v49 = &v50;
    std___1___call_once_plt(SdkData_e89440[0], &v49, SdkRoutine_82f0b0);
  }
  v18 = *(_QWORD*)(v16 + 16);
  v19 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v17 + 4) - 1LL;
  if (v19 >= (*(_QWORD*)(v16 + 24) - v18) >> 3 ||
      (v20 = *(_QWORD**)(v18 + 8 * v19)) == nullptr) {
    locale_7f6090();
  }
  std___1_locale_Destroy_locale_plt(&v47);
  *a5 = 0;
  if (a7 != (char*)a8) {
    do {
      if (a2 != nullptr) {
        if (a2[3] == a2[4]) {
          v22 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
          v21 = v22 == -1;
          if (v22 == -1) {
            a2 = nullptr;
          }
          if (a3 == nullptr) {
          LABEL_13:
            if (v21) {
              goto LABEL_77;
            }
            goto LABEL_22;
          }
        }
        else {
          v21 = false;
          if (a3 == nullptr) {
            goto LABEL_13;
          }
        }
      }
      else {
        v21 = true;
        if (a3 == nullptr) {
          goto LABEL_13;
        }
      }
      if (a3[3] == a3[4]) {
        v23 = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
        if (v23 == -1) {
          a3 = nullptr;
        }
        if (((v21 ^ (v23 == -1)) & 1) == 0) {
        LABEL_77:
          *a5 = 4;
          break;
        }
      }
      else if (!v21) {
        goto LABEL_77;
      }
    LABEL_22:
      if ((*(unsigned __int8 (**)(_QWORD*, _QWORD, _QWORD))(*v20 + 72LL))(
              v20, (unsigned __int8)*a7, 0) == 37) {
        if (a7 + 1 == (char*)a8) {
          goto LABEL_77;
        }
        v24 = (*(__int64 (**)(_QWORD*, _QWORD, _QWORD))(*v20 + 72LL))(
            v20, (unsigned __int8)a7[1], 0);
        v25 = v24;
        if ((unsigned __int8)v24 == 69 || (unsigned __int8)v24 == 48) {
          if (a7 + 2 == (char*)a8) {
            goto LABEL_77;
          }
          v26 = (*(__int64 (**)(_QWORD*, _QWORD, _QWORD))(*v20 + 72LL))(
              v20, (unsigned __int8)a7[2], 0);
          v27 = 2;
          v28 = v25;
          v25 = v26;
        }
        else {
          v28 = 0;
          v27 = 1;
        }
        a7 += v27;
        a2 = (_QWORD*)(*(__int64 (**)(__int64, _QWORD*, _QWORD*, __int64,
                                      _DWORD*, __int64, _QWORD, __int64))(
            *(_QWORD*)a1 + 72LL))(a1, a2, a3, a4, a5, a6, v25, v28);
        goto LABEL_34;
      }
      v29 = *a7;
      if ((v29 & 0x8000000000000000LL) == 0) {
        v30 = v20[2];
        if ((*(_WORD*)(v30 + 2 * v29) & 0x2000) != 0) {
          v33 = a7 + 1;
          while (1) {
            if (v33 == (char*)a8) {
              a7 = (char*)a8;
              if (a2 == nullptr) {
                goto LABEL_75;
              }
              goto LABEL_55;
            }
            v34 = *v33;
            if (v34 < 0) {
              break;
            }
            ++a7;
            ++v33;
            if ((*(_WORD*)(v30 + 2 * v34) & 0x2000) == 0) {
              goto LABEL_54;
            }
          }
          a7 = v33;
          if (a2 == nullptr) {
            goto LABEL_75;
          }
        LABEL_55:
          while (a2[3] == a2[4]) {
            v38 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
            v37 = v38 == -1;
            if (v38 == -1) {
              a2 = nullptr;
            }
            if (a3 == nullptr) {
              goto LABEL_57;
            }
            while (1) {
            LABEL_62:
              if (a3[3] == a3[4]) {
                v39 = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
                if (v39 == -1) {
                  a3 = nullptr;
                }
                if (v37 == (v39 == -1)) {
                  goto LABEL_45;
                }
              }
              else if (!v37) {
                goto LABEL_45;
              }
            LABEL_68:
              v40 = (unsigned __int8*)a2[3];
              if (v40 == (unsigned __int8*)a2[4]) {
                v42 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
                v41 = v42;
                if ((v42 & 0x80) != 0) {
                  goto LABEL_45;
                }
              }
              else {
                v41 = *v40;
                if ((v41 & 0x80) != 0) {
                  goto LABEL_45;
                }
              }
              if ((*(_WORD*)(v20[2] + 2 * v41) & 0x2000) == 0) {
                goto LABEL_45;
              }
              v43 = a2[3];
              if (v43 == a2[4]) {
                break;
              }
              a2[3] = v43 + 1;
            LABEL_54:
              if (a2 != nullptr) {
                goto LABEL_55;
              }
            LABEL_75:
              v37 = true;
              if (a3 == nullptr) {
                goto LABEL_57;
              }
            }
            (*(void (**)(_QWORD*))(*a2 + 80LL))(a2);
            if (a2 == nullptr) {
              goto LABEL_75;
            }
          }
          v37 = false;
          if (a3 != nullptr) {
            goto LABEL_62;
          }
        LABEL_57:
          if (v37) {
            continue;
          }
          goto LABEL_68;
        }
      }
      v31 = (unsigned __int8*)a2[3];
      if (v31 == (unsigned __int8*)a2[4]) {
        v32 = (*(unsigned int (**)(_QWORD*))(*a2 + 72LL))(a2);
      }
      else {
        v32 = *v31;
      }
      v35 = (*(unsigned __int8 (**)(_QWORD*, __int64))(*v20 + 24LL))(v20, v32);
      if (v35 == (*(unsigned __int8 (**)(_QWORD*, _QWORD))(*v20 + 24LL))(
                     v20, (unsigned __int8)*a7)) {
        v36 = a2[3];
        if (v36 == a2[4]) {
          (*(void (**)(_QWORD*))(*a2 + 80LL))(a2);
        LABEL_34:
          ++a7;
          continue;
        }
        ++a7;
        a2[3] = v36 + 1;
      }
      else {
        *a5 = 4;
      }
    LABEL_45:;
    } while (a7 != (char*)a8 && *a5 == 0);
  }
  if (a2 != nullptr) {
    if (a2[3] != a2[4]) {
      v44 = false;
      if (a3 != nullptr) {
        goto LABEL_81;
      }
    LABEL_86:
      if (!v44) {
        return a2;
      }
      goto LABEL_83;
    }
    v46 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
    v44 = v46 == -1;
    if (v46 == -1) {
      a2 = nullptr;
    }
    if (a3 == nullptr) {
      goto LABEL_86;
    }
  }
  else {
    v44 = true;
    if (a3 == nullptr) {
      goto LABEL_86;
    }
  }
LABEL_81:
  if (a3[3] == a3[4]) {
    if (((v44 ^ ((*(unsigned int (**)(_QWORD*))(*a3 + 72LL))(a3) == -1)) & 1) !=
        0) {
      return a2;
    }
    goto LABEL_83;
  }
  if (!v44) {
  LABEL_83:
    *a5 |= 2u;
  }
  return a2;
}

void __attribute__((noreturn)) locale_8071d0(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9)
{
  std___1_locale_Destroy_locale_plt(&a9);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

_QWORD* std___1_time_get_do_get_weekday_8072d0(__int64 a1, _QWORD* a2,
                                               _QWORD* a3, __int64 a4,
                                               _DWORD* a5, __int64 a6)
{
  __int64 v10;
  void(__attribute__((noreturn)) * v11)();
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  __int64 v18;
  _QWORD* v19;
  void(__attribute__((noreturn)) * v20)();
  void(__attribute__((noreturn)) * **v21)();
  void(__attribute__((noreturn)) * *v22)();

  v19 = a2;
  std___1_ios_base_getloc_plt((void*)(&v18), a4);
  v10 = v18;
  v11 = SdkData_e89440[0];
  v20 = SdkData_e89440[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89440[0],
                           memory_order_acquire) != -1) {
    v22 = &v20;
    v21 = &v22;
    std___1___call_once_plt(SdkData_e89440[0], &v21, SdkRoutine_82f0b0);
  }
  v12 = *(_QWORD*)(v10 + 16);
  v13 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v11 + 4) - 1LL;
  if (v13 >= (*(_QWORD*)(v10 + 24) - v12) >> 3 ||
      (v14 = *(_QWORD*)(v12 + 8 * v13)) == 0) {
    locale_7f6090();
  }
  std___1_locale_Destroy_locale_plt(&v18);
  v15 = (unsigned __int8*)(**(__int64 (***)(__int64))(a1 + 16))(a1 + 16);
  v16 = SdkRoutine_7f8a00(&v19, a3, v15, v15 + 336, v14, a5, 0);
  if (v16 - v15 <= 335) {
    *(_DWORD*)(a6 + 24) =
        (__int64)(0xAAAAAAAAAAAAAAABLL * ((v16 - v15) >> 3)) % 7;
  }
  return v19;
}

void __attribute__((noreturn)) locale_807414(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10)
{
  std___1_locale_Destroy_locale_plt(&a10);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

_QWORD* std___1_time_get_do_get_monthname_8074f0(__int64 a1, _QWORD* a2,
                                                 _QWORD* a3, __int64 a4,
                                                 _DWORD* a5, __int64 a6)
{
  __int64 v10;
  void(__attribute__((noreturn)) * v11)();
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  __int64 v18;
  _QWORD* v19;
  void(__attribute__((noreturn)) * v20)();
  void(__attribute__((noreturn)) * **v21)();
  void(__attribute__((noreturn)) * *v22)();

  v19 = a2;
  std___1_ios_base_getloc_plt((void*)(&v18), a4);
  v10 = v18;
  v11 = SdkData_e89440[0];
  v20 = SdkData_e89440[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89440[0],
                           memory_order_acquire) != -1) {
    v22 = &v20;
    v21 = &v22;
    std___1___call_once_plt(SdkData_e89440[0], &v21, SdkRoutine_82f0b0);
  }
  v12 = *(_QWORD*)(v10 + 16);
  v13 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v11 + 4) - 1LL;
  if (v13 >= (*(_QWORD*)(v10 + 24) - v12) >> 3 ||
      (v14 = *(_QWORD*)(v12 + 8 * v13)) == 0) {
    locale_7f6090();
  }
  std___1_locale_Destroy_locale_plt(&v18);
  v15 = (unsigned __int8*)(*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 16) + 8LL))(
      a1 + 16);
  v16 = SdkRoutine_7f8a00(&v19, a3, v15, v15 + 576, v14, a5, 0);
  if (v16 - v15 <= 575) {
    *(_DWORD*)(a6 + 16) =
        -1431655765 * ((v16 - v15) >> 3) -
        12 *
            (((unsigned __int64)((unsigned __int128)((__int64)(0xAAAAAAAAAAAAAAABLL *
                                                               ((v16 - v15) >>
                                                                3)) *
                                                     (__int128)0x2AAAAAAAAAAAAAABLL) >>
                                 64) >>
              63) +
             ((unsigned int)((unsigned __int128)((__int64)(0xAAAAAAAAAAAAAAABLL *
                                                           ((v16 - v15) >> 3)) *
                                                 (__int128)0x2AAAAAAAAAAAAAABLL) >>
                             64) >>
              1));
  }
  return v19;
}

void __attribute__((noreturn)) locale_807628(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10)
{
  std___1_locale_Destroy_locale_plt(&a10);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_time_get_do_get_year_8076f0(__int64 a1, __int64 a2, _QWORD* a3,
                                            __int64 a4, _DWORD* a5, __int64 a6)
{
  __int64 v9;
  void(__attribute__((noreturn)) * v10)();
  __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  int v14;
  int v15;
  int v16;
  __int64 v18;
  __int64 v19;
  void(__attribute__((noreturn)) * v20)();
  void(__attribute__((noreturn)) * **v21)();
  void(__attribute__((noreturn)) * *v22)();

  v19 = a2;
  std___1_ios_base_getloc_plt((void*)(&v18), a4);
  v9 = v18;
  v10 = SdkData_e89440[0];
  v20 = SdkData_e89440[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89440[0],
                           memory_order_acquire) != -1) {
    v22 = &v20;
    v21 = &v22;
    std___1___call_once_plt(SdkData_e89440[0], &v21, SdkRoutine_82f0b0);
  }
  v11 = *(_QWORD*)(v9 + 16);
  v12 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v10 + 4) - 1LL;
  if (v12 >= (*(_QWORD*)(v9 + 24) - v11) >> 3 ||
      (v13 = *(_QWORD**)(v11 + 8 * v12)) == nullptr) {
    locale_7f6090();
  }
  std___1_locale_Destroy_locale_plt(&v18);
  v14 = locale_8087a0(&v19, a3, a5, v13, 4);
  if ((*(_BYTE*)a5 & 4) == 0) {
    v15 = v14 + 1900;
    v16 = v14 + 2000;
    if ((unsigned int)v14 >= 0x64) {
      v15 = v14;
    }
    if (v14 >= 69) {
      v16 = v15;
    }
    *(_DWORD*)(a6 + 20) = v16 - 1900;
  }
  return v19;
}

void __attribute__((noreturn)) locale_8077f4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9)
{
  std___1_locale_Destroy_locale_plt(&a9);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_time_get___get_day(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5, __int64 a6,
                                   __int64 a7, __int64 a8, __int64 a9,
                                   __int64 a10, char a11)
{
  _DWORD* v12;
  _DWORD* v13;
  _DWORD* v14;
  _DWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;

  std___1_locale_Destroy_locale_plt(&a11);
  _Unwind_Resume_plt(a1);
  v13 = v12;
  v15 = v14;
  result = locale_8087a0_alt1(v16, v17, v12, v18, 2);
  if ((unsigned int)(result - 1) <= 0x1E && (*v13 & 4) == 0) {
    *v15 = result;
  }
  else {
    *v13 |= 4u;
  }
  return result;
}

_QWORD* std___1_time_get___get_white_space(__int64 a1, _QWORD** a2, _QWORD* a3,
                                           _DWORD* a4, __int64 a5)
{
  _QWORD* result;
  int v10;
  int v11;
  bool v12;
  int v13;
  unsigned __int8* v14;
  __int64 v15;
  unsigned __int8 v16;
  __int64 v17;
  _BOOL4 v18;

  result = *a2;
  if (*a2 == nullptr) {
    goto LABEL_12;
  }
LABEL_4:
  if (result[3] == result[4]) {
    if ((*(unsigned int (**)(_QWORD*))(*result + 72LL))(result) == -1) {
      result = nullptr;
      *a2 = nullptr;
    LABEL_12:
      while (1) {
        v10 = 1;
        if (a3 == nullptr) {
          break;
        }
      LABEL_13:
        if (a3[3] == a3[4]) {
          v11 = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
          if (v11 == -1) {
            a3 = nullptr;
          }
          v12 = v11 == -1;
          result = *a2;
          v13 = v12;
          if (v10 == v13) {
            goto LABEL_31;
          }
        }
        else if ((v10 & 1) == 0) {
          goto LABEL_31;
        }
      LABEL_22:
        v14 = (unsigned __int8*)result[3];
        if (v14 == (unsigned __int8*)result[4]) {
          v16 = (*(__int64 (**)(_QWORD*))(*result + 72LL))(result);
          v15 = v16;
          if ((v16 & 0x80) != 0) {
          LABEL_30:
            result = *a2;
            goto LABEL_31;
          }
        }
        else {
          v15 = *v14;
          if ((v15 & 0x80) != 0) {
            goto LABEL_30;
          }
        }
        result = *a2;
        if ((*(_WORD*)(*(_QWORD*)(a5 + 16) + 2 * v15) & 0x2000) == 0) {
          goto LABEL_31;
        }
        v17 = result[3];
        if (v17 == result[4]) {
          (*(void (**)(_QWORD*))(*result + 80LL))(result);
          result = *a2;
          if (*a2 != nullptr) {
            goto LABEL_4;
          }
        }
        else {
          result[3] = v17 + 1;
          result = *a2;
          if (*a2 != nullptr) {
            goto LABEL_4;
          }
        }
      }
    }
    else {
      result = *a2;
      v10 = *a2 == nullptr;
      if (a3 != nullptr) {
        goto LABEL_13;
      }
    }
  }
  else {
    v10 = 0;
    if (a3 != nullptr) {
      goto LABEL_13;
    }
  }
  if ((v10 & 1) == 0) {
    goto LABEL_22;
  }
LABEL_31:
  if (result == nullptr) {
  LABEL_40:
    v18 = true;
    if (a3 == nullptr) {
      goto LABEL_37;
    }
    goto LABEL_41;
  }
  if (result[3] == result[4]) {
    result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 72LL))(result);
    if ((_DWORD)result != -1) {
      v18 = *a2 == nullptr;
      if (a3 == nullptr) {
        goto LABEL_37;
      }
      goto LABEL_41;
    }
    *a2 = nullptr;
    goto LABEL_40;
  }
  v18 = false;
  if (a3 == nullptr) {
  LABEL_37:
    if (!v18) {
      return result;
    }
    goto LABEL_43;
  }
LABEL_41:
  if (a3[3] == a3[4]) {
    result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
    if (((v18 ^ ((_DWORD)result == -1)) & 1) != 0) {
      return result;
    }
  }
  else if (v18) {
    return result;
  }
LABEL_43:
  *a4 |= 2u;
  return result;
}

__int64 locale_8087a0(_QWORD* a1, _QWORD* a2, _DWORD* a3, _QWORD* a4, int a5)
{
  _QWORD* v6;
  _QWORD* v10;
  _BOOL4 v11;
  unsigned __int8* v12;
  unsigned __int8 v13;
  int v14;
  unsigned int v15;
  int v16;
  int v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  int v22;
  _QWORD* v23;
  int v24;
  int v25;
  unsigned __int8* v26;
  unsigned __int8 v27;
  unsigned __int8 v28;
  _QWORD* v29;
  __int64 v30;
  _BOOL4 v31;

  v6 = (_QWORD*)*a1;
  v10 = a2;
  if (v6 == nullptr) {
    goto LABEL_10;
  }
  if (v6[3] == v6[4]) {
    if ((*(unsigned int (**)(_QWORD*))(*v6 + 72LL))(v6) != -1) {
      v11 = *a1 == 0;
      if (v10 == nullptr) {
        goto LABEL_7;
      }
      goto LABEL_11;
    }
    *a1 = 0;
  LABEL_10:
    v11 = true;
    if (v10 == nullptr) {
      goto LABEL_7;
    }
  LABEL_11:
    if (v10[3] == v10[4]) {
      v14 = (*(__int64 (**)(_QWORD*))(*v10 + 72LL))(v10);
      if (v14 == -1) {
        v10 = nullptr;
      }
      if (v11 != (v14 == -1)) {
        goto LABEL_13;
      }
    }
    else if (v11) {
      goto LABEL_13;
    }
  LABEL_19:
    v15 = 0;
    v16 = 6;
  LABEL_23:
    *a3 |= v16;
    return v15;
  }
  v11 = false;
  if (a2 != nullptr) {
    goto LABEL_11;
  }
LABEL_7:
  if (v11) {
    goto LABEL_19;
  }
  v10 = nullptr;
LABEL_13:
  v12 = *(unsigned __int8**)(*a1 + 24LL);
  if (v12 == *(unsigned __int8**)(*a1 + 32LL)) {
    v13 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
    if ((v13 & 0x80) != 0) {
    LABEL_22:
      v15 = 0;
      v16 = 4;
      goto LABEL_23;
    }
  }
  else {
    v13 = *v12;
    if ((*v12 & 0x80) != 0) {
      goto LABEL_22;
    }
  }
  if ((*(_WORD*)(a4[2] + 2LL * v13) & 0x800) == 0) {
    goto LABEL_22;
  }
  v18 = (*(unsigned __int8 (**)(_QWORD*))(*a4 + 72LL))(a4);
  v19 = (_QWORD*)*a1;
  v20 = *(_QWORD*)(*a1 + 24LL);
  if (v20 == *(_QWORD*)(*a1 + 32LL)) {
    (*(void (**)(_QWORD*))(*v19 + 80LL))(v19);
  }
  else {
    v19[3] = v20 + 1;
  }
  while (1) {
    v21 = (_QWORD*)*a1;
    if (*a1 != 0) {
      if (v21[3] != v21[4]) {
        v22 = 0;
        if (v10 == nullptr) {
          goto LABEL_36;
        }
        goto LABEL_40;
      }
      if ((*(unsigned int (**)(_QWORD*))(*v21 + 72LL))(v21) != -1) {
        v22 = *a1 == 0;
        if (v10 == nullptr) {
          goto LABEL_36;
        }
        goto LABEL_40;
      }
      *a1 = 0;
    }
    v22 = 1;
    if (v10 == nullptr) {
    LABEL_36:
      v23 = (_QWORD*)*a1;
      v15 = v18 - 48;
      if (v22 == 1) {
        goto LABEL_54;
      }
      goto LABEL_46;
    }
  LABEL_40:
    if (v10[3] == v10[4]) {
      break;
    }
    v23 = (_QWORD*)*a1;
    v15 = v18 - 48;
    if (v22 == 0) {
      goto LABEL_54;
    }
  LABEL_46:
    if (a5 < 2) {
      goto LABEL_54;
    }
    v26 = (unsigned __int8*)v23[3];
    if (v26 == (unsigned __int8*)v23[4]) {
      v27 = (*(__int64 (**)(_QWORD*))(*v23 + 72LL))(v23);
      if ((v27 & 0x80) != 0) {
        return v15;
      }
    }
    else {
      v27 = *v26;
      if ((*v26 & 0x80) != 0) {
        return v15;
      }
    }
    if ((*(_WORD*)(a4[2] + 2LL * v27) & 0x800) == 0) {
      return v15;
    }
    v28 = (*(__int64 (**)(_QWORD*))(*a4 + 72LL))(a4);
    v29 = (_QWORD*)*a1;
    v30 = *(_QWORD*)(*a1 + 24LL);
    if (v30 == *(_QWORD*)(*a1 + 32LL)) {
      (*(void (**)(_QWORD*))(*v29 + 80LL))(v29);
    }
    else {
      v29[3] = v30 + 1;
    }
    --a5;
    v18 = 10 * v15 + v28;
  }
  v24 = (*(__int64 (**)(_QWORD*))(*v10 + 72LL))(v10);
  v25 = v24 == -1;
  if (v24 == -1) {
    v10 = nullptr;
  }
  v23 = (_QWORD*)*a1;
  v15 = v18 - 48;
  if (v22 != v25) {
    goto LABEL_46;
  }
LABEL_54:
  if (v23 != nullptr) {
    if (v23[3] != v23[4]) {
      v31 = false;
      goto LABEL_61;
    }
    if ((*(unsigned int (**)(_QWORD*))(*v23 + 72LL))(v23) != -1) {
      v31 = *a1 == 0;
      goto LABEL_61;
    }
    *a1 = 0;
  }
  v31 = true;
LABEL_61:
  if (v10 == nullptr) {
    if (!v31) {
      return v15;
    }
  LABEL_68:
    v16 = 2;
    goto LABEL_23;
  }
  if (v10[3] == v10[4]) {
    if (((v31 ^ ((*(unsigned int (**)(_QWORD*))(*v10 + 72LL))(v10) == -1)) &
         1) == 0) {
      goto LABEL_68;
    }
  }
  else if (!v31) {
    goto LABEL_68;
  }
  return v15;
}

_QWORD* std___1_time_get_get_808b20(__int64 a1, _QWORD* a2, _QWORD* a3,
                                    __int64 a4, _DWORD* a5, __int64 a6,
                                    unsigned int* a7, unsigned int* a8)
{
  __int64 v16;
  void(__attribute__((noreturn)) * v17)();
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  int* v21;
  int v22;
  _BOOL4 v23;
  int* v24;
  int v25;
  _BOOL4 v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  unsigned int* v33;
  _DWORD* v34;
  _BOOL4 v35;
  int v36;
  int* v37;
  int v38;
  unsigned int* v39;
  unsigned int v40;
  __int64 v41;
  unsigned int* v42;
  __int64 v43;
  unsigned int* v44;
  int v45;
  __int64 v46;
  int* v47;
  int v48;
  _QWORD* result;
  _BOOL4 v50;
  _DWORD* v51;
  _QWORD* v52;
  int v53;
  __int64 v54;
  void(__attribute__((noreturn)) * v55)();
  void(__attribute__((noreturn)) * **v56)();
  void(__attribute__((noreturn)) * *v57)();

  std___1_ios_base_getloc_plt((void*)(&v54), a4);
  v16 = v54;
  v17 = SdkData_e89480[0];
  v55 = SdkData_e89480[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89480[0],
                           memory_order_acquire) != -1) {
    v57 = &v55;
    v56 = &v57;
    std___1___call_once_plt(SdkData_e89480[0], &v56, SdkRoutine_82f0b0);
  }
  v18 = *(_QWORD*)(v16 + 16);
  v19 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v17 + 4) - 1LL;
  if (v19 >= (*(_QWORD*)(v16 + 24) - v18) >> 3 ||
      (v20 = *(_QWORD*)(v18 + 8 * v19)) == 0) {
    locale_7f6090();
  }
  std___1_locale_Destroy_locale_plt(&v54);
  *a5 = 0;
  if (a7 != a8) {
    do {
      if (a2 != nullptr) {
        v21 = (int*)a2[3];
        if (v21 == (int*)a2[4]) {
          v22 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
        }
        else {
          v22 = *v21;
        }
        v23 = v22 == -1;
        if (v22 == -1) {
          a2 = nullptr;
        }
        if (a3 == nullptr) {
        LABEL_10:
          if (v23) {
            goto LABEL_75;
          }
          goto LABEL_24;
        }
      }
      else {
        v23 = true;
        if (a3 == nullptr) {
          goto LABEL_10;
        }
      }
      v24 = (int*)a3[3];
      if (v24 == (int*)a3[4]) {
        v27 = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
        if (v27 == -1) {
          a3 = nullptr;
        }
        if (((v23 ^ (v27 == -1)) & 1) == 0) {
        LABEL_75:
          *a5 = 4;
          break;
        }
      }
      else {
        v25 = *v24;
        v26 = *v24 == -1;
        if (v25 == -1) {
          a3 = nullptr;
        }
        if (((v23 ^ v26) & 1) == 0) {
          goto LABEL_75;
        }
      }
    LABEL_24:
      if ((*(unsigned __int8 (**)(__int64, _QWORD, _QWORD))(
              *(_QWORD*)v20 + 104LL))(v20, *a7, 0) == 37) {
        if (a7 + 1 == a8) {
          goto LABEL_75;
        }
        v28 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v20 + 104LL))(
            v20, a7[1], 0);
        v29 = v28;
        if ((unsigned __int8)v28 == 69 || (unsigned __int8)v28 == 48) {
          if (a7 + 2 == a8) {
            goto LABEL_75;
          }
          v30 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(
              *(_QWORD*)v20 + 104LL))(v20, a7[2], 0);
          v31 = 2;
          v32 = v29;
          v29 = v30;
        }
        else {
          v32 = 0;
          v31 = 1;
        }
        v44 = &a7[v31];
        a2 = (_QWORD*)(*(__int64 (**)(__int64, _QWORD*, _QWORD*, __int64,
                                      _DWORD*, __int64, _QWORD, __int64))(
            *(_QWORD*)a1 + 72LL))(a1, a2, a3, a4, a5, a6, v29, v32);
        a7 = v44 + 1;
        if (a7 == a8) {
          break;
        }
      }
      else {
        if (((*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)v20 + 24LL))(
                 v20, 0x2000, *a7) &
             1) != 0) {
          v33 = a7 + 1;
          do {
            a7 = v33;
            if (v33 == a8) {
              break;
            }
            ++v33;
          } while (((*(__int64 (**)(__int64, __int64, _QWORD))(
                        *(_QWORD*)v20 + 24LL))(v20, 0x2000, *a7) &
                    1) != 0);
          while (a2 == nullptr) {
            while (1) {
              v35 = true;
              if (a3 != nullptr) {
                goto LABEL_43;
              }
            LABEL_51:
              if (v35) {
                goto LABEL_70;
              }
            LABEL_52:
              v39 = (unsigned int*)a2[3];
              if (v39 == (unsigned int*)a2[4]) {
                v40 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
                if (((*(__int64 (**)(__int64, __int64, _QWORD))(
                         *(_QWORD*)v20 + 24LL))(v20, 0x2000, v40) &
                     1) == 0) {
                  goto LABEL_70;
                }
              }
              else if (((*(__int64 (**)(__int64, __int64, _QWORD))(
                            *(_QWORD*)v20 + 24LL))(v20, 0x2000, *v39) &
                        1) == 0) {
                goto LABEL_70;
              }
              v41 = a2[3];
              if (v41 == a2[4]) {
                break;
              }
              a2[3] = v41 + 4;
              if (a2 != nullptr) {
                goto LABEL_37;
              }
            }
            (*(void (**)(_QWORD*))(*a2 + 80LL))(a2);
          }
        LABEL_37:
          v34 = (_DWORD*)a2[3];
          if (v34 == (_DWORD*)a2[4]) {
            v36 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
            v35 = v36 == -1;
            if (v36 != -1) {
              goto LABEL_42;
            }
          }
          else {
            v35 = *v34 == -1;
            if (*v34 != -1) {
            LABEL_42:
              if (a3 == nullptr) {
                goto LABEL_51;
              }
            LABEL_43:
              v37 = (int*)a3[3];
              if (v37 == (int*)a3[4]) {
                v38 = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
                if (v38 == -1) {
                LABEL_45:
                  a3 = nullptr;
                }
              }
              else {
                v38 = *v37;
                if (*v37 == -1) {
                  goto LABEL_45;
                }
              }
              if (v35 == (v38 == -1)) {
                goto LABEL_70;
              }
              goto LABEL_52;
            }
          }
          a2 = nullptr;
          goto LABEL_42;
        }
        v42 = (unsigned int*)a2[3];
        if (v42 == (unsigned int*)a2[4]) {
          v43 = (*(unsigned int (**)(_QWORD*))(*a2 + 72LL))(a2);
        }
        else {
          v43 = *v42;
        }
        v45 =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v20 + 56LL))(v20, v43);
        if (v45 == (*(unsigned int (**)(__int64, _QWORD))(*(_QWORD*)v20 +
                                                          56LL))(v20, *a7)) {
          v46 = a2[3];
          if (v46 == a2[4]) {
            (*(void (**)(_QWORD*))(*a2 + 80LL))(a2);
            if (++a7 == a8) {
              break;
            }
          }
          else {
            ++a7;
            a2[3] = v46 + 4;
            if (a7 == a8) {
              break;
            }
          }
        }
        else {
          *a5 = 4;
        LABEL_70:
          if (a7 == a8) {
            break;
          }
        }
      }
    } while (*a5 == 0);
  }
  if (a2 == nullptr) {
    result = nullptr;
    v50 = true;
    if (a3 != nullptr) {
      goto LABEL_87;
    }
  LABEL_80:
    if (!v50) {
      return result;
    }
    goto LABEL_89;
  }
  v47 = (int*)a2[3];
  if (v47 == (int*)a2[4]) {
    v48 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
  }
  else {
    v48 = *v47;
  }
  v50 = v48 == -1;
  if (v48 == -1) {
    result = nullptr;
  }
  else {
    result = a2;
  }
  if (a3 == nullptr) {
    goto LABEL_80;
  }
LABEL_87:
  v51 = (_DWORD*)a3[3];
  if (v51 != (_DWORD*)a3[4]) {
    if (((v50 ^ (*v51 == -1)) & 1) != 0) {
      return result;
    }
    goto LABEL_89;
  }
  v52 = result;
  v53 = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
  result = v52;
  if (((v50 ^ (v53 == -1)) & 1) == 0) {
  LABEL_89:
    *a5 |= 2u;
  }
  return result;
}

void __attribute__((noreturn)) locale_8090a8(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9)
{
  std___1_locale_Destroy_locale_plt(&a9);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

_QWORD* std___1_time_get_do_get_weekday_8091c0(__int64 a1, _QWORD* a2,
                                               _QWORD* a3, __int64 a4,
                                               _DWORD* a5, __int64 a6)
{
  __int64 v10;
  void(__attribute__((noreturn)) * v11)();
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  __int64 v18;
  _QWORD* v19;
  void(__attribute__((noreturn)) * v20)();
  void(__attribute__((noreturn)) * **v21)();
  void(__attribute__((noreturn)) * *v22)();

  v19 = a2;
  std___1_ios_base_getloc_plt((void*)(&v18), a4);
  v10 = v18;
  v11 = SdkData_e89480[0];
  v20 = SdkData_e89480[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89480[0],
                           memory_order_acquire) != -1) {
    v22 = &v20;
    v21 = &v22;
    std___1___call_once_plt(SdkData_e89480[0], &v21, SdkRoutine_82f0b0);
  }
  v12 = *(_QWORD*)(v10 + 16);
  v13 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v11 + 4) - 1LL;
  if (v13 >= (*(_QWORD*)(v10 + 24) - v12) >> 3 ||
      (v14 = *(_QWORD*)(v12 + 8 * v13)) == 0) {
    locale_7f6090();
  }
  std___1_locale_Destroy_locale_plt(&v18);
  v15 = (unsigned __int8*)(**(__int64 (***)(__int64))(a1 + 16))(a1 + 16);
  v16 = SdkRoutine_7fd440(&v19, a3, v15, v15 + 336, v14, a5, 0);
  if (v16 - v15 <= 335) {
    *(_DWORD*)(a6 + 24) =
        (__int64)(0xAAAAAAAAAAAAAAABLL * ((v16 - v15) >> 3)) % 7;
  }
  return v19;
}

void __attribute__((noreturn)) locale_809304(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10)
{
  std___1_locale_Destroy_locale_plt(&a10);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

_QWORD* std___1_time_get_do_get_monthname_8093e0(__int64 a1, _QWORD* a2,
                                                 _QWORD* a3, __int64 a4,
                                                 _DWORD* a5, __int64 a6)
{
  __int64 v10;
  void(__attribute__((noreturn)) * v11)();
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  __int64 v18;
  _QWORD* v19;
  void(__attribute__((noreturn)) * v20)();
  void(__attribute__((noreturn)) * **v21)();
  void(__attribute__((noreturn)) * *v22)();

  v19 = a2;
  std___1_ios_base_getloc_plt((void*)(&v18), a4);
  v10 = v18;
  v11 = SdkData_e89480[0];
  v20 = SdkData_e89480[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89480[0],
                           memory_order_acquire) != -1) {
    v22 = &v20;
    v21 = &v22;
    std___1___call_once_plt(SdkData_e89480[0], &v21, SdkRoutine_82f0b0);
  }
  v12 = *(_QWORD*)(v10 + 16);
  v13 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v11 + 4) - 1LL;
  if (v13 >= (*(_QWORD*)(v10 + 24) - v12) >> 3 ||
      (v14 = *(_QWORD*)(v12 + 8 * v13)) == 0) {
    locale_7f6090();
  }
  std___1_locale_Destroy_locale_plt(&v18);
  v15 = (unsigned __int8*)(*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 16) + 8LL))(
      a1 + 16);
  v16 = SdkRoutine_7fd440(&v19, a3, v15, v15 + 576, v14, a5, 0);
  if (v16 - v15 <= 575) {
    *(_DWORD*)(a6 + 16) =
        -1431655765 * ((v16 - v15) >> 3) -
        12 *
            (((unsigned __int64)((unsigned __int128)((__int64)(0xAAAAAAAAAAAAAAABLL *
                                                               ((v16 - v15) >>
                                                                3)) *
                                                     (__int128)0x2AAAAAAAAAAAAAABLL) >>
                                 64) >>
              63) +
             ((unsigned int)((unsigned __int128)((__int64)(0xAAAAAAAAAAAAAAABLL *
                                                           ((v16 - v15) >> 3)) *
                                                 (__int128)0x2AAAAAAAAAAAAAABLL) >>
                             64) >>
              1));
  }
  return v19;
}

void __attribute__((noreturn)) locale_809518(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10)
{
  std___1_locale_Destroy_locale_plt(&a10);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_time_get_do_get_year_8095e0(__int64 a1, __int64 a2, _QWORD* a3,
                                            __int64 a4, _DWORD* a5, __int64 a6)
{
  __int64 v9;
  void(__attribute__((noreturn)) * v10)();
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  __int64 v18;
  __int64 v19;
  void(__attribute__((noreturn)) * v20)();
  void(__attribute__((noreturn)) * **v21)();
  void(__attribute__((noreturn)) * *v22)();

  v19 = a2;
  std___1_ios_base_getloc_plt((void*)(&v18), a4);
  v9 = v18;
  v10 = SdkData_e89480[0];
  v20 = SdkData_e89480[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89480[0],
                           memory_order_acquire) != -1) {
    v22 = &v20;
    v21 = &v22;
    std___1___call_once_plt(SdkData_e89480[0], &v21, SdkRoutine_82f0b0);
  }
  v11 = *(_QWORD*)(v9 + 16);
  v12 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v10 + 4) - 1LL;
  if (v12 >= (*(_QWORD*)(v9 + 24) - v11) >> 3 ||
      (v13 = *(_QWORD*)(v11 + 8 * v12)) == 0) {
    locale_7f6090();
  }
  std___1_locale_Destroy_locale_plt(&v18);
  v14 = SdkRoutine_80a740(&v19, a3, a5, v13, 4);
  if ((*(_BYTE*)a5 & 4) == 0) {
    v15 = v14 + 1900;
    v16 = v14 + 2000;
    if ((unsigned int)v14 >= 0x64) {
      v15 = v14;
    }
    if (v14 >= 69) {
      v16 = v15;
    }
    *(_DWORD*)(a6 + 20) = v16 - 1900;
  }
  return v19;
}

void __attribute__((noreturn)) locale_8096e4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9)
{
  std___1_locale_Destroy_locale_plt(&a9);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_809df4(__int64 a1)
{
  __int64 v1;

  std___1_locale_Destroy_locale_plt(v1 - 32);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

_QWORD* std___1_time_put_put_80aae0(__int64 a1, _QWORD* a2, __int64 a3,
                                    unsigned int a4, __int64 a5,
                                    unsigned __int8* a6, unsigned __int8* a7)
{
  __int64 v13;
  void(__attribute__((noreturn)) * v14)();
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int8* v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  _BYTE* v23;
  __int64 v24;
  _BYTE* v25;
  __int64 v26;
  _BYTE* v27;
  _BYTE* v28;
  __int64 v31;
  void(__attribute__((noreturn)) * v32)();
  void(__attribute__((noreturn)) * **v33)();
  void(__attribute__((noreturn)) * *v34)();

  std___1_ios_base_getloc_plt((void*)(&v31), a3);
  v13 = v31;
  v14 = SdkData_e89440[0];
  v32 = SdkData_e89440[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89440[0],
                           memory_order_acquire) != -1) {
    v34 = &v32;
    v33 = &v34;
    std___1___call_once_plt(SdkData_e89440[0], &v33, SdkRoutine_82f0b0);
  }
  v15 = *(_QWORD*)(v13 + 16);
  v16 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v14 + 4) - 1LL;
  if (v16 >= (*(_QWORD*)(v13 + 24) - v15) >> 3 ||
      (v17 = *(_QWORD*)(v15 + 8 * v16)) == 0) {
    locale_7f6090();
  }
  std___1_locale_Destroy_locale_plt(&v31);
  while (1) {
    while (1) {
      if (a6 == a7) {
        return a2;
      }
      if ((*(unsigned __int8 (**)(__int64, _QWORD, _QWORD))(
              *(_QWORD*)v17 + 72LL))(v17, *a6, 0) == 37) {
        break;
      }
      if (a2 == nullptr) {
        goto LABEL_8;
      }
      v22 = *a6;
      v23 = (_BYTE*)a2[6];
      if (v23 == (_BYTE*)a2[7]) {
        if ((*(unsigned int (**)(_QWORD*, __int64))(*a2 + 104LL))(a2, v22) ==
            -1) {
          a2 = nullptr;
        }
      LABEL_8:
        ++a6;
      }
      else {
        *v23 = v22;
        ++a6;
        ++a2[6];
      }
    }
    v18 = a6 + 1;
    if (a6 + 1 == a7) {
      if (a2 == nullptr) {
        return a2;
      }
      v24 = *a6;
      v25 = (_BYTE*)a2[6];
      if (v25 != (_BYTE*)a2[7]) {
        goto LABEL_27;
      }
      goto LABEL_30;
    }
    v19 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v17 + 72LL))(
        v17, *v18, 0);
    v20 = v19;
    if ((unsigned __int8)v19 == 79 || (unsigned __int8)v19 == 69) {
      break;
    }
    v21 = v19;
    v20 = 0;
  LABEL_20:
    a2 = (_QWORD*)(*(__int64 (**)(__int64, _QWORD*, __int64, _QWORD, __int64,
                                  __int64, _QWORD))(*(_QWORD*)a1 + 24LL))(
        a1, a2, a3, a4, a5, v21, v20);
    a6 = v18 + 1;
  }
  if (a6 + 2 != a7) {
    v21 = (*(unsigned int (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v17 + 72LL))(
        v17, a6[2], 0);
    v18 = a6 + 2;
    goto LABEL_20;
  }
  if (a2 == nullptr) {
    return a2;
  }
  v26 = *a6;
  v27 = (_BYTE*)a2[6];
  if (v27 == (_BYTE*)a2[7]) {
    if ((*(unsigned int (**)(_QWORD*, __int64))(*a2 + 104LL))(a2, v26) == -1) {
      return nullptr;
    }
    v25 = (_BYTE*)a2[6];
    v24 = *v18;
    if (v25 != (_BYTE*)a2[7]) {
      goto LABEL_27;
    }
  }
  else {
    *v27 = v26;
    v28 = (_BYTE*)a2[7];
    v25 = (_BYTE*)(a2[6] + 1LL);
    a2[6] = v25;
    v24 = *v18;
    if (v25 != v28) {
    LABEL_27:
      *v25 = v24;
      ++a2[6];
      return a2;
    }
  }
LABEL_30:
  if ((*(unsigned int (**)(_QWORD*, __int64))(*a2 + 104LL))(a2, v24) == -1) {
    return nullptr;
  }
  return a2;
}

void __attribute__((noreturn)) locale_80ad90(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, char a11)
{
  std___1_locale_Destroy_locale_plt(&a11);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

_QWORD* std___1_time_put_put_80af00(__int64 a1, _QWORD* a2, __int64 a3,
                                    unsigned int a4, __int64 a5,
                                    unsigned int* a6, unsigned int* a7)
{
  __int64 v13;
  void(__attribute__((noreturn)) * v14)();
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned int* v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  _DWORD* v23;
  __int64 v24;
  _DWORD* v25;
  __int64 v26;
  _DWORD* v27;
  __int64 v30;
  void(__attribute__((noreturn)) * v31)();
  void(__attribute__((noreturn)) * **v32)();
  void(__attribute__((noreturn)) * *v33)();

  std___1_ios_base_getloc_plt((void*)(&v30), a3);
  v13 = v30;
  v14 = SdkData_e89480[0];
  v31 = SdkData_e89480[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89480[0],
                           memory_order_acquire) != -1) {
    v33 = &v31;
    v32 = &v33;
    std___1___call_once_plt(SdkData_e89480[0], &v32, SdkRoutine_82f0b0);
  }
  v15 = *(_QWORD*)(v13 + 16);
  v16 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v14 + 4) - 1LL;
  if (v16 >= (*(_QWORD*)(v13 + 24) - v15) >> 3 ||
      (v17 = *(_QWORD*)(v15 + 8 * v16)) == 0) {
    locale_7f6090();
  }
  std___1_locale_Destroy_locale_plt(&v30);
  if (a6 != a7) {
    while (1) {
      while ((*(unsigned __int8 (**)(__int64, _QWORD, _QWORD))(
                 *(_QWORD*)v17 + 104LL))(v17, *a6, 0) != 37) {
        if (a2 != nullptr) {
          v22 = *a6;
          v23 = (_DWORD*)a2[6];
          if (v23 == (_DWORD*)a2[7]) {
            LODWORD(v22) =
                (*(__int64 (**)(_QWORD*, __int64))(*a2 + 104LL))(a2, v22);
          }
          else {
            *v23 = v22;
            a2[6] = v23 + 1;
          }
          if ((_DWORD)v22 == -1) {
            a2 = nullptr;
          }
        }
        if (++a6 == a7) {
          return a2;
        }
      }
      v18 = a6 + 1;
      if (a6 + 1 == a7) {
        break;
      }
      v19 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v17 + 104LL))(
          v17, *v18, 0);
      v20 = v19;
      if ((unsigned __int8)v19 == 79 || (unsigned __int8)v19 == 69) {
        if (a6 + 2 == a7) {
          if (a2 == nullptr) {
            return a2;
          }
          v26 = *a6;
          v27 = (_DWORD*)a2[6];
          if (v27 != (_DWORD*)a2[7]) {
            *v27 = v26;
            a2[6] = v27 + 1;
            if ((_DWORD)v26 != -1) {
              goto LABEL_29;
            }
            return nullptr;
          }
          if ((*(unsigned int (**)(_QWORD*, __int64))(*a2 + 104LL))(a2, v26) ==
              -1) {
            return nullptr;
          }
        LABEL_29:
          v24 = *v18;
          v25 = (_DWORD*)a2[6];
          if (v25 == (_DWORD*)a2[7]) {
            goto LABEL_30;
          }
        LABEL_25:
          *v25 = v24;
          a2[6] = v25 + 1;
          goto LABEL_31;
        }
        v21 = (*(unsigned int (**)(__int64, _QWORD, _QWORD))(
            *(_QWORD*)v17 + 104LL))(v17, a6[2], 0);
        v18 = a6 + 2;
      }
      else {
        v21 = v19;
        v20 = 0;
      }
      a2 = (_QWORD*)(*(__int64 (**)(__int64, _QWORD*, __int64, _QWORD, __int64,
                                    __int64, _QWORD))(*(_QWORD*)a1 + 24LL))(
          a1, a2, a3, a4, a5, v21, v20);
      a6 = v18 + 1;
      if (v18 + 1 == a7) {
        return a2;
      }
    }
    if (a2 == nullptr) {
      return a2;
    }
    v24 = *a6;
    v25 = (_DWORD*)a2[6];
    if (v25 != (_DWORD*)a2[7]) {
      goto LABEL_25;
    }
  LABEL_30:
    LODWORD(v24) = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 104LL))(a2, v24);
  LABEL_31:
    if ((_DWORD)v24 == -1) {
      return nullptr;
    }
  }
  return a2;
}

void __attribute__((noreturn)) locale_80b1a4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, char a11)
{
  std___1_locale_Destroy_locale_plt(&a11);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_80b358(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20(v1 - 8);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_money_get___do_get_80bda0(_QWORD* a1, _QWORD* a2, char a3,
                                          __int64 a4, __int16 a5, _DWORD* a6,
                                          bool* a7, __int64 a8, __int64* a9,
                                          __int64* a10, __int64 a11)
{
  _QWORD* v12;
  _QWORD* v16;
  _BOOL4 v17;
  char* v18;
  unsigned __int64 v19;
  __int64* v20;
  int v21;
  unsigned int v22;
  _QWORD* v23;
  _BOOL4 v24;
  int v25;
  unsigned int v26;
  int v27;
  _QWORD* v28;
  _BOOL4 v29;
  int v30;
  unsigned __int8* v31;
  __int64 v32;
  __int64 v33;
  unsigned __int8 v34;
  unsigned __int64 v35;
  char* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  _BYTE* v41;
  __int64* v42;
  void* v43;
  __int64 (*v44)(void*);
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  unsigned __int8* v52;
  __int64 v53;
  bool v54;
  int v55;
  unsigned int v56;
  unsigned __int64 v57;
  int v58;
  unsigned __int8* v59;
  int v60;
  _QWORD* v61;
  _BOOL4 v62;
  char* v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  char* v68;
  unsigned int v69;
  char* v70;
  unsigned __int64 v71;
  _BOOL4 v72;
  char* v73;
  unsigned __int8 v74;
  _QWORD* v75;
  char* v76;
  char v77;
  unsigned __int64 v78;
  char* v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  unsigned __int8* v86;
  char* v87;
  __int64 v88;
  unsigned __int8 v89;
  unsigned __int8* v90;
  _QWORD* v91;
  __int64 v92;
  unsigned int v93;
  unsigned __int64 v94;
  int v95;
  unsigned __int8* v96;
  int v97;
  char* v98;
  unsigned __int8 v99;
  unsigned __int8* v100;
  _QWORD* v101;
  __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  char* v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  char* v109;
  unsigned __int64 v110;
  char* v111;
  char* i;
  unsigned __int64 v113;
  _QWORD* v114;
  _BOOL4 v115;
  int v116;
  unsigned __int8* v117;
  _QWORD* v118;
  __int64 v119;
  char* v120;
  char* v121;
  unsigned __int64 v122;
  unsigned __int64 v123;
  unsigned __int64 v124;
  _QWORD* v125;
  _BOOL4 v126;
  __int64 v127;
  unsigned __int8* v128;
  unsigned __int8 v129;
  int v130;
  _QWORD* v131;
  __int64 v132;
  __int64* v133;
  bool v134;
  _QWORD* v135;
  _BOOL4 v136;
  int v137;
  unsigned __int8* v138;
  __int64 v139;
  unsigned __int8 v140;
  _BYTE* v141;
  __int64 v142;
  char* v143;
  char v144;
  __int64* v145;
  void* v146;
  unsigned __int64 v147;
  __int64 v148;
  __int64 (*v149)(void*);
  __int64 v150;
  __int64* v151;
  __int64 v152;
  _QWORD* v153;
  __int64 v154;
  __int64 v155;
  int v156;
  int v157;
  unsigned __int8* v158;
  __int64 v159;
  unsigned __int8 v160;
  _QWORD* v161;
  char* v162;
  unsigned __int64 v163;
  char* v164;
  unsigned __int64 v165;
  unsigned __int64 v166;
  unsigned __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  unsigned __int64 v171;
  unsigned __int64 v172;
  unsigned int v173;
  unsigned __int64 v174;
  unsigned __int64 v175;
  unsigned __int64 v176;
  _QWORD* v177;
  _BOOL4 v178;
  int v179;
  unsigned __int8* v180;
  int v181;
  _QWORD* v182;
  __int64 v183;
  unsigned __int64 v184;
  char* v185;
  char* v186;
  char* v187;
  int v188;
  bool v189;
  unsigned __int64 v190;
  _BYTE* v191;
  char* v192;
  _BYTE* v193;
  int v194;
  unsigned int v195;
  __int64 v197;
  _DWORD* v198;
  __int64 (*v201)(void*);
  __int64* v202;
  char* v204;
  char* v205;
  char* v206;
  char* v207;
  char* v208;
  char* v210;
  int v211;
  __int64 v212;
  unsigned __int64 v213;
  char* v214;
  __int64 v215;
  unsigned __int64 v216;
  unsigned __int8* v217;
  __int64 v218;
  unsigned __int64 v219;
  unsigned __int8* v220;
  __int64 v221;
  unsigned __int64 v222;
  char* v223;
  __int64 v224;
  unsigned __int64 v225;
  _BYTE* v226;
  char v227[4];
  char v228[4];
  _BYTE v229[4];
  _BYTE v230[400];
  __int64 v231;

  v12 = (_QWORD*)*a1;
  v16 = a2;
  if (v12 != nullptr) {
    if (v12[3] != v12[4]) {
      v17 = false;
      if (a2 == nullptr) {
        goto LABEL_4;
      }
    LABEL_11:
      if (v16[3] == v16[4]) {
        v21 = (*(__int64 (**)(_QWORD*))(*v16 + 72LL))(v16);
        if (v21 == -1) {
          v16 = nullptr;
        }
        if (((v17 ^ (v21 == -1)) & 1) != 0) {
          goto LABEL_13;
        }
      }
      else if (v17) {
        goto LABEL_13;
      }
    LABEL_17:
      v22 = 0;
      *a6 |= 4u;
      return v22;
    }
    if ((*(unsigned int (**)(_QWORD*))(*v12 + 72LL))(v12) != -1) {
      v17 = *a1 == 0;
      if (v16 != nullptr) {
        goto LABEL_11;
      }
      goto LABEL_4;
    }
    *a1 = 0;
  }
  v17 = true;
  if (v16 != nullptr) {
    goto LABEL_11;
  }
LABEL_4:
  if (v17) {
    goto LABEL_17;
  }
  v16 = nullptr;
LABEL_13:
  v198 = a6;
  v225 = 0;
  v226 = nullptr;
  v223 = nullptr;
  v224 = 0;
  v221 = 0;
  v222 = 0;
  v219 = 0;
  v220 = nullptr;
  v217 = nullptr;
  v218 = 0;
  v215 = 0;
  v216 = 0;
  v213 = 0;
  v214 = nullptr;
  v212 = 0;
  SdkRoutine_87d130(a3 & 1, a4, v229, v228, v227, &v224, &v221, &v218, &v215,
                    &v211);
  v18 = v230;
  v19 = 0;
  v20 = nullptr;
  v204 = (char*)&v231;
  v201 = std___1___do_nothing;
  *a10 = *a9;
  v210 = v230;
  while (1) {
    v23 = (_QWORD*)*a1;
    if (*a1 != 0) {
      if (v23[3] != v23[4]) {
        v24 = false;
        if (v16 == nullptr) {
          goto LABEL_23;
        }
        goto LABEL_30;
      }
      if ((*(unsigned int (**)(_QWORD*))(*v23 + 72LL))(v23) != -1) {
        v24 = *a1 == 0;
        if (v16 == nullptr) {
          goto LABEL_23;
        }
        goto LABEL_30;
      }
      *a1 = 0;
    }
    v24 = true;
    if (v16 == nullptr) {
    LABEL_23:
      if (v24) {
        goto LABEL_380;
      }
      goto LABEL_36;
    }
  LABEL_30:
    if (v16[3] == v16[4]) {
      v25 = (*(__int64 (**)(_QWORD*))(*v16 + 72LL))(v16);
      if (v25 == -1) {
        v16 = nullptr;
      }
      if (((v24 ^ (v25 == -1)) & 1) == 0) {
        goto LABEL_380;
      }
    }
    else if (!v24) {
      goto LABEL_380;
    }
  LABEL_36:
    v202 = v20;
    v26 = (unsigned __int8)v229[v19];
    if (v26 <= 1) {
      if (v229[v19] != 0) {
        if (v26 != 1) {
          goto LABEL_19;
        }
        if (v19 != 3) {
          v52 = *(unsigned __int8**)(*a1 + 24LL);
          if (v52 == *(unsigned __int8**)(*a1 + 32LL)) {
            v74 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
            v53 = v74;
            if ((v74 & 0x80) != 0) {
              goto LABEL_444;
            }
          }
          else {
            v53 = *v52;
            if ((v53 & 0x80) != 0) {
              goto LABEL_444;
            }
          }
          if ((*(_WORD*)(*(_QWORD*)(a8 + 16) + 2 * v53) & 0x2000) == 0) {
            goto LABEL_444;
          }
          v75 = (_QWORD*)*a1;
          v207 = v18;
          v76 = *(char**)(*a1 + 24LL);
          if (v76 == *(char**)(*a1 + 32LL)) {
            v77 = (*(__int64 (**)(_QWORD*))(*v75 + 80LL))(v75);
            v78 = (unsigned __int8)v212;
            if ((v212 & 1) == 0) {
              goto LABEL_148;
            }
          }
          else {
            v77 = *v76;
            v75[3] = v76 + 1;
            v78 = (unsigned __int8)v212;
            if ((v212 & 1) == 0) {
            LABEL_148:
              if ((_DWORD)v78 != 44) {
                v98 = (char*)&v212 + 1;
                v80 = v78 >> 1;
                LOBYTE(v212) = v78 + 2;
              LABEL_216:
                v106 = &v98[v80];
                while (1) {
                  *v106 = v77;
                  v18 = v207;
                  v20 = v202;
                  v106[1] = 0;
                  v61 = (_QWORD*)*a1;
                  v62 = true;
                  if (*a1 != 0) {
                  LABEL_124:
                    v62 = false;
                    if (v61[3] == v61[4]) {
                      if ((*(unsigned int (**)(_QWORD*))(*v61 + 72LL))(v61) ==
                          -1) {
                        v62 = true;
                        *a1 = 0;
                      }
                      else {
                        v62 = *a1 == 0;
                      }
                    }
                  }
                LABEL_347:
                  if (v16 != nullptr) {
                    if (v16[3] == v16[4]) {
                      v157 = (*(__int64 (**)(_QWORD*))(*v16 + 72LL))(v16);
                      if (v157 == -1) {
                        v16 = nullptr;
                      }
                      if (v62 == (v157 == -1)) {
                        goto LABEL_19;
                      }
                    }
                    else if (!v62) {
                      goto LABEL_19;
                    }
                  }
                  else if (v62) {
                    goto LABEL_19;
                  }
                  v158 = *(unsigned __int8**)(*a1 + 24LL);
                  if (v158 == *(unsigned __int8**)(*a1 + 32LL)) {
                    v160 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
                    v159 = v160;
                    if ((v160 & 0x80) != 0) {
                      goto LABEL_19;
                    }
                  }
                  else {
                    v159 = *v158;
                    if ((v159 & 0x80) != 0) {
                      goto LABEL_19;
                    }
                  }
                  if ((*(_WORD*)(*(_QWORD*)(a8 + 16) + 2 * v159) & 0x2000) ==
                      0) {
                    goto LABEL_19;
                  }
                  v161 = (_QWORD*)*a1;
                  v207 = v18;
                  v162 = *(char**)(*a1 + 24LL);
                  if (v162 == *(char**)(*a1 + 32LL)) {
                    v77 = (*(__int64 (**)(_QWORD*))(*v161 + 80LL))(v161);
                    v163 = (unsigned __int8)v212;
                    if ((v212 & 1) != 0) {
                      goto LABEL_366;
                    }
                  LABEL_363:
                    v164 = (char*)&v212 + 1;
                    v165 = 22;
                    v166 = 48;
                    if ((_DWORD)v163 == 44) {
                      goto LABEL_374;
                    }
                    LOBYTE(v212) = v163 + 2;
                    v106 = (char*)&v212 + (v163 >> 1) + 1;
                  }
                  else {
                    v77 = *v162;
                    v161[3] = v162 + 1;
                    v163 = (unsigned __int8)v212;
                    if ((v212 & 1) == 0) {
                      goto LABEL_363;
                    }
                  LABEL_366:
                    v164 = v214;
                    v167 = v212 & 0xFFFFFFFFFFFFFFFELL;
                    v165 = (v212 & 0xFFFFFFFFFFFFFFFELL) - 1;
                    if (v213 != v165) {
                      v170 = (__int64)v214;
                      v165 = v213;
                      goto LABEL_379;
                    }
                    v166 = -9;
                    if (v165 < 0x7FFFFFFFFFFFFFF3LL) {
                      v168 = (2 * v165) | 7;
                      if (v168 == 23) {
                        v169 = 26;
                      }
                      else {
                        v169 = v168 + 1;
                      }
                      if (v165 >= 0xC) {
                        v166 = v169;
                      }
                      else {
                        v166 = 23;
                      }
                    LABEL_374:
                      v167 = v165 + 1;
                    }
                    v170 = SdkRoutine_85e050(v166);
                    memmove_plt(v170, v164, v165);
                    if (v167 != 23) {
                      SdkRoutine_857220(v164, v167);
                    }
                    v214 = (char*)v170;
                    v212 = v166 | 1;
                  LABEL_379:
                    v213 = v165 + 1;
                    v106 = (char*)(v170 + v165);
                  }
                }
              }
              v79 = (char*)&v212 + 1;
              v80 = 22;
              v81 = 48;
              goto LABEL_159;
            }
          }
          v79 = v214;
          v82 = v212 & 0xFFFFFFFFFFFFFFFELL;
          v80 = (v212 & 0xFFFFFFFFFFFFFFFELL) - 1;
          if (v213 != v80) {
            v98 = v214;
            v80 = v213;
          LABEL_215:
            v213 = v80 + 1;
            goto LABEL_216;
          }
          if (v80 >= 0x7FFFFFFFFFFFFFF3LL) {
            v81 = -9;
            goto LABEL_212;
          }
          v83 = (2 * v80) | 7;
          if (v83 == 23) {
            v84 = 26;
          }
          else {
            v84 = v83 + 1;
          }
          if (v80 >= 0xC) {
            v81 = v84;
          }
          else {
            v81 = 23;
          }
        LABEL_159:
          v82 = v80 + 1;
        LABEL_212:
          v98 = (char*)SdkRoutine_85e050(v81);
          memmove_plt(v98, v79, v80);
          if (v82 != 23) {
            SdkRoutine_857220(v79, v82);
          }
          v214 = v98;
          v212 = v81 | 1;
          goto LABEL_215;
        }
      }
      else if (v19 != 3) {
        v61 = (_QWORD*)*a1;
        v62 = true;
        if (*a1 == 0) {
          goto LABEL_347;
        }
        goto LABEL_124;
      }
    LABEL_380:
      if (v20 == nullptr ||
          (((v171 = *(unsigned __int8*)v20) & 1) != 0 ? (v172 = v20[1])
                                                      : (v172 = v171 >> 1),
           v172 < 2)) {
      LABEL_415:
        if (v18 == v210) {
          v22 = 1;
        }
        else {
          v184 = v225;
          v22 = 1;
          if ((v224 & 1) == 0) {
            v184 = (unsigned __int64)(unsigned __int8)v224 >> 1;
          }
          if (v210 - v18 >= 5 && v184 != 0) {
            v185 = v210 - 4;
            if (v18 < v210 - 4) {
              v186 = v18 + 4;
              v187 = v210 - 4;
              do {
                v188 = *((_DWORD*)v186 - 1);
                *((_DWORD*)v186 - 1) = *(_DWORD*)v187;
                *(_DWORD*)v187 = v188;
                v187 -= 4;
                v189 = v186 >= v187;
                v186 += 4;
              } while (!v189);
              v190 = (unsigned __int64)(unsigned __int8)v224 >> 1;
              if ((v224 & 1) != 0) {
                v191 = v226;
              }
              else {
                v191 = (char*)&v224 + 1;
              }
              if ((v224 & 1) != 0) {
                v190 = v225;
              }
              v192 = v18;
              v193 = &v191[v190];
              while (1) {
                v194 = (unsigned __int8)*v191;
                if (*v191 != 0 && v194 != 255 && *(_DWORD*)v192 != v194) {
                  goto LABEL_444;
                }
                v192 += 4;
                if (v193 - v191 > 1) {
                  ++v191;
                }
                if (v192 >= v185) {
                  goto LABEL_441;
                }
              }
            }
            v191 = (v224 & 1) != 0 ? v226 : (char*)&v224 + 1;
          LABEL_441:
            v195 = (unsigned __int8)*v191;
            v22 = 1;
            if (v195 != 0 && v195 != 255 && *(_DWORD*)v185 - 1 >= v195) {
              goto LABEL_444;
            }
          }
        }
        goto LABEL_445;
      }
      v173 = 2;
      v174 = 1;
      while (1) {
        v177 = (_QWORD*)*a1;
        if (*a1 != 0) {
          if (v177[3] != v177[4]) {
            v178 = false;
            if (v16 == nullptr) {
              goto LABEL_394;
            }
            goto LABEL_401;
          }
          if ((*(unsigned int (**)(_QWORD*))(*v177 + 72LL))(v177) != -1) {
            v178 = *a1 == 0;
            if (v16 == nullptr) {
              goto LABEL_394;
            }
            goto LABEL_401;
          }
          *a1 = 0;
        }
        v178 = true;
        if (v16 == nullptr) {
        LABEL_394:
          if (v178) {
            goto LABEL_444;
          }
          v16 = nullptr;
          goto LABEL_407;
        }
      LABEL_401:
        if (v16[3] == v16[4]) {
          v179 = (*(__int64 (**)(_QWORD*))(*v16 + 72LL))(v16);
          if (v179 == -1) {
            v16 = nullptr;
          }
          if (v178 == (v179 == -1)) {
            goto LABEL_444;
          }
        }
        else if (!v178) {
          goto LABEL_444;
        }
      LABEL_407:
        v180 = *(unsigned __int8**)(*a1 + 24LL);
        if (v180 == *(unsigned __int8**)(*a1 + 32LL)) {
          v181 = (*(unsigned __int8 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
          if ((*(_BYTE*)v20 & 1) == 0) {
          LABEL_412:
            if (v181 != *((unsigned __int8*)v20 + v174 + 1)) {
              goto LABEL_444;
            }
            goto LABEL_413;
          }
        }
        else {
          v181 = *v180;
          if ((*(_BYTE*)v20 & 1) == 0) {
            goto LABEL_412;
          }
        }
        if (v181 != *(unsigned __int8*)(v20[2] + v174)) {
          goto LABEL_444;
        }
      LABEL_413:
        v182 = (_QWORD*)*a1;
        v183 = *(_QWORD*)(*a1 + 24LL);
        if (v183 == *(_QWORD*)(*a1 + 32LL)) {
          (*(void (**)(_QWORD*))(*v182 + 80LL))(v182);
        }
        else {
          v182[3] = v183 + 1;
        }
        v175 = *(unsigned __int8*)v20;
        v174 = v173++;
        if ((v175 & 1) != 0) {
          v176 = v20[1];
        }
        else {
          v176 = v175 >> 1;
        }
        if (v176 <= v174) {
          goto LABEL_415;
        }
      }
    }
    if (v26 == 2) {
      if (v20 != nullptr || v19 < 2) {
        v69 = (unsigned __int8)v221;
        v206 = v18;
        v71 = v222;
        v70 = v223;
        v72 = (v221 & 1) == 0;
        if ((v221 & 1) != 0) {
          v73 = v223;
        }
        else {
          v73 = (char*)&v221 + 1;
        }
        if (v19 != 0 && (unsigned __int8)v229[v19 - 1] <= 1u) {
        LABEL_164:
          if (v72) {
            v85 = v69 >> 1;
          }
          else {
            v85 = v71;
          }
          if (v85 != 0) {
            v86 = (unsigned __int8*)&v73[v85];
            v87 = v73;
            do {
              v88 = *v87;
              if (v88 < 0 ||
                  (*(_WORD*)(*(_QWORD*)(a8 + 16) + 2 * v88) & 0x2000) == 0) {
                goto LABEL_218;
              }
              ++v87;
              --v85;
            } while (v85 != 0);
            v87 = (char*)v86;
          }
          else {
            v87 = v73;
          }
        LABEL_218:
          v107 = v213;
          v108 = v87 - v73;
          if ((v212 & 1) == 0) {
            v107 = (unsigned __int64)(unsigned __int8)v212 >> 1;
          }
          if (v108 <= v107) {
            v109 = (char*)&v212 + 1;
            if ((v212 & 1) != 0) {
              v109 = v214;
            }
            if ((unsigned int)memcmp_plt(&v109[v107 - v108], v73, v108) == 0) {
              v73 = v87;
            }
          }
        }
      }
      else {
        v54 = v229[3] != 0 && v19 == 2;
        v55 = v54;
        if ((a5 & 0x200) == 0 && v55 == 0) {
          v20 = nullptr;
          goto LABEL_19;
        }
        v69 = (unsigned __int8)v221;
        v206 = v18;
        v71 = v222;
        v70 = v223;
        v72 = (v221 & 1) == 0;
        if ((v221 & 1) != 0) {
          v73 = v223;
        }
        else {
          v73 = (char*)&v221 + 1;
        }
        if ((unsigned __int8)v229[v19 - 1] <= 1u) {
          goto LABEL_164;
        }
      }
      v110 = v69 >> 1;
      if ((v69 & 1) != 0) {
        v111 = v70;
      }
      else {
        v111 = (char*)&v221 + 1;
      }
      if ((v69 & 1) != 0) {
        v110 = v71;
      }
      for (i = &v111[v110];; i = &v120[v113]) {
        if (v73 == i) {
        LABEL_260:
          if ((a5 & 0x200) != 0) {
            v121 = v223;
            v122 = (unsigned __int64)(unsigned __int8)v221 >> 1;
            if ((v221 & 1) != 0) {
              v122 = v222;
            }
            else {
              v121 = (char*)&v221 + 1;
            }
            v18 = v206;
            v54 = v73 == &v121[v122];
            v20 = v202;
            if (!v54) {
              goto LABEL_444;
            }
          }
          else {
            v18 = v206;
            v20 = v202;
          }
          goto LABEL_19;
        }
        v114 = (_QWORD*)*a1;
        if (*a1 != 0) {
          if (v114[3] != v114[4]) {
            v115 = false;
            if (v16 == nullptr) {
              goto LABEL_238;
            }
            goto LABEL_245;
          }
          if ((*(unsigned int (**)(_QWORD*))(*v114 + 72LL))(v114) != -1) {
            v115 = *a1 == 0;
            if (v16 == nullptr) {
              goto LABEL_238;
            }
            goto LABEL_245;
          }
          *a1 = 0;
        }
        v115 = true;
        if (v16 == nullptr) {
        LABEL_238:
          if (v115) {
            goto LABEL_260;
          }
          goto LABEL_251;
        }
      LABEL_245:
        if (v16[3] == v16[4]) {
          v116 = (*(__int64 (**)(_QWORD*))(*v16 + 72LL))(v16);
          if (v116 == -1) {
            v16 = nullptr;
          }
          if (v115 == (v116 == -1)) {
            goto LABEL_260;
          }
        }
        else if (!v115) {
          goto LABEL_260;
        }
      LABEL_251:
        v117 = *(unsigned __int8**)(*a1 + 24LL);
        if (v117 == *(unsigned __int8**)(*a1 + 32LL)) {
          if ((*(unsigned __int8 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1) !=
              (unsigned __int8)*v73) {
            goto LABEL_260;
          }
        }
        else if (*v117 != (unsigned __int8)*v73) {
          goto LABEL_260;
        }
        v118 = (_QWORD*)*a1;
        v119 = *(_QWORD*)(*a1 + 24LL);
        if (v119 == *(_QWORD*)(*a1 + 32LL)) {
          (*(void (**)(_QWORD*))(*v118 + 80LL))(v118);
        }
        else {
          v118[3] = v119 + 1;
        }
        v120 = (char*)&v221 + 1;
        if ((v221 & 1) != 0) {
          v120 = v223;
        }
        v113 = (unsigned __int64)(unsigned __int8)v221 >> 1;
        ++v73;
        if ((v221 & 1) != 0) {
          v113 = v222;
        }
      }
    }
    if (v26 != 3) {
      break;
    }
    v56 = (unsigned __int8)v218;
    v57 = v219;
    v58 = v218 & 1;
    if (v58 == 0) {
      v57 = (unsigned __int64)(unsigned __int8)v218 >> 1;
    }
    if (v57 != 0) {
      v59 = *(unsigned __int8**)(*a1 + 24LL);
      if (v59 == *(unsigned __int8**)(*a1 + 32LL)) {
        v89 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
        v56 = (unsigned __int8)v218;
        v60 = v89;
        v58 = v218 & 1;
      }
      else {
        v60 = *v59;
      }
      v90 = v220;
      if (v58 == 0) {
        v90 = (unsigned __int8*)&v218 + 1;
      }
      if (v60 == *v90) {
        v91 = (_QWORD*)*a1;
        v92 = *(_QWORD*)(*a1 + 24LL);
        if (v92 == *(_QWORD*)(*a1 + 32LL)) {
          (*(void (**)(_QWORD*))(*v91 + 80LL))(v91);
          v56 = (unsigned __int8)v218;
          v58 = v218 & 1;
        }
        else {
          v91[3] = v92 + 1;
        }
        v105 = v56 >> 1;
        *a7 = false;
        if (v58 != 0) {
          v105 = v219;
        }
        if (v105 > 1) {
          v20 = &v218;
        }
        goto LABEL_19;
      }
    }
    v93 = (unsigned __int8)v215;
    v94 = v216;
    v95 = v215 & 1;
    if (v95 == 0) {
      v94 = (unsigned __int64)(unsigned __int8)v215 >> 1;
    }
    if (v94 != 0) {
      v96 = *(unsigned __int8**)(*a1 + 24LL);
      if (v96 == *(unsigned __int8**)(*a1 + 32LL)) {
        v99 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
        v93 = (unsigned __int8)v215;
        v97 = v99;
        v95 = v215 & 1;
      }
      else {
        v97 = *v96;
      }
      v100 = v217;
      if (v95 == 0) {
        v100 = (unsigned __int8*)&v215 + 1;
      }
      if (v97 == *v100) {
        v101 = (_QWORD*)*a1;
        v102 = *(_QWORD*)(*a1 + 24LL);
        if (v102 == *(_QWORD*)(*a1 + 32LL)) {
          (*(void (**)(_QWORD*))(*v101 + 80LL))(v101);
          v93 = (unsigned __int8)v215;
          v95 = v215 & 1;
        }
        else {
          v101[3] = v102 + 1;
        }
        v123 = v93 >> 1;
        *a7 = true;
        v124 = v216;
        if (v95 == 0) {
          v124 = v123;
        }
        if (v124 > 1) {
          v20 = &v215;
        }
        goto LABEL_19;
      }
      v56 = (unsigned __int8)v218;
    }
    if ((v56 & 1) != 0) {
      v103 = v219;
    }
    else {
      v103 = v56 >> 1;
    }
    if ((v93 & 1) != 0) {
      v104 = v216;
    }
    else {
      v104 = v93 >> 1;
    }
    if (v103 != 0) {
      if (v104 != 0) {
        goto LABEL_444;
      }
    }
    else if (v104 == 0) {
      goto LABEL_19;
    }
    *a7 = v103 != 0;
  LABEL_19:
    if (++v19 == 4) {
      goto LABEL_380;
    }
  }
  if (v26 != 4) {
    goto LABEL_19;
  }
  v27 = 0;
  while (2) {
    v28 = (_QWORD*)*a1;
    if (*a1 == 0) {
    LABEL_51:
      v29 = true;
      if (v16 == nullptr) {
        goto LABEL_45;
      }
      goto LABEL_52;
    }
    if (v28[3] == v28[4]) {
      if ((*(unsigned int (**)(_QWORD*))(*v28 + 72LL))(v28) != -1) {
        v29 = *a1 == 0;
        if (v16 == nullptr) {
          goto LABEL_45;
        }
        goto LABEL_52;
      }
      *a1 = 0;
      goto LABEL_51;
    }
    v29 = false;
    if (v16 == nullptr) {
    LABEL_45:
      if (v29) {
        goto LABEL_127;
      }
      goto LABEL_58;
    }
  LABEL_52:
    if (v16[3] != v16[4]) {
      if (!v29) {
        goto LABEL_127;
      }
    LABEL_58:
      v31 = *(unsigned __int8**)(*a1 + 24LL);
      if (v31 != *(unsigned __int8**)(*a1 + 32LL)) {
        v32 = *v31;
        v33 = a11;
        if ((v32 & 0x80) != 0) {
          goto LABEL_63;
        }
      LABEL_62:
        if ((*(_WORD*)(*(_QWORD*)(a8 + 16) + 2 * v32) & 0x800) != 0) {
          v41 = (_BYTE*)*a10;
          if (*a10 == v33) {
            v205 = v18;
            v43 = (void*)*a9;
            v44 = (__int64 (*)(void*))a9[1];
            v45 = v33 - *a9;
            v46 = 2 * v45;
            if (2 * v45 <= 1) {
              v46 = 1;
            }
            if (v45 <= 0x7FFFFFFFFFFFFFFELL) {
              v47 = v46;
            }
            else {
              v47 = -1;
            }
            if (v44 == std___1___do_nothing) {
              v39 = malloc_plt(v47);
              if (v39 == 0) {
              LABEL_459:
                v150 = std___throw_bad_alloc_plt(v39);
              LABEL_460:
                v67 = std___throw_bad_alloc_plt(v150);
              LABEL_461:
                v197 = std___throw_bad_alloc_plt(v67);
                SdkRoutine_7cd620_alt1(v197);
              }
              v51 = v39;
              memcpy_plt(v39, v43, v45);
              v48 = a9;
              v39 = v51;
              *a9 = v51;
              if (v43 != nullptr) {
                v44(v43);
                v48 = a9;
                v39 = *a9;
              }
            }
            else {
              v39 = realloc_plt(*a9, v47);
              if (v39 == 0) {
                goto LABEL_459;
              }
              v48 = a9;
              *a9 = v39;
            }
            v18 = v205;
            v42 = a10;
            v48[1] = SdkData_e86b48;
            v41 = (_BYTE*)(v39 + v45);
            v20 = v202;
            *a10 = (__int64)v41;
            a11 = *v48 + v47;
          }
          else {
            v42 = a10;
          }
          ++v27;
          *v42 = (__int64)(v41 + 1);
          *v41 = v32;
          v49 = (_QWORD*)*a1;
          v50 = *(_QWORD*)(*a1 + 24LL);
          if (v50 != *(_QWORD*)(*a1 + 32LL)) {
          LABEL_41:
            v49[3] = v50 + 1;
            continue;
          }
        }
        else {
        LABEL_63:
          if ((v224 & 1) != 0) {
            v35 = v225;
          }
          else {
            v35 = (unsigned __int64)(unsigned __int8)v224 >> 1;
          }
          if (v35 == 0 || v27 == 0 || v32 != (unsigned __int8)v227[0]) {
            goto LABEL_127;
          }
          v36 = v210;
          if (v210 == v204) {
            v37 = v204 - v18;
            if (v204 == v18) {
              v38 = 4;
            }
            else {
              v38 = 2 * (v204 - v18);
            }
            if (v37 >= 0x7FFFFFFFFFFFFFFFLL) {
              v38 = -1;
            }
            if (v201 == std___1___do_nothing) {
              v39 = malloc_plt(v38);
              if (v39 == 0) {
                goto LABEL_459;
              }
              v40 = (char*)v39;
              memcpy_plt(v39, v18, v37);
              if (v18 != nullptr) {
                v201(v18);
              }
            }
            else {
              v39 = realloc_plt(v18, v38);
              v40 = (char*)v39;
              if (v39 == 0) {
                goto LABEL_459;
              }
            }
            v36 = &v40[v37];
            v18 = v40;
            v204 = &v40[v38 & 0xFFFFFFFFFFFFFFFCLL];
            v20 = v202;
            v201 = (__int64 (*)(void*))SdkData_e86b48;
          }
          *(_DWORD*)v36 = v27;
          v27 = 0;
          v210 = v36 + 4;
          v49 = (_QWORD*)*a1;
          v50 = *(_QWORD*)(*a1 + 24LL);
          if (v50 != *(_QWORD*)(*a1 + 32LL)) {
            goto LABEL_41;
          }
        }
        (*(void (**)(_QWORD*))(*v49 + 80LL))(v49);
        continue;
      }
      v34 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
      v32 = v34;
      v33 = a11;
      if ((v34 & 0x80) == 0) {
        goto LABEL_62;
      }
      goto LABEL_63;
    }
    break;
  }
  v30 = (*(__int64 (**)(_QWORD*))(*v16 + 72LL))(v16);
  if (v30 == -1) {
    v16 = nullptr;
  }
  if (v29 != (v30 == -1)) {
    goto LABEL_58;
  }
LABEL_127:
  v63 = v210;
  if (v18 != v210 && v27 != 0) {
    if (v210 == v204) {
      v64 = v204 - v18;
      v65 = 2 * (v204 - v18);
      if (v204 == v18) {
        v65 = 4;
      }
      if (v64 >= 0x7FFFFFFFFFFFFFFFLL) {
        v66 = -1;
      }
      else {
        v66 = v65;
      }
      if (v201 == std___1___do_nothing) {
        v67 = malloc_plt(v66);
        if (v67 == 0) {
          goto LABEL_461;
        }
        v68 = (char*)v67;
        memcpy_plt(v67, v18, v64);
        if (v18 != nullptr) {
          v201(v18);
        }
      }
      else {
        v67 = realloc_plt(v18, v66);
        v68 = (char*)v67;
        if (v67 == 0) {
          goto LABEL_461;
        }
      }
      v63 = &v68[v64];
      v18 = v68;
      v204 = &v68[v66 & 0xFFFFFFFFFFFFFFFCLL];
      v201 = (__int64 (*)(void*))SdkData_e86b48;
    }
    *(_DWORD*)v63 = v27;
    v63 += 4;
  }
  v210 = v63;
  if (v211 < 1) {
    goto LABEL_302;
  }
  v125 = (_QWORD*)*a1;
  v208 = v18;
  if (*a1 != 0) {
    if (v125[3] != v125[4]) {
      v126 = false;
      goto LABEL_285;
    }
    if ((*(unsigned int (**)(_QWORD*))(*v125 + 72LL))(v125) != -1) {
      v126 = *a1 == 0;
      goto LABEL_285;
    }
    *a1 = 0;
  }
  v126 = true;
LABEL_285:
  if (v16 == nullptr) {
    if (v126) {
      goto LABEL_444;
    }
    v16 = nullptr;
    v127 = *a1;
    v128 = *(unsigned __int8**)(*a1 + 24LL);
    if (v128 != *(unsigned __int8**)(*a1 + 32LL)) {
      goto LABEL_297;
    }
    goto LABEL_291;
  }
  if (v16[3] == v16[4]) {
    v130 = (*(__int64 (**)(_QWORD*))(*v16 + 72LL))(v16);
    if (v130 == -1) {
      v16 = nullptr;
    }
    if (v126 != (v130 == -1)) {
      goto LABEL_296;
    }
  }
  else {
    if (!v126) {
      goto LABEL_444;
    }
  LABEL_296:
    v127 = *a1;
    v128 = *(unsigned __int8**)(*a1 + 24LL);
    if (v128 != *(unsigned __int8**)(*a1 + 32LL)) {
    LABEL_297:
      if (*v128 != (unsigned __int8)v228[0]) {
        goto LABEL_444;
      }
    LABEL_298:
      v131 = (_QWORD*)*a1;
      v132 = *(_QWORD*)(*a1 + 24LL);
      if (v132 == *(_QWORD*)(*a1 + 32LL)) {
        (*(void (**)(_QWORD*))(*v131 + 80LL))(v131);
      }
      else {
        v131[3] = v132 + 1;
      }
      if (v211 < 1) {
      LABEL_302:
        v133 = a10;
      LABEL_303:
        if (*v133 == *a9) {
          goto LABEL_444;
        }
        goto LABEL_19;
      }
      while (2) {
        v135 = (_QWORD*)*a1;
        if (*a1 != 0) {
          if (v135[3] != v135[4]) {
            v136 = false;
            if (v16 == nullptr) {
              goto LABEL_309;
            }
          LABEL_316:
            if (v16[3] == v16[4]) {
              v137 = (*(__int64 (**)(_QWORD*))(*v16 + 72LL))(v16);
              if (v137 == -1) {
                v16 = nullptr;
              }
              if (v136 == (v137 == -1)) {
                goto LABEL_444;
              }
            }
            else if (!v136) {
              goto LABEL_444;
            }
          LABEL_322:
            v138 = *(unsigned __int8**)(*a1 + 24LL);
            if (v138 == *(unsigned __int8**)(*a1 + 32LL)) {
              v140 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
              v139 = v140;
              if ((v140 & 0x80) != 0) {
                goto LABEL_444;
              }
            }
            else {
              v139 = *v138;
              if ((v139 & 0x80) != 0) {
                goto LABEL_444;
              }
            }
            if ((*(_WORD*)(*(_QWORD*)(a8 + 16) + 2 * v139) & 0x800) == 0) {
              goto LABEL_444;
            }
            v141 = (_BYTE*)*a10;
            if (*a10 != a11) {
              v142 = *a1;
              v143 = *(char**)(*a1 + 24LL);
              if (v143 != *(char**)(*a1 + 32LL)) {
                goto LABEL_329;
              }
            LABEL_342:
              v144 = (*(__int64 (**)(__int64))(*(_QWORD*)v142 + 72LL))(v142);
              v145 = a10;
              v141 = (_BYTE*)*a10;
              goto LABEL_343;
            }
            v146 = (void*)*a9;
            v147 = a11 - *a9;
            if (v147 > 0x7FFFFFFFFFFFFFFELL) {
              v148 = -1;
              v149 = (__int64 (*)(void*))a9[1];
              if (v149 != std___1___do_nothing) {
                goto LABEL_335;
              }
            }
            else {
              if (2 * v147 <= 1) {
                v148 = 1;
              }
              else {
                v148 = 2 * v147;
              }
              v149 = (__int64 (*)(void*))a9[1];
              if (v149 != std___1___do_nothing) {
              LABEL_335:
                v150 = realloc_plt(*a9, v148);
                if (v150 == 0) {
                  goto LABEL_460;
                }
                v151 = a9;
                *a9 = v150;
              LABEL_341:
                v18 = v208;
                v151[1] = SdkData_e86b48;
                v141 = (_BYTE*)(v150 + v147);
                v20 = v202;
                *a10 = (__int64)v141;
                a11 = *v151 + v148;
                v142 = *a1;
                v143 = *(char**)(*a1 + 24LL);
                if (v143 == *(char**)(*a1 + 32LL)) {
                  goto LABEL_342;
                }
              LABEL_329:
                v144 = *v143;
                v145 = a10;
              LABEL_343:
                *v145 = (__int64)(v141 + 1);
                *v141 = v144;
                v153 = (_QWORD*)*a1;
                v154 = *(_QWORD*)(*a1 + 24LL);
                v155 = *(_QWORD*)(*a1 + 32LL);
                v156 = --v211;
                if (v154 == v155) {
                  (*(void (**)(_QWORD*))(*v153 + 80LL))(v153);
                  v133 = a10;
                  if (v211 <= 0) {
                    goto LABEL_303;
                  }
                }
                else {
                  v153[3] = v154 + 1;
                  v134 = v156 <= 0;
                  v133 = a10;
                  if (v134) {
                    goto LABEL_303;
                  }
                }
                continue;
              }
            }
            v150 = malloc_plt(v148);
            if (v150 == 0) {
              goto LABEL_460;
            }
            v152 = v150;
            memcpy_plt(v150, v146, v147);
            v151 = a9;
            v150 = v152;
            *a9 = v152;
            if (v146 != nullptr) {
              v149(v146);
              v151 = a9;
              v150 = *a9;
            }
            goto LABEL_341;
          }
          if ((*(unsigned int (**)(_QWORD*))(*v135 + 72LL))(v135) != -1) {
            v136 = *a1 == 0;
            if (v16 != nullptr) {
              goto LABEL_316;
            }
            goto LABEL_309;
          }
          *a1 = 0;
        }
        break;
      }
      v136 = true;
      if (v16 != nullptr) {
        goto LABEL_316;
      }
    LABEL_309:
      if (v136) {
        goto LABEL_444;
      }
      v16 = nullptr;
      goto LABEL_322;
    }
  LABEL_291:
    v129 = (*(__int64 (**)(__int64))(*(_QWORD*)v127 + 72LL))(v127);
    if (v129 == (unsigned __int8)v228[0]) {
      goto LABEL_298;
    }
  }
LABEL_444:
  v22 = 0;
  *v198 |= 4u;
LABEL_445:
  if ((v212 & 1) == 0) {
    if ((v215 & 1) == 0) {
      goto LABEL_447;
    }
  LABEL_453:
    SdkRoutine_857220(v217, v215 & 0xFFFFFFFFFFFFFFFELL);
    if ((v218 & 1) != 0) {
      goto LABEL_454;
    }
  LABEL_448:
    if ((v221 & 1) == 0) {
      goto LABEL_449;
    }
  LABEL_455:
    SdkRoutine_857220(v223, v221 & 0xFFFFFFFFFFFFFFFELL);
    if ((v224 & 1) != 0) {
      goto LABEL_456;
    }
  LABEL_450:
    if (v18 == nullptr) {
      return v22;
    }
  LABEL_457:
    v201(v18);
    return v22;
  }
  SdkRoutine_857220(v214, v212 & 0xFFFFFFFFFFFFFFFELL);
  if ((v215 & 1) != 0) {
    goto LABEL_453;
  }
LABEL_447:
  if ((v218 & 1) == 0) {
    goto LABEL_448;
  }
LABEL_454:
  SdkRoutine_857220(v220, v218 & 0xFFFFFFFFFFFFFFFELL);
  if ((v221 & 1) != 0) {
    goto LABEL_455;
  }
LABEL_449:
  if ((v224 & 1) == 0) {
    goto LABEL_450;
  }
LABEL_456:
  SdkRoutine_857220(v226, v224 & 0xFFFFFFFFFFFFFFFELL);
  if (v18 != nullptr) {
    goto LABEL_457;
  }
  return v22;
}

void __attribute__((noreturn)) locale_80d334(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn))

locale_80d338(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
              __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
              __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
              __int64 a16, __int64 a17, __int64 a18, __int64 a19,
              void (*a20)(__int64), __int64 a21, __int64 a22, __int64 a23,
              __int64 a24, __int64 a25, __int64 a26, __int64 a27, __int64 a28,
              __int64 a29, __int64 a30, __int64 a31, __int64 a32, __int64 a33,
              __int64 a34, __int64 a35, __int64 a36, __int64 a37, __int64 a38,
              __int64 a39, __int64 a40, __int64 a41, __int64 a42, __int64 a43)
{
  if ((a29 & 1) != 0) {
    SdkRoutine_857220(a31, a29 & 0xFFFFFFFFFFFFFFFELL);
    if ((a32 & 1) == 0) {
    LABEL_3:
      if ((a35 & 1) == 0) {
        goto LABEL_4;
      }
      goto LABEL_10;
    }
  }
  else if ((a32 & 1) == 0) {
    goto LABEL_3;
  }
  SdkRoutine_857220(a34, a32 & 0xFFFFFFFFFFFFFFFELL);
  if ((a35 & 1) == 0) {
  LABEL_4:
    if ((a38 & 1) == 0) {
      goto LABEL_5;
    }
    goto LABEL_11;
  }
LABEL_10:
  SdkRoutine_857220(a37, a35 & 0xFFFFFFFFFFFFFFFELL);
  if ((a38 & 1) == 0) {
  LABEL_5:
    if ((a41 & 1) == 0) {
      goto LABEL_6;
    }
    goto LABEL_12;
  }
LABEL_11:
  SdkRoutine_857220(a40, a38 & 0xFFFFFFFFFFFFFFFELL);
  if ((a41 & 1) == 0) {
  LABEL_6:
    if (a24 == 0) {
    LABEL_14:
      _Unwind_Resume_plt_alt1(a1);
      SdkRoutine_7cd620();
    }
  LABEL_13:
    a20(a24);
    goto LABEL_14;
  }
LABEL_12:
  SdkRoutine_857220(a43, a41 & 0xFFFFFFFFFFFFFFFELL);
  if (a24 == 0) {
    goto LABEL_14;
  }
  goto LABEL_13;
}

_QWORD* std___1_money_get_do_get_80d460(__int64 a1, _QWORD* a2, _QWORD* a3,
                                        char a4, __int64 a5, _DWORD* a6,
                                        unsigned __int8* a7)
{
  __int64 v12;
  void(__attribute__((noreturn)) * v13)();
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8 v18;
  unsigned __int64 v19;
  unsigned __int8 v20;
  unsigned __int8* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int8* v28;
  __int64 v29;
  unsigned __int8* v30;
  unsigned __int8 v31;
  unsigned __int8* v32;
  unsigned __int8* v33;
  __int64 v34;
  unsigned __int8* v35;
  unsigned __int8* v36;
  _BOOL4 v37;
  _QWORD* v38;
  unsigned __int64 v39;
  __int64 v41;
  __int64 v42;
  struct {
    unsigned __int64 v43;
    void (*v44)(void);
  } v43_;
  char v45;
  _QWORD* v46;
  void(__attribute__((noreturn)) * v47)();
  unsigned __int8* v48;
  unsigned __int8 v49[16];

  v46 = a2;
  v43_.v43 = (unsigned __int64)&v45;
  v43_.v44 = (void (*)(void))std___1___do_nothing;
  std___1_ios_base_getloc_plt((void*)(&v41), a5);
  v12 = v41;
  v13 = SdkData_e89440[0];
  v47 = SdkData_e89440[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89440[0],
                           memory_order_acquire) != -1) {
    *(_QWORD*)v49 = &v47;
    v48 = v49;
    std___1___call_once_plt(SdkData_e89440[0], &v48, SdkRoutine_82f0b0);
  }
  v14 = *(_QWORD*)(v12 + 16);
  v15 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v13 + 4) - 1LL;
  if (v15 >= (*(_QWORD*)(v12 + 24) - v14) >> 3 ||
      (v16 = *(_QWORD*)(v14 + 8 * v15)) == 0) {
    locale_7f6090();
  }
  v17 = *(unsigned int*)(a5 + 8);
  v49[0] = 0;
  if ((SdkRoutine_87d120(&v46, a3, a4 & 1, &v41, v17, a6, v49, v16, &v43_.v43,
                         &v42, &v46) &
       1) != 0) {
    if ((*a7 & 1) != 0) {
      **((_BYTE**)a7 + 2) = 0;
      *((_QWORD*)a7 + 1) = 0;
      if (v49[0] != 1) {
        goto LABEL_29;
      }
    }
    else {
      *(_WORD*)a7 = 0;
      if (v49[0] != 1) {
      LABEL_29:
        v31 =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v16 + 56LL))(v16, 48);
        v32 = (unsigned __int8*)v43_.v43;
        v33 = (unsigned __int8*)(v42 - 1);
        if (v43_.v43 < v42 - 1) {
          v34 = ~((int)v43_.v43 - (int)v42) & 3LL;
          if (v34 != 0) {
            v35 = (unsigned __int8*)v43_.v43;
            do {
              if (*v35 != v31) {
                v32 = v35;
                goto LABEL_45;
              }
              ++v35;
              --v34;
            } while (v34 != 0);
            if ((unsigned __int64)&v33[~v43_.v43] >= 3) {
              goto LABEL_37;
            }
          }
          else {
            v35 = (unsigned __int8*)v43_.v43;
            if ((unsigned __int64)&v33[~v43_.v43] >= 3) {
            LABEL_37:
              v32 = v35 + 3;
              while (1) {
                if (*(v32 - 3) != v31) {
                  v32 -= 3;
                  goto LABEL_45;
                }
                if (*(v32 - 2) != v31) {
                  v32 -= 2;
                  goto LABEL_45;
                }
                if (*(v32 - 1) != v31) {
                  break;
                }
                if (*v32 != v31) {
                  goto LABEL_45;
                }
                v36 = v32 + 1;
                v32 += 4;
                if (v36 == v33) {
                  goto LABEL_43;
                }
              }
              --v32;
              goto LABEL_45;
            }
          }
        LABEL_43:
          v32 = (unsigned __int8*)(v42 - 1);
        }
      LABEL_45:
        locale_80d8a0((unsigned __int64*)a7, (unsigned __int64)v32, v42);
        goto LABEL_46;
      }
    }
    v18 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v16 + 56LL))(v16, 45);
    v19 = *a7;
    v20 = v18;
    if ((v19 & 1) != 0) {
      v24 = *((_QWORD*)a7 + 1);
      v25 = *(_QWORD*)a7 & 0xFFFFFFFFFFFFFFFELL;
      v23 = v25 - 1;
      if (v24 != v25 - 1) {
      LABEL_27:
        v28 = *((unsigned __int8**)a7 + 2);
        *((_QWORD*)a7 + 1) = v24 + 1;
        goto LABEL_28;
      }
      v21 = *((unsigned __int8**)a7 + 2);
      if (v23 > 0x7FFFFFFFFFFFFFF2LL) {
        v22 = -9;
        goto LABEL_24;
      }
      v26 = (2 * v23) | 7;
      if (v26 == 23) {
        v27 = 26;
      }
      else {
        v27 = v26 + 1;
      }
      if (v23 >= 0xC) {
        v22 = v27;
      }
      else {
        v22 = 23;
      }
    }
    else {
      if ((_DWORD)v19 != 44) {
        v24 = v19 >> 1;
        *a7 = v19 + 2;
        v28 = a7 + 1;
      LABEL_28:
        v30 = &v28[v24];
        *v30 = v20;
        v30[1] = 0;
        goto LABEL_29;
      }
      v21 = a7 + 1;
      v22 = 48;
      v23 = 22;
    }
    v25 = v23 + 1;
  LABEL_24:
    v24 = v23;
    v29 = SdkRoutine_85e050(v22);
    memmove_plt(v29, v21, v24);
    if (v25 != 23) {
      SdkRoutine_857220(v21, v25);
    }
    *((_QWORD*)a7 + 2) = v29;
    *(_QWORD*)a7 = v22 | 1;
    goto LABEL_27;
  }
LABEL_46:
  if (v46 == nullptr) {
    goto LABEL_55;
  }
  if (v46[3] == v46[4]) {
    if ((*(unsigned int (**)(_QWORD*))(*v46 + 72LL))(v46) != -1) {
      v37 = v46 == nullptr;
      if (a3 != nullptr) {
        goto LABEL_56;
      }
      goto LABEL_49;
    }
    v46 = nullptr;
  LABEL_55:
    v37 = true;
    if (a3 != nullptr) {
      goto LABEL_56;
    }
  LABEL_49:
    if (!v37) {
      goto LABEL_59;
    }
    goto LABEL_58;
  }
  v37 = false;
  if (a3 == nullptr) {
    goto LABEL_49;
  }
LABEL_56:
  if (a3[3] != a3[4]) {
    if (v37) {
      goto LABEL_59;
    }
    goto LABEL_58;
  }
  if (((v37 ^ ((*(unsigned int (**)(_QWORD*))(*a3 + 72LL))(a3) == -1)) & 1) ==
      0) {
  LABEL_58:
    *a6 |= 2u;
  }
LABEL_59:
  v38 = v46;
  std___1_locale_Destroy_locale_plt(&v41);
  v39 = v43_.v43;
  v43_.v43 = 0;
  if (v39 != 0) {
    v43_.v44();
  }
  return v38;
}

unsigned __int64* locale_80d8a0(unsigned __int64* a1, unsigned __int64 a2,
                                __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  char* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v27;
  unsigned __int64 v28;
  char* v29;

  v3 = *a1;
  v4 = a1[1];
  v5 = *(unsigned __int8*)a1;
  if ((v5 & 1) != 0) {
    v7 = a1[1];
  }
  else {
    v7 = v5 >> 1;
  }
  if ((v5 & 1) != 0) {
    v8 = (*a1 & 0xFFFFFFFFFFFFFFFELL) - 1;
  }
  else {
    v8 = 22;
  }
  v9 = a3 - a2;
  if (a3 == a2) {
    return a1;
  }
  if ((v3 & 1) != 0) {
    v10 = (char*)a1[2];
  }
  else {
    v4 = (unsigned __int8)v3 >> 1;
    v10 = (char*)a1 + 1;
  }
  v11 = (unsigned __int64)&v10[v4 + 1];
  if (a2 < (unsigned __int64)v10 || a2 >= v11) {
    v13 = v7 + v9;
    if (v8 - v7 >= v9) {
      if ((v3 & 1) != 0) {
        v18 = a1[2];
      }
      else {
        v18 = (__int64)a1 + 1;
      }
    LABEL_52:
      v25 = v18 + v7;
      memmove_plt(v25, a2, v9);
      *(_BYTE*)(v25 + v9) = 0;
      if ((*(_BYTE*)a1 & 1) != 0) {
        a1[1] = v13;
      }
      else {
        *(_BYTE*)a1 = 2 * v13;
      }
      return a1;
    }
    if (v13 - v8 > -10LL - v8) {
      goto LABEL_56;
    }
    v14 = a2;
    if (v8 > 0x7FFFFFFFFFFFFFF2LL) {
      v17 = -9;
      v18 = SdkRoutine_85e050(0xFFFFFFFFFFFFFFF7LL);
      if (v7 == 0) {
      LABEL_49:
        if (v8 != 22) {
          SdkRoutine_857220(v10, v8 + 1);
        }
        a1[1] = v7;
        a1[2] = v18;
        a2 = v14;
        *a1 = v17 | 1;
        goto LABEL_52;
      }
    }
    else {
      v15 = 2 * v8;
      if (v13 > 2 * v8) {
        v15 = v7 + v9;
      }
      if ((v15 | 7) == 0x17) {
        v16 = 26;
      }
      else {
        v16 = (v15 | 7) + 1;
      }
      if (v15 >= 0x17) {
        v17 = v16;
      }
      else {
        v17 = 23;
      }
      v18 = SdkRoutine_85e050(v17);
      if (v7 == 0) {
        goto LABEL_49;
      }
    }
    memmove_plt(v18, v10, v7);
    goto LABEL_49;
  }
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_56:
    locale_7d3920();
  }
  if (v9 > 0x16) {
    v20 = a2;
    if ((v9 | 7) == 0x17) {
      v21 = 26;
    }
    else {
      v21 = (v9 | 7) + 1;
    }
    v22 = SdkRoutine_85e050(v21);
    a2 = v20;
    v19 = (char*)v22;
    v28 = v9;
    v29 = (char*)v22;
    v27 = v21 | 1;
  }
  else {
    LOBYTE(v27) = 2 * v9;
    v19 = (char*)&v27 + 1;
  }
  memcpy_plt(v19, a2, v9);
  v19[v9] = 0;
  if ((v27 & 1) != 0) {
    v23 = v29;
  }
  else {
    v23 = (char*)&v27 + 1;
  }
  if ((v27 & 1) != 0) {
    v24 = v28;
  }
  else {
    v24 = (unsigned __int64)(unsigned __int8)v27 >> 1;
  }
  SdkRoutine_86fc80(a1, v23, v24);
  if ((v27 & 1) != 0) {
    SdkRoutine_857220(v29, v27 & 0xFFFFFFFFFFFFFFFELL);
  }
  return a1;
}

void __attribute__((noreturn)) locale_80dae4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12)
{
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_money_get___do_get_80e200(_QWORD* a1, _QWORD* a2, char a3,
                                          __int64 a4, __int16 a5, _DWORD* a6,
                                          bool* a7, __int64 a8, __int64* a9,
                                          __int64* a10, unsigned __int64 a11)
{
  _QWORD* v12;
  _DWORD* v18;
  _BOOL4 v19;
  int* v20;
  int v21;
  _BOOL4 v22;
  char* v23;
  char* v25;
  _QWORD* v26;
  int* v27;
  int v28;
  _BOOL4 v29;
  int* v30;
  int v31;
  unsigned int v32;
  int v33;
  _QWORD* v34;
  int* v35;
  int v36;
  _BOOL4 v37;
  int* v38;
  int v39;
  unsigned int* v40;
  unsigned int v41;
  _DWORD* v42;
  __int64* v43;
  unsigned __int64 v44;
  _QWORD* v45;
  __int64 v46;
  void* v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64* v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 (*v54)(void*);
  __int64* v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned int* v58;
  __int64 v59;
  bool v60;
  int v61;
  unsigned int v62;
  unsigned __int64 v63;
  int v64;
  int* v65;
  int v66;
  _QWORD* v67;
  _BOOL4 v68;
  int* v69;
  int v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  char* v75;
  unsigned int v76;
  char* v77;
  int v78;
  char* v79;
  char* v80;
  _QWORD* v81;
  int* v82;
  int v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  char* v87;
  unsigned __int64 v88;
  char v89;
  char* v90;
  unsigned __int64 v91;
  _DWORD* v92;
  _QWORD* v93;
  __int64 v94;
  unsigned int v95;
  unsigned __int64 v96;
  int v97;
  int* v98;
  int v99;
  _DWORD* v100;
  _QWORD* v101;
  __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  unsigned __int8* v106;
  unsigned __int64 v107;
  __int64 v108;
  char* v109;
  char* v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  _QWORD* v113;
  int* v114;
  int v115;
  _BOOL4 v116;
  int* v117;
  int v118;
  int* v119;
  int v120;
  _QWORD* v121;
  __int64 v122;
  char* v123;
  char* v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  bool v127;
  unsigned __int8* v128;
  _QWORD* v129;
  int* v130;
  int v131;
  _BOOL4 v132;
  int* v133;
  int v134;
  int* v135;
  int v136;
  _QWORD* v137;
  __int64 v138;
  _QWORD* v139;
  int* v140;
  int v141;
  _BOOL4 v142;
  int* v143;
  int v144;
  unsigned int* v145;
  __int64 v146;
  _DWORD* v147;
  _QWORD* v148;
  int* v149;
  int v150;
  __int64* v151;
  void* v152;
  unsigned __int64 v153;
  __int64 v154;
  __int64* v155;
  __int64* v156;
  __int64 (*v157)(void*);
  __int64 v158;
  __int64 v159;
  unsigned __int64 v160;
  __int64 v161;
  int v162;
  int v163;
  __int64 v164;
  __int64 v165;
  int v166;
  char* v167;
  int* v168;
  int v169;
  unsigned int* v170;
  __int64 v171;
  _QWORD* v172;
  int* v173;
  _DWORD* v174;
  unsigned __int64 v175;
  unsigned __int64 v176;
  unsigned int v177;
  unsigned __int64 v178;
  char* v179;
  unsigned __int64 v180;
  unsigned __int64 v181;
  _QWORD* v182;
  int* v183;
  int v184;
  _BOOL4 v185;
  int* v186;
  int v187;
  int* v188;
  int v189;
  _QWORD* v190;
  __int64 v191;
  int v192;
  unsigned int v193;
  unsigned __int64 v194;
  char* v195;
  char* v196;
  char* v197;
  int v198;
  bool v199;
  unsigned __int64 v200;
  _BYTE* v201;
  char* v202;
  _BYTE* v203;
  int v204;
  unsigned int v205;
  __int64 v207;
  _DWORD* v208;
  unsigned __int8* v211;
  __int64 (*v212)(void*);
  __int64 v213;
  char* v214;
  char* v215;
  char* v216;
  char* v217;
  unsigned __int64 v218;
  int v219;
  __int64 v220;
  unsigned __int64 v221;
  char* v222;
  __int64 v223;
  unsigned __int64 v224;
  _DWORD* v225;
  __int64 v226;
  unsigned __int64 v227;
  _DWORD* v228;
  __int64 v229;
  unsigned __int64 v230;
  char* v231;
  __int64 v232;
  unsigned __int64 v233;
  _BYTE* v234;
  int v235;
  int v236;
  _BYTE v237[4];
  _BYTE v238[400];
  __int64 v239;

  v12 = (_QWORD*)*a1;
  if (v12 != nullptr) {
    v18 = (_DWORD*)v12[3];
    if (v18 == (_DWORD*)v12[4]) {
      if ((*(unsigned int (**)(_QWORD*))(*v12 + 72LL))(v12) != -1) {
      LABEL_4:
        v19 = *a1 == 0;
        if (a2 == nullptr) {
          goto LABEL_5;
        }
      LABEL_10:
        v20 = (int*)a2[3];
        if (v20 == (int*)a2[4]) {
          v192 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
          if (v192 == -1) {
            a2 = nullptr;
          }
          if (((v19 ^ (v192 == -1)) & 1) != 0) {
            goto LABEL_14;
          }
        }
        else {
          v21 = *v20;
          v22 = *v20 == -1;
          if (v21 == -1) {
            a2 = nullptr;
          }
          if (((v19 ^ v22) & 1) != 0) {
            goto LABEL_14;
          }
        }
      LABEL_393:
        v193 = 0;
        *a6 |= 4u;
        return v193;
      }
    }
    else if (*v18 != -1) {
      goto LABEL_4;
    }
    *a1 = 0;
  }
  v19 = true;
  if (a2 != nullptr) {
    goto LABEL_10;
  }
LABEL_5:
  if (v19) {
    goto LABEL_393;
  }
  a2 = nullptr;
LABEL_14:
  v208 = a6;
  v233 = 0;
  v234 = nullptr;
  v231 = nullptr;
  v232 = 0;
  v229 = 0;
  v230 = 0;
  v227 = 0;
  v228 = nullptr;
  v225 = nullptr;
  v226 = 0;
  v223 = 0;
  v224 = 0;
  v221 = 0;
  v222 = nullptr;
  v220 = 0;
  SdkRoutine_87d150(a3 & 1, a4, v237, &v236, &v235, &v232, &v229, &v226, &v223,
                    &v219);
  v23 = v238;
  v211 = nullptr;
  v218 = 0;
  v217 = (char*)&v239;
  *a10 = *a9;
  v25 = v238;
  v212 = std___1___do_nothing;
  v213 = a8;
  while (1) {
    v26 = (_QWORD*)*a1;
    if (*a1 != 0) {
      v27 = (int*)v26[3];
      if (v27 == (int*)v26[4]) {
        v28 = (*(__int64 (**)(_QWORD*))(*v26 + 72LL))(v26);
      }
      else {
        v28 = *v27;
      }
      if (v28 != -1) {
        v29 = *a1 == 0;
        if (a2 == nullptr) {
          goto LABEL_23;
        }
        goto LABEL_27;
      }
      *a1 = 0;
    }
    v29 = true;
    if (a2 == nullptr) {
    LABEL_23:
      if (v29) {
        goto LABEL_354;
      }
      goto LABEL_33;
    }
  LABEL_27:
    v30 = (int*)a2[3];
    if (v30 == (int*)a2[4]) {
      v31 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
    }
    else {
      v31 = *v30;
    }
    if (v31 == -1) {
      a2 = nullptr;
    }
    if (((v29 ^ (v31 == -1)) & 1) == 0) {
      goto LABEL_354;
    }
  LABEL_33:
    v32 = (unsigned __int8)v237[v218];
    if (v32 <= 1) {
      break;
    }
    if (v32 == 2) {
      if (v211 != nullptr || v218 < 2) {
        v76 = (unsigned __int8)v229;
        v77 = v231;
        v216 = v23;
        v78 = v229 & 1;
        if (v78 != 0) {
          v79 = v231;
        }
        else {
          v79 = (char*)&v229 + 4;
        }
        if (v218 != 0) {
          v80 = v79;
          v78 = v229 & 1;
          if ((unsigned __int8)v237[v218 - 1] <= 1u) {
            goto LABEL_156;
          }
          goto LABEL_209;
        }
      }
      else {
        v60 = v237[3] != 0 && v218 == 2;
        v61 = v60;
        if ((a5 & 0x200) == 0 && v61 == 0) {
          v211 = nullptr;
          goto LABEL_16;
        }
        v76 = (unsigned __int8)v229;
        v77 = v231;
        v216 = v23;
        if ((v229 & 1) != 0) {
          v80 = v231;
        }
        else {
          v80 = (char*)&v229 + 4;
        }
        v78 = v229 & 1;
        if ((unsigned __int8)v237[v218 - 1] > 1u) {
          goto LABEL_209;
        }
      LABEL_156:
        v87 = (char*)&v229 + 4;
        v88 = v230;
        if (v78 != 0) {
          v87 = v77;
        }
        else {
          v88 = v76 >> 1;
        }
        if (v80 != &v87[4 * v88]) {
          while (1) {
            v89 = (*(__int64 (**)(__int64, __int64, _QWORD))(
                *(_QWORD*)v213 + 24LL))(v213, 0x2000, *(unsigned int*)v80);
            v76 = (unsigned __int8)v229;
            v77 = v231;
            if ((v89 & 1) == 0) {
              break;
            }
            v90 = (char*)&v229 + 4;
            v91 = v230;
            v78 = v229 & 1;
            v80 += 4;
            if (v78 != 0) {
              v90 = v231;
            }
            else {
              v91 = (unsigned __int64)(unsigned __int8)v229 >> 1;
            }
            if (v80 == &v90[4 * v91]) {
              goto LABEL_200;
            }
          }
          v78 = v229 & 1;
        }
      LABEL_200:
        v107 = v221;
        if (v78 != 0) {
          v79 = v77;
        }
        else {
          v79 = (char*)&v229 + 4;
        }
        v108 = v80 - v79;
        if ((v220 & 1) == 0) {
          v107 = (unsigned __int64)(unsigned __int8)v220 >> 1;
        }
        if (v107 >= v108 >> 2) {
          v109 = (char*)&v220 + 4;
          if ((v220 & 1) != 0) {
            v109 = v222;
          }
          if ((unsigned int)memcmp_plt(&v109[4 * v107 - v108], v79, v108) ==
              0) {
          LABEL_209:
            v79 = v80;
          }
        }
        a8 = v213;
      }
      if (v78 != 0) {
        v110 = v77;
      }
      else {
        v110 = (char*)&v229 + 4;
      }
      v111 = v230;
      if (v78 == 0) {
        v111 = v76 >> 1;
      }
      if (v79 == &v110[4 * v111]) {
        v23 = v216;
      LABEL_247:
        if ((a5 & 0x200) != 0) {
          v124 = v231;
          v125 = (unsigned __int64)(unsigned __int8)v229 >> 1;
          if ((v229 & 1) != 0) {
            v125 = v230;
          }
          else {
            v124 = (char*)&v229 + 4;
          }
          if (v79 != &v124[4 * v125]) {
            goto LABEL_423;
          }
        }
        goto LABEL_16;
      }
      v23 = v216;
      while (2) {
        v113 = (_QWORD*)*a1;
        if (*a1 != 0) {
          v114 = (int*)v113[3];
          if (v114 == (int*)v113[4]) {
            v115 = (*(__int64 (**)(_QWORD*))(*v113 + 72LL))(v113);
          }
          else {
            v115 = *v114;
          }
          if (v115 != -1) {
            v116 = *a1 == 0;
            if (a2 == nullptr) {
            LABEL_227:
              if (v116) {
                goto LABEL_247;
              }
            LABEL_237:
              v119 = *(int**)(*a1 + 24LL);
              if (v119 == *(int**)(*a1 + 32LL)) {
                v120 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
              }
              else {
                v120 = *v119;
              }
              if (v120 != *(_DWORD*)v79) {
                goto LABEL_247;
              }
              v121 = (_QWORD*)*a1;
              v122 = *(_QWORD*)(*a1 + 24LL);
              if (v122 == *(_QWORD*)(*a1 + 32LL)) {
                (*(void (**)(_QWORD*))(*v121 + 80LL))(v121);
              }
              else {
                v121[3] = v122 + 4;
              }
              v123 = (char*)&v229 + 4;
              if ((v229 & 1) != 0) {
                v123 = v231;
              }
              v112 = (unsigned __int64)(unsigned __int8)v229 >> 1;
              v79 += 4;
              if ((v229 & 1) != 0) {
                v112 = v230;
              }
              if (v79 == &v123[4 * v112]) {
                goto LABEL_247;
              }
              continue;
            }
          LABEL_231:
            v117 = (int*)a2[3];
            if (v117 == (int*)a2[4]) {
              v118 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
            }
            else {
              v118 = *v117;
            }
            if (v118 == -1) {
              a2 = nullptr;
            }
            if (v116 == (v118 == -1)) {
              goto LABEL_247;
            }
            goto LABEL_237;
          }
          *a1 = 0;
        }
        break;
      }
      v116 = true;
      if (a2 == nullptr) {
        goto LABEL_227;
      }
      goto LABEL_231;
    }
    if (v32 != 3) {
      if (v32 != 4) {
        goto LABEL_16;
      }
      v33 = 0;
      while (2) {
        v34 = (_QWORD*)*a1;
        if (*a1 != 0) {
          v35 = (int*)v34[3];
          if (v35 == (int*)v34[4]) {
            v36 = (*(__int64 (**)(_QWORD*))(*v34 + 72LL))(v34);
          }
          else {
            v36 = *v35;
          }
          if (v36 != -1) {
            v37 = *a1 == 0;
            if (a2 == nullptr) {
            LABEL_45:
              if (v37) {
                goto LABEL_122;
              }
              goto LABEL_55;
            }
          LABEL_49:
            v38 = (int*)a2[3];
            if (v38 == (int*)a2[4]) {
              v39 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
            }
            else {
              v39 = *v38;
            }
            if (v39 == -1) {
              a2 = nullptr;
            }
            if (v37 == (v39 == -1)) {
            LABEL_122:
              if (v23 != v25 && v33 != 0) {
                if (v25 == v217) {
                  v71 = v217 - v23;
                  v72 = 2 * (v217 - v23);
                  if (v217 == v23) {
                    v72 = 4;
                  }
                  if (v71 >= 0x7FFFFFFFFFFFFFFFLL) {
                    v73 = -1;
                  }
                  else {
                    v73 = v72;
                  }
                  if (v212 == std___1___do_nothing) {
                    v74 = malloc_plt(v73);
                    if (v74 == 0) {
                      goto LABEL_440;
                    }
                    v75 = (char*)v74;
                    memcpy_plt(v74, v23, v71);
                    if (v23 != nullptr) {
                      v212(v23);
                    }
                  }
                  else {
                    v74 = realloc_plt(v23, v73);
                    v75 = (char*)v74;
                    if (v74 == 0) {
                      goto LABEL_440;
                    }
                  }
                  v25 = &v75[v71];
                  v23 = v75;
                  v217 = &v75[v73 & 0xFFFFFFFFFFFFFFFCLL];
                  a8 = v213;
                  v212 = (__int64 (*)(void*))SdkData_e86b48;
                }
                *(_DWORD*)v25 = v33;
                v25 += 4;
              }
              if (v219 >= 1) {
                v129 = (_QWORD*)*a1;
                if (*a1 != 0) {
                  v130 = (int*)v129[3];
                  if (v130 == (int*)v129[4]) {
                    v131 = (*(__int64 (**)(_QWORD*))(*v129 + 72LL))(v129);
                  }
                  else {
                    v131 = *v130;
                  }
                  if (v131 != -1) {
                    v132 = *a1 == 0;
                    if (a2 == nullptr) {
                      goto LABEL_272;
                    }
                  LABEL_276:
                    v133 = (int*)a2[3];
                    if (v133 == (int*)a2[4]) {
                      v134 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
                    }
                    else {
                      v134 = *v133;
                    }
                    if (v134 == -1) {
                      a2 = nullptr;
                    }
                    if (v132 != (v134 == -1)) {
                    LABEL_282:
                      v135 = *(int**)(*a1 + 24LL);
                      if (v135 == *(int**)(*a1 + 32LL)) {
                        v136 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(
                            *a1);
                      }
                      else {
                        v136 = *v135;
                      }
                      if (v136 == v236) {
                        v137 = (_QWORD*)*a1;
                        v138 = *(_QWORD*)(*a1 + 24LL);
                        if (v138 == *(_QWORD*)(*a1 + 32LL)) {
                          (*(void (**)(_QWORD*))(*v137 + 80LL))(v137);
                        }
                        else {
                          v137[3] = v138 + 4;
                        }
                        if (v219 < 1) {
                          goto LABEL_15;
                        }
                        while (2) {
                          v139 = (_QWORD*)*a1;
                          if (*a1 != 0) {
                            v140 = (int*)v139[3];
                            if (v140 == (int*)v139[4]) {
                              v141 = (*(__int64 (**)(_QWORD*))(*v139 + 72LL))(
                                  v139);
                            }
                            else {
                              v141 = *v140;
                            }
                            if (v141 != -1) {
                              v142 = *a1 == 0;
                              if (a2 == nullptr) {
                                goto LABEL_298;
                              }
                            LABEL_302:
                              v143 = (int*)a2[3];
                              if (v143 == (int*)a2[4]) {
                                v144 =
                                    (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
                              }
                              else {
                                v144 = *v143;
                              }
                              if (v144 == -1) {
                                a2 = nullptr;
                              }
                              if (v142 == (v144 == -1)) {
                                goto LABEL_423;
                              }
                              goto LABEL_308;
                            }
                            *a1 = 0;
                          }
                          v142 = true;
                          if (a2 != nullptr) {
                            goto LABEL_302;
                          }
                        LABEL_298:
                          if (v142) {
                            goto LABEL_423;
                          }
                          a2 = nullptr;
                        LABEL_308:
                          v145 = *(unsigned int**)(*a1 + 24LL);
                          if (v145 == *(unsigned int**)(*a1 + 32LL)) {
                            v146 = (*(unsigned int (**)(_QWORD))(*(_QWORD*)*a1 +
                                                                 72LL))(*a1);
                          }
                          else {
                            v146 = *v145;
                          }
                          if (((*(__int64 (**)(__int64, __int64, __int64))(
                                   *(_QWORD*)a8 + 24LL))(a8, 2048, v146) &
                               1) == 0) {
                            goto LABEL_423;
                          }
                          v147 = (_DWORD*)*a10;
                          if (*a10 != a11) {
                            v148 = (_QWORD*)*a1;
                            v149 = *(int**)(*a1 + 24LL);
                            if (v149 != *(int**)(*a1 + 32LL)) {
                              goto LABEL_314;
                            }
                          LABEL_327:
                            v162 =
                                (*(__int64 (**)(_QWORD*))(*v148 + 72LL))(v148);
                            v151 = a10;
                            v150 = v162;
                            v148 = (_QWORD*)*a1;
                            v147 = (_DWORD*)*a10;
                            goto LABEL_328;
                          }
                          v152 = (void*)*a9;
                          v153 = a11 - *a9;
                          if (a11 == *a9) {
                            v154 = 4;
                            v155 = a10;
                            v156 = a9;
                            if (v153 < 0x7FFFFFFFFFFFFFFFLL) {
                              goto LABEL_320;
                            }
                          LABEL_319:
                            v154 = -1;
                          }
                          else {
                            v154 = 2 * v153;
                            v155 = a10;
                            v156 = a9;
                            if (v153 >= 0x7FFFFFFFFFFFFFFFLL) {
                              goto LABEL_319;
                            }
                          }
                        LABEL_320:
                          v157 = (__int64 (*)(void*))v156[1];
                          if (v157 == std___1___do_nothing) {
                            v158 = malloc_plt(v154);
                            if (v158 == 0) {
                              goto LABEL_439;
                            }
                            v159 = v158;
                            memcpy_plt(v158, v152, v153);
                            v158 = v159;
                            v156 = a9;
                            v155 = a10;
                            *a9 = v158;
                            if (v152 != nullptr) {
                              v157(v152);
                              v158 = *a9;
                            }
                          }
                          else {
                            v158 = realloc_plt(*a9, v154);
                            if (v158 == 0) {
                              goto LABEL_439;
                            }
                            *v156 = v158;
                          }
                          v147 = (_DWORD*)(v158 + v153);
                          v160 = v154 & 0xFFFFFFFFFFFFFFFCLL;
                          v161 = SdkData_e86b48;
                          *v155 = v158 + v153;
                          a8 = v213;
                          v156[1] = v161;
                          a11 = *v156 + v160;
                          v148 = (_QWORD*)*a1;
                          v149 = *(int**)(*a1 + 24LL);
                          if (v149 == *(int**)(*a1 + 32LL)) {
                            goto LABEL_327;
                          }
                        LABEL_314:
                          v150 = *v149;
                          v151 = a10;
                        LABEL_328:
                          *v147 = v150;
                          v163 = v219;
                          *v151 = (__int64)(v147 + 1);
                          v164 = v148[3];
                          v165 = v148[4];
                          v166 = v163 - 1;
                          v219 = v166;
                          if (v164 == v165) {
                            (*(void (**)(_QWORD*))(*v148 + 80LL))(v148);
                            if (v219 <= 0) {
                              goto LABEL_15;
                            }
                          }
                          else {
                            v148[3] = v164 + 4;
                            if (v166 <= 0) {
                              goto LABEL_15;
                            }
                          }
                          continue;
                        }
                      }
                    }
                    goto LABEL_423;
                  }
                  *a1 = 0;
                }
                v132 = true;
                if (a2 != nullptr) {
                  goto LABEL_276;
                }
              LABEL_272:
                if (!v132) {
                  a2 = nullptr;
                  goto LABEL_282;
                }
                goto LABEL_423;
              }
            LABEL_15:
              if (*a10 == *a9) {
                goto LABEL_423;
              }
              goto LABEL_16;
            }
          LABEL_55:
            v40 = *(unsigned int**)(*a1 + 24LL);
            if (v40 == *(unsigned int**)(*a1 + 32LL)) {
              v41 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
            }
            else {
              v41 = *v40;
            }
            if (((*(__int64 (**)(__int64, __int64, _QWORD))(
                     *(_QWORD*)a8 + 24LL))(a8, 2048, v41) &
                 1) == 0) {
              if ((v232 & 1) != 0) {
                v44 = v233;
              }
              else {
                v44 = (unsigned __int64)(unsigned __int8)v232 >> 1;
              }
              if (v44 == 0 || v33 == 0 || v41 != v235) {
                goto LABEL_122;
              }
              if (v25 == v217) {
                v51 = v217 - v23;
                if (v217 == v23) {
                  v52 = 4;
                }
                else {
                  v52 = 2 * (v217 - v23);
                }
                if (v51 >= 0x7FFFFFFFFFFFFFFFLL) {
                  v52 = -1;
                }
                v215 = v23;
                if (v212 == std___1___do_nothing) {
                  v53 = malloc_plt(v52);
                  if (v53 == 0) {
                  LABEL_438:
                    v158 = std___throw_bad_alloc_plt(v53);
                  LABEL_439:
                    v74 = std___throw_bad_alloc_plt(v158);
                  LABEL_440:
                    v207 = std___throw_bad_alloc_plt(v74);
                    SdkRoutine_7cd620_alt1(v207);
                  }
                  v23 = (char*)v53;
                  memcpy_plt(v53, v215, v51);
                  if (v215 != nullptr) {
                    v212(v215);
                  }
                }
                else {
                  v53 = realloc_plt(v23, v52);
                  v23 = (char*)v53;
                  if (v53 == 0) {
                    goto LABEL_438;
                  }
                }
                v217 = &v23[v52 & 0xFFFFFFFFFFFFFFFCLL];
                a8 = v213;
                v212 = (__int64 (*)(void*))SdkData_e86b48;
                *(_DWORD*)&v23[v51] = v33;
                v25 = &v23[v51 + 4];
                v33 = 0;
                v45 = (_QWORD*)*a1;
                v46 = *(_QWORD*)(*a1 + 24LL);
                if (v46 != *(_QWORD*)(*a1 + 32LL)) {
                LABEL_38:
                  v45[3] = v46 + 4;
                  continue;
                }
              }
              else {
                *(_DWORD*)v25 = v33;
                v25 += 4;
                v33 = 0;
                v45 = (_QWORD*)*a1;
                v46 = *(_QWORD*)(*a1 + 24LL);
                if (v46 != *(_QWORD*)(*a1 + 32LL)) {
                  goto LABEL_38;
                }
              }
              goto LABEL_96;
            }
            v42 = (_DWORD*)*a10;
            if (*a10 != a11) {
              v43 = a10;
            LABEL_90:
              *v42 = v41;
              ++v33;
              *v43 = (__int64)(v42 + 1);
              v45 = (_QWORD*)*a1;
              v46 = *(_QWORD*)(*a1 + 24LL);
              if (v46 != *(_QWORD*)(*a1 + 32LL)) {
                goto LABEL_38;
              }
            LABEL_96:
              (*(void (**)(_QWORD*))(*v45 + 80LL))(v45);
              continue;
            }
            v214 = v23;
            v47 = (void*)*a9;
            v48 = a11 - *a9;
            if (a11 == *a9) {
              v49 = 4;
              v50 = a9;
              if (v48 < 0x7FFFFFFFFFFFFFFFLL) {
                goto LABEL_83;
              }
            LABEL_82:
              v49 = -1;
            }
            else {
              v49 = 2 * v48;
              v50 = a9;
              if (v48 >= 0x7FFFFFFFFFFFFFFFLL) {
                goto LABEL_82;
              }
            }
          LABEL_83:
            v54 = (__int64 (*)(void*))v50[1];
            if (v54 == std___1___do_nothing) {
              v53 = malloc_plt(v49);
              if (v53 == 0) {
                goto LABEL_438;
              }
              v56 = v53;
              memcpy_plt(v53, v47, v48);
              v55 = a9;
              *a9 = v56;
              if (v47 != nullptr) {
                v54(v47);
                v55 = a9;
                v56 = *a9;
              }
            }
            else {
              v53 = realloc_plt(*a9, v49);
              if (v53 == 0) {
                goto LABEL_438;
              }
              v55 = a9;
              v56 = v53;
              *a9 = v53;
            }
            v57 = v49 & 0xFFFFFFFFFFFFFFFCLL;
            v43 = a10;
            v55[1] = SdkData_e86b48;
            v42 = (_DWORD*)(v56 + v48);
            a8 = v213;
            v23 = v214;
            *a10 = (__int64)v42;
            a11 = *v55 + v57;
            goto LABEL_90;
          }
          *a1 = 0;
        }
        break;
      }
      v37 = true;
      if (a2 == nullptr) {
        goto LABEL_45;
      }
      goto LABEL_49;
    }
    v62 = (unsigned __int8)v226;
    v63 = v227;
    v64 = v226 & 1;
    if (v64 == 0) {
      v63 = (unsigned __int64)(unsigned __int8)v226 >> 1;
    }
    if (v63 != 0) {
      v65 = *(int**)(*a1 + 24LL);
      if (v65 == *(int**)(*a1 + 32LL)) {
        v66 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
        v62 = (unsigned __int8)v226;
        v64 = v226 & 1;
      }
      else {
        v66 = *v65;
      }
      v92 = v228;
      if (v64 == 0) {
        v92 = (_DWORD*)&v226 + 1;
      }
      if (v66 == *v92) {
        v93 = (_QWORD*)*a1;
        v94 = *(_QWORD*)(*a1 + 24LL);
        if (v94 == *(_QWORD*)(*a1 + 32LL)) {
          (*(void (**)(_QWORD*))(*v93 + 80LL))(v93);
          v62 = (unsigned __int8)v226;
          v64 = v226 & 1;
        }
        else {
          v93[3] = v94 + 4;
        }
        v105 = v62 >> 1;
        v60 = v64 == 0;
        v106 = (unsigned __int8*)&v226;
        *a7 = false;
        if (!v60) {
          v105 = v227;
        }
      LABEL_257:
        v127 = v105 > 1;
        v128 = v211;
        if (v127) {
          v128 = v106;
        }
        v211 = v128;
        goto LABEL_16;
      }
    }
    v95 = (unsigned __int8)v223;
    v96 = v224;
    v97 = v223 & 1;
    if (v97 == 0) {
      v96 = (unsigned __int64)(unsigned __int8)v223 >> 1;
    }
    if (v96 != 0) {
      v98 = *(int**)(*a1 + 24LL);
      if (v98 == *(int**)(*a1 + 32LL)) {
        v99 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
        v95 = (unsigned __int8)v223;
        v97 = v223 & 1;
      }
      else {
        v99 = *v98;
      }
      v100 = v225;
      if (v97 == 0) {
        v100 = (_DWORD*)&v223 + 1;
      }
      if (v99 == *v100) {
        v101 = (_QWORD*)*a1;
        v102 = *(_QWORD*)(*a1 + 24LL);
        if (v102 == *(_QWORD*)(*a1 + 32LL)) {
          (*(void (**)(_QWORD*))(*v101 + 80LL))(v101);
          v95 = (unsigned __int8)v223;
          v97 = v223 & 1;
        }
        else {
          v101[3] = v102 + 4;
        }
        v126 = v95 >> 1;
        *a7 = true;
        v105 = v224;
        if (v97 == 0) {
          v105 = v126;
        }
        v106 = (unsigned __int8*)&v223;
        goto LABEL_257;
      }
      v62 = (unsigned __int8)v226;
    }
    if ((v62 & 1) != 0) {
      v103 = v227;
    }
    else {
      v103 = v62 >> 1;
    }
    if ((v95 & 1) != 0) {
      v104 = v224;
    }
    else {
      v104 = v95 >> 1;
    }
    if (v103 != 0) {
      if (v104 != 0) {
        goto LABEL_423;
      }
    }
    else if (v104 == 0) {
      goto LABEL_16;
    }
    *a7 = v103 != 0;
  LABEL_16:
    if (++v218 == 4) {
      goto LABEL_354;
    }
  }
  if (v237[v218] == 0) {
    if (v218 == 3) {
      goto LABEL_354;
    }
    v67 = (_QWORD*)*a1;
    v68 = true;
    if (*a1 != 0) {
      goto LABEL_120;
    }
    while (1) {
      if (a2 != nullptr) {
        v168 = (int*)a2[3];
        if (v168 == (int*)a2[4]) {
          v169 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
        }
        else {
          v169 = *v168;
        }
        if (v169 == -1) {
          a2 = nullptr;
        }
        if (v68 == (v169 == -1)) {
          goto LABEL_16;
        }
      }
      else if (v68) {
        goto LABEL_16;
      }
      v170 = *(unsigned int**)(*a1 + 24LL);
      if (v170 == *(unsigned int**)(*a1 + 32LL)) {
        v171 = (*(unsigned int (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
      }
      else {
        v171 = *v170;
      }
      if (((*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a8 + 24LL))(
               a8, 0x2000, v171) &
           1) == 0) {
        goto LABEL_16;
      }
      v172 = (_QWORD*)*a1;
      v173 = *(int**)(*a1 + 24LL);
      if (v173 == *(int**)(*a1 + 32LL)) {
        v83 = (*(__int64 (**)(_QWORD*))(*v172 + 80LL))(v172);
      }
      else {
        v83 = *v173;
        v172[3] = v173 + 1;
      }
      v84 = (unsigned __int8)v220;
      if ((v220 & 1) != 0) {
        break;
      }
      v85 = 4;
      if ((unsigned __int8)v220 == 8) {
      LABEL_151:
        SdkRoutine_87cb20(&v220, v85, 1, v85, v85, 0, 0);
        v86 = v85;
      LABEL_331:
        v221 = v86 + 1;
        v167 = &v222[4 * v86];
        *(_DWORD*)v167 = v83;
        *((_DWORD*)v167 + 1) = 0;
        v67 = (_QWORD*)*a1;
        v68 = true;
        if (*a1 != 0) {
          goto LABEL_120;
        }
      }
      else {
      LABEL_350:
        LOBYTE(v220) = v84 + 2;
        v174 = (_DWORD*)&v220 + (v84 >> 1) + 1;
        *v174 = v83;
        v174[1] = 0;
        v67 = (_QWORD*)*a1;
        v68 = true;
        if (*a1 != 0) {
        LABEL_120:
          v69 = (int*)v67[3];
          if (v69 == (int*)v67[4]) {
            v70 = (*(__int64 (**)(_QWORD*))(*v67 + 72LL))(v67);
          }
          else {
            v70 = *v69;
          }
          if (v70 == -1) {
            *a1 = 0;
          }
          else {
            v68 = *a1 == 0;
          }
        }
      }
    }
    v86 = v221;
    v85 = (v220 & 0xFFFFFFFFFFFFFFFELL) - 1;
    if (v221 != v85) {
      goto LABEL_331;
    }
    goto LABEL_151;
  }
  if (v32 != 1) {
    goto LABEL_16;
  }
  if (v218 != 3) {
    v58 = *(unsigned int**)(*a1 + 24LL);
    if (v58 == *(unsigned int**)(*a1 + 32LL)) {
      v59 = (*(unsigned int (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
    }
    else {
      v59 = *v58;
    }
    if (((*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a8 + 24LL))(
             a8, 0x2000, v59) &
         1) == 0) {
      goto LABEL_423;
    }
    v81 = (_QWORD*)*a1;
    v82 = *(int**)(*a1 + 24LL);
    if (v82 == *(int**)(*a1 + 32LL)) {
      v83 = (*(__int64 (**)(_QWORD*))(*v81 + 80LL))(v81);
      v84 = (unsigned __int8)v220;
      if ((v220 & 1) == 0) {
        goto LABEL_147;
      }
    }
    else {
      v83 = *v82;
      v81[3] = v82 + 1;
      v84 = (unsigned __int8)v220;
      if ((v220 & 1) == 0) {
      LABEL_147:
        if ((_DWORD)v84 != 8) {
          goto LABEL_350;
        }
        v85 = 4;
        goto LABEL_151;
      }
    }
    v86 = v221;
    v85 = (v220 & 0xFFFFFFFFFFFFFFFELL) - 1;
    if (v221 != v85) {
      goto LABEL_331;
    }
    goto LABEL_151;
  }
LABEL_354:
  if (v211 != nullptr) {
    v175 = *v211;
    v176 = (v175 & 1) != 0 ? *((_QWORD*)v211 + 1) : v175 >> 1;
    if (v176 >= 2) {
      v177 = 2;
      v178 = 1;
      v179 = v25;
      do {
        v182 = (_QWORD*)*a1;
        if (*a1 != 0) {
          v183 = (int*)v182[3];
          if (v183 == (int*)v182[4]) {
            v184 = (*(__int64 (**)(_QWORD*))(*v182 + 72LL))(v182);
          }
          else {
            v184 = *v183;
          }
          if (v184 != -1) {
            v185 = *a1 == 0;
            if (a2 != nullptr) {
              goto LABEL_375;
            }
            goto LABEL_371;
          }
          *a1 = 0;
        }
        v185 = true;
        if (a2 != nullptr) {
        LABEL_375:
          v186 = (int*)a2[3];
          if (v186 == (int*)a2[4]) {
            v187 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
          }
          else {
            v187 = *v186;
          }
          if (v187 == -1) {
            a2 = nullptr;
          }
          if (v185 == (v187 == -1)) {
            goto LABEL_423;
          }
          goto LABEL_381;
        }
      LABEL_371:
        if (v185) {
          goto LABEL_423;
        }
        a2 = nullptr;
      LABEL_381:
        v188 = *(int**)(*a1 + 24LL);
        if (v188 == *(int**)(*a1 + 32LL)) {
          v189 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
        }
        else {
          v189 = *v188;
        }
        if ((*v211 & 1) != 0) {
          if (v189 != *(_DWORD*)(*((_QWORD*)v211 + 2) + 4 * v178)) {
            goto LABEL_423;
          }
        }
        else if (v189 != *(_DWORD*)&v211[4 * v178 + 4]) {
          goto LABEL_423;
        }
        v190 = (_QWORD*)*a1;
        v191 = *(_QWORD*)(*a1 + 24LL);
        if (v191 == *(_QWORD*)(*a1 + 32LL)) {
          (*(void (**)(_QWORD*))(*v190 + 80LL))(v190);
        }
        else {
          v190[3] = v191 + 4;
        }
        v180 = *v211;
        v178 = v177++;
        v25 = v179;
        if ((v180 & 1) != 0) {
          v181 = *((_QWORD*)v211 + 1);
        }
        else {
          v181 = v180 >> 1;
        }
      } while (v181 > v178);
    }
  }
  if (v23 == v25) {
    v193 = 1;
  }
  else {
    v194 = v233;
    v193 = 1;
    if ((v232 & 1) == 0) {
      v194 = (unsigned __int64)(unsigned __int8)v232 >> 1;
    }
    if (v25 - v23 >= 5 && v194 != 0) {
      v195 = v25 - 4;
      if (v23 < v25 - 4) {
        v196 = v23 + 4;
        v197 = v25 - 4;
        do {
          v198 = *((_DWORD*)v196 - 1);
          *((_DWORD*)v196 - 1) = *(_DWORD*)v197;
          *(_DWORD*)v197 = v198;
          v197 -= 4;
          v199 = v196 >= v197;
          v196 += 4;
        } while (!v199);
        v200 = (unsigned __int64)(unsigned __int8)v232 >> 1;
        if ((v232 & 1) != 0) {
          v201 = v234;
        }
        else {
          v201 = (char*)&v232 + 1;
        }
        if ((v232 & 1) != 0) {
          v200 = v233;
        }
        v202 = v23;
        v203 = &v201[v200];
        while (1) {
          v204 = (unsigned __int8)*v201;
          if (*v201 != 0 && v204 != 255 && *(_DWORD*)v202 != v204) {
            goto LABEL_423;
          }
          v202 += 4;
          if (v203 - v201 > 1) {
            ++v201;
          }
          if (v202 >= v195) {
            goto LABEL_420;
          }
        }
      }
      v201 = (v232 & 1) != 0 ? v234 : (char*)&v232 + 1;
    LABEL_420:
      v205 = (unsigned __int8)*v201;
      v193 = 1;
      if (v205 != 0 && v205 != 255 && *(_DWORD*)v195 - 1 >= v205) {
      LABEL_423:
        v193 = 0;
        *v208 |= 4u;
      }
    }
  }
  if ((v220 & 1) == 0) {
    if ((v223 & 1) == 0) {
      goto LABEL_426;
    }
  LABEL_432:
    SdkRoutine_857220(v225, (4 * v223) & 0xFFFFFFFFFFFFFFF8LL);
    if ((v226 & 1) != 0) {
      goto LABEL_433;
    }
  LABEL_427:
    if ((v229 & 1) == 0) {
      goto LABEL_428;
    }
  LABEL_434:
    SdkRoutine_857220(v231, (4 * v229) & 0xFFFFFFFFFFFFFFF8LL);
    if ((v232 & 1) != 0) {
      goto LABEL_435;
    }
  LABEL_429:
    if (v23 == nullptr) {
      return v193;
    }
  LABEL_436:
    v212(v23);
    return v193;
  }
  SdkRoutine_857220(v222, (4 * v220) & 0xFFFFFFFFFFFFFFF8LL);
  if ((v223 & 1) != 0) {
    goto LABEL_432;
  }
LABEL_426:
  if ((v226 & 1) == 0) {
    goto LABEL_427;
  }
LABEL_433:
  SdkRoutine_857220(v228, (4 * v226) & 0xFFFFFFFFFFFFFFF8LL);
  if ((v229 & 1) != 0) {
    goto LABEL_434;
  }
LABEL_428:
  if ((v232 & 1) == 0) {
    goto LABEL_429;
  }
LABEL_435:
  SdkRoutine_857220(v234, v232 & 0xFFFFFFFFFFFFFFFELL);
  if (v23 != nullptr) {
    goto LABEL_436;
  }
  return v193;
}

void __attribute__((noreturn)) locale_80f6c8(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_80f6cc(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn))

locale_80f6d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
              __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
              __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
              __int64 a16, __int64 a17, __int64 a18, void (*a19)(__int64),
              __int64 a20, __int64 a21, __int64 a22, __int64 a23, __int64 a24,
              __int64 a25, __int64 a26, __int64 a27, __int64 a28, __int64 a29,
              __int64 a30, __int64 a31, __int64 a32, __int64 a33, __int64 a34,
              __int64 a35, __int64 a36, __int64 a37, __int64 a38, __int64 a39,
              __int64 a40, __int64 a41)
{
  __int64 v41;

  if ((a27 & 1) != 0) {
    SdkRoutine_857220(a29, (4 * a27) & 0xFFFFFFFFFFFFFFF8LL);
    if ((a30 & 1) == 0) {
    LABEL_3:
      if ((a33 & 1) == 0) {
        goto LABEL_4;
      }
      goto LABEL_10;
    }
  }
  else if ((a30 & 1) == 0) {
    goto LABEL_3;
  }
  SdkRoutine_857220(a32, (4 * a30) & 0xFFFFFFFFFFFFFFF8LL);
  if ((a33 & 1) == 0) {
  LABEL_4:
    if ((a36 & 1) == 0) {
      goto LABEL_5;
    }
    goto LABEL_11;
  }
LABEL_10:
  SdkRoutine_857220(a35, (4 * a33) & 0xFFFFFFFFFFFFFFF8LL);
  if ((a36 & 1) == 0) {
  LABEL_5:
    if ((a39 & 1) == 0) {
      goto LABEL_6;
    }
    goto LABEL_12;
  }
LABEL_11:
  SdkRoutine_857220(a38, (4 * a36) & 0xFFFFFFFFFFFFFFF8LL);
  if ((a39 & 1) == 0) {
  LABEL_6:
    if (v41 == 0) {
    LABEL_14:
      _Unwind_Resume_plt_alt1(a1);
      SdkRoutine_7cd620();
    }
  LABEL_13:
    a19(v41);
    goto LABEL_14;
  }
LABEL_12:
  SdkRoutine_857220(a41, a39 & 0xFFFFFFFFFFFFFFFELL);
  if (v41 == 0) {
    goto LABEL_14;
  }
  goto LABEL_13;
}

_QWORD* std___1_money_get_do_get_80f820(__int64 a1, _QWORD* a2, _QWORD* a3,
                                        char a4, __int64 a5, _DWORD* a6,
                                        unsigned __int8* a7)
{
  __int64 v12;
  void(__attribute__((noreturn)) * v13)();
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  unsigned __int64 v19;
  int v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int8* v23;
  unsigned __int8* v24;
  int v25;
  char* i;
  int* v27;
  int v28;
  _BOOL4 v29;
  int* v30;
  int v31;
  _QWORD* v32;
  char* v33;
  __int64 v35;
  __int64 v36;
  struct {
    char* v37;
    void (*v38)(void);
  } v37_;
  char v39;
  _QWORD* v40;
  void(__attribute__((noreturn)) * v41)();
  void(__attribute__((noreturn)) * **v42)();
  void(__attribute__((noreturn)) * *v43)();

  v40 = a2;
  v37_.v37 = &v39;
  v37_.v38 = (void (*)(void))std___1___do_nothing;
  std___1_ios_base_getloc_plt((void*)(&v35), a5);
  v12 = v35;
  v13 = SdkData_e89480[0];
  v41 = SdkData_e89480[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89480[0],
                           memory_order_acquire) != -1) {
    v43 = &v41;
    v42 = &v43;
    std___1___call_once_plt(SdkData_e89480[0], &v42, SdkRoutine_82f0b0);
  }
  v14 = *(_QWORD*)(v12 + 16);
  v15 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v13 + 4) - 1LL;
  if (v15 >= (*(_QWORD*)(v12 + 24) - v14) >> 3 ||
      (v16 = *(_QWORD*)(v14 + 8 * v15)) == 0) {
    locale_7f6090();
  }
  v17 = *(unsigned int*)(a5 + 8);
  LOBYTE(v43) = 0;
  if ((SdkRoutine_87d140(&v40, a3, a4 & 1, &v35, v17, a6, &v43, v16, &v37_.v37,
                         &v36, &v40) &
       1) != 0) {
    if ((*a7 & 1) != 0) {
      **((_DWORD**)a7 + 2) = 0;
      *((_QWORD*)a7 + 1) = 0;
      if ((unsigned __int8)v43 != 1) {
      LABEL_18:
        v25 =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v16 + 88LL))(v16, 48);
        for (i = v37_.v37; (unsigned __int64)i < v36 - 4; i += 4) {
          if (*(_DWORD*)i != v25) {
            break;
          }
        }
        locale_80fb50(a7, (unsigned __int64)i, v36);
        goto LABEL_22;
      }
    }
    else {
      *((_DWORD*)a7 + 1) = 0;
      *a7 = 0;
      if ((unsigned __int8)v43 != 1) {
        goto LABEL_18;
      }
    }
    v18 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v16 + 88LL))(v16, 45);
    v19 = *a7;
    v20 = v18;
    if ((v19 & 1) != 0) {
      v22 = *((_QWORD*)a7 + 1);
      v21 = (*(_QWORD*)a7 & 0xFFFFFFFFFFFFFFFELL) - 1;
      if (v22 != v21) {
      LABEL_15:
        v23 = *((unsigned __int8**)a7 + 2);
        *((_QWORD*)a7 + 1) = v22 + 1;
      LABEL_17:
        v24 = &v23[4 * v22];
        *(_DWORD*)v24 = v20;
        *((_DWORD*)v24 + 1) = 0;
        goto LABEL_18;
      }
    }
    else {
      if ((_DWORD)v19 != 8) {
        v22 = v19 >> 1;
        *a7 = v19 + 2;
        v23 = a7 + 4;
        goto LABEL_17;
      }
      v21 = 4;
    }
    SdkRoutine_87cb20(a7, v21, 1, v21, v21, 0, 0);
    v22 = v21;
    goto LABEL_15;
  }
LABEL_22:
  if (v40 != nullptr) {
    v27 = (int*)v40[3];
    if (v27 == (int*)v40[4]) {
      v28 = (*(__int64 (**)(_QWORD*))(*v40 + 72LL))(v40);
    }
    else {
      v28 = *v27;
    }
    if (v28 != -1) {
      v29 = v40 == nullptr;
      if (a3 == nullptr) {
        goto LABEL_28;
      }
    LABEL_32:
      v30 = (int*)a3[3];
      if (v30 == (int*)a3[4]) {
        v31 = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
      }
      else {
        v31 = *v30;
      }
      if (((v29 ^ (v31 == -1)) & 1) != 0) {
        goto LABEL_37;
      }
      goto LABEL_36;
    }
    v40 = nullptr;
  }
  v29 = true;
  if (a3 != nullptr) {
    goto LABEL_32;
  }
LABEL_28:
  if (v29) {
  LABEL_36:
    *a6 |= 2u;
  }
LABEL_37:
  v32 = v40;
  std___1_locale_Destroy_locale_plt(&v35);
  v33 = v37_.v37;
  v37_.v37 = nullptr;
  if (v33 != nullptr) {
    v37_.v38();
  }
  return v32;
}

_QWORD* locale_80fb50(_QWORD* a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  int v14;
  char* v15;
  unsigned __int64 v16;
  __int64 v17;
  char* v18;
  unsigned __int64 v19;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char v23;
  char* v24;
  char* v25;
  char* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  unsigned __int64 v37;
  __int64 v38;
  char* v40;
  __int64 v41;
  __int64 v42;
  char* v43;

  v3 = *a1;
  v4 = a1[1];
  v5 = *(unsigned __int8*)a1;
  v7 = v5 >> 1;
  v8 = (v5 & 1) == 0;
  v9 = 4;
  v10 = (*a1 & 0xFFFFFFFFFFFFFFFELL) - 1;
  if (v8) {
    v11 = v7;
  }
  else {
    v11 = a1[1];
  }
  if (!v8) {
    v9 = (*a1 & 0xFFFFFFFFFFFFFFFELL) - 1;
  }
  v12 = a3 - a2;
  if (a3 != a2) {
    v13 = (char*)a1[2];
    v14 = v3 & 1;
    v15 = (char*)a1 + 4;
    v16 = v12 >> 2;
    if ((v3 & 1) != 0) {
      v17 = a1[1];
    }
    else {
      v17 = (unsigned __int8)v3 >> 1;
    }
    if ((v3 & 1) != 0) {
      v18 = (char*)a1[2];
    }
    else {
      v18 = (char*)a1 + 4;
    }
    v19 = (unsigned __int64)&v18[4 * v17 + 4];
    if (a2 < (unsigned __int64)v18 || a2 >= v19) {
      v21 = v11 + v16;
      if (v9 - v11 < v16) {
        v22 = a2;
        SdkRoutine_87cb20(a1, v9, v21 - v9, v11, v11, 0, 0);
        v23 = *(_BYTE*)a1;
        v13 = (char*)a1[2];
        a2 = v22;
        a1[1] = v11;
        v14 = v23 & 1;
      }
      if (v14 != 0) {
        v24 = v13;
      }
      else {
        v24 = (char*)a1 + 4;
      }
      v25 = &v24[4 * v11];
      memmove_plt(v25, a2, v12);
      *(_DWORD*)&v25[v12] = 0;
      if ((*(_BYTE*)a1 & 1) != 0) {
        a1[1] = v21;
      }
      else {
        *(_BYTE*)a1 = 2 * v21;
      }
    }
    else {
      if (v16 >= 0x3FFFFFFFFFFFFFF6LL) {
        locale_7d3920();
      }
      if (v16 > 4) {
        v40 = (char*)a1 + 4;
        v27 = a2;
        if ((v16 | 1) == 5) {
          v28 = 8;
        }
        else {
          v28 = (v16 | 1) + 1;
        }
        v29 = SdkRoutine_85e050(4 * v28);
        v30 = v28 | 1;
        v15 = v40;
        a2 = v27;
        v26 = (char*)v29;
        v42 = v12 >> 2;
        v43 = (char*)v29;
        v41 = v30;
      }
      else {
        LOBYTE(v41) = ((unsigned int)v12 >> 1) & 0xFE;
        v26 = (char*)&v41 + 4;
      }
      memcpy_plt(v26, a2, v12);
      *(_DWORD*)&v26[v12] = 0;
      v31 = v41 & 1;
      if (v31 != 0) {
        v32 = v42;
      }
      else {
        v32 = (unsigned __int64)(unsigned __int8)v41 >> 1;
      }
      if ((v41 & 1) != 0) {
        v33 = v43;
      }
      else {
        v33 = (char*)&v41 + 4;
      }
      if ((v3 & 1) != 0) {
        v34 = v10;
      }
      else {
        v34 = 4;
      }
      if ((v3 & 1) != 0) {
        v35 = v4;
      }
      else {
        v35 = (unsigned __int8)v3 >> 1;
      }
      if (v34 - v35 >= v32) {
        if (v32 != 0) {
          if ((v3 & 1) != 0) {
            v36 = v13;
          }
          else {
            v36 = v15;
          }
          v37 = v32;
          memmove_plt(&v36[4 * v35], v33, 4 * v32);
          v38 = v35 + v37;
          if ((*(_BYTE*)a1 & 1) != 0) {
            a1[1] = v38;
          }
          else {
            *(_BYTE*)a1 = 2 * v38;
          }
          *(_DWORD*)&v36[4 * v38] = 0;
        }
      }
      else {
        SdkRoutine_87cb30(a1, v34, v32 - v34 + v35, v35, v35, 0);
        v31 = v41 & 1;
      }
      if (v31 != 0) {
        SdkRoutine_857220(v43, (4 * v41) & 0xFFFFFFFFFFFFFFF8LL);
      }
    }
  }
  return a1;
}

void __attribute__((noreturn))

locale_80fdbc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
              __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
              __int64 a11, __int64 a12, __int64 a13, __int64 a14)
{
  if ((a12 & 1) != 0) {
    SdkRoutine_857220(a14, (4 * a12) & 0xFFFFFFFFFFFFFFF8LL);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_money_put_do_put_810040(long double a1, __int64 a2, __int64 a3,
                                        char a4, __int64 a5, unsigned int a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  unsigned int v11;
  __int64 v12;
  int v13;
  _BYTE* v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  void(__attribute__((noreturn)) * v18)();
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  char v23;
  int v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  _QWORD* v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  long double v40;
  __int64 v41;
  __int64 v42;
  _QWORD v43[12];
  int v44;
  struct {
    __int64 v45;
    unsigned __int64 v46;
    __int64 v47;
  } v45_;
  struct {
    unsigned __int64 v48;
    unsigned __int64 v49;
    __int64 v50;
  } v48_;
  struct {
    _QWORD v51[2];
    __int64 v52;
  } v51_;
  char v53[4];
  char v54[4];
  _BYTE v55[4];
  __int64 v56;
  char v57;
  _BYTE* v58;
  _BYTE v59[108];

  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v40 = a1;
  v58 = v59;
  v11 = snprintf_plt((__int64)v59, 0x64u, "%.0Lf", a1),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v11 >= 0x64) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1060b80,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_plt_alt1((__int64)&SdkData_1060b80) != 0) {
      SdkData_1060b78 = newlocale_plt_alt1(255, (__int64)"C", 0),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      __cxa_guard_release_plt_alt1((__int64)&SdkData_1060b80),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    v12 = std___1___libcpp_asprintf_l((__int64)&v58, SdkData_1060b78,
                                      (__int64)"%.0Lf", v40),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v13 = v12;
    if ((_DWORD)v12 == -1) {
      v15 = std___throw_bad_alloc_plt(v12),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    else {
      v14 = v58;
      v15 = malloc_plt_alt1((int)v12),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v15 != 0) {
        v6 = v15;
        v16 = (char*)v15;
        goto LABEL_7;
      }
    }
    v33 = std___throw_bad_alloc_plt(v15),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    goto LABEL_50;
  }
  v16 = &v57;
  v13 = v11;
  v6 = 0;
  v14 = nullptr;
LABEL_7:
  v39 = a3;
  *(_QWORD*)&v40 = v14;
  std___1_ios_base_getloc_plt((void*)(&v56), a5),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v17 = v56;
  v18 = SdkData_e89440[0];
  v48_.v48 = (unsigned __int64)SdkData_e89440[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89440[0],
                           memory_order_acquire) != -1) {
    v43[0] = &v48_.v48;
    v51_.v51[0] = v43;
    std___1___call_once_plt_alt1((__int64)SdkData_e89440[0], (__int64)v51_.v51,
                                 (__int64)SdkRoutine_82f0b0),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v19 = *(_QWORD*)(v17 + 16);
  v20 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v18 + 4) - 1LL;
  if (v20 >= (*(_QWORD*)(v17 + 24) - v19) >> 3 ||
      (v21 = *(_QWORD*)(v19 + 8 * v20)) == 0) {
    locale_7f6090(),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v22 = v13;
  (*(void (**)(__int64, _BYTE*, _BYTE*, char*))(*(_QWORD*)v21 + 64LL))(
      v21, v58, &v58[v13], v16),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v23 = v13 >= 1 && *v58 == 45;
  v51_.v51[1] = 0;
  v51_.v52 = 0;
  v48_.v50 = 0;
  v51_.v51[0] = 0;
  v48_.v48 = 0;
  v48_.v49 = 0;
  v45_.v46 = 0;
  v45_.v47 = 0;
  v45_.v45 = 0;
  SdkRoutine_87d160(a4 & 1, v23, (__int64)&v56, (__int64)v55, (__int64)v54,
                    (__int64)v53, (__int64)v51_.v51, (__int64)&v48_.v48,
                    (__int64)&v45_.v45, (__int64)&v44),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v24 = v44;
  if (v13 <= v44) {
    if ((v45_.v45 & 1) != 0) {
      v30 = v45_.v46;
    }
    else {
      v30 = (unsigned __int64)(unsigned __int8)v45_.v45 >> 1;
    }
    v31 = v44 + v30;
    if ((v48_.v48 & 1) != 0) {
      v32 = v48_.v49;
    }
    else {
      v32 = (unsigned __int64)(unsigned __int8)v48_.v48 >> 1;
    }
    v27 = v31 + v32 + 2;
    if (v27 < 0x65) {
      goto LABEL_22;
    }
  }
  else {
    if ((v45_.v45 & 1) != 0) {
      v25 = v45_.v46;
    }
    else {
      v25 = (unsigned __int64)(unsigned __int8)v45_.v45 >> 1;
    }
    if ((v48_.v48 & 1) != 0) {
      v26 = v48_.v49;
    }
    else {
      v26 = (unsigned __int64)(unsigned __int8)v48_.v48 >> 1;
    }
    v27 = v44 + 2 * (v13 - (__int64)v44) + v25 + v26 + 1;
    if (v27 < 0x65) {
    LABEL_22:
      v28 = v43;
      v29 = 0;
      goto LABEL_31;
    }
  }
  v33 = malloc_plt_alt1(v27),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v29 = v33;
  v28 = (_QWORD*)v33;
  if (v33 == 0) {
  LABEL_50:
    v36 = std___throw_bad_alloc_plt(v33),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    __cxa_guard_abort_plt_alt1((__int64)&SdkData_1060b80),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    _Unwind_Resume_plt_alt2(v36),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v38 = v37;
    if ((v45_.v45 & 1) != 0) {
      SdkRoutine_857220_alt1(v45_.v47, v45_.v45 & 0xFFFFFFFFFFFFFFFELL),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if ((v48_.v48 & 1) == 0) {
      LABEL_52:
        if ((v51_.v51[0] & 1) == 0) {
        LABEL_57:
          std___1_locale_Destroy_locale_plt_alt1((__int64)&v56),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          if (v6 != 0) {
            goto LABEL_60;
          }
          while (*(_QWORD*)&v40 == 0) {
            _Unwind_Resume_plt_alt2(v38),
                v37 =
                    COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          LABEL_60:
            free_plt_alt1(v6),
                v37 =
                    COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          }
          free_plt_alt1(*(__int64*)&v40),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          _Unwind_Resume_plt_alt2(v38),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          __udf(0);
        }
      LABEL_56:
        SdkRoutine_857220_alt1(v51_.v52, v51_.v51[0] & 0xFFFFFFFFFFFFFFFELL),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        goto LABEL_57;
      }
    }
    else if ((v48_.v48 & 1) == 0) {
      goto LABEL_52;
    }
    SdkRoutine_857220_alt1(v48_.v50, v48_.v48 & 0xFFFFFFFFFFFFFFFELL),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if ((v51_.v51[0] & 1) == 0) {
      goto LABEL_57;
    }
    goto LABEL_56;
  }
LABEL_31:
  SdkRoutine_87d170((__int64)v28, (__int64)&v42, (__int64)&v41,
                    *(_DWORD*)(a5 + 8), (__int64)v16, (__int64)&v16[v22], v21,
                    v23, (__int64)v55, v54[0], v53[0], (__int64)v51_.v51,
                    (__int64)&v48_.v48, (__int64)&v45_.v45, v24),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v34 = SdkRoutine_810f00_alt1(v39, (__int64)v28, v42, v41, a5, (void*)a6),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v29 != 0) {
    free_plt_alt1(v29),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if ((v45_.v45 & 1) != 0) {
    SdkRoutine_857220_alt1(v45_.v47, v45_.v45 & 0xFFFFFFFFFFFFFFFELL),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if ((v48_.v48 & 1) == 0) {
    LABEL_35:
      if ((v51_.v51[0] & 1) == 0) {
        goto LABEL_36;
      }
      goto LABEL_43;
    }
  }
  else if ((v48_.v48 & 1) == 0) {
    goto LABEL_35;
  }
  SdkRoutine_857220_alt1(v48_.v50, v48_.v48 & 0xFFFFFFFFFFFFFFFELL),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((v51_.v51[0] & 1) == 0) {
  LABEL_36:
    std___1_locale_Destroy_locale_plt_alt1((__int64)&v56),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (v6 == 0) {
      goto LABEL_38;
    }
    goto LABEL_37;
  }
LABEL_43:
  SdkRoutine_857220_alt1(v51_.v52, v51_.v51[0] & 0xFFFFFFFFFFFFFFFELL),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  std___1_locale_Destroy_locale_plt_alt1((__int64)&v56),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v6 != 0) {
  LABEL_37:
    free_plt_alt1(v6),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
LABEL_38:
  if (*(_QWORD*)&v40 != 0) {
    free_plt_alt1(*(__int64*)&v40),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  return v34;
}

void __attribute__((noreturn)) locale_811078(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12)
{
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_money_put_do_put_8110a0(__int64 a1, __int64 a2, char a3,
                                        __int64 a4, unsigned int a5,
                                        unsigned __int8* a6)
{
  __int64 v11;
  void(__attribute__((noreturn)) * v12)();
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int8* v18;
  int v19;
  char v20;
  unsigned __int64 v21;
  int v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned int v27;
  _QWORD* v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD v42[12];
  int v43;
  struct {
    __int64 v44;
    unsigned __int64 v45;
    __int64 v46;
  } v44_;
  struct {
    unsigned __int64 v47;
    unsigned __int64 v48;
    __int64 v49;
  } v47_;
  struct {
    _QWORD v50[2];
    __int64 v51;
  } v50_;
  char v52[4];
  char v53[4];
  _BYTE v54[4];
  _QWORD v55[2];

  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  std___1_ios_base_getloc_plt((void*)(v55), a4),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v11 = v55[0];
  v12 = SdkData_e89440[0];
  v47_.v47 = (unsigned __int64)SdkData_e89440[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89440[0],
                           memory_order_acquire) != -1) {
    v42[0] = &v47_.v47;
    v50_.v50[0] = v42;
    std___1___call_once_plt_alt1((__int64)SdkData_e89440[0], (__int64)v50_.v50,
                                 (__int64)SdkRoutine_82f0b0),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v13 = *(_QWORD*)(v11 + 16);
  v14 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v12 + 4) - 1LL;
  if (v14 >= (*(_QWORD*)(v11 + 24) - v13) >> 3 ||
      (v15 = *(_QWORD*)(v13 + 8 * v14)) == 0) {
    locale_7f6090(),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v16 = *a6;
  v17 = *((_QWORD*)a6 + 1);
  if ((v16 & 1) == 0) {
    v17 = v16 >> 1;
  }
  if (v17 != 0) {
    if ((v16 & 1) != 0) {
      v18 = *((unsigned __int8**)a6 + 2);
    }
    else {
      v18 = a6 + 1;
    }
    v19 = *v18;
    v20 = v19 == (*(unsigned __int8 (**)(__int64, __int64))(*(_QWORD*)v15 +
                                                            56LL))(v15, 45),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  else {
    v20 = 0;
  }
  v50_.v50[1] = 0;
  v50_.v51 = 0;
  v47_.v49 = 0;
  v50_.v50[0] = 0;
  v47_.v47 = 0;
  v47_.v48 = 0;
  v44_.v45 = 0;
  v44_.v46 = 0;
  v44_.v44 = 0;
  SdkRoutine_87d160(a3 & 1, v20, (__int64)v55, (__int64)v54, (__int64)v53,
                    (__int64)v52, (__int64)v50_.v50, (__int64)&v47_.v47,
                    (__int64)&v44_.v44, (__int64)&v43),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v21 = *a6;
  v22 = v43;
  v39 = a2;
  if ((v21 & 1) != 0) {
    v23 = *((_QWORD*)a6 + 1);
  }
  else {
    v23 = v21 >> 1;
  }
  if (v43 >= (int)v23) {
    if ((v44_.v44 & 1) != 0) {
      v30 = v44_.v45;
    }
    else {
      v30 = (unsigned __int64)(unsigned __int8)v44_.v44 >> 1;
    }
    v31 = v43 + v30;
    if ((v47_.v47 & 1) != 0) {
      v32 = v47_.v48;
    }
    else {
      v32 = (unsigned __int64)(unsigned __int8)v47_.v47 >> 1;
    }
    v26 = v31 + v32 + 2;
    v27 = a5;
    if (v26 < 0x65) {
      goto LABEL_24;
    }
  }
  else {
    if ((v44_.v44 & 1) != 0) {
      v24 = v44_.v45;
    }
    else {
      v24 = (unsigned __int64)(unsigned __int8)v44_.v44 >> 1;
    }
    if ((v47_.v47 & 1) != 0) {
      v25 = v47_.v48;
    }
    else {
      v25 = (unsigned __int64)(unsigned __int8)v47_.v47 >> 1;
    }
    v26 = v43 + 2 * (v23 - v43) + v24 + v25 + 1;
    v27 = a5;
    if (v26 < 0x65) {
    LABEL_24:
      v28 = v42;
      v29 = 0;
      goto LABEL_33;
    }
  }
  v29 = malloc_plt_alt1(v26),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v28 = (_QWORD*)v29;
  if (v29 == 0) {
    v36 = std___throw_bad_alloc_plt(0),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if ((v44_.v44 & 1) != 0) {
      goto LABEL_51;
    }
  LABEL_48:
    if ((v47_.v47 & 1) != 0) {
      while (1) {
        SdkRoutine_857220_alt1(v47_.v49, v47_.v47 & 0xFFFFFFFFFFFFFFFELL),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if ((v50_.v50[0] & 1) != 0) {
          break;
        }
      LABEL_50:
        std___1_locale_Destroy_locale_plt_alt1((__int64)v55),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        _Unwind_Resume_plt_alt2(v36),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        free_plt_alt1(0),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if ((v44_.v44 & 1) == 0) {
          goto LABEL_48;
        }
      LABEL_51:
        SdkRoutine_857220_alt1(v44_.v46, v44_.v44 & 0xFFFFFFFFFFFFFFFELL),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if ((v47_.v47 & 1) == 0) {
          goto LABEL_49;
        }
      }
    }
    else {
    LABEL_49:
      if ((v50_.v50[0] & 1) == 0) {
        goto LABEL_50;
      }
    }
    SdkRoutine_857220_alt1(v50_.v51, v50_.v50[0] & 0xFFFFFFFFFFFFFFFELL),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    std___1_locale_Destroy_locale_plt_alt1((__int64)v55),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    _Unwind_Resume_plt_alt2(v36),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v38 = v37;
    std___1_locale_Destroy_locale_plt_alt1((__int64)v55),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    _Unwind_Resume_plt_alt2(v38),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    __udf(0);
  }
LABEL_33:
  if ((v21 & 1) != 0) {
    v33 = *((_QWORD*)a6 + 2);
  }
  else {
    v33 = (__int64)(a6 + 1);
  }
  SdkRoutine_87d170((__int64)v28, (__int64)&v41, (__int64)&v40,
                    *(_DWORD*)(a4 + 8), v33, v33 + v23, v15, v20, (__int64)v54,
                    v53[0], v52[0], (__int64)v50_.v50, (__int64)&v47_.v47,
                    (__int64)&v44_.v44, v22),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v34 = SdkRoutine_810f00_alt1(v39, (__int64)v28, v41, v40, a4, (void*)v27),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v29 != 0) {
    free_plt_alt1(v29),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if ((v44_.v44 & 1) == 0) {
    if ((v47_.v47 & 1) == 0) {
      goto LABEL_40;
    }
  LABEL_44:
    SdkRoutine_857220_alt1(v47_.v49, v47_.v47 & 0xFFFFFFFFFFFFFFFELL),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if ((v50_.v50[0] & 1) == 0) {
      goto LABEL_42;
    }
    goto LABEL_41;
  }
  SdkRoutine_857220_alt1(v44_.v46, v44_.v44 & 0xFFFFFFFFFFFFFFFELL),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((v47_.v47 & 1) != 0) {
    goto LABEL_44;
  }
LABEL_40:
  if ((v50_.v50[0] & 1) != 0) {
  LABEL_41:
    SdkRoutine_857220_alt1(v50_.v51, v50_.v50[0] & 0xFFFFFFFFFFFFFFFELL),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
LABEL_42:
  std___1_locale_Destroy_locale_plt_alt1((__int64)v55),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  return v34;
}

__int64 std___1_money_put_do_put_811490(long double a1, __int64 a2, __int64 a3,
                                        char a4, __int64 a5, int a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  unsigned int v11;
  __int64 v12;
  int v13;
  _BYTE* v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  void(__attribute__((noreturn)) * v18)();
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  char v23;
  int v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  _QWORD* v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  long double v40;
  __int64 v41;
  __int64 v42;
  _QWORD v43[50];
  int v44;
  struct {
    __int64 v45;
    unsigned __int64 v46;
    __int64 v47;
  } v45_;
  struct {
    void(__attribute__((noreturn)) * v48)();
    unsigned __int64 v49;
    __int64 v50;
  } v48_;
  struct {
    _QWORD v51[2];
    __int64 v52;
  } v51_;
  int v53;
  int v54;
  _BYTE v55[4];
  __int64 v56;
  char v57;
  _BYTE* v58;
  _BYTE v59[108];

  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v40 = a1;
  v58 = v59;
  v11 = snprintf_plt((__int64)v59, 0x64u, "%.0Lf", a1),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v11 >= 0x64) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1060b80,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_plt_alt1((__int64)&SdkData_1060b80) != 0) {
      SdkData_1060b78 = newlocale_plt_alt1(255, (__int64)"C", 0),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      __cxa_guard_release_plt_alt1((__int64)&SdkData_1060b80),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    v12 = std___1___libcpp_asprintf_l((__int64)&v58, SdkData_1060b78,
                                      (__int64)"%.0Lf", v40),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v13 = v12;
    if ((_DWORD)v12 == -1) {
      v15 = std___throw_bad_alloc_plt(v12),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    else {
      v14 = v58;
      v15 = malloc_plt_alt1(4LL * (int)v12),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v15 != 0) {
        v6 = v15;
        v16 = (char*)v15;
        goto LABEL_7;
      }
    }
    v33 = std___throw_bad_alloc_plt(v15),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    goto LABEL_50;
  }
  v16 = &v57;
  v13 = v11;
  v6 = 0;
  v14 = nullptr;
LABEL_7:
  v39 = a3;
  *(_QWORD*)&v40 = v14;
  std___1_ios_base_getloc_plt((void*)(&v56), a5),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v17 = v56;
  v18 = SdkData_e89480[0];
  v48_.v48 = SdkData_e89480[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89480[0],
                           memory_order_acquire) != -1) {
    v43[0] = &v48_.v48;
    v51_.v51[0] = v43;
    std___1___call_once_plt_alt1((__int64)SdkData_e89480[0], (__int64)v51_.v51,
                                 (__int64)SdkRoutine_82f0b0),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v19 = *(_QWORD*)(v17 + 16);
  v20 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v18 + 4) - 1LL;
  if (v20 >= (*(_QWORD*)(v17 + 24) - v19) >> 3 ||
      (v21 = *(_QWORD*)(v19 + 8 * v20)) == 0) {
    locale_7f6090(),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v22 = v13;
  (*(void (**)(__int64, _BYTE*, _BYTE*, char*))(*(_QWORD*)v21 + 96LL))(
      v21, v58, &v58[v13], v16),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v23 = v13 >= 1 && *v58 == 45;
  v51_.v52 = 0;
  v51_.v51[1] = 0;
  v51_.v51[0] = 0;
  v48_.v50 = 0;
  v48_.v49 = 0;
  v48_.v48 = nullptr;
  v45_.v47 = 0;
  v45_.v45 = 0;
  v45_.v46 = 0;
  SdkRoutine_87d180(a4 & 1, v23, (__int64)&v56, (__int64)v55, (__int64)&v54,
                    (__int64)&v53, (__int64)v51_.v51, (__int64)&v48_.v48,
                    (__int64)&v45_.v45, (__int64)&v44),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v24 = v44;
  if (v13 <= v44) {
    if ((v45_.v45 & 1) != 0) {
      v30 = v45_.v46;
    }
    else {
      v30 = (unsigned __int64)(unsigned __int8)v45_.v45 >> 1;
    }
    v31 = v44 + v30;
    if (((unsigned __int8)v48_.v48 & 1) != 0) {
      v32 = v48_.v49;
    }
    else {
      v32 = (unsigned __int64)(unsigned __int8)v48_.v48 >> 1;
    }
    v27 = v31 + v32 + 2;
    if (v27 < 0x65) {
      goto LABEL_22;
    }
  }
  else {
    if ((v45_.v45 & 1) != 0) {
      v25 = v45_.v46;
    }
    else {
      v25 = (unsigned __int64)(unsigned __int8)v45_.v45 >> 1;
    }
    if (((unsigned __int8)v48_.v48 & 1) != 0) {
      v26 = v48_.v49;
    }
    else {
      v26 = (unsigned __int64)(unsigned __int8)v48_.v48 >> 1;
    }
    v27 = v44 + 2 * (v13 - (__int64)v44) + v25 + v26 + 1;
    if (v27 < 0x65) {
    LABEL_22:
      v28 = v43;
      v29 = 0;
      goto LABEL_31;
    }
  }
  v33 = malloc_plt_alt1(4 * v27),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v29 = v33;
  v28 = (_QWORD*)v33;
  if (v33 == 0) {
  LABEL_50:
    v36 = std___throw_bad_alloc_plt(v33),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    __cxa_guard_abort_plt_alt1((__int64)&SdkData_1060b80),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    _Unwind_Resume_plt_alt2(v36),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v38 = v37;
    if ((v45_.v45 & 1) != 0) {
      SdkRoutine_857220_alt1(v45_.v47, (4 * v45_.v45) & 0xFFFFFFFFFFFFFFF8LL),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (((unsigned __int8)v48_.v48 & 1) == 0) {
      LABEL_52:
        if ((v51_.v51[0] & 1) == 0) {
        LABEL_57:
          std___1_locale_Destroy_locale_plt_alt1((__int64)&v56),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          if (v6 != 0) {
            goto LABEL_60;
          }
          while (*(_QWORD*)&v40 == 0) {
            _Unwind_Resume_plt_alt2(v38),
                v37 =
                    COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          LABEL_60:
            free_plt_alt1(v6),
                v37 =
                    COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          }
          free_plt_alt1(*(__int64*)&v40),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          _Unwind_Resume_plt_alt2(v38),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          __udf(0);
        }
      LABEL_56:
        SdkRoutine_857220_alt1(v51_.v52, v51_.v51[0] & 0xFFFFFFFFFFFFFFFELL),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        goto LABEL_57;
      }
    }
    else if (((unsigned __int8)v48_.v48 & 1) == 0) {
      goto LABEL_52;
    }
    SdkRoutine_857220_alt1(v48_.v50,
                           (4LL * (_QWORD)v48_.v48) & 0xFFFFFFFFFFFFFFF8LL),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if ((v51_.v51[0] & 1) == 0) {
      goto LABEL_57;
    }
    goto LABEL_56;
  }
LABEL_31:
  SdkRoutine_87d190(
      (__int64)v28, (__int64)&v42, (__int64)&v41, *(_DWORD*)(a5 + 8),
      (__int64)v16, (unsigned __int64)&v16[4 * v22], v21, v23, (__int64)v55,
      v54, v53, (__int64)v51_.v51, (__int64)&v48_.v48, (__int64)&v45_.v45, v24),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v34 = locale_812100(v39, (__int64)v28, v42, v41, a5, a6),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v29 != 0) {
    free_plt_alt1(v29),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if ((v45_.v45 & 1) != 0) {
    SdkRoutine_857220_alt1(v45_.v47, (4 * v45_.v45) & 0xFFFFFFFFFFFFFFF8LL),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (((unsigned __int8)v48_.v48 & 1) == 0) {
    LABEL_35:
      if ((v51_.v51[0] & 1) == 0) {
        goto LABEL_36;
      }
      goto LABEL_43;
    }
  }
  else if (((unsigned __int8)v48_.v48 & 1) == 0) {
    goto LABEL_35;
  }
  SdkRoutine_857220_alt1(v48_.v50,
                         (4LL * (_QWORD)v48_.v48) & 0xFFFFFFFFFFFFFFF8LL),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((v51_.v51[0] & 1) == 0) {
  LABEL_36:
    std___1_locale_Destroy_locale_plt_alt1((__int64)&v56),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (v6 == 0) {
      goto LABEL_38;
    }
    goto LABEL_37;
  }
LABEL_43:
  SdkRoutine_857220_alt1(v51_.v52, v51_.v51[0] & 0xFFFFFFFFFFFFFFFELL),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  std___1_locale_Destroy_locale_plt_alt1((__int64)&v56),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v6 != 0) {
  LABEL_37:
    free_plt_alt1(v6),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
LABEL_38:
  if (*(_QWORD*)&v40 != 0) {
    free_plt_alt1(*(__int64*)&v40),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  return v34;
}

__int64 locale_812100(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, int a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  unsigned __int64 v17;
  _DWORD* v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  _QWORD v25[2];
  char* v26;

  v6 = a1;
  if (a1 != 0) {
    v7 = *(_QWORD*)(a5 + 24);
    v13 = (a3 - a2) >> 2;
    if (v13 >= 1 && (*(__int64 (**)(__int64, __int64, __int64))(
                        *(_QWORD*)a1 + 96LL))(a1, a2, (a3 - a2) >> 2) != v13) {
      return 0;
    }
    v14 = (a4 - a2) >> 2;
    if (v7 <= v14) {
    LABEL_23:
      v23 = (a4 - a3) >> 2;
      if (v23 < 1 || (*(__int64 (**)(__int64, __int64, __int64))(
                         *(_QWORD*)v6 + 96LL))(v6, a3, v23) == v23) {
        *(_QWORD*)(a5 + 24) = 0;
        return v6;
      }
      return 0;
    }
    v15 = v7 - v14;
    if ((unsigned __int64)(v7 - v14) >= 0x3FFFFFFFFFFFFFF6LL) {
      locale_7d3920();
    }
    if (v15 >= 5) {
      if ((v15 | 1) == 5) {
        v20 = 8;
      }
      else {
        v20 = (v15 | 1) + 1;
      }
      v16 = (char*)SdkRoutine_85e050(4 * v20);
      v25[1] = v7 - v14;
      v26 = v16;
      v25[0] = v20 | 1;
      v17 = v15 & 7;
      v18 = v16;
      v19 = v7 - v14;
      if ((v15 & 7) == 0) {
      LABEL_15:
        if ((unsigned __int64)(v14 - v7) <= 0xFFFFFFFFFFFFFFF8LL) {
          do {
            *v18 = a6;
            v18[1] = a6;
            v18[2] = a6;
            v18[3] = a6;
            v19 -= 8;
            v18[4] = a6;
            v18[5] = a6;
            v18[6] = a6;
            v18[7] = a6;
            v18 += 8;
          } while (v19 != 0);
        }
        *(_DWORD*)&v16[4 * v15] = 0;
        if ((v25[0] & 1) != 0) {
          v21 = v26;
        }
        else {
          v21 = (char*)v25 + 4;
        }
        v22 = (*(__int64 (**)(__int64, char*, __int64))(*(_QWORD*)v6 + 96LL))(
            v6, v21, v7 - v14);
        if ((v25[0] & 1) != 0) {
          SdkRoutine_857220(v26, (4LL * v25[0]) & 0xFFFFFFFFFFFFFFF8LL);
        }
        if (v22 != v15) {
          return 0;
        }
        goto LABEL_23;
      }
    }
    else {
      LOBYTE(v25[0]) = 2 * v15;
      v16 = (char*)v25 + 4;
      v17 = v15 & 7;
      v18 = (_DWORD*)v25 + 1;
      v19 = v7 - v14;
      if ((v15 & 7) == 0) {
        goto LABEL_15;
      }
    }
    v19 = v7 - v14 - v17;
    v18 = v16;
    do {
      *v18++ = a6;
      --v17;
    } while (v17 != 0);
    goto LABEL_15;
  }
  return v6;
}

__int64 std___1_money_put_do_put_8122f8(__int64 a1, __int64 a2, __int64 a3,
                                        __int64 a4, __int64 a5, __int64 a6,
                                        __int64 a7, __int64 a8, __int64 a9,
                                        __int64 a10, __int64 a11, __int64 a12)
{
  __int64 v13;

  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, (4 * a10) & 0xFFFFFFFFFFFFFFF8LL);
  }
  v13 = _Unwind_Resume_plt(a1);
  return SdkRoutine_812320(v13);
}

__int64 std___1_money_put_do_put_812320(__int64 a1, __int64 a2, char a3,
                                        __int64 a4, int a5, unsigned __int8* a6)
{
  __int64 v11;
  void(__attribute__((noreturn)) * v12)();
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  int* v18;
  int v19;
  char v20;
  unsigned __int64 v21;
  int v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int v27;
  _QWORD* v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD v42[50];
  int v43;
  struct {
    __int64 v44;
    unsigned __int64 v45;
    __int64 v46;
  } v44_;
  struct {
    void(__attribute__((noreturn)) * v47)();
    unsigned __int64 v48;
    __int64 v49;
  } v47_;
  struct {
    _QWORD v50[2];
    __int64 v51;
  } v50_;
  int v52;
  int v53;
  _BYTE v54[4];
  _QWORD v55[2];

  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  std___1_ios_base_getloc_plt((void*)(v55), a4),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v11 = v55[0];
  v12 = SdkData_e89480[0];
  v47_.v47 = SdkData_e89480[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89480[0],
                           memory_order_acquire) != -1) {
    v42[0] = &v47_.v47;
    v50_.v50[0] = v42;
    std___1___call_once_plt_alt1((__int64)SdkData_e89480[0], (__int64)v50_.v50,
                                 (__int64)SdkRoutine_82f0b0),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v13 = *(_QWORD*)(v11 + 16);
  v14 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v12 + 4) - 1LL;
  if (v14 >= (*(_QWORD*)(v11 + 24) - v13) >> 3 ||
      (v15 = *(_QWORD*)(v13 + 8 * v14)) == 0) {
    locale_7f6090(),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v16 = *a6;
  v17 = *((_QWORD*)a6 + 1);
  if ((v16 & 1) == 0) {
    v17 = v16 >> 1;
  }
  if (v17 != 0) {
    if ((v16 & 1) != 0) {
      v18 = *((int**)a6 + 2);
    }
    else {
      v18 = (int*)(a6 + 4);
    }
    v19 = *v18;
    v20 = v19 == (*(unsigned int (**)(__int64, __int64))(*(_QWORD*)v15 + 88LL))(
                     v15, 45),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  else {
    v20 = 0;
  }
  v50_.v50[1] = 0;
  v50_.v51 = 0;
  v47_.v49 = 0;
  v50_.v50[0] = 0;
  v47_.v47 = nullptr;
  v47_.v48 = 0;
  v44_.v45 = 0;
  v44_.v46 = 0;
  v44_.v44 = 0;
  SdkRoutine_87d180(a3 & 1, v20, (__int64)v55, (__int64)v54, (__int64)&v53,
                    (__int64)&v52, (__int64)v50_.v50, (__int64)&v47_.v47,
                    (__int64)&v44_.v44, (__int64)&v43),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v21 = *a6;
  v22 = v43;
  v39 = a2;
  if ((v21 & 1) != 0) {
    v23 = *((_QWORD*)a6 + 1);
  }
  else {
    v23 = v21 >> 1;
  }
  if (v43 >= (int)v23) {
    if ((v44_.v44 & 1) != 0) {
      v30 = v44_.v45;
    }
    else {
      v30 = (unsigned __int64)(unsigned __int8)v44_.v44 >> 1;
    }
    v31 = v43 + v30;
    if (((unsigned __int8)v47_.v47 & 1) != 0) {
      v32 = v47_.v48;
    }
    else {
      v32 = (unsigned __int64)(unsigned __int8)v47_.v47 >> 1;
    }
    v26 = v31 + v32 + 2;
    v27 = a5;
    if (v26 < 0x65) {
      goto LABEL_24;
    }
  }
  else {
    if ((v44_.v44 & 1) != 0) {
      v24 = v44_.v45;
    }
    else {
      v24 = (unsigned __int64)(unsigned __int8)v44_.v44 >> 1;
    }
    if (((unsigned __int8)v47_.v47 & 1) != 0) {
      v25 = v47_.v48;
    }
    else {
      v25 = (unsigned __int64)(unsigned __int8)v47_.v47 >> 1;
    }
    v26 = v43 + 2 * (v23 - v43) + v24 + v25 + 1;
    v27 = a5;
    if (v26 < 0x65) {
    LABEL_24:
      v28 = v42;
      v29 = 0;
      goto LABEL_33;
    }
  }
  v29 = malloc_plt_alt1(4 * v26),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v28 = (_QWORD*)v29;
  if (v29 == 0) {
    v36 = std___throw_bad_alloc_plt(0),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if ((v44_.v44 & 1) != 0) {
      goto LABEL_51;
    }
  LABEL_48:
    if (((unsigned __int8)v47_.v47 & 1) != 0) {
      while (1) {
        SdkRoutine_857220_alt1(v47_.v49,
                               (4LL * (_QWORD)v47_.v47) & 0xFFFFFFFFFFFFFFF8LL),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if ((v50_.v50[0] & 1) != 0) {
          break;
        }
      LABEL_50:
        std___1_locale_Destroy_locale_plt_alt1((__int64)v55),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        _Unwind_Resume_plt_alt2(v36),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        free_plt_alt1(0),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if ((v44_.v44 & 1) == 0) {
          goto LABEL_48;
        }
      LABEL_51:
        SdkRoutine_857220_alt1(v44_.v46, (4 * v44_.v44) & 0xFFFFFFFFFFFFFFF8LL),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if (((unsigned __int8)v47_.v47 & 1) == 0) {
          goto LABEL_49;
        }
      }
    }
    else {
    LABEL_49:
      if ((v50_.v50[0] & 1) == 0) {
        goto LABEL_50;
      }
    }
    SdkRoutine_857220_alt1(v50_.v51, v50_.v50[0] & 0xFFFFFFFFFFFFFFFELL),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    std___1_locale_Destroy_locale_plt_alt1((__int64)v55),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    _Unwind_Resume_plt_alt2(v36),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v38 = v37;
    std___1_locale_Destroy_locale_plt_alt1((__int64)v55),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    _Unwind_Resume_plt_alt2(v38),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    __udf(0);
  }
LABEL_33:
  if ((v21 & 1) != 0) {
    v33 = *((_QWORD*)a6 + 2);
  }
  else {
    v33 = (__int64)(a6 + 4);
  }
  SdkRoutine_87d190((__int64)v28, (__int64)&v41, (__int64)&v40,
                    *(_DWORD*)(a4 + 8), v33, v33 + 4 * v23, v15, v20,
                    (__int64)v54, v53, v52, (__int64)v50_.v50,
                    (__int64)&v47_.v47, (__int64)&v44_.v44, v22),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v34 = locale_812100(v39, (__int64)v28, v41, v40, a4, v27),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v29 != 0) {
    free_plt_alt1(v29),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if ((v44_.v44 & 1) == 0) {
    if (((unsigned __int8)v47_.v47 & 1) == 0) {
      goto LABEL_40;
    }
  LABEL_44:
    SdkRoutine_857220_alt1(v47_.v49,
                           (4LL * (_QWORD)v47_.v47) & 0xFFFFFFFFFFFFFFF8LL),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if ((v50_.v50[0] & 1) == 0) {
      goto LABEL_42;
    }
    goto LABEL_41;
  }
  SdkRoutine_857220_alt1(v44_.v46, (4 * v44_.v44) & 0xFFFFFFFFFFFFFFF8LL),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (((unsigned __int8)v47_.v47 & 1) != 0) {
    goto LABEL_44;
  }
LABEL_40:
  if ((v50_.v50[0] & 1) != 0) {
  LABEL_41:
    SdkRoutine_857220_alt1(v50_.v51, v50_.v50[0] & 0xFFFFFFFFFFFFFFFELL),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
LABEL_42:
  std___1_locale_Destroy_locale_plt_alt1((__int64)v55),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  return v34;
}

__attribute__((swiftcall)) void

std___1_messages_do_get(PSEUDO_X8 x8_, __int64 unused_int0, __int64 unused_int1,
                        __int64 unused_int2, __int64 unused_int3, __int64 a1)
{
  unsigned __int64* a2 = (unsigned __int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v2;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((*(_BYTE*)a1 & 1) != 0) {
    nandroid_extractors_mp4_4f61b0(a2, *(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 8)),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return;
  }
  v2 = *(_QWORD*)(a1 + 8);
  *a2 = *(_QWORD*)a1;
  a2[1] = v2;
  a2[2] = *(_QWORD*)(a1 + 16);
  {
    result;
    return;
  }
}

__int64 std___1_locale___imp___imp_812950(__int64 a1, __int64 a2)
{
  __int64 v3;

  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)a1 = std___1_locale___imp_Destroy___imp_81ac20_ptr;
  *(_QWORD*)(a1 + 8) = a2 - 1;
  *(_QWORD*)(a1 + 16) = a1 + 40;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 1;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_BYTE*)(a1 + 290) = 0;
  *(_QWORD*)(a1 + 24) = a1 + 40;
  *(_QWORD*)(a1 + 32) = a1 + 280;
  *(_WORD*)(a1 + 288) = 17154;
  SdkData_1060c58 = SdkData_e89578 + 16;
  SdkData_1060c60 = 0;
  SdkRoutine_812fa0(a1, (__int64)&SdkData_1060c58);
  SdkData_1060c68 = SdkData_e89580 + 16;
  SdkData_1060c70 = 0;
  SdkRoutine_8130d0(a1, (__int64)&SdkData_1060c68);
  SdkRoutine_87d250(&SdkData_1060e90, 0, 0, 1);
  SdkRoutine_813200(a1, (__int64)&SdkData_1060e90);
  SdkData_1060c78 = SdkData_e89588 + 16;
  SdkData_1060c80 = 0;
  SdkRoutine_813330(a1, (__int64)&SdkData_1060c78);
  SdkData_1060c88 = SdkData_e89590 + 16;
  SdkData_1060c90 = 0;
  SdkRoutine_813460(a1, (__int64)&SdkData_1060c88);
  SdkRoutine_87d260(&SdkData_1060e18, 1);
  SdkRoutine_813590(a1, (__int64)&SdkData_1060e18);
  SdkData_1060c98 = SdkData_e89598 + 16;
  SdkData_1060ca0 = 0;
  SdkRoutine_8136c0(a1, (__int64)&SdkData_1060c98);
  SdkData_1060ca8 = SdkData_e895a0 + 16;
  SdkData_1060cb0 = 0;
  SdkRoutine_8137f0(a1, (__int64)&SdkData_1060ca8);
  SdkData_1060cb8 = SdkData_e895a8 + 16;
  SdkData_1060cc0 = 0;
  SdkRoutine_813920(a1, (__int64)&SdkData_1060cb8);
  SdkData_1060cc8 = SdkData_e895b0 + 16;
  SdkData_1060cd0 = 0;
  SdkRoutine_813a50(a1, (__int64)&SdkData_1060cc8);
  SdkRoutine_87d270(&SdkData_1060f10, 1);
  SdkRoutine_813b80(a1, (__int64)&SdkData_1060f10);
  SdkRoutine_87d280(&SdkData_1060f40, 1);
  SdkRoutine_813cb0(a1, (__int64)&SdkData_1060f40);
  SdkData_1060cd8 = SdkData_e895b8 + 16;
  SdkData_1060ce0 = 0;
  SdkRoutine_813de0(a1, (__int64)&SdkData_1060cd8);
  SdkData_1060ce8 = SdkData_e895c0 + 16;
  SdkData_1060cf0 = 0;
  SdkRoutine_813f10(a1, (__int64)&SdkData_1060ce8);
  SdkData_1060cf8 = SdkData_e895c8 + 16;
  SdkData_1060d00 = 0;
  SdkRoutine_814040(a1, (__int64)&SdkData_1060cf8);
  SdkData_1060d08 = SdkData_e895d0 + 16;
  SdkData_1060d10 = 0;
  SdkRoutine_814170(a1, (__int64)&SdkData_1060d08);
  SdkData_1060d18 = SdkData_e895d8 + 16;
  SdkData_1060d20 = 0;
  SdkRoutine_8142a0(a1, (__int64)&SdkData_1060d18);
  SdkData_1060d28 = SdkData_e895e0 + 16;
  SdkData_1060d30 = 0;
  SdkRoutine_8143d0(a1, (__int64)&SdkData_1060d28);
  SdkData_1060d38 = SdkData_e895e8 + 16;
  SdkData_1060d40 = 0;
  SdkRoutine_814500(a1, (__int64)&SdkData_1060d38);
  SdkData_1060d48 = SdkData_e895f0 + 16;
  SdkData_1060d50 = 0;
  SdkRoutine_814630(a1, (__int64)&SdkData_1060d48);
  SdkData_1060d58 = SdkData_e895f8 + 16;
  SdkData_1060d60 = 0;
  SdkRoutine_814760(a1, (__int64)&SdkData_1060d58);
  SdkData_1060d68 = SdkData_e89600 + 16;
  SdkData_1060d70 = 0;
  SdkRoutine_814890(a1, (__int64)&SdkData_1060d68);
  SdkData_1060d78 = SdkData_e89608 + 16;
  SdkData_1060d80 = 0;
  SdkRoutine_8149c0(a1, (__int64)&SdkData_1060d78);
  SdkData_1060d88 = SdkData_e89610 + 16;
  SdkData_1060d90 = 0;
  SdkRoutine_814af0(a1, (__int64)&SdkData_1060d88);
  SdkData_1060e30 = SdkData_e89618 + 16;
  SdkData_1060e38 = 0;
  SdkData_1060e40 = SdkData_e89618 + 112;
  SdkRoutine_814c20(a1, (__int64)&SdkData_1060e30);
  SdkData_1060e48 = SdkData_e89620 + 16;
  SdkData_1060e50 = 0;
  SdkData_1060e58 = SdkData_e89620 + 112;
  SdkRoutine_814d50(a1, (__int64)&SdkData_1060e48);
  SdkData_1060e68 = 0;
  v3 = SdkData_e89628;
  SdkData_1060e60 = SdkData_e89628 + 16;
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1060b80,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_1060b80) != 0) {
    SdkData_1060b78 = newlocale_plt(0x7FFFFFFF, "C", 0);
    __cxa_guard_release_plt(&SdkData_1060b80);
  }
  SdkData_1060e70 = SdkData_1060b78;
  SdkData_1060e60 = SdkData_e89630 + 16;
  SdkRoutine_814e80(a1, (__int64)&SdkData_1060e60);
  SdkData_1060e80 = 0;
  SdkData_1060e78 = v3 + 16;
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1060b80,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_1060b80) != 0) {
    SdkData_1060b78 = newlocale_plt(0x7FFFFFFF, "C", 0);
    __cxa_guard_release_plt(&SdkData_1060b80);
  }
  SdkData_1060e88 = SdkData_1060b78;
  SdkData_1060e78 = SdkData_e89638 + 16;
  SdkRoutine_814fb0(a1, (__int64)&SdkData_1060e78);
  SdkData_1060d98 = SdkData_e89640 + 16;
  SdkData_1060da0 = 0;
  SdkRoutine_8150e0(a1, (__int64)&SdkData_1060d98);
  SdkData_1060da8 = SdkData_e89648 + 16;
  SdkData_1060db0 = 0;
  return SdkRoutine_815210(a1, (__int64)&SdkData_1060da8);
}

void __attribute__((noreturn)) locale_812e88(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  __cxa_guard_abort_plt(v3);
  std___1___shared_count_Destroy___shared_count_plt(v3 + 760);
  if ((*(_BYTE*)(v1 + 288) & 1) != 0) {
    SdkRoutine_857220(*(_QWORD*)(v1 + 304),
                      *(_QWORD*)(v1 + 288) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_815340(v2);
  std___1___shared_count_Destroy___shared_count_plt(v1);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_8158d0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  unsigned __int64 v6;

  __cxa_guard_abort_plt(&SdkData_1060b90);
  v3 = __cxa_begin_catch_plt(a1);
  v4 = *(_QWORD*)(v1 + 16);
  if (*(_QWORD*)(v1 + 24) != v4) {
    goto LABEL_3;
  }
  while (1) {
    __cxa_rethrow_plt(v3);
  LABEL_3:
    v5 = 1;
    v6 = 0;
    do {
      v3 = *(_QWORD*)(v4 + 8 * v6);
      if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      }
      v4 = *(_QWORD*)(v1 + 16);
      v6 = v5++;
    } while (v6 < (*(_QWORD*)(v1 + 24) - v4) >> 3);
  }
}

void __attribute__((noreturn)) locale_815acc(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_1060b90);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_816ad0(__int64 a1)
{
  __int64 v1;
  _BYTE* v2;

  if ((*(_BYTE*)(v1 + 96) & 1) != 0) {
    goto LABEL_6;
  }
  if ((*(_BYTE*)(v1 + 72) & 1) != 0) {
    goto LABEL_7;
  }
LABEL_3:
  if ((*(_BYTE*)(v1 + 48) & 1) != 0) {
    while (1) {
      SdkRoutine_857220(*(_QWORD*)(v1 + 64),
                        *(_QWORD*)(v1 + 48) & 0xFFFFFFFFFFFFFFFELL);
      if ((*v2 & 1) != 0) {
        break;
      }
    LABEL_5:
      std___1___shared_count_Destroy___shared_count_plt(v1);
      _Unwind_Resume_plt_alt1(a1);
    LABEL_6:
      SdkRoutine_857220(*(_QWORD*)(v1 + 112),
                        *(_QWORD*)(v1 + 96) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v1 + 72) & 1) == 0) {
        goto LABEL_3;
      }
    LABEL_7:
      SdkRoutine_857220(*(_QWORD*)(v1 + 88),
                        *(_QWORD*)(v1 + 72) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v1 + 48) & 1) == 0) {
        goto LABEL_4;
      }
    }
  }
  else {
  LABEL_4:
    if ((*v2 & 1) == 0) {
      goto LABEL_5;
    }
  }
  SdkRoutine_857220(*(_QWORD*)(v1 + 40),
                    *(_QWORD*)(v1 + 24) & 0xFFFFFFFFFFFFFFFELL);
  std___1___shared_count_Destroy___shared_count_plt(v1);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_816d10(__int64 a1)
{
  __int64 v1;
  _BYTE* v2;

  if ((*(_BYTE*)(v1 + 96) & 1) != 0) {
    goto LABEL_6;
  }
  if ((*(_BYTE*)(v1 + 72) & 1) != 0) {
    goto LABEL_7;
  }
LABEL_3:
  if ((*(_BYTE*)(v1 + 48) & 1) != 0) {
    while (1) {
      SdkRoutine_857220(*(_QWORD*)(v1 + 64),
                        *(_QWORD*)(v1 + 48) & 0xFFFFFFFFFFFFFFFELL);
      if ((*v2 & 1) != 0) {
        break;
      }
    LABEL_5:
      std___1___shared_count_Destroy___shared_count_plt(v1);
      _Unwind_Resume_plt_alt1(a1);
    LABEL_6:
      SdkRoutine_857220(*(_QWORD*)(v1 + 112),
                        *(_QWORD*)(v1 + 96) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v1 + 72) & 1) == 0) {
        goto LABEL_3;
      }
    LABEL_7:
      SdkRoutine_857220(*(_QWORD*)(v1 + 88),
                        *(_QWORD*)(v1 + 72) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v1 + 48) & 1) == 0) {
        goto LABEL_4;
      }
    }
  }
  else {
  LABEL_4:
    if ((*v2 & 1) == 0) {
      goto LABEL_5;
    }
  }
  SdkRoutine_857220(*(_QWORD*)(v1 + 40),
                    *(_QWORD*)(v1 + 24) & 0xFFFFFFFFFFFFFFFELL);
  std___1___shared_count_Destroy___shared_count_plt(v1);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_816f40(__int64 a1)
{
  __int64 v1;

  SdkRoutine_87cb10(v1 + 96);
  SdkRoutine_87cb10(v1 + 72);
  SdkRoutine_87cb10(v1 + 48);
  if ((*(_BYTE*)(v1 + 24) & 1) != 0) {
    SdkRoutine_857220(*(_QWORD*)(v1 + 40),
                      *(_QWORD*)(v1 + 24) & 0xFFFFFFFFFFFFFFFELL);
  }
  std___1___shared_count_Destroy___shared_count_plt(v1);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_817120(__int64 a1)
{
  __int64 v1;

  SdkRoutine_87cb10(v1 + 96);
  SdkRoutine_87cb10(v1 + 72);
  SdkRoutine_87cb10(v1 + 48);
  if ((*(_BYTE*)(v1 + 24) & 1) != 0) {
    SdkRoutine_857220(*(_QWORD*)(v1 + 40),
                      *(_QWORD*)(v1 + 24) & 0xFFFFFFFFFFFFFFFELL);
  }
  std___1___shared_count_Destroy___shared_count_plt(v1);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_817db0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned __int64 v7;

  SdkRoutine_857220(v2, 24);
  v4 = __cxa_begin_catch_plt(a1);
  v5 = *(_QWORD*)(v1 + 16);
  if (*(_QWORD*)(v1 + 24) != v5) {
    goto LABEL_3;
  }
  while (1) {
    __cxa_rethrow_plt(v4);
  LABEL_3:
    v6 = 1;
    v7 = 0;
    do {
      v4 = *(_QWORD*)(v5 + 8 * v7);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      }
      v5 = *(_QWORD*)(v1 + 16);
      v7 = v6++;
    } while (v7 < (*(_QWORD*)(v1 + 24) - v5) >> 3);
  }
}

__int64 std___1_build_name(__int64 result, char* a2, __int64 a3, int a4)
{
  unsigned __int8 v4;
  __int64 v5;
  _BYTE* v6;
  __int64 v7;
  _BYTE* v8;
  char* v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;

  v4 = *a2;
  v5 = (unsigned __int8)*a2 >> 1;
  if ((*a2 & 1) != 0) {
    v5 = *((_QWORD*)a2 + 1);
  }
  if (v5 == 1) {
    v6 = *((_BYTE**)a2 + 2);
    if ((*a2 & 1) == 0) {
      v6 = a2 + 1;
    }
    if (*v6 == 42) {
      goto LABEL_21;
    }
  }
  v7 = *(_QWORD*)(a3 + 8);
  if ((*(_BYTE*)a3 & 1) == 0) {
    v7 = *(_BYTE*)a3 >> 1;
  }
  if (v7 == 1) {
    v8 = *(_BYTE**)(a3 + 16);
    if ((*(_BYTE*)a3 & 1) == 0) {
      v8 = (_BYTE*)(a3 + 1);
    }
    if (*v8 == 42) {
      goto LABEL_21;
    }
  }
  if (a4 == 0) {
    goto LABEL_22;
  }
  if (v5 != v7) {
    goto LABEL_21;
  }
  v9 = *((char**)a2 + 2);
  v10 = result;
  v11 = a2;
  if ((*a2 & 1) == 0) {
    v9 = a2 + 1;
  }
  v12 = (*(_BYTE*)a3 & 1) != 0 ? *(_QWORD*)(a3 + 16) : a3 + 1;
  v13 = memcmp_plt(v9, v12, v5);
  a2 = v11;
  v14 = v13;
  result = v10;
  if (v14 != 0) {
  LABEL_21:
    *(_BYTE*)(result + 2) = 0;
    *(_WORD*)result = 10754;
  }
  else {
  LABEL_22:
    if ((v4 & 1) != 0) {
      return nandroid_extractors_mp4_4f61b0_alt1(result, *((_QWORD*)a2 + 2));
    }
    else {
      v15 = *((_QWORD*)a2 + 1);
      *(_QWORD*)result = *(_QWORD*)a2;
      *(_QWORD*)(result + 8) = v15;
      *(_QWORD*)(result + 16) = *((_QWORD*)a2 + 2);
    }
  }
  return result;
}

__int64 std___1_locale___imp_install_from_8183c0(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89650[0];
  v14 = SdkData_e89650[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89650[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89650[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_8184d0(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_818500(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89658[0];
  v14 = SdkData_e89658[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89658[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89658[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_818610(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_818640(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89440[0];
  v14 = SdkData_e89440[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89440[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89440[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_818750(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_818780(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89480[0];
  v14 = SdkData_e89480[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89480[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89480[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_818890(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_8188c0(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e894c0[0];
  v14 = SdkData_e894c0[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e894c0[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e894c0[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_8189d0(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_818a00(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89660[0];
  v14 = SdkData_e89660[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89660[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89660[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_818b10(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_818b40(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89668[0];
  v14 = SdkData_e89668[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89668[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89668[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_818c50(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_818c80(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89670[0];
  v14 = SdkData_e89670[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89670[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89670[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_818d90(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_818dc0(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89678[0];
  v14 = SdkData_e89678[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89678[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89678[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_818ed0(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_818f00(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89530[0];
  v14 = SdkData_e89530[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89530[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89530[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_819010(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_819040(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89560[0];
  v14 = SdkData_e89560[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89560[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89560[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_819150(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_819180(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89558[0];
  v14 = SdkData_e89558[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89558[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89558[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_819290(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_8192c0(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89570[0];
  v14 = SdkData_e89570[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89570[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89570[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_8193d0(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_819400(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89568[0];
  v14 = SdkData_e89568[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89568[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89568[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_819510(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_819540(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89680[0];
  v14 = SdkData_e89680[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89680[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89680[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_819650(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_819680(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89688[0];
  v14 = SdkData_e89688[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89688[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89688[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_819790(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_8197c0(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89690[0];
  v14 = SdkData_e89690[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89690[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89690[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_8198d0(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_819900(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89698[0];
  v14 = SdkData_e89698[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89698[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89698[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_819a10(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_819a40(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89540[0];
  v14 = SdkData_e89540[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89540[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89540[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_819b50(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_819b80(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89550[0];
  v14 = SdkData_e89550[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89550[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89550[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_819c90(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_819cc0(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89448[0];
  v14 = SdkData_e89448[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89448[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89448[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_819dd0(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_819e00(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89488[0];
  v14 = SdkData_e89488[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89488[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89488[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_819f10(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_819f40(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89458[0];
  v14 = SdkData_e89458[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89458[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89458[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_81a050(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_81a080(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e89498[0];
  v14 = SdkData_e89498[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89498[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e89498[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_81a190(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_81a1c0(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e896a0[0];
  v14 = SdkData_e896a0[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e896a0[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e896a0[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_81a2d0(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_81a300(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e896a8[0];
  v14 = SdkData_e896a8[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e896a8[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e896a8[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_81a410(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_81a440(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e896b0[0];
  v14 = SdkData_e896b0[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e896b0[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e896b0[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_81a550(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_81a580(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e896b8[0];
  v14 = SdkData_e896b8[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e896b8[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e896b8[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_81a690(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_81a6c0(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e896c0[0];
  v14 = SdkData_e896c0[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e896c0[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e896c0[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_81a7d0(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale___imp_install_from_81a800(__int64 a1, __int64 a2,
                                                 __int64 a3,
                                                 unsigned __int64 a4)
{
  void(__attribute__((noreturn)) * v6)();
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 result;
  void(__attribute__((noreturn)) * v14)();
  void(__attribute__((noreturn)) * **v15)();
  void(__attribute__((noreturn)) * *v16)();

  v6 = SdkData_e896c8[0];
  v14 = SdkData_e896c8[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e896c8[0],
                           memory_order_acquire) != -1) {
    v16 = &v14;
    v15 = &v16;
    std___1___call_once_plt(SdkData_e896c8[0], &v15, SdkRoutine_82f0b0);
  }
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v6 + 4) - 1LL;
  v8 = *(_QWORD*)(a2 + 16);
  if (v7 >= (*(_QWORD*)(a2 + 24) - v8) >> 3 ||
      (v9 = *(_QWORD*)(v8 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = (__int64*)(a1 + 16);
  v12 = (*(_QWORD*)(a1 + 24) - v10) >> 3;
  if (v12 <= v7) {
    if (v7 + 1 <= v12) {
      if (v7 + 1 < v12) {
        *(_QWORD*)(a1 + 24) = v10 + 8 * (v7 + 1);
      }
    }
    else {
      SdkRoutine_82dbb0((__int64*)(a1 + 16), v7 + 1 - v12, a3, a4);
      v10 = *v11;
    }
  }
  result = *(_QWORD*)(v10 + 8 * v7);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v11 + 8 * v7) = v9;
  return result;
}

void __attribute__((noreturn)) locale_81a910(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale_locale_81adb8(__int64 a1)
{
  __int64 v2;

  __cxa_guard_abort_plt(&SdkData_1060ba0);
  v2 = _Unwind_Resume_plt(a1);
  return SdkRoutine_81add0(v2);
}

void __attribute__((noreturn)) locale_81ae5c()
{
  __cxa_guard_abort_plt(&SdkData_1060ba0);
  SdkRoutine_7cd620();
}

void __attribute__((noreturn)) locale_81b084(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12)
{
  __int64 v12;
  __int64 v14;

  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
    SdkRoutine_857220(v12, 312);
    _Unwind_Resume_plt_alt1(a1);
    a1 = v14;
  }
  SdkRoutine_857220(v12, 312);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_81b124(__int64 a1)
{
  __int64 v1;

  SdkRoutine_857220(v1, 312);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_81b25c(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12)
{
  __int64 v12;
  __int64 v14;

  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
    SdkRoutine_857220(v12, 312);
    _Unwind_Resume_plt_alt1(a1);
    a1 = v14;
  }
  SdkRoutine_857220(v12, 312);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_locale_locale_81b318(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64* v4;
  unsigned int v5;
  unsigned int v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 result;

  SdkRoutine_857220(v1, 312);
  _Unwind_Resume_plt_alt1(a1);
  v4 = v3;
  v6 = v5;
  v8 = v7;
  v10 = v9;
  v11 = SdkRoutine_85e050(0x138u);
  result = std___1_locale___imp___imp_818060(v11, *v10, *v8, v6);
  *v4 = v11;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                            memory_order_relaxed);
  return result;
}

void std___1_locale_name_81b398(__int64 a1)
{
  __int64 v1;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  SdkRoutine_857220(v1, 312);
  _Unwind_Resume_plt_alt1(a1);
  v5 = *(_QWORD**)v4;
  if ((*(_BYTE*)(*(_QWORD*)v4 + 288LL) & 1) != 0) {
    nandroid_extractors_mp4_4f61b0_alt1(v3, v5[38]);
  }
  else {
    v6 = v5[36];
    v7 = v5[37];
    v8 = v5[38];
    v3[1] = v7;
    v3[2] = v8;
    *v3 = v6;
  }
}

__int64 std___1_locale_global(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  SdkRoutine_857220(v1, 312);
  v3 = _Unwind_Resume_plt(a1);
  return SdkRoutine_81b480(v3);
}

bool locale_81b850(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int8 v4;
  __int64 v5;
  _BYTE* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v2 = *a1;
  v3 = *a2;
  if (*a1 == *a2) {
    return true;
  }
  v4 = *(_BYTE*)(v2 + 288);
  if ((v4 & 1) != 0) {
    v5 = *(_QWORD*)(v2 + 296);
  }
  else {
    v5 = v4 >> 1;
  }
  if (v5 == 1) {
    v6 = *(_BYTE**)(v2 + 304);
    if ((*(_BYTE*)(v2 + 288) & 1) == 0) {
      v6 = (_BYTE*)(v2 + 289);
    }
    if (*v6 == 42) {
      return false;
    }
  }
  v7 = *(unsigned __int8*)(v3 + 288);
  v8 = *(_QWORD*)(v3 + 296);
  if ((v7 & 1) == 0) {
    v8 = v7 >> 1;
  }
  if (v5 != v8) {
    return false;
  }
  v9 = *(_QWORD*)(v2 + 304);
  v10 = v2 + 289;
  if ((v4 & 1) != 0) {
    v11 = v9;
  }
  else {
    v11 = v10;
  }
  v12 = *(_QWORD*)(v3 + 304);
  v13 = v3 + 289;
  if ((v7 & 1) != 0) {
    v14 = v12;
  }
  else {
    v14 = v13;
  }
  return (unsigned int)memcmp_plt(v11, v14, v5) == 0;
}

void __attribute__((noreturn))

locale_81bde0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
              __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
              __int64 a11, __int64 a12, __int64 a13, __int64 a14)
{
  if ((a9 & 1) != 0) {
    goto LABEL_4;
  }
  while ((a12 & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(a14, a12 & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_81bfd8(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12)
{
  __int64 v12;

  if ((*(_BYTE*)v12 & 1) != 0) {
    goto LABEL_4;
  }
  while ((a10 & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v12 + 16),
                      *(_QWORD*)v12 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

__int64 std___1_collate_byname_do_compare(__int64 a1, __int64 a2, __int64 a3,
                                          __int64 a4, __int64 a5)
{
  __int64 v5;
  unsigned __int64 v6;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  char v18;
  char* v19;
  char* v20;
  char* v21;
  int v22;
  __int64 v24;
  _QWORD v25[2];
  char* v26;
  _QWORD v27[2];
  __int64 v28;

  v5 = a3 - a2;
  v6 = (a3 - a2) >> 2;
  if (v6 > 0x3FFFFFFFFFFFFFF5LL) {
    locale_7d3920();
  }
  if (v6 <= 4) {
    LOBYTE(v27[0]) = ((unsigned int)v5 >> 1) & 0xFE;
    v11 = (char*)v27 + 4;
    if (a3 == a2) {
      goto LABEL_10;
    }
  LABEL_9:
    memcpy_plt(v11, a2, v5);
    goto LABEL_10;
  }
  v12 = a2;
  if ((v6 | 1) == 5) {
    v13 = 8;
  }
  else {
    v13 = (v6 | 1) + 1;
  }
  v14 = SdkRoutine_85e050(4 * v13);
  a2 = v12;
  v11 = (char*)v14;
  v27[1] = v6;
  v28 = v14;
  v27[0] = v13 | 1;
  if (a3 != a2) {
    goto LABEL_9;
  }
LABEL_10:
  *(_DWORD*)&v11[v5] = 0;
  v15 = a5 - a4;
  v16 = (a5 - a4) >> 2;
  if (v16 > 0x3FFFFFFFFFFFFFF5LL) {
    locale_7d3920();
  }
  if (v16 <= 4) {
    LOBYTE(v25[0]) = ((unsigned int)v15 >> 1) & 0xFE;
    v17 = (char*)v25 + 4;
    if (a5 == a4) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  if ((v16 | 1) == 5) {
    v24 = 8;
  }
  else {
    v24 = (v16 | 1) + 1;
  }
  v17 = (char*)SdkRoutine_85e050(4 * v24);
  v25[1] = (a5 - a4) >> 2;
  v26 = v17;
  v25[0] = v24 | 1;
  if (a5 != a4) {
  LABEL_13:
    memcpy_plt(v17, a4, a5 - a4);
  }
LABEL_14:
  v18 = v27[0];
  v19 = (char*)v28;
  *(_DWORD*)&v17[v15] = 0;
  if ((v18 & 1) != 0) {
    v20 = v19;
  }
  else {
    v20 = (char*)v27 + 4;
  }
  if ((v25[0] & 1) != 0) {
    v21 = v26;
  }
  else {
    v21 = (char*)v25 + 4;
  }
  v22 = wcscoll_l_plt(v20, v21, *(_QWORD*)(a1 + 16));
  if ((v25[0] & 1) != 0) {
    SdkRoutine_857220(v26, (4LL * v25[0]) & 0xFFFFFFFFFFFFFFF8LL);
  }
  if ((v27[0] & 1) != 0) {
    SdkRoutine_857220(v28, (4LL * v27[0]) & 0xFFFFFFFFFFFFFFF8LL);
  }
  if (v22 < 0) {
    return 0xFFFFFFFFLL;
  }
  else {
    return v22 > 0;
  }
}

void __attribute__((noreturn))

locale_81c4a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
              __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
              __int64 a11, __int64 a12, __int64 a13, __int64 a14)
{
  if ((a9 & 1) != 0) {
    goto LABEL_4;
  }
  while ((a12 & 1) == 0) {
    _Unwind_Resume_plt_alt1(a1);
  LABEL_4:
    SdkRoutine_857220(a11, (4 * a9) & 0xFFFFFFFFFFFFFFF8LL);
  }
  SdkRoutine_857220(a14, (4 * a12) & 0xFFFFFFFFFFFFFFF8LL);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

bool std___1_ctype_do_is_81c730(__int64 a1, __int16 a2, unsigned int a3)
{
  return a3 <= 0x7F && (unsigned __int16)(a2 & SdkData_cfff70[a3]) != 0;
}

unsigned int* std___1_ctype_do_is_81c780(__int64 a1, unsigned int* a2,
                                         unsigned int* a3, _WORD* a4)
{
  unsigned int* result;
  __int64 v5;

  for (result = a2; result != a3; ++result) {
    while (1) {
      v5 = *result;
      if ((unsigned int)v5 > 0x7F) {
        break;
      }
      *a4++ = SdkData_cfff70[v5];
      if (++result == a3) {
        return result;
      }
    }
    *a4++ = 0;
  }
  return result;
}

unsigned int* std___1_ctype_do_scan_is(__int64 a1, unsigned __int16 a2,
                                       unsigned int* a3, unsigned int* a4)
{
  unsigned int* result;
  __int64 v5;

  for (result = a3; result != a4; ++result) {
    v5 = *result;
    if ((unsigned int)v5 <= 0x7F && (SdkData_cfff70[v5] & a2) != 0) {
      break;
    }
  }
  return result;
}

unsigned int* std___1_ctype_do_scan_not(__int64 a1, unsigned __int16 a2,
                                        unsigned int* a3, unsigned int* a4)
{
  unsigned int* result;
  __int64 v5;

  for (result = a3; result != a4; ++result) {
    v5 = *result;
    if ((unsigned int)v5 > 0x7F) {
      break;
    }
    if ((SdkData_cfff70[v5] & a2) == 0) {
      break;
    }
  }
  return result;
}

__int64 std___1_ctype_do_toupper_81c890(__int64 a1, unsigned int a2)
{
  if (a2 - 123 >= 0xFFFFFFE6) {
    return a2 & 0x5F;
  }
  else {
    return a2;
  }
}

int* std___1_ctype_do_toupper_81c8c0(__int64 a1, int* a2, int* a3)
{
  int* result;
  int v4;

  for (result = a2; result != a3; ++result) {
    v4 = *result;
    if ((unsigned int)(*result - 123) >= 0xFFFFFFE6) {
      v4 = *result & 0x5F;
    }
    *result = v4;
  }
  return result;
}

__int64 std___1_ctype_do_tolower_81c910(__int64 a1, unsigned int a2)
{
  if (a2 - 91 >= 0xFFFFFFE6) {
    return a2 | 0x20;
  }
  else {
    return a2;
  }
}

int* std___1_ctype_do_tolower_81c940(__int64 a1, int* a2, int* a3)
{
  int* result;
  int v4;

  for (result = a2; result != a3; ++result) {
    v4 = *result;
    if ((unsigned int)(*result - 91) >= 0xFFFFFFE6) {
      v4 = *result | 0x20;
    }
    *result = v4;
  }
  return result;
}

__int64 std___1_ctype_ctype(__int64 result, __int64 a2, char a3, __int64 a4)
{
  __int64 v4;

  v4 = SdkData_e89760;
  *(_QWORD*)(result + 16) = a2;
  *(_BYTE*)(result + 24) = a3;
  *(_QWORD*)result = v4 + 16;
  *(_QWORD*)(result + 8) = a4 - 1;
  if (a2 == 0) {
    *(_QWORD*)(result + 16) = SdkData_cfff70_alt1;
  }
  return result;
}

__int64 std___1_ctype_Destroy_ctype_81cab0(__int64 a1, void* a2)
{
  __int64 v2;

  *(_QWORD*)a1 = SdkData_e89760 + 16;
  if (*(_QWORD*)(a1 + 16) != 0 && (*(_BYTE*)(a1 + 24) & 1) != 0) {
    v2 = a1;
    SdkRoutine_85c8b0(*(void**)(a1 + 16), a2);
    a1 = v2;
  }
  return std___1___shared_count_Destroy___shared_count_plt(a1);
}

__int64 std___1_ctype_do_toupper_81cb30(__int64 a1, unsigned __int8 a2)
{
  if ((unsigned int)a2 - 123 >= 0xFFFFFFE6) {
    return a2 & 0x5F;
  }
  else {
    return a2;
  }
}

unsigned __int8* std___1_ctype_do_toupper_81cb60(__int64 a1,
                                                 unsigned __int8* a2,
                                                 unsigned __int8* a3)
{
  unsigned __int8* result;
  __int64 i;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  result = a2;
  if (a2 != a3) {
    for (i = ((_BYTE)a3 - (_BYTE)a2) & 7; i != 0; *result++ = v5) {
      v5 = *result;
      if ((unsigned int)(v5 - 123) >= 0xFFFFFFE6) {
        LOBYTE(v5) = v5 & 0x5F;
      }
      --i;
    }
    if ((unsigned __int64)(a2 - a3) <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        v6 = *result;
        if ((unsigned int)(v6 - 123) >= 0xFFFFFFE6) {
          LOBYTE(v6) = v6 & 0x5F;
        }
        *result = v6;
        v7 = result[1];
        if ((unsigned int)(v7 - 123) >= 0xFFFFFFE6) {
          LOBYTE(v7) = v7 & 0x5F;
        }
        result[1] = v7;
        v8 = result[2];
        if ((unsigned int)(v8 - 123) >= 0xFFFFFFE6) {
          LOBYTE(v8) = v8 & 0x5F;
        }
        result[2] = v8;
        v9 = result[3];
        if ((unsigned int)(v9 - 123) >= 0xFFFFFFE6) {
          LOBYTE(v9) = v9 & 0x5F;
        }
        result[3] = v9;
        v10 = result[4];
        if ((unsigned int)(v10 - 123) >= 0xFFFFFFE6) {
          LOBYTE(v10) = v10 & 0x5F;
        }
        result[4] = v10;
        v11 = result[5];
        if ((unsigned int)(v11 - 123) >= 0xFFFFFFE6) {
          LOBYTE(v11) = v11 & 0x5F;
        }
        result[5] = v11;
        v12 = result[6];
        if ((unsigned int)(v12 - 123) >= 0xFFFFFFE6) {
          LOBYTE(v12) = v12 & 0x5F;
        }
        result[6] = v12;
        v13 = result[7];
        if ((unsigned int)(v13 - 123) >= 0xFFFFFFE6) {
          LOBYTE(v13) = v13 & 0x5F;
        }
        result[7] = v13;
        result += 8;
      } while (result != a3);
    }
  }
  return result;
}

__int64 std___1_ctype_do_tolower_81cc80(__int64 a1, unsigned __int8 a2)
{
  if ((unsigned int)a2 - 91 >= 0xFFFFFFE6) {
    return a2 | 0x20u;
  }
  else {
    return a2;
  }
}

unsigned __int8* std___1_ctype_do_tolower_81cca0(__int64 a1,
                                                 unsigned __int8* a2,
                                                 unsigned __int8* a3)
{
  unsigned __int8* result;
  __int64 i;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  result = a2;
  if (a2 != a3) {
    for (i = ((_BYTE)a3 - (_BYTE)a2) & 7; i != 0; *result++ = v5) {
      v5 = *result;
      if ((unsigned int)(v5 - 91) >= 0xFFFFFFE6) {
        LOBYTE(v5) = v5 | 0x20;
      }
      --i;
    }
    if ((unsigned __int64)(a2 - a3) <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        v6 = *result;
        if ((unsigned int)(v6 - 91) >= 0xFFFFFFE6) {
          LOBYTE(v6) = v6 | 0x20;
        }
        *result = v6;
        v7 = result[1];
        if ((unsigned int)(v7 - 91) >= 0xFFFFFFE6) {
          LOBYTE(v7) = v7 | 0x20;
        }
        result[1] = v7;
        v8 = result[2];
        if ((unsigned int)(v8 - 91) >= 0xFFFFFFE6) {
          LOBYTE(v8) = v8 | 0x20;
        }
        result[2] = v8;
        v9 = result[3];
        if ((unsigned int)(v9 - 91) >= 0xFFFFFFE6) {
          LOBYTE(v9) = v9 | 0x20;
        }
        result[3] = v9;
        v10 = result[4];
        if ((unsigned int)(v10 - 91) >= 0xFFFFFFE6) {
          LOBYTE(v10) = v10 | 0x20;
        }
        result[4] = v10;
        v11 = result[5];
        if ((unsigned int)(v11 - 91) >= 0xFFFFFFE6) {
          LOBYTE(v11) = v11 | 0x20;
        }
        result[5] = v11;
        v12 = result[6];
        if ((unsigned int)(v12 - 91) >= 0xFFFFFFE6) {
          LOBYTE(v12) = v12 | 0x20;
        }
        result[6] = v12;
        v13 = result[7];
        if ((unsigned int)(v13 - 91) >= 0xFFFFFFE6) {
          LOBYTE(v13) = v13 | 0x20;
        }
        result[7] = v13;
        result += 8;
      } while (result != a3);
    }
  }
  return result;
}

__int64 std___1_ctype_byname_ctype_byname_81cf80(__int64 a1, __int64 a2,
                                                 __int64 a3)
{
  __int64 result;
  char* v6;
  __int64 v8;
  __int64 v10;
  __int64 v12;
  __int64 v14;
  unsigned __int64 v15[3];
  struct {
    _QWORD v16[2];
    char* v17;
  } v16_;

  *(_BYTE*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 16) = &SdkData_cfff70_alt2;
  *(_QWORD*)a1 = SdkData_e89768 + 16;
  *(_QWORD*)(a1 + 8) = a3 - 1;
  result = newlocale_plt(0x7FFFFFFF, a2, 0);
  *(_QWORD*)(a1 + 32) = result;
  if (result == 0) {
    SdkRoutine_812ef0(v15, a2);
    SdkRoutine_81ba70(
        (void*)(v16_.v16),
        (__int64)"ctype_byname<char>::ctype_byname failed to construct for ",
        (__int64)v15);
    if ((v16_.v16[0] & 1) != 0) {
      v6 = v16_.v17;
    }
    else {
      v6 = (char*)v16_.v16 + 1;
    }
    v8 = std___1___throw_runtime_error_plt(v6);
    if ((v16_.v16[0] & 1) != 0) {
      goto LABEL_8;
    }
    while ((v15[0] & 1) == 0) {
      std___1_ctype_Destroy_ctype_81cab0_alt1(a1);
      _Unwind_Resume_plt(v8);
    LABEL_8:
      SdkRoutine_857220(v16_.v17, v16_.v16[0] & 0xFFFFFFFFFFFFFFFELL);
    }
    SdkRoutine_857220(v15[2], v15[0] & 0xFFFFFFFFFFFFFFFELL);
    std___1_ctype_Destroy_ctype_81cab0_alt1(a1);
    v10 = _Unwind_Resume_plt(v8);
    std___1_ctype_Destroy_ctype_81cab0_alt1(a1);
    v12 = _Unwind_Resume_plt(v10);
    std___1_ctype_Destroy_ctype_81cab0_alt1(a1);
    v14 = _Unwind_Resume_plt(v12);
    return std___1_ctype_byname_ctype_byname_81d0b0_alt1(v14);
  }
  return result;
}

__int64 std___1_ctype_byname_ctype_byname_81d0b0(__int64 a1, __int64 a2,
                                                 __int64 a3)
{
  __int64 v4;
  __int64 result;
  char* v6;
  __int64 v8;
  struct {
    _QWORD v10[2];
    char* v11;
  } v10_;

  *(_BYTE*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 16) = &SdkData_cfff70_alt2;
  *(_QWORD*)a1 = SdkData_e89768 + 16;
  *(_QWORD*)(a1 + 8) = a3 - 1;
  if ((*(_BYTE*)a2 & 1) != 0) {
    v4 = *(_QWORD*)(a2 + 16);
  }
  else {
    v4 = a2 + 1;
  }
  result = newlocale_plt(0x7FFFFFFF, v4, 0);
  *(_QWORD*)(a1 + 32) = result;
  if (result == 0) {
    SdkRoutine_87cb90(
        (void*)(v10_.v10),
        "ctype_byname<char>::ctype_byname failed to construct for ");
    if ((v10_.v10[0] & 1) != 0) {
      v6 = v10_.v11;
    }
    else {
      v6 = (char*)v10_.v10 + 1;
    }
    v8 = std___1___throw_runtime_error_plt(v6);
    if ((v10_.v10[0] & 1) != 0) {
      SdkRoutine_857220(v10_.v11, v10_.v10[0] & 0xFFFFFFFFFFFFFFFELL);
      std___1_ctype_Destroy_ctype_81cab0_alt1(a1);
      v8 = _Unwind_Resume_plt(v8);
    }
    std___1_ctype_Destroy_ctype_81cab0_alt1(a1);
    _Unwind_Resume_plt(v8);
    __udf(0);
  }
  return result;
}

bool std___1_ctype_byname_do_is_81d530(__int64 a1, __int16 a2, unsigned int a3)
{
  _BOOL4 v6;

  if ((a2 & 0x2000) != 0) {
    v6 = iswspace_l_plt(a3, *(_QWORD*)(a1 + 16)) != 0;
    if ((a2 & 0x4000) == 0) {
      goto LABEL_7;
    }
  }
  else {
    v6 = false;
    if ((a2 & 0x4000) == 0) {
      goto LABEL_7;
    }
  }
  if ((unsigned int)iswprint_l_plt(a3, *(_QWORD*)(a1 + 16)) != 0) {
    v6 = true;
  }
LABEL_7:
  if ((a2 & 2) != 0) {
    if ((unsigned int)iswcntrl_l_plt(a3, *(_QWORD*)(a1 + 16)) != 0) {
      v6 = true;
    }
    if ((a2 & 0x100) == 0) {
    LABEL_9:
      if ((a2 & 0x200) == 0) {
        goto LABEL_10;
      }
      goto LABEL_22;
    }
  }
  else if ((a2 & 0x100) == 0) {
    goto LABEL_9;
  }
  if ((unsigned int)iswupper_l_plt(a3, *(_QWORD*)(a1 + 16)) != 0) {
    v6 = true;
  }
  if ((a2 & 0x200) == 0) {
  LABEL_10:
    if ((a2 & 0x400) == 0) {
      goto LABEL_11;
    }
    goto LABEL_25;
  }
LABEL_22:
  if ((unsigned int)iswlower_l_plt(a3, *(_QWORD*)(a1 + 16)) != 0) {
    v6 = true;
  }
  if ((a2 & 0x400) == 0) {
  LABEL_11:
    if ((a2 & 0x800) == 0) {
      goto LABEL_12;
    }
    goto LABEL_28;
  }
LABEL_25:
  if ((unsigned int)iswalpha_l_plt(a3, *(_QWORD*)(a1 + 16)) != 0) {
    v6 = true;
  }
  if ((a2 & 0x800) == 0) {
  LABEL_12:
    if ((a2 & 4) == 0) {
      goto LABEL_13;
    }
    goto LABEL_31;
  }
LABEL_28:
  if ((unsigned int)iswdigit_l_plt(a3, *(_QWORD*)(a1 + 16)) != 0) {
    v6 = true;
  }
  if ((a2 & 4) == 0) {
  LABEL_13:
    if ((a2 & 0x1000) == 0) {
      goto LABEL_14;
    }
  LABEL_34:
    if ((unsigned int)iswxdigit_l_plt(a3, *(_QWORD*)(a1 + 16)) != 0) {
      v6 = true;
    }
    if ((a2 & 1) == 0) {
      return v6;
    }
    goto LABEL_37;
  }
LABEL_31:
  if ((unsigned int)iswpunct_l_plt(a3, *(_QWORD*)(a1 + 16)) != 0) {
    v6 = true;
  }
  if ((a2 & 0x1000) != 0) {
    goto LABEL_34;
  }
LABEL_14:
  if ((a2 & 1) == 0) {
    return v6;
  }
LABEL_37:
  if ((unsigned int)iswblank_l_plt(a3, *(_QWORD*)(a1 + 16)) != 0) {
    return true;
  }
  return v6;
}

unsigned int* std___1_ctype_byname_do_is_81d6a0(__int64 a1, unsigned int* a2,
                                                unsigned int* a3, _WORD* a4)
{
  unsigned int* i;
  __int16 v8;
  __int64 v9;
  __int64 v10;

  for (i = a2; i != a3; ++a4) {
    v9 = *i;
    if ((unsigned int)v9 <= 0x7F) {
      v8 = SdkData_cfff70[v9];
    }
    else {
      v10 = *(_QWORD*)(a1 + 16);
      *a4 = 0;
      if ((unsigned int)iswspace_l_plt((unsigned int)v9, v10) != 0) {
        *a4 |= 0x2000u;
      }
      if ((unsigned int)iswprint_l_plt((unsigned int)v9, *(_QWORD*)(a1 + 16)) !=
          0) {
        *a4 |= 0x4000u;
      }
      if ((unsigned int)iswcntrl_l_plt((unsigned int)v9, *(_QWORD*)(a1 + 16)) !=
          0) {
        *a4 |= 2u;
      }
      if ((unsigned int)iswupper_l_plt((unsigned int)v9, *(_QWORD*)(a1 + 16)) !=
          0) {
        *a4 |= 0x100u;
      }
      if ((unsigned int)iswlower_l_plt((unsigned int)v9, *(_QWORD*)(a1 + 16)) !=
          0) {
        *a4 |= 0x200u;
      }
      if ((unsigned int)iswalpha_l_plt((unsigned int)v9, *(_QWORD*)(a1 + 16)) !=
          0) {
        *a4 |= 0x400u;
      }
      if ((unsigned int)iswdigit_l_plt((unsigned int)v9, *(_QWORD*)(a1 + 16)) !=
          0) {
        *a4 |= 0x800u;
      }
      if ((unsigned int)iswpunct_l_plt((unsigned int)v9, *(_QWORD*)(a1 + 16)) !=
          0) {
        *a4 |= 4u;
      }
      if ((unsigned int)iswxdigit_l_plt((unsigned int)v9,
                                        *(_QWORD*)(a1 + 16)) != 0) {
        *a4 |= 0x1000u;
      }
      if ((unsigned int)iswblank_l_plt((unsigned int)v9, *(_QWORD*)(a1 + 16)) ==
          0) {
        goto LABEL_5;
      }
      v8 = *a4 | 1;
    }
    *a4 = v8;
  LABEL_5:
    ++i;
  }
  return i;
}

unsigned int* std___1_ctype_byname_do_scan_is(__int64 a1, __int16 a2,
                                              unsigned int* a3,
                                              unsigned int* a4)
{
  unsigned int* i;
  unsigned int v8;

  for (i = a3; i != a4; ++i) {
    v8 = *i;
    if ((a2 & 0x2000) != 0 &&
        (unsigned int)iswspace_l_plt(v8, *(_QWORD*)(a1 + 16)) != 0) {
      break;
    }
    if ((a2 & 0x4000) != 0 &&
        (unsigned int)iswprint_l_plt(v8, *(_QWORD*)(a1 + 16)) != 0) {
      break;
    }
    if ((a2 & 2) != 0 &&
        (unsigned int)iswcntrl_l_plt(v8, *(_QWORD*)(a1 + 16)) != 0) {
      break;
    }
    if ((a2 & 0x100) != 0 &&
        (unsigned int)iswupper_l_plt(v8, *(_QWORD*)(a1 + 16)) != 0) {
      break;
    }
    if ((a2 & 0x200) != 0 &&
        (unsigned int)iswlower_l_plt(v8, *(_QWORD*)(a1 + 16)) != 0) {
      break;
    }
    if ((a2 & 0x400) != 0 &&
        (unsigned int)iswalpha_l_plt(v8, *(_QWORD*)(a1 + 16)) != 0) {
      break;
    }
    if ((a2 & 0x800) != 0 &&
        (unsigned int)iswdigit_l_plt(v8, *(_QWORD*)(a1 + 16)) != 0) {
      break;
    }
    if ((a2 & 4) != 0 &&
        (unsigned int)iswpunct_l_plt(v8, *(_QWORD*)(a1 + 16)) != 0) {
      break;
    }
    if ((a2 & 0x1000) != 0 &&
        (unsigned int)iswxdigit_l_plt(v8, *(_QWORD*)(a1 + 16)) != 0) {
      break;
    }
    if ((a2 & 1) != 0 &&
        (unsigned int)iswblank_l_plt(v8, *(_QWORD*)(a1 + 16)) != 0) {
      break;
    }
  }
  return i;
}

unsigned int* std___1_ctype_byname_do_scan_not(__int64 a1, __int16 a2,
                                               unsigned int* a3,
                                               unsigned int* a4)
{
  unsigned int* i;
  unsigned int v8;

  for (i = a3; i != a4; ++i) {
    v8 = *i;
    if (((a2 & 0x2000) == 0 ||
         (unsigned int)iswspace_l_plt(v8, *(_QWORD*)(a1 + 16)) == 0) &&
        ((a2 & 0x4000) == 0 ||
         (unsigned int)iswprint_l_plt(v8, *(_QWORD*)(a1 + 16)) == 0) &&
        ((a2 & 2) == 0 ||
         (unsigned int)iswcntrl_l_plt(v8, *(_QWORD*)(a1 + 16)) == 0) &&
        ((a2 & 0x100) == 0 ||
         (unsigned int)iswupper_l_plt(v8, *(_QWORD*)(a1 + 16)) == 0) &&
        ((a2 & 0x200) == 0 ||
         (unsigned int)iswlower_l_plt(v8, *(_QWORD*)(a1 + 16)) == 0) &&
        ((a2 & 0x400) == 0 ||
         (unsigned int)iswalpha_l_plt(v8, *(_QWORD*)(a1 + 16)) == 0) &&
        ((a2 & 0x800) == 0 ||
         (unsigned int)iswdigit_l_plt(v8, *(_QWORD*)(a1 + 16)) == 0) &&
        ((a2 & 4) == 0 ||
         (unsigned int)iswpunct_l_plt(v8, *(_QWORD*)(a1 + 16)) == 0) &&
        ((a2 & 0x1000) == 0 ||
         (unsigned int)iswxdigit_l_plt(v8, *(_QWORD*)(a1 + 16)) == 0) &&
        ((a2 & 1) == 0 ||
         (unsigned int)iswblank_l_plt(v8, *(_QWORD*)(a1 + 16)) == 0)) {
      break;
    }
  }
  return i;
}

void __attribute__((noreturn)) locale_81dbf4(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_81dbf8(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10)
{
  SdkRoutine_82dd20(&a10);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_81dcbc(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_81dcc0(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10)
{
  SdkRoutine_82dd20(&a10);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_81dd3c(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_81dd40(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20(v1 + 24);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_81de04(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_81de08(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20(v1 + 24);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_81df4c(__int64 a1)
{
  __int64 v1;

  __cxa_guard_abort_plt(&SdkData_1060b80);
  std___1___shared_count_Destroy___shared_count_plt(v1);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_81e454(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_81e488(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20(v1 - 8);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_81e808(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_81e83c(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20(v1 - 8);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_81ea1c(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_81ea20(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10)
{
  SdkRoutine_82dd20(&a10);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_81eaf4(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_81eb0c(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_81ec24(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_81ec28(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20(v1 + 24);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_81eca8(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_81ecac(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10)
{
  SdkRoutine_82dd20(&a10);
  SdkRoutine_7cd620_alt1(a1);
}

__int64 std___1_codecvt_do_in_81fa00(__int64 a1, __int64 a2, __int64 a3,
                                     __int64 a4, _QWORD* a5, __int64 a6,
                                     __int64 a7, _QWORD* a8)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  result = std___1_utf8_to_ucs4(a3, a4, &v13, a6, a7, &v12, 1114111, 0);
  v11 = v12;
  *a5 = v13;
  *a8 = v11;
  return result;
}

__int64 std___1_codecvt_do_in_8200b0(__int64 a1, __int64 a2, __int64 a3,
                                     __int64 a4, _QWORD* a5, __int64 a6,
                                     __int64 a7, _QWORD* a8)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  result = std___1_utf8_to_ucs4(a3, a4, &v13, a6, a7, &v12, 1114111, 0);
  v11 = v12;
  *a5 = v13;
  *a8 = v11;
  return result;
}

__int64 std___1___codecvt_utf8_do_out_820170(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, _QWORD* a5, __int64 a6,
                                             __int64 a7, _QWORD* a8)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  result = std___1_ucs4_to_utf8(a3, a4, &v13, a6, a7, &v12, *(_QWORD*)(a1 + 24),
                                *(unsigned int*)(a1 + 32));
  v11 = v12;
  *a5 = v13;
  *a8 = v11;
  return result;
}

__int64 std___1___codecvt_utf8_do_in_8201e0(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, _QWORD* a5, __int64 a6,
                                            __int64 a7, _QWORD* a8)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  result = std___1_utf8_to_ucs4(a3, a4, &v13, a6, a7, &v12, *(_QWORD*)(a1 + 24),
                                *(unsigned int*)(a1 + 32));
  v11 = v12;
  *a5 = v13;
  *a8 = v11;
  return result;
}

__int64 std___1___codecvt_utf8_do_out_8207a0(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, _QWORD* a5, __int64 a6,
                                             __int64 a7, _QWORD* a8)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  result = std___1_ucs4_to_utf8(a3, a4, &v13, a6, a7, &v12, *(_QWORD*)(a1 + 16),
                                *(unsigned int*)(a1 + 24));
  v11 = v12;
  *a5 = v13;
  *a8 = v11;
  return result;
}

__int64 std___1___codecvt_utf8_do_in_820810(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, _QWORD* a5, __int64 a6,
                                            __int64 a7, _QWORD* a8)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  result = std___1_utf8_to_ucs4(a3, a4, &v13, a6, a7, &v12, *(_QWORD*)(a1 + 16),
                                *(unsigned int*)(a1 + 24));
  v11 = v12;
  *a5 = v13;
  *a8 = v11;
  return result;
}

void __attribute__((noreturn)) locale_822928(__int64 a1)
{
  __int64 v1;

  SdkRoutine_8225a0(v1);
  _Unwind_Resume_plt_alt1(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_822ab4(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_822ab8(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12, char a13)
{
  __int64 v13;
  __int64 v15;

  SdkRoutine_82dd20(&a13);
  std___1___libcpp_unique_locale_Destroy___libcpp_unique_locale(v13 - 8);
  v15 = _Unwind_Resume_plt(a1);
  std___1___libcpp_unique_locale_Destroy___libcpp_unique_locale(v13 - 8);
  _Unwind_Resume_plt(v15);
  __udf(0);
}

void __attribute__((noreturn)) locale_822b48(__int64 a1)
{
  __int64 v1;

  SdkRoutine_8225a0(v1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_822c54(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_822c58(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10)
{
  SdkRoutine_82dd20(&a10);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_822ce8(__int64 a1)
{
  __int64 v1;

  SdkRoutine_822630(v1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_822e74(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_822e78(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12, char a13)
{
  __int64 v13;
  __int64 v15;

  SdkRoutine_82dd20(&a13);
  std___1___libcpp_unique_locale_Destroy___libcpp_unique_locale(v13 - 8);
  v15 = _Unwind_Resume_plt(a1);
  std___1___libcpp_unique_locale_Destroy___libcpp_unique_locale(v13 - 8);
  _Unwind_Resume_plt(v15);
  __udf(0);
}

void __attribute__((noreturn)) locale_822f08(__int64 a1)
{
  __int64 v1;

  SdkRoutine_822630(v1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_823004(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_823008(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20(v1 - 8);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_8237e0(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_1060bc0);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 std___1_init_wweeks()
{
  __int64 result;
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1060c30,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_1060c30) != 0) {
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_1060c30);
  }
  ((void (*)(__int64*, void*))SdkRoutine_7e04e0)(&SdkData_10610c0,
                                                 &SdkData_bd138c);
  ((void (*)(__int64*, void*))SdkRoutine_7e04e0)(&SdkData_10610d8,
                                                 &SdkData_bd1610);
  ((void (*)(__int64*, void*))SdkRoutine_7e04e0)(&SdkData_10610f0,
                                                 &SdkData_bd1200);
  ((void (*)(__int64*, void*))SdkRoutine_7e04e0)(&SdkData_1061108,
                                                 &SdkData_bd1680);
  ((void (*)(__int64*, void*))SdkRoutine_7e04e0)(&SdkData_1061120,
                                                 &SdkData_bd14a4);
  ((void (*)(__int64*, void*))SdkRoutine_7e04e0)(&SdkData_1061138,
                                                 &SdkData_bd13cc);
  result = ((__int64 (*)(__int64*, void*))SdkRoutine_7e04e0)(&SdkData_1061150,
                                                             &SdkData_bd14c8);
  if ((SdkData_1061168 & 1) != 0) {
    SdkData_1061170 = 3;
    v1 = (_QWORD*)SdkData_1061178;
  }
  else {
    LOBYTE(SdkData_1061168) = 6;
    v1 = (__int64*)((char*)&SdkData_1061168 + 4);
  }
  *v1 = 0x7500000053LL;
  v1[1] = 110;
  if ((SdkData_1061180 & 1) != 0) {
    SdkData_1061188 = 3;
    v2 = (_QWORD*)SdkData_1061190;
  }
  else {
    LOBYTE(SdkData_1061180) = 6;
    v2 = (__int64*)((char*)&SdkData_1061180 + 4);
  }
  *v2 = 0x6F0000004DLL;
  v2[1] = 110;
  if ((SdkData_1061198 & 1) != 0) {
    SdkData_10611a0 = 3;
    v3 = (_QWORD*)SdkData_10611a8;
  }
  else {
    LOBYTE(SdkData_1061198) = 6;
    v3 = (__int64*)((char*)&SdkData_1061198 + 4);
  }
  *v3 = 0x7500000054LL;
  v3[1] = 101;
  if ((SdkData_10611b0 & 1) != 0) {
    SdkData_10611b8 = 3;
    v4 = (_QWORD*)SdkData_10611c0;
  }
  else {
    LOBYTE(SdkData_10611b0) = 6;
    v4 = (__int64*)((char*)&SdkData_10611b0 + 4);
  }
  *v4 = 0x6500000057LL;
  v4[1] = 100;
  if ((SdkData_10611c8 & 1) != 0) {
    SdkData_10611d0 = 3;
    v5 = (_QWORD*)SdkData_10611d8;
  }
  else {
    LOBYTE(SdkData_10611c8) = 6;
    v5 = (__int64*)((char*)&SdkData_10611c8 + 4);
  }
  *v5 = 0x6800000054LL;
  v5[1] = 117;
  if ((SdkData_10611e0 & 1) != 0) {
    SdkData_10611e8 = 3;
    v6 = (_QWORD*)SdkData_10611f0;
  }
  else {
    LOBYTE(SdkData_10611e0) = 6;
    v6 = (__int64*)((char*)&SdkData_10611e0 + 4);
  }
  *v6 = 0x7200000046LL;
  v6[1] = 105;
  if ((SdkData_10611f8 & 1) != 0) {
    SdkData_1061200 = 3;
    v7 = (_QWORD*)SdkData_1061208;
  }
  else {
    LOBYTE(SdkData_10611f8) = 6;
    v7 = (__int64*)((char*)&SdkData_10611f8 + 4);
  }
  *v7 = 0x6100000053LL;
  v7[1] = 116;
  return result;
}

void __attribute__((noreturn)) locale_824360(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_1060be0);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 std___1_init_wmonths()
{
  _QWORD* v0;
  char* v1;
  char* v2;
  __int64 result;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1060c40,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_1060c40) != 0) {
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_1060c40);
  }
  ((void (*)(__int64*, void*))SdkRoutine_7e04e0)(&SdkData_1061450,
                                                 &SdkData_bd1278);
  ((void (*)(__int64*, void*))SdkRoutine_7e04e0)(&SdkData_1061468,
                                                 &SdkData_bd14ec);
  ((void (*)(__int64*, void*))SdkRoutine_7e04e0)(&SdkData_1061480,
                                                 &SdkData_bd16a8);
  ((void (*)(__int64*, void*))SdkRoutine_7e04e0)(&SdkData_1061498,
                                                 &SdkData_bd1338);
  if ((SdkData_10614b0 & 1) != 0) {
    SdkData_10614b8 = 3;
    v0 = (_QWORD*)SdkData_10614c0;
  }
  else {
    LOBYTE(SdkData_10614b0) = 6;
    v0 = (__int64*)((char*)&SdkData_10614b0 + 4);
  }
  *v0 = 0x610000004DLL;
  v0[1] = 121;
  if ((SdkData_10614c8 & 1) != 0) {
    SdkData_10614d0 = 4;
    v1 = (char*)SdkData_10614d8;
  }
  else {
    LOBYTE(SdkData_10614c8) = 8;
    v1 = (char*)&SdkData_10614c8 + 4;
  }
  *((_DWORD*)v1 + 4) = 0;
  *(_QWORD*)v1 = 0x750000004ALL;
  *((_QWORD*)v1 + 1) = 0x650000006ELL;
  if ((SdkData_10614e0 & 1) != 0) {
    SdkData_10614e8 = 4;
    v2 = (char*)SdkData_10614f0;
  }
  else {
    LOBYTE(SdkData_10614e0) = 8;
    v2 = (char*)&SdkData_10614e0 + 4;
  }
  *((_DWORD*)v2 + 4) = 0;
  *(_QWORD*)v2 = 0x750000004ALL;
  *((_QWORD*)v2 + 1) = 0x790000006CLL;
  ((void (*)(__int64*, void*))SdkRoutine_7e04e0)(&SdkData_10614f8,
                                                 &SdkData_bd1220);
  ((void (*)(__int64*, void*))SdkRoutine_7e04e0)(&SdkData_1061510,
                                                 &SdkData_bd12b8);
  ((void (*)(__int64*, void*))SdkRoutine_7e04e0)(&SdkData_1061528,
                                                 &SdkData_bd1510);
  ((void (*)(__int64*, void*))SdkRoutine_7e04e0)(&SdkData_1061540,
                                                 &SdkData_bd13a8);
  result = ((__int64 (*)(__int64*, void*))SdkRoutine_7e04e0)(&SdkData_1061558,
                                                             &SdkData_bd12e4);
  if ((SdkData_1061570 & 1) != 0) {
    SdkData_1061578 = 3;
    v4 = (_QWORD*)SdkData_1061580;
  }
  else {
    LOBYTE(SdkData_1061570) = 6;
    v4 = (__int64*)((char*)&SdkData_1061570 + 4);
  }
  *v4 = 0x610000004ALL;
  v4[1] = 110;
  if ((SdkData_1061588 & 1) != 0) {
    SdkData_1061590 = 3;
    v5 = (_QWORD*)SdkData_1061598;
  }
  else {
    LOBYTE(SdkData_1061588) = 6;
    v5 = (__int64*)((char*)&SdkData_1061588 + 4);
  }
  *v5 = 0x6500000046LL;
  v5[1] = 98;
  if ((SdkData_10615a0 & 1) != 0) {
    SdkData_10615a8 = 3;
    v6 = (_QWORD*)SdkData_10615b0;
  }
  else {
    LOBYTE(SdkData_10615a0) = 6;
    v6 = (__int64*)((char*)&SdkData_10615a0 + 4);
  }
  *v6 = 0x610000004DLL;
  v6[1] = 114;
  if ((SdkData_10615b8 & 1) != 0) {
    SdkData_10615c0 = 3;
    v7 = (_QWORD*)SdkData_10615c8;
  }
  else {
    LOBYTE(SdkData_10615b8) = 6;
    v7 = (__int64*)((char*)&SdkData_10615b8 + 4);
  }
  *v7 = 0x7000000041LL;
  v7[1] = 114;
  if ((SdkData_10615d0 & 1) != 0) {
    SdkData_10615d8 = 3;
    v8 = (_QWORD*)SdkData_10615e0;
  }
  else {
    LOBYTE(SdkData_10615d0) = 6;
    v8 = (__int64*)((char*)&SdkData_10615d0 + 4);
  }
  *v8 = 0x610000004DLL;
  v8[1] = 121;
  if ((SdkData_10615e8 & 1) != 0) {
    SdkData_10615f0 = 3;
    v9 = (_QWORD*)SdkData_10615f8;
  }
  else {
    LOBYTE(SdkData_10615e8) = 6;
    v9 = (__int64*)((char*)&SdkData_10615e8 + 4);
  }
  *v9 = 0x750000004ALL;
  v9[1] = 110;
  if ((SdkData_1061600 & 1) != 0) {
    SdkData_1061608 = 3;
    v10 = (_QWORD*)SdkData_1061610;
  }
  else {
    LOBYTE(SdkData_1061600) = 6;
    v10 = (__int64*)((char*)&SdkData_1061600 + 4);
  }
  *v10 = 0x750000004ALL;
  v10[1] = 108;
  if ((SdkData_1061618 & 1) != 0) {
    SdkData_1061620 = 3;
    v11 = (_QWORD*)SdkData_1061628;
  }
  else {
    LOBYTE(SdkData_1061618) = 6;
    v11 = (__int64*)((char*)&SdkData_1061618 + 4);
  }
  *v11 = 0x7500000041LL;
  v11[1] = 103;
  if ((SdkData_1061630 & 1) != 0) {
    SdkData_1061638 = 3;
    v12 = (_QWORD*)SdkData_1061640;
  }
  else {
    LOBYTE(SdkData_1061630) = 6;
    v12 = (__int64*)((char*)&SdkData_1061630 + 4);
  }
  *v12 = 0x6500000053LL;
  v12[1] = 112;
  if ((SdkData_1061648 & 1) != 0) {
    SdkData_1061650 = 3;
    v13 = (_QWORD*)SdkData_1061658;
  }
  else {
    LOBYTE(SdkData_1061648) = 6;
    v13 = (__int64*)((char*)&SdkData_1061648 + 4);
  }
  *v13 = 0x630000004FLL;
  v13[1] = 116;
  if ((SdkData_1061660 & 1) != 0) {
    SdkData_1061668 = 3;
    v14 = (_QWORD*)SdkData_1061670;
  }
  else {
    LOBYTE(SdkData_1061660) = 6;
    v14 = (__int64*)((char*)&SdkData_1061660 + 4);
  }
  *v14 = 0x6F0000004ELL;
  v14[1] = 118;
  if ((SdkData_1061678 & 1) != 0) {
    SdkData_1061680 = 3;
    v15 = (_QWORD*)SdkData_1061688;
  }
  else {
    LOBYTE(SdkData_1061678) = 6;
    v15 = (__int64*)((char*)&SdkData_1061678 + 4);
  }
  *v15 = 0x6500000044LL;
  v15[1] = 99;
  return result;
}

void __attribute__((noreturn)) locale_824c30(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_1060c08);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_824d50(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_1060c10);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_824e70(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_1060c18);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_824f90(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_1060c20);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__attribute__((swiftcall)) void

std___1___time_get_storage___analyze(PSEUDO_X8 x8_, unsigned __int8* a1,
                                     unsigned __int8 a2, _QWORD* a3)
{
  unsigned __int64* a4 = (unsigned __int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 result;
  unsigned __int8* v9;
  unsigned __int8* v10;
  char* v11;
  char v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  char* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  char* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  char* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  char* v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  char* v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  char* v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  char* v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  char* v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int8* v79;
  int v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  char* v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  unsigned __int8* v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  __int64 v92;
  char* v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  char* v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  unsigned __int8* v110;
  char* v111;
  __int64 v112;
  unsigned __int64 v113;
  char* v114;
  bool v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  char* v118;
  unsigned __int64 v119;
  unsigned __int64 v120;
  __int64 v121;
  __int64 v122;
  unsigned __int64 v123;
  __int64 v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  __int64 v127;
  __int64 v128;
  _BYTE* v129;
  unsigned __int64 v130;
  char* v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  unsigned __int64 v134;
  char* v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  char* v140;
  unsigned __int64 v141;
  unsigned __int64 v142;
  __int64 v143;
  __int64 v144;
  unsigned __int64 v145;
  __int64 v146;
  unsigned __int64 v147;
  char* v148;
  unsigned __int64 v149;
  unsigned __int64 v150;
  unsigned __int64 v151;
  char* v152;
  unsigned __int64 v153;
  unsigned __int64 v154;
  unsigned __int64 v155;
  char* v156;
  unsigned __int64 v157;
  unsigned __int64 v158;
  unsigned __int64 v159;
  char* v160;
  unsigned __int64 v161;
  unsigned __int64 v162;
  unsigned __int64 v163;
  char* v164;
  unsigned __int64 v165;
  unsigned __int64 v166;
  unsigned __int64 v167;
  char* v168;
  unsigned __int64 v169;
  unsigned __int64 v170;
  unsigned __int64 v171;
  char* v172;
  unsigned __int64 v173;
  unsigned __int64 v174;
  unsigned __int8* v175;
  unsigned __int8* v176;
  unsigned __int8 v177;
  unsigned __int64 v178;
  char* v179;
  unsigned __int64 v180;
  unsigned __int64 v181;
  unsigned __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  unsigned __int64 v187;
  __int64 v188;
  __int64 v189;
  unsigned __int64 v190;
  __int64 v191;
  __int64 v192;
  unsigned __int64 v193;
  __int64 v194;
  __int64 v195;
  unsigned __int64 v196;
  __int64 v197;
  __int64 v198;
  unsigned __int64 v199;
  __int64 v200;
  __int64 v201;
  unsigned __int64 v202;
  __int64 v203;
  __int64 v204;
  unsigned __int64 v205;
  __int64 v206;
  __int64 v207;
  unsigned __int64 v208;
  __int64 v209;
  __int64 v210;
  unsigned __int64 v211;
  __int64 v212;
  __int64 v213;
  unsigned __int64 v214;
  __int64 v215;
  __int64 v216;
  unsigned __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  unsigned __int64 v231;
  char* v232;
  unsigned __int64 v233;
  unsigned __int64 v234;
  unsigned __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  unsigned __int64 v239;
  char* v240;
  unsigned __int64 v241;
  unsigned __int64 v242;
  unsigned __int64 v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  unsigned __int64 v247;
  char* v248;
  unsigned __int64 v249;
  unsigned __int64 v250;
  unsigned __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  unsigned __int64 v255;
  char* v256;
  unsigned __int64 v257;
  unsigned __int64 v258;
  unsigned __int64 v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  unsigned __int64 v263;
  char* v264;
  unsigned __int64 v265;
  unsigned __int64 v266;
  unsigned __int64 v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  unsigned __int64 v271;
  char* v272;
  unsigned __int64 v273;
  unsigned __int64 v274;
  unsigned __int64 v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  unsigned __int64 v279;
  char* v280;
  unsigned __int64 v281;
  unsigned __int64 v282;
  unsigned __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  unsigned __int64 v287;
  char* v288;
  unsigned __int64 v289;
  unsigned __int64 v290;
  unsigned __int64 v291;
  __int64 v292;
  __int64 v293;
  __int64 v294;
  unsigned __int64 v295;
  char* v296;
  unsigned __int64 v297;
  unsigned __int64 v298;
  unsigned __int64 v299;
  __int64 v300;
  __int64 v301;
  __int64 v302;
  unsigned __int64 v303;
  char* v304;
  unsigned __int64 v305;
  unsigned __int64 v306;
  unsigned __int64 v307;
  __int64 v308;
  __int64 v309;
  __int64 v310;
  unsigned __int64 v311;
  char* v312;
  unsigned __int64 v313;
  unsigned __int64 v314;
  unsigned __int64 v315;
  __int64 v316;
  __int64 v317;
  __int64 v318;
  int v319;
  __int64 v321;
  unsigned __int8* v322;
  char* v323;
  unsigned __int8* v324;
  unsigned __int8* v325;
  int v326;
  unsigned __int8* v327;
  _BYTE v328[4];
  _BYTE v329[100];
  _QWORD v330[8];

  v4 = *(_QWORD*)a1;
  v328[1] = a2;
  v328[2] = 0;
  v330[5] = 0;
  v330[6] = 0;
  v330[0] = 0x370000003BLL;
  v330[1] = 0x1F00000017LL;
  v330[2] = 0xA10000000BLL;
  v330[3] = 0x16C00000006LL;
  v330[4] = 0xFFFFFFFFLL;
  v328[0] = 37;
  result = strftime_l_plt(v329, 100, v328, v330, v4);
  *a4 = 0;
  a4[1] = 0;
  a4[2] = 0;
  v321 = result;
  if (result != 0) {
    v9 = v329;
    v10 = &v329[result];
    v323 = (char*)a4 + 1;
    v324 = a1 + 8;
    v322 = a1 + 920;
    v325 = a1 + 344;
    v319 = a2;
    do {
      v13 = (char)*v9;
      if ((v13 & 0x8000000000000000LL) == 0 &&
          (*(_WORD*)(a3[2] + 2 * v13) & 0x2000) != 0) {
        v24 = *(unsigned __int8*)a4;
        if ((v24 & 1) != 0) {
          v25 = (char*)a4[2];
          v39 = *a4 & 0xFFFFFFFFFFFFFFFELL;
          v26 = v39 - 1;
          if (a4[1] == v39 - 1) {
            if (v26 >= 0x7FFFFFFFFFFFFFF3LL) {
              v27 = -9;
            }
            else {
              v40 = (2 * v26) | 7;
              if (v40 == 23) {
                v41 = 26;
              }
              else {
                v41 = v40 + 1;
              }
              if (v26 >= 0xC) {
                v27 = v41;
              }
              else {
                v27 = 23;
              }
            LABEL_50:
              v39 = v26 + 1;
            }
            v58 = SdkRoutine_85e050(v27);
            result = memmove_plt(v58, v25, v26);
            if (v39 != 23) {
              result = SdkRoutine_857220(v25, v39);
            }
            a4[2] = v58;
            *a4 = v27 | 1;
          }
          else {
            v58 = a4[2];
            v26 = a4[1];
          }
          a4[1] = v26 + 1;
        }
        else {
          if ((_DWORD)v24 == 44) {
            v25 = (char*)a4 + 1;
            v26 = 22;
            v27 = 48;
            goto LABEL_50;
          }
          v58 = (__int64)a4 + 1;
          v26 = v24 >> 1;
          *(_BYTE*)a4 = v24 + 2;
        }
        *(_WORD*)(v58 + v26) = 32;
        v88 = v9 + 1;
        while (1) {
          if (v88 == v10) {
            v9 = &v329[v321];
            goto LABEL_8;
          }
          v89 = (char)*v88;
          if (v89 < 0) {
            break;
          }
          ++v9;
          ++v88;
          if ((*(_WORD*)(a3[2] + 2 * v89) & 0x2000) == 0) {
            goto LABEL_8;
          }
        }
        v9 = v88;
        continue;
      }
      v327 = v9;
      v326 = 0;
      result = (__int64)SdkRoutine_827580(&v327, v10, v324, v325, (__int64)a3,
                                          &v326, 0);
      v14 = result - (_QWORD)v324;
      if (result - (__int64)v324 <= 335) {
        v15 = *(unsigned __int8*)a4;
        if ((v15 & 1) == 0) {
          if ((_DWORD)v15 == 44) {
            v16 = (char*)a4 + 1;
            v17 = 22;
            v18 = 48;
            goto LABEL_30;
          }
          *(_BYTE*)a4 = v15 + 2;
          *(_WORD*)&v323[v15 >> 1] = 37;
          v47 = *(unsigned __int8*)a4;
          if (v14 > 167) {
            goto LABEL_58;
          }
        LABEL_90:
          if ((v47 & 1) != 0) {
            v63 = (char*)a4[2];
            v66 = *a4 & 0xFFFFFFFFFFFFFFFELL;
            v64 = v66 - 1;
            if (a4[1] == v66 - 1) {
              if (v64 >= 0x7FFFFFFFFFFFFFF3LL) {
                v65 = -9;
              }
              else {
                v67 = (2 * v64) | 7;
                if (v67 == 23) {
                  v68 = 26;
                }
                else {
                  v68 = v67 + 1;
                }
                if (v64 >= 0xC) {
                  v65 = v68;
                }
                else {
                  v65 = 23;
                }
              LABEL_101:
                v66 = v64 + 1;
              }
              v70 = SdkRoutine_85e050(v65);
              result = memmove_plt(v70, v63, v64);
              if (v66 != 23) {
                result = SdkRoutine_857220(v63, v66);
              }
              a4[2] = v70;
              *a4 = v65 | 1;
            }
            else {
              v70 = a4[2];
              v64 = a4[1];
            }
            a4[1] = v64 + 1;
          }
          else {
            if ((_DWORD)v47 == 44) {
              v63 = (char*)a4 + 1;
              v64 = 22;
              v65 = 48;
              goto LABEL_101;
            }
            v70 = (__int64)a4 + 1;
            v64 = v47 >> 1;
            *(_BYTE*)a4 = v47 + 2;
          }
          v11 = (char*)(v70 + v64);
          v12 = 65;
        LABEL_6:
          *v11 = v12;
          v11[1] = 0;
          goto LABEL_7;
        }
        v16 = (char*)a4[2];
        v28 = *a4 & 0xFFFFFFFFFFFFFFFELL;
        v17 = v28 - 1;
        if (a4[1] == v28 - 1) {
          if (v17 >= 0x7FFFFFFFFFFFFFF3LL) {
            v18 = -9;
          }
          else {
            v29 = (2 * v17) | 7;
            if (v29 == 23) {
              v30 = 26;
            }
            else {
              v30 = v29 + 1;
            }
            if (v17 >= 0xC) {
              v18 = v30;
            }
            else {
              v18 = 23;
            }
          LABEL_30:
            v28 = v17 + 1;
          }
          v51 = SdkRoutine_85e050(v18);
          result = memmove_plt(v51, v16, v17);
          if (v28 != 23) {
            result = SdkRoutine_857220(v16, v28);
          }
          a4[2] = v51;
          *a4 = v18 | 1;
        }
        else {
          v51 = a4[2];
          v17 = a4[1];
        }
        a4[1] = v17 + 1;
        *(_WORD*)(v51 + v17) = 37;
        v47 = *(unsigned __int8*)a4;
        if (v14 <= 167) {
          goto LABEL_90;
        }
      LABEL_58:
        if ((v47 & 1) != 0) {
          v48 = (char*)a4[2];
          v52 = *a4 & 0xFFFFFFFFFFFFFFFELL;
          v49 = v52 - 1;
          if (a4[1] == v52 - 1) {
            if (v49 >= 0x7FFFFFFFFFFFFFF3LL) {
              v50 = -9;
            }
            else {
              v53 = (2 * v49) | 7;
              if (v53 == 23) {
                v54 = 26;
              }
              else {
                v54 = v53 + 1;
              }
              if (v49 >= 0xC) {
                v50 = v54;
              }
              else {
                v50 = 23;
              }
            LABEL_70:
              v52 = v49 + 1;
            }
            v69 = SdkRoutine_85e050(v50);
            result = memmove_plt(v69, v48, v49);
            if (v52 != 23) {
              result = SdkRoutine_857220(v48, v52);
            }
            a4[2] = v69;
            *a4 = v50 | 1;
          }
          else {
            v69 = a4[2];
            v49 = a4[1];
          }
          a4[1] = v49 + 1;
        }
        else {
          if ((_DWORD)v47 == 44) {
            v48 = (char*)a4 + 1;
            v49 = 22;
            v50 = 48;
            goto LABEL_70;
          }
          v69 = (__int64)a4 + 1;
          v49 = v47 >> 1;
          *(_BYTE*)a4 = v47 + 2;
        }
        v11 = (char*)(v69 + v49);
        v12 = 97;
        goto LABEL_6;
      }
      v327 = v9;
      result = (__int64)SdkRoutine_827580(&v327, v10, v325, v322, (__int64)a3,
                                          &v326, 0);
      v19 = result - (_QWORD)v325;
      if (result - (__int64)v325 > 575) {
        v31 = a1[920];
        if ((v31 & 1) != 0) {
          v32 = *((_QWORD*)a1 + 116);
        }
        else {
          v32 = v31 >> 1;
        }
        v33 = a1[944];
        if ((v33 & 1) != 0) {
          v34 = *((_QWORD*)a1 + 119);
        }
        else {
          v34 = v33 >> 1;
        }
        if (v32 + v34 == 0 || (v327 = v9, (result = (__int64)SdkRoutine_827580(
                                               &v327, v10, v322, a1 + 968,
                                               (__int64)a3, &v326, 0)) -
                                                  (__int64)v322 >
                                              47)) {
          v327 = v9;
          v42 = (char)*v9;
          if (v42 < 0) {
            goto LABEL_82;
          }
          if ((*(_WORD*)(a3[2] + 2 * v42) & 0x800) == 0) {
            if ((_DWORD)v42 == 37) {
              v43 = *(unsigned __int8*)a4;
              if ((v43 & 1) != 0) {
                v125 = a4[1];
                v44 = (char*)a4[2];
                v126 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                v45 = v126 - 1;
                if (v125 != v126 - 1) {
                  a4[1] = v125 + 1;
                  *(_WORD*)&v44[v125] = 37;
                  v139 = *(unsigned __int8*)a4;
                  if ((v139 & 1) != 0) {
                    goto LABEL_284;
                  }
                  goto LABEL_342;
                }
                if (v45 >= 0x7FFFFFFFFFFFFFF3LL) {
                  v46 = -9;
                }
                else {
                  v127 = (2 * v45) | 7;
                  if (v127 == 23) {
                    v128 = 26;
                  }
                  else {
                    v128 = v127 + 1;
                  }
                  if (v45 >= 0xC) {
                    v46 = v128;
                  }
                  else {
                    v46 = 23;
                  }
                LABEL_249:
                  v126 = v45 + 1;
                }
                v186 = SdkRoutine_85e050(v46);
                result = memmove_plt(v186, v44, v45);
                if (v126 != 23) {
                  result = SdkRoutine_857220(v44, v126);
                }
                *a4 = v46 | 1;
                a4[1] = v45 + 1;
                a4[2] = v186;
                *(_WORD*)(v186 + v45) = 37;
                v139 = *(unsigned __int8*)a4;
                if ((v139 & 1) == 0) {
                  goto LABEL_342;
                }
              LABEL_284:
                v140 = (char*)a4[2];
                v141 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                v142 = v141 - 1;
                if (a4[1] == v141 - 1) {
                  if (v142 >= 0x7FFFFFFFFFFFFFF3LL) {
                    v145 = -9;
                  }
                  else {
                    v143 = (2 * v142) | 7;
                    if (v143 == 23) {
                      v144 = 26;
                    }
                    else {
                      v144 = v143 + 1;
                    }
                    if (v142 >= 0xC) {
                      v145 = v144;
                    }
                    else {
                      v145 = 23;
                    }
                  LABEL_344:
                    v141 = v142 + 1;
                  }
                  v146 = SdkRoutine_85e050(v145);
                  result = memmove_plt(v146, v140, v142);
                  if (v141 != 23) {
                    result = SdkRoutine_857220(v140, v141);
                  }
                  a4[2] = v146;
                  *a4 = v145 | 1;
                }
                else {
                  v146 = a4[2];
                  v142 = a4[1];
                }
                a4[1] = v142 + 1;
              }
              else {
                if ((_DWORD)v43 == 44) {
                  v44 = (char*)a4 + 1;
                  v45 = 22;
                  v46 = 48;
                  goto LABEL_249;
                }
                *(_BYTE*)a4 = v43 + 2;
                *(_WORD*)&v323[v43 >> 1] = 37;
                v139 = *(unsigned __int8*)a4;
                if ((v139 & 1) != 0) {
                  goto LABEL_284;
                }
              LABEL_342:
                if ((_DWORD)v139 == 44) {
                  v140 = (char*)a4 + 1;
                  v142 = 22;
                  v145 = 48;
                  goto LABEL_344;
                }
                v146 = (__int64)a4 + 1;
                v142 = v139 >> 1;
                *(_BYTE*)a4 = v139 + 2;
              }
              *(_WORD*)(v146 + v142) = 37;
            LABEL_352:
              v79 = v9 + 1;
            LABEL_353:
              v9 = v79;
              continue;
            }
          LABEL_82:
            v59 = *(unsigned __int8*)a4;
            if ((v59 & 1) != 0) {
              v60 = (char*)a4[2];
              v90 = *a4 & 0xFFFFFFFFFFFFFFFELL;
              v61 = v90 - 1;
              if (a4[1] == v90 - 1) {
                if (v61 >= 0x7FFFFFFFFFFFFFF3LL) {
                  v62 = -9;
                }
                else {
                  v91 = (2 * v61) | 7;
                  if (v91 == 23) {
                    v92 = 26;
                  }
                  else {
                    v92 = v91 + 1;
                  }
                  if (v61 >= 0xC) {
                    v62 = v92;
                  }
                  else {
                    v62 = 23;
                  }
                LABEL_159:
                  v90 = v61 + 1;
                }
                v105 = SdkRoutine_85e050(v62);
                result = memmove_plt(v105, v60, v61);
                if (v90 != 23) {
                  result = SdkRoutine_857220(v60, v90);
                }
                a4[2] = v105;
                *a4 = v62 | 1;
              }
              else {
                v105 = a4[2];
                v61 = a4[1];
              }
              a4[1] = v61 + 1;
            }
            else {
              if ((_DWORD)v59 == 44) {
                v60 = (char*)a4 + 1;
                v61 = 22;
                v62 = 48;
                goto LABEL_159;
              }
              v105 = (__int64)a4 + 1;
              v61 = v59 >> 1;
              *(_BYTE*)a4 = v59 + 2;
            }
            v129 = (_BYTE*)(v105 + v61);
            *v129 = v42;
            v129[1] = 0;
            goto LABEL_352;
          }
          result = (*(__int64 (**)(_QWORD*, _QWORD, _QWORD))(*a3 + 72LL))(
              a3, (unsigned int)v42, 0);
          v79 = v9 + 1;
          v80 = (unsigned __int8)result - 48;
          if (v9 + 1 == v10) {
          LABEL_130:
            if (v79 != v10) {
              goto LABEL_131;
            }
            v326 |= 2u;
            if (v80 > 30) {
            LABEL_132:
              if (v80 <= 60) {
                if (v80 != 31) {
                  if (v80 != 55) {
                    if (v80 != 59) {
                      goto LABEL_316;
                    }
                    v84 = *(unsigned __int8*)a4;
                    if ((v84 & 1) != 0) {
                      v85 = (char*)a4[2];
                      v208 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                      v86 = v208 - 1;
                      if (a4[1] == v208 - 1) {
                        if (v86 >= 0x7FFFFFFFFFFFFFF3LL) {
                          v87 = -9;
                        }
                        else {
                          v209 = (2 * v86) | 7;
                          if (v209 == 23) {
                            v210 = 26;
                          }
                          else {
                            v210 = v209 + 1;
                          }
                          if (v86 >= 0xC) {
                            v87 = v210;
                          }
                          else {
                            v87 = 23;
                          }
                        LABEL_425:
                          v208 = v86 + 1;
                        }
                        v227 = SdkRoutine_85e050(v87);
                        result = memmove_plt(v227, v85, v86);
                        if (v208 != 23) {
                          result = SdkRoutine_857220(v85, v208);
                        }
                        a4[2] = v227;
                        *a4 = v87 | 1;
                      }
                      else {
                        v227 = a4[2];
                        v86 = a4[1];
                      }
                      a4[1] = v86 + 1;
                    }
                    else {
                      if ((_DWORD)v84 == 44) {
                        v85 = (char*)a4 + 1;
                        v86 = 22;
                        v87 = 48;
                        goto LABEL_425;
                      }
                      v227 = (__int64)a4 + 1;
                      v86 = v84 >> 1;
                      *(_BYTE*)a4 = v84 + 2;
                    }
                    *(_WORD*)(v227 + v86) = 37;
                    v287 = *(unsigned __int8*)a4;
                    if ((v287 & 1) != 0) {
                      v288 = (char*)a4[2];
                      v291 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                      v289 = v291 - 1;
                      if (a4[1] == v291 - 1) {
                        if (v289 >= 0x7FFFFFFFFFFFFFF3LL) {
                          v290 = -9;
                        }
                        else {
                          v292 = (2 * v289) | 7;
                          if (v292 == 23) {
                            v293 = 26;
                          }
                          else {
                            v293 = v292 + 1;
                          }
                          if (v289 >= 0xC) {
                            v290 = v293;
                          }
                          else {
                            v290 = 23;
                          }
                        LABEL_624:
                          v291 = v289 + 1;
                        }
                        v294 = SdkRoutine_85e050(v290);
                        result = memmove_plt(v294, v288, v289);
                        if (v291 != 23) {
                          result = SdkRoutine_857220(v288, v291);
                        }
                        a4[2] = v294;
                        *a4 = v290 | 1;
                      }
                      else {
                        v294 = a4[2];
                        v289 = a4[1];
                      }
                      a4[1] = v289 + 1;
                    }
                    else {
                      if ((_DWORD)v287 == 44) {
                        v288 = (char*)a4 + 1;
                        v289 = 22;
                        v290 = 48;
                        goto LABEL_624;
                      }
                      v294 = (__int64)a4 + 1;
                      v289 = v287 >> 1;
                      *(_BYTE*)a4 = v287 + 2;
                    }
                    v9 = v79;
                    *(_WORD*)(v294 + v289) = 83;
                    continue;
                  }
                  v155 = *(unsigned __int8*)a4;
                  if ((v155 & 1) != 0) {
                    v156 = (char*)a4[2];
                    v196 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                    v157 = v196 - 1;
                    if (a4[1] == v196 - 1) {
                      if (v157 >= 0x7FFFFFFFFFFFFFF3LL) {
                        v158 = -9;
                      }
                      else {
                        v197 = (2 * v157) | 7;
                        if (v197 == 23) {
                          v198 = 26;
                        }
                        else {
                          v198 = v197 + 1;
                        }
                        if (v157 >= 0xC) {
                          v158 = v198;
                        }
                        else {
                          v158 = 23;
                        }
                      LABEL_389:
                        v196 = v157 + 1;
                      }
                      v223 = SdkRoutine_85e050(v158);
                      result = memmove_plt(v223, v156, v157);
                      if (v196 != 23) {
                        result = SdkRoutine_857220(v156, v196);
                      }
                      a4[2] = v223;
                      *a4 = v158 | 1;
                    }
                    else {
                      v223 = a4[2];
                      v157 = a4[1];
                    }
                    a4[1] = v157 + 1;
                  }
                  else {
                    if ((_DWORD)v155 == 44) {
                      v156 = (char*)a4 + 1;
                      v157 = 22;
                      v158 = 48;
                      goto LABEL_389;
                    }
                    v223 = (__int64)a4 + 1;
                    v157 = v155 >> 1;
                    *(_BYTE*)a4 = v155 + 2;
                  }
                  *(_WORD*)(v223 + v157) = 37;
                  v255 = *(unsigned __int8*)a4;
                  if ((v255 & 1) != 0) {
                    v256 = (char*)a4[2];
                    v259 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                    v257 = v259 - 1;
                    if (a4[1] == v259 - 1) {
                      if (v257 >= 0x7FFFFFFFFFFFFFF3LL) {
                        v258 = -9;
                      }
                      else {
                        v260 = (2 * v257) | 7;
                        if (v260 == 23) {
                          v261 = 26;
                        }
                        else {
                          v261 = v260 + 1;
                        }
                        if (v257 >= 0xC) {
                          v258 = v261;
                        }
                        else {
                          v258 = 23;
                        }
                      LABEL_548:
                        v259 = v257 + 1;
                      }
                      v262 = SdkRoutine_85e050(v258);
                      result = memmove_plt(v262, v256, v257);
                      if (v259 != 23) {
                        result = SdkRoutine_857220(v256, v259);
                      }
                      a4[2] = v262;
                      *a4 = v258 | 1;
                    }
                    else {
                      v262 = a4[2];
                      v257 = a4[1];
                    }
                    a4[1] = v257 + 1;
                  }
                  else {
                    if ((_DWORD)v255 == 44) {
                      v256 = (char*)a4 + 1;
                      v257 = 22;
                      v258 = 48;
                      goto LABEL_548;
                    }
                    v262 = (__int64)a4 + 1;
                    v257 = v255 >> 1;
                    *(_BYTE*)a4 = v255 + 2;
                  }
                  v9 = v79;
                  *(_WORD*)(v262 + v257) = 77;
                  continue;
                }
                v167 = *(unsigned __int8*)a4;
                if ((v167 & 1) != 0) {
                  v168 = (char*)a4[2];
                  v214 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                  v169 = v214 - 1;
                  if (a4[1] == v214 - 1) {
                    if (v169 >= 0x7FFFFFFFFFFFFFF3LL) {
                      v170 = -9;
                    }
                    else {
                      v215 = (2 * v169) | 7;
                      if (v215 == 23) {
                        v216 = 26;
                      }
                      else {
                        v216 = v215 + 1;
                      }
                      if (v169 >= 0xC) {
                        v170 = v216;
                      }
                      else {
                        v170 = 23;
                      }
                    LABEL_443:
                      v214 = v169 + 1;
                    }
                    v229 = SdkRoutine_85e050(v170);
                    result = memmove_plt(v229, v168, v169);
                    if (v214 != 23) {
                      result = SdkRoutine_857220(v168, v214);
                    }
                    a4[2] = v229;
                    *a4 = v170 | 1;
                  }
                  else {
                    v229 = a4[2];
                    v169 = a4[1];
                  }
                  a4[1] = v169 + 1;
                }
                else {
                  if ((_DWORD)v167 == 44) {
                    v168 = (char*)a4 + 1;
                    v169 = 22;
                    v170 = 48;
                    goto LABEL_443;
                  }
                  v229 = (__int64)a4 + 1;
                  v169 = v167 >> 1;
                  *(_BYTE*)a4 = v167 + 2;
                }
                *(_WORD*)(v229 + v169) = 37;
                v303 = *(unsigned __int8*)a4;
                if ((v303 & 1) != 0) {
                  v304 = (char*)a4[2];
                  v307 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                  v305 = v307 - 1;
                  if (a4[1] == v307 - 1) {
                    if (v305 >= 0x7FFFFFFFFFFFFFF3LL) {
                      v306 = -9;
                    }
                    else {
                      v308 = (2 * v305) | 7;
                      if (v308 == 23) {
                        v309 = 26;
                      }
                      else {
                        v309 = v308 + 1;
                      }
                      if (v305 >= 0xC) {
                        v306 = v309;
                      }
                      else {
                        v306 = 23;
                      }
                    LABEL_662:
                      v307 = v305 + 1;
                    }
                    v310 = SdkRoutine_85e050(v306);
                    result = memmove_plt(v310, v304, v305);
                    if (v307 != 23) {
                      result = SdkRoutine_857220(v304, v307);
                    }
                    a4[2] = v310;
                    *a4 = v306 | 1;
                  }
                  else {
                    v310 = a4[2];
                    v305 = a4[1];
                  }
                  a4[1] = v305 + 1;
                }
                else {
                  if ((_DWORD)v303 == 44) {
                    v304 = (char*)a4 + 1;
                    v305 = 22;
                    v306 = 48;
                    goto LABEL_662;
                  }
                  v310 = (__int64)a4 + 1;
                  v305 = v303 >> 1;
                  *(_BYTE*)a4 = v303 + 2;
                }
                v9 = v79;
                *(_WORD*)(v310 + v305) = 100;
                continue;
              }
              if (v80 != 61) {
                if (v80 != 364) {
                  if (v80 != 2061) {
                    goto LABEL_316;
                  }
                  v106 = *(unsigned __int8*)a4;
                  if ((v106 & 1) != 0) {
                    v107 = (char*)a4[2];
                    v211 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                    v108 = v211 - 1;
                    if (a4[1] == v211 - 1) {
                      if (v108 >= 0x7FFFFFFFFFFFFFF3LL) {
                        v109 = -9;
                      }
                      else {
                        v212 = (2 * v108) | 7;
                        if (v212 == 23) {
                          v213 = 26;
                        }
                        else {
                          v213 = v212 + 1;
                        }
                        if (v108 >= 0xC) {
                          v109 = v213;
                        }
                        else {
                          v109 = 23;
                        }
                      LABEL_434:
                        v211 = v108 + 1;
                      }
                      v228 = SdkRoutine_85e050(v109);
                      result = memmove_plt(v228, v107, v108);
                      if (v211 != 23) {
                        result = SdkRoutine_857220(v107, v211);
                      }
                      a4[2] = v228;
                      *a4 = v109 | 1;
                    }
                    else {
                      v228 = a4[2];
                      v108 = a4[1];
                    }
                    a4[1] = v108 + 1;
                  }
                  else {
                    if ((_DWORD)v106 == 44) {
                      v107 = (char*)a4 + 1;
                      v108 = 22;
                      v109 = 48;
                      goto LABEL_434;
                    }
                    v228 = (__int64)a4 + 1;
                    v108 = v106 >> 1;
                    *(_BYTE*)a4 = v106 + 2;
                  }
                  *(_WORD*)(v228 + v108) = 37;
                  v295 = *(unsigned __int8*)a4;
                  if ((v295 & 1) != 0) {
                    v296 = (char*)a4[2];
                    v299 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                    v297 = v299 - 1;
                    if (a4[1] == v299 - 1) {
                      if (v297 >= 0x7FFFFFFFFFFFFFF3LL) {
                        v298 = -9;
                      }
                      else {
                        v300 = (2 * v297) | 7;
                        if (v300 == 23) {
                          v301 = 26;
                        }
                        else {
                          v301 = v300 + 1;
                        }
                        if (v297 >= 0xC) {
                          v298 = v301;
                        }
                        else {
                          v298 = 23;
                        }
                      LABEL_643:
                        v299 = v297 + 1;
                      }
                      v302 = SdkRoutine_85e050(v298);
                      result = memmove_plt(v302, v296, v297);
                      if (v299 != 23) {
                        result = SdkRoutine_857220(v296, v299);
                      }
                      a4[2] = v302;
                      *a4 = v298 | 1;
                    }
                    else {
                      v302 = a4[2];
                      v297 = a4[1];
                    }
                    a4[1] = v297 + 1;
                  }
                  else {
                    if ((_DWORD)v295 == 44) {
                      v296 = (char*)a4 + 1;
                      v297 = 22;
                      v298 = 48;
                      goto LABEL_643;
                    }
                    v302 = (__int64)a4 + 1;
                    v297 = v295 >> 1;
                    *(_BYTE*)a4 = v295 + 2;
                  }
                  v9 = v79;
                  *(_WORD*)(v302 + v297) = 89;
                  continue;
                }
                v159 = *(unsigned __int8*)a4;
                if ((v159 & 1) != 0) {
                  v160 = (char*)a4[2];
                  v199 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                  v161 = v199 - 1;
                  if (a4[1] == v199 - 1) {
                    if (v161 >= 0x7FFFFFFFFFFFFFF3LL) {
                      v162 = -9;
                    }
                    else {
                      v200 = (2 * v161) | 7;
                      if (v200 == 23) {
                        v201 = 26;
                      }
                      else {
                        v201 = v200 + 1;
                      }
                      if (v161 >= 0xC) {
                        v162 = v201;
                      }
                      else {
                        v162 = 23;
                      }
                    LABEL_398:
                      v199 = v161 + 1;
                    }
                    v224 = SdkRoutine_85e050(v162);
                    result = memmove_plt(v224, v160, v161);
                    if (v199 != 23) {
                      result = SdkRoutine_857220(v160, v199);
                    }
                    a4[2] = v224;
                    *a4 = v162 | 1;
                  }
                  else {
                    v224 = a4[2];
                    v161 = a4[1];
                  }
                  a4[1] = v161 + 1;
                }
                else {
                  if ((_DWORD)v159 == 44) {
                    v160 = (char*)a4 + 1;
                    v161 = 22;
                    v162 = 48;
                    goto LABEL_398;
                  }
                  v224 = (__int64)a4 + 1;
                  v161 = v159 >> 1;
                  *(_BYTE*)a4 = v159 + 2;
                }
                *(_WORD*)(v224 + v161) = 37;
                v263 = *(unsigned __int8*)a4;
                if ((v263 & 1) != 0) {
                  v264 = (char*)a4[2];
                  v267 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                  v265 = v267 - 1;
                  if (a4[1] == v267 - 1) {
                    if (v265 >= 0x7FFFFFFFFFFFFFF3LL) {
                      v266 = -9;
                    }
                    else {
                      v268 = (2 * v265) | 7;
                      if (v268 == 23) {
                        v269 = 26;
                      }
                      else {
                        v269 = v268 + 1;
                      }
                      if (v265 >= 0xC) {
                        v266 = v269;
                      }
                      else {
                        v266 = 23;
                      }
                    LABEL_567:
                      v267 = v265 + 1;
                    }
                    v270 = SdkRoutine_85e050(v266);
                    result = memmove_plt(v270, v264, v265);
                    if (v267 != 23) {
                      result = SdkRoutine_857220(v264, v267);
                    }
                    a4[2] = v270;
                    *a4 = v266 | 1;
                  }
                  else {
                    v270 = a4[2];
                    v265 = a4[1];
                  }
                  a4[1] = v265 + 1;
                }
                else {
                  if ((_DWORD)v263 == 44) {
                    v264 = (char*)a4 + 1;
                    v265 = 22;
                    v266 = 48;
                    goto LABEL_567;
                  }
                  v270 = (__int64)a4 + 1;
                  v265 = v263 >> 1;
                  *(_BYTE*)a4 = v263 + 2;
                }
                v9 = v79;
                *(_WORD*)(v270 + v265) = 106;
                continue;
              }
              v171 = *(unsigned __int8*)a4;
              if ((v171 & 1) != 0) {
                v172 = (char*)a4[2];
                v217 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                v173 = v217 - 1;
                if (a4[1] == v217 - 1) {
                  if (v173 >= 0x7FFFFFFFFFFFFFF3LL) {
                    v174 = -9;
                  }
                  else {
                    v218 = (2 * v173) | 7;
                    if (v218 == 23) {
                      v219 = 26;
                    }
                    else {
                      v219 = v218 + 1;
                    }
                    if (v173 >= 0xC) {
                      v174 = v219;
                    }
                    else {
                      v174 = 23;
                    }
                  LABEL_452:
                    v217 = v173 + 1;
                  }
                  v230 = SdkRoutine_85e050(v174);
                  result = memmove_plt(v230, v172, v173);
                  if (v217 != 23) {
                    result = SdkRoutine_857220(v172, v217);
                  }
                  a4[2] = v230;
                  *a4 = v174 | 1;
                }
                else {
                  v230 = a4[2];
                  v173 = a4[1];
                }
                a4[1] = v173 + 1;
              }
              else {
                if ((_DWORD)v171 == 44) {
                  v172 = (char*)a4 + 1;
                  v173 = 22;
                  v174 = 48;
                  goto LABEL_452;
                }
                v230 = (__int64)a4 + 1;
                v173 = v171 >> 1;
                *(_BYTE*)a4 = v171 + 2;
              }
              *(_WORD*)(v230 + v173) = 37;
              v311 = *(unsigned __int8*)a4;
              if ((v311 & 1) != 0) {
                v312 = (char*)a4[2];
                v315 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                v313 = v315 - 1;
                if (a4[1] == v315 - 1) {
                  if (v313 >= 0x7FFFFFFFFFFFFFF3LL) {
                    v314 = -9;
                  }
                  else {
                    v316 = (2 * v313) | 7;
                    if (v316 == 23) {
                      v317 = 26;
                    }
                    else {
                      v317 = v316 + 1;
                    }
                    if (v313 >= 0xC) {
                      v314 = v317;
                    }
                    else {
                      v314 = 23;
                    }
                  LABEL_681:
                    v315 = v313 + 1;
                  }
                  v318 = SdkRoutine_85e050(v314);
                  result = memmove_plt(v318, v312, v313);
                  if (v315 != 23) {
                    result = SdkRoutine_857220(v312, v315);
                  }
                  a4[2] = v318;
                  *a4 = v314 | 1;
                }
                else {
                  v318 = a4[2];
                  v313 = a4[1];
                }
                a4[1] = v313 + 1;
              }
              else {
                if ((_DWORD)v311 == 44) {
                  v312 = (char*)a4 + 1;
                  v313 = 22;
                  v314 = 48;
                  goto LABEL_681;
                }
                v318 = (__int64)a4 + 1;
                v313 = v311 >> 1;
                *(_BYTE*)a4 = v311 + 2;
              }
              v9 = v79;
              *(_WORD*)(v318 + v313) = 121;
              continue;
            }
          }
          else {
            v81 = (char)*v79;
            if ((v81 & 0x8000000000000000LL) == 0 &&
                (*(_WORD*)(a3[2] + 2 * v81) & 0x800) != 0) {
              result = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
              v79 = v9 + 2;
              v80 = 10 * v80 + (unsigned __int8)result - 48;
              if (v9 + 2 == v10) {
                goto LABEL_130;
              }
              v82 = (char)*v79;
              if ((v82 & 0x8000000000000000LL) == 0 &&
                  (*(_WORD*)(a3[2] + 2 * v82) & 0x800) != 0) {
                result = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
                v79 = v9 + 3;
                v80 = 10 * v80 + (unsigned __int8)result - 48;
                if (v9 + 3 == v10) {
                  goto LABEL_130;
                }
                v83 = (char)*v79;
                if ((v83 & 0x8000000000000000LL) == 0 &&
                    (*(_WORD*)(a3[2] + 2 * v83) & 0x800) != 0) {
                  result = (*(__int64 (**)(_QWORD*))(*a3 + 72LL))(a3);
                  v79 = v9 + 4;
                  v80 = 10 * v80 + (unsigned __int8)result - 48;
                  goto LABEL_130;
                }
              }
            }
          LABEL_131:
            if (v80 > 30) {
              goto LABEL_132;
            }
          }
          if (v80 > 10) {
            if (v80 != 11) {
              if (v80 != 12) {
                if (v80 != 23) {
                  goto LABEL_316;
                }
                v130 = *(unsigned __int8*)a4;
                if ((v130 & 1) != 0) {
                  v131 = (char*)a4[2];
                  v202 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                  v132 = v202 - 1;
                  if (a4[1] == v202 - 1) {
                    if (v132 >= 0x7FFFFFFFFFFFFFF3LL) {
                      v133 = -9;
                    }
                    else {
                      v203 = (2 * v132) | 7;
                      if (v203 == 23) {
                        v204 = 26;
                      }
                      else {
                        v204 = v203 + 1;
                      }
                      if (v132 >= 0xC) {
                        v133 = v204;
                      }
                      else {
                        v133 = 23;
                      }
                    LABEL_407:
                      v202 = v132 + 1;
                    }
                    v225 = SdkRoutine_85e050(v133);
                    result = memmove_plt(v225, v131, v132);
                    if (v202 != 23) {
                      result = SdkRoutine_857220(v131, v202);
                    }
                    a4[2] = v225;
                    *a4 = v133 | 1;
                  }
                  else {
                    v225 = a4[2];
                    v132 = a4[1];
                  }
                  a4[1] = v132 + 1;
                }
                else {
                  if ((_DWORD)v130 == 44) {
                    v131 = (char*)a4 + 1;
                    v132 = 22;
                    v133 = 48;
                    goto LABEL_407;
                  }
                  v225 = (__int64)a4 + 1;
                  v132 = v130 >> 1;
                  *(_BYTE*)a4 = v130 + 2;
                }
                *(_WORD*)(v225 + v132) = 37;
                v271 = *(unsigned __int8*)a4;
                if ((v271 & 1) != 0) {
                  v272 = (char*)a4[2];
                  v275 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                  v273 = v275 - 1;
                  if (a4[1] == v275 - 1) {
                    if (v273 >= 0x7FFFFFFFFFFFFFF3LL) {
                      v274 = -9;
                    }
                    else {
                      v276 = (2 * v273) | 7;
                      if (v276 == 23) {
                        v277 = 26;
                      }
                      else {
                        v277 = v276 + 1;
                      }
                      if (v273 >= 0xC) {
                        v274 = v277;
                      }
                      else {
                        v274 = 23;
                      }
                    LABEL_586:
                      v275 = v273 + 1;
                    }
                    v278 = SdkRoutine_85e050(v274);
                    result = memmove_plt(v278, v272, v273);
                    if (v275 != 23) {
                      result = SdkRoutine_857220(v272, v275);
                    }
                    a4[2] = v278;
                    *a4 = v274 | 1;
                  }
                  else {
                    v278 = a4[2];
                    v273 = a4[1];
                  }
                  a4[1] = v273 + 1;
                }
                else {
                  if ((_DWORD)v271 == 44) {
                    v272 = (char*)a4 + 1;
                    v273 = 22;
                    v274 = 48;
                    goto LABEL_586;
                  }
                  v278 = (__int64)a4 + 1;
                  v273 = v271 >> 1;
                  *(_BYTE*)a4 = v271 + 2;
                }
                v9 = v79;
                *(_WORD*)(v278 + v273) = 72;
                continue;
              }
              v151 = *(unsigned __int8*)a4;
              if ((v151 & 1) != 0) {
                v152 = (char*)a4[2];
                v193 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                v153 = v193 - 1;
                if (a4[1] == v193 - 1) {
                  if (v153 >= 0x7FFFFFFFFFFFFFF3LL) {
                    v154 = -9;
                  }
                  else {
                    v194 = (2 * v153) | 7;
                    if (v194 == 23) {
                      v195 = 26;
                    }
                    else {
                      v195 = v194 + 1;
                    }
                    if (v153 >= 0xC) {
                      v154 = v195;
                    }
                    else {
                      v154 = 23;
                    }
                  LABEL_380:
                    v193 = v153 + 1;
                  }
                  v222 = SdkRoutine_85e050(v154);
                  result = memmove_plt(v222, v152, v153);
                  if (v193 != 23) {
                    result = SdkRoutine_857220(v152, v193);
                  }
                  a4[2] = v222;
                  *a4 = v154 | 1;
                }
                else {
                  v222 = a4[2];
                  v153 = a4[1];
                }
                a4[1] = v153 + 1;
              }
              else {
                if ((_DWORD)v151 == 44) {
                  v152 = (char*)a4 + 1;
                  v153 = 22;
                  v154 = 48;
                  goto LABEL_380;
                }
                v222 = (__int64)a4 + 1;
                v153 = v151 >> 1;
                *(_BYTE*)a4 = v151 + 2;
              }
              *(_WORD*)(v222 + v153) = 37;
              v247 = *(unsigned __int8*)a4;
              if ((v247 & 1) != 0) {
                v248 = (char*)a4[2];
                v251 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                v249 = v251 - 1;
                if (a4[1] == v251 - 1) {
                  if (v249 >= 0x7FFFFFFFFFFFFFF3LL) {
                    v250 = -9;
                  }
                  else {
                    v252 = (2 * v249) | 7;
                    if (v252 == 23) {
                      v253 = 26;
                    }
                    else {
                      v253 = v252 + 1;
                    }
                    if (v249 >= 0xC) {
                      v250 = v253;
                    }
                    else {
                      v250 = 23;
                    }
                  LABEL_529:
                    v251 = v249 + 1;
                  }
                  v254 = SdkRoutine_85e050(v250);
                  result = memmove_plt(v254, v248, v249);
                  if (v251 != 23) {
                    result = SdkRoutine_857220(v248, v251);
                  }
                  a4[2] = v254;
                  *a4 = v250 | 1;
                }
                else {
                  v254 = a4[2];
                  v249 = a4[1];
                }
                a4[1] = v249 + 1;
              }
              else {
                if ((_DWORD)v247 == 44) {
                  v248 = (char*)a4 + 1;
                  v249 = 22;
                  v250 = 48;
                  goto LABEL_529;
                }
                v254 = (__int64)a4 + 1;
                v249 = v247 >> 1;
                *(_BYTE*)a4 = v247 + 2;
              }
              v9 = v79;
              *(_WORD*)(v254 + v249) = 109;
              continue;
            }
            v163 = *(unsigned __int8*)a4;
            if ((v163 & 1) != 0) {
              v164 = (char*)a4[2];
              v205 = *a4 & 0xFFFFFFFFFFFFFFFELL;
              v165 = v205 - 1;
              if (a4[1] == v205 - 1) {
                if (v165 >= 0x7FFFFFFFFFFFFFF3LL) {
                  v166 = -9;
                }
                else {
                  v206 = (2 * v165) | 7;
                  if (v206 == 23) {
                    v207 = 26;
                  }
                  else {
                    v207 = v206 + 1;
                  }
                  if (v165 >= 0xC) {
                    v166 = v207;
                  }
                  else {
                    v166 = 23;
                  }
                LABEL_416:
                  v205 = v165 + 1;
                }
                v226 = SdkRoutine_85e050(v166);
                result = memmove_plt(v226, v164, v165);
                if (v205 != 23) {
                  result = SdkRoutine_857220(v164, v205);
                }
                a4[2] = v226;
                *a4 = v166 | 1;
              }
              else {
                v226 = a4[2];
                v165 = a4[1];
              }
              a4[1] = v165 + 1;
            }
            else {
              if ((_DWORD)v163 == 44) {
                v164 = (char*)a4 + 1;
                v165 = 22;
                v166 = 48;
                goto LABEL_416;
              }
              v226 = (__int64)a4 + 1;
              v165 = v163 >> 1;
              *(_BYTE*)a4 = v163 + 2;
            }
            *(_WORD*)(v226 + v165) = 37;
            v279 = *(unsigned __int8*)a4;
            if ((v279 & 1) != 0) {
              v280 = (char*)a4[2];
              v283 = *a4 & 0xFFFFFFFFFFFFFFFELL;
              v281 = v283 - 1;
              if (a4[1] == v283 - 1) {
                if (v281 >= 0x7FFFFFFFFFFFFFF3LL) {
                  v282 = -9;
                }
                else {
                  v284 = (2 * v281) | 7;
                  if (v284 == 23) {
                    v285 = 26;
                  }
                  else {
                    v285 = v284 + 1;
                  }
                  if (v281 >= 0xC) {
                    v282 = v285;
                  }
                  else {
                    v282 = 23;
                  }
                LABEL_605:
                  v283 = v281 + 1;
                }
                v286 = SdkRoutine_85e050(v282);
                result = memmove_plt(v286, v280, v281);
                if (v283 != 23) {
                  result = SdkRoutine_857220(v280, v283);
                }
                a4[2] = v286;
                *a4 = v282 | 1;
              }
              else {
                v286 = a4[2];
                v281 = a4[1];
              }
              a4[1] = v281 + 1;
            }
            else {
              if ((_DWORD)v279 == 44) {
                v280 = (char*)a4 + 1;
                v281 = 22;
                v282 = 48;
                goto LABEL_605;
              }
              v286 = (__int64)a4 + 1;
              v281 = v279 >> 1;
              *(_BYTE*)a4 = v279 + 2;
            }
            v9 = v79;
            *(_WORD*)(v286 + v281) = 73;
            continue;
          }
          if (v80 != 6) {
            if (v80 == 7) {
              v134 = *(unsigned __int8*)a4;
              if ((v134 & 1) != 0) {
                v135 = (char*)a4[2];
                v190 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                v136 = v190 - 1;
                if (a4[1] == v190 - 1) {
                  if (v136 >= 0x7FFFFFFFFFFFFFF3LL) {
                    v137 = -9;
                  }
                  else {
                    v191 = (2 * v136) | 7;
                    if (v191 == 23) {
                      v192 = 26;
                    }
                    else {
                      v192 = v191 + 1;
                    }
                    if (v136 >= 0xC) {
                      v137 = v192;
                    }
                    else {
                      v137 = 23;
                    }
                  LABEL_371:
                    v190 = v136 + 1;
                  }
                  v221 = SdkRoutine_85e050(v137);
                  result = memmove_plt(v221, v135, v136);
                  if (v190 != 23) {
                    result = SdkRoutine_857220(v135, v190);
                  }
                  a4[2] = v221;
                  *a4 = v137 | 1;
                }
                else {
                  v221 = a4[2];
                  v136 = a4[1];
                }
                a4[1] = v136 + 1;
              }
              else {
                if ((_DWORD)v134 == 44) {
                  v135 = (char*)a4 + 1;
                  v136 = 22;
                  v137 = 48;
                  goto LABEL_371;
                }
                v221 = (__int64)a4 + 1;
                v136 = v134 >> 1;
                *(_BYTE*)a4 = v134 + 2;
              }
              *(_WORD*)(v221 + v136) = 37;
              v239 = *(unsigned __int8*)a4;
              if ((v239 & 1) != 0) {
                v240 = (char*)a4[2];
                v243 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                v241 = v243 - 1;
                if (a4[1] == v243 - 1) {
                  if (v241 >= 0x7FFFFFFFFFFFFFF3LL) {
                    v242 = -9;
                  }
                  else {
                    v244 = (2 * v241) | 7;
                    if (v244 == 23) {
                      v245 = 26;
                    }
                    else {
                      v245 = v244 + 1;
                    }
                    if (v241 >= 0xC) {
                      v242 = v245;
                    }
                    else {
                      v242 = 23;
                    }
                  LABEL_510:
                    v243 = v241 + 1;
                  }
                  v246 = SdkRoutine_85e050(v242);
                  result = memmove_plt(v246, v240, v241);
                  if (v243 != 23) {
                    result = SdkRoutine_857220(v240, v243);
                  }
                  a4[2] = v246;
                  *a4 = v242 | 1;
                }
                else {
                  v246 = a4[2];
                  v241 = a4[1];
                }
                a4[1] = v241 + 1;
              }
              else {
                if ((_DWORD)v239 == 44) {
                  v240 = (char*)a4 + 1;
                  v241 = 22;
                  v242 = 48;
                  goto LABEL_510;
                }
                v246 = (__int64)a4 + 1;
                v241 = v239 >> 1;
                *(_BYTE*)a4 = v239 + 2;
              }
              v9 = v79;
              *(_WORD*)(v246 + v241) = 117;
              continue;
            }
          LABEL_316:
            v175 = v327;
            while (2) {
              if (v175 == v79) {
                goto LABEL_353;
              }
              v177 = *v175;
              v178 = *(unsigned __int8*)a4;
              if ((v178 & 1) != 0) {
                v179 = (char*)a4[2];
                v182 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                v180 = v182 - 1;
                if (a4[1] == v182 - 1) {
                  if (v180 >= 0x7FFFFFFFFFFFFFF3LL) {
                    v181 = -9;
                  }
                  else {
                    v183 = (2 * v180) | 7;
                    if (v183 == 23) {
                      v184 = 26;
                    }
                    else {
                      v184 = v183 + 1;
                    }
                    if (v180 >= 0xC) {
                      v181 = v184;
                    }
                    else {
                      v181 = 23;
                    }
                  LABEL_332:
                    v182 = v180 + 1;
                  }
                  v185 = SdkRoutine_85e050(v181);
                  result = memmove_plt(v185, v179, v180);
                  if (v182 != 23) {
                    result = SdkRoutine_857220(v179, v182);
                  }
                  a4[2] = v185;
                  *a4 = v181 | 1;
                }
                else {
                  v185 = a4[2];
                  v180 = a4[1];
                }
                a4[1] = v180 + 1;
              }
              else {
                if ((_DWORD)v178 == 44) {
                  v179 = (char*)a4 + 1;
                  v180 = 22;
                  v181 = 48;
                  goto LABEL_332;
                }
                v185 = (__int64)a4 + 1;
                v180 = v178 >> 1;
                *(_BYTE*)a4 = v178 + 2;
              }
              v176 = (unsigned __int8*)(v185 + v180);
              *v176 = v177;
              v176[1] = 0;
              v175 = ++v327;
              continue;
            }
          }
          v147 = *(unsigned __int8*)a4;
          if ((v147 & 1) != 0) {
            v148 = (char*)a4[2];
            v187 = *a4 & 0xFFFFFFFFFFFFFFFELL;
            v149 = v187 - 1;
            if (a4[1] == v187 - 1) {
              if (v149 >= 0x7FFFFFFFFFFFFFF3LL) {
                v150 = -9;
              }
              else {
                v188 = (2 * v149) | 7;
                if (v188 == 23) {
                  v189 = 26;
                }
                else {
                  v189 = v188 + 1;
                }
                if (v149 >= 0xC) {
                  v150 = v189;
                }
                else {
                  v150 = 23;
                }
              LABEL_362:
                v187 = v149 + 1;
              }
              v220 = SdkRoutine_85e050(v150);
              result = memmove_plt(v220, v148, v149);
              if (v187 != 23) {
                result = SdkRoutine_857220(v148, v187);
              }
              a4[2] = v220;
              *a4 = v150 | 1;
            }
            else {
              v220 = a4[2];
              v149 = a4[1];
            }
            a4[1] = v149 + 1;
          }
          else {
            if ((_DWORD)v147 == 44) {
              v148 = (char*)a4 + 1;
              v149 = 22;
              v150 = 48;
              goto LABEL_362;
            }
            v220 = (__int64)a4 + 1;
            v149 = v147 >> 1;
            *(_BYTE*)a4 = v147 + 2;
          }
          *(_WORD*)(v220 + v149) = 37;
          v231 = *(unsigned __int8*)a4;
          if ((v231 & 1) != 0) {
            v232 = (char*)a4[2];
            v235 = *a4 & 0xFFFFFFFFFFFFFFFELL;
            v233 = v235 - 1;
            if (a4[1] == v235 - 1) {
              if (v233 >= 0x7FFFFFFFFFFFFFF3LL) {
                v234 = -9;
              }
              else {
                v236 = (2 * v233) | 7;
                if (v236 == 23) {
                  v237 = 26;
                }
                else {
                  v237 = v236 + 1;
                }
                if (v233 >= 0xC) {
                  v234 = v237;
                }
                else {
                  v234 = 23;
                }
              LABEL_491:
                v235 = v233 + 1;
              }
              v238 = SdkRoutine_85e050(v234);
              result = memmove_plt(v238, v232, v233);
              if (v235 != 23) {
                result = SdkRoutine_857220(v232, v235);
              }
              a4[2] = v238;
              *a4 = v234 | 1;
            }
            else {
              v238 = a4[2];
              v233 = a4[1];
            }
            a4[1] = v233 + 1;
          }
          else {
            if ((_DWORD)v231 == 44) {
              v232 = (char*)a4 + 1;
              v233 = 22;
              v234 = 48;
              goto LABEL_491;
            }
            v238 = (__int64)a4 + 1;
            v233 = v231 >> 1;
            *(_BYTE*)a4 = v231 + 2;
          }
          v9 = v79;
          *(_WORD*)(v238 + v233) = 119;
          continue;
        }
        v35 = *(unsigned __int8*)a4;
        if ((v35 & 1) != 0) {
          v101 = a4[1];
          v36 = (char*)a4[2];
          v102 = *a4 & 0xFFFFFFFFFFFFFFFELL;
          v37 = v102 - 1;
          if (v101 != v102 - 1) {
            a4[1] = v101 + 1;
            *(_WORD*)&v36[v101] = 37;
            v117 = *(unsigned __int8*)a4;
            if ((v117 & 1) != 0) {
              goto LABEL_230;
            }
            goto LABEL_273;
          }
          if (v37 >= 0x7FFFFFFFFFFFFFF3LL) {
            v38 = -9;
          }
          else {
            v103 = (2 * v37) | 7;
            if (v103 == 23) {
              v104 = 26;
            }
            else {
              v104 = v103 + 1;
            }
            if (v37 >= 0xC) {
              v38 = v104;
            }
            else {
              v38 = 23;
            }
          LABEL_198:
            v102 = v37 + 1;
          }
          v138 = SdkRoutine_85e050(v38);
          result = memmove_plt(v138, v36, v37);
          if (v102 != 23) {
            result = SdkRoutine_857220(v36, v102);
          }
          *a4 = v38 | 1;
          a4[1] = v37 + 1;
          a4[2] = v138;
          *(_WORD*)(v138 + v37) = 37;
          v117 = *(unsigned __int8*)a4;
          if ((v117 & 1) == 0) {
            goto LABEL_273;
          }
        LABEL_230:
          v118 = (char*)a4[2];
          v119 = *a4 & 0xFFFFFFFFFFFFFFFELL;
          v120 = v119 - 1;
          if (a4[1] == v119 - 1) {
            if (v120 >= 0x7FFFFFFFFFFFFFF3LL) {
              v123 = -9;
            }
            else {
              v121 = (2 * v120) | 7;
              if (v121 == 23) {
                v122 = 26;
              }
              else {
                v122 = v121 + 1;
              }
              if (v120 >= 0xC) {
                v123 = v122;
              }
              else {
                v123 = 23;
              }
            LABEL_275:
              v119 = v120 + 1;
            }
            v124 = SdkRoutine_85e050(v123);
            result = memmove_plt(v124, v118, v120);
            if (v119 != 23) {
              result = SdkRoutine_857220(v118, v119);
            }
            a4[2] = v124;
            *a4 = v123 | 1;
          }
          else {
            v124 = a4[2];
            v120 = a4[1];
          }
          a4[1] = v120 + 1;
        }
        else {
          if ((_DWORD)v35 == 44) {
            v36 = (char*)a4 + 1;
            v37 = 22;
            v38 = 48;
            goto LABEL_198;
          }
          *(_BYTE*)a4 = v35 + 2;
          *(_WORD*)&v323[v35 >> 1] = 37;
          v117 = *(unsigned __int8*)a4;
          if ((v117 & 1) != 0) {
            goto LABEL_230;
          }
        LABEL_273:
          if ((_DWORD)v117 == 44) {
            v118 = (char*)a4 + 1;
            v120 = 22;
            v123 = 48;
            goto LABEL_275;
          }
          v124 = (__int64)a4 + 1;
          v120 = v117 >> 1;
          *(_BYTE*)a4 = v117 + 2;
        }
        *(_WORD*)(v124 + v120) = 112;
        goto LABEL_7;
      }
      v20 = *(unsigned __int8*)a4;
      if ((v20 & 1) != 0) {
        v21 = (char*)a4[2];
        v55 = *a4 & 0xFFFFFFFFFFFFFFFELL;
        v22 = v55 - 1;
        if (a4[1] != v55 - 1) {
          v75 = a4[2];
          v22 = a4[1];
          goto LABEL_173;
        }
        if (v22 >= 0x7FFFFFFFFFFFFFF3LL) {
          v23 = -9;
          goto LABEL_170;
        }
        v56 = (2 * v22) | 7;
        if (v56 == 23) {
          v57 = 26;
        }
        else {
          v57 = v56 + 1;
        }
        if (v22 >= 0xC) {
          v23 = v57;
        }
        else {
          v23 = 23;
        }
      }
      else {
        if ((_DWORD)v20 != 44) {
          *(_BYTE*)a4 = v20 + 2;
          *(_WORD*)&v323[v20 >> 1] = 37;
          v71 = *(unsigned __int8*)a4;
          if (v19 > 287) {
            goto LABEL_107;
          }
          goto LABEL_174;
        }
        v21 = (char*)a4 + 1;
        v22 = 22;
        v23 = 48;
      }
      v55 = v22 + 1;
    LABEL_170:
      v75 = SdkRoutine_85e050(v23);
      result = memmove_plt(v75, v21, v22);
      if (v55 != 23) {
        result = SdkRoutine_857220(v21, v55);
      }
      a4[2] = v75;
      *a4 = v23 | 1;
    LABEL_173:
      a4[1] = v22 + 1;
      *(_WORD*)(v75 + v22) = 37;
      v71 = *(unsigned __int8*)a4;
      if (v19 > 287) {
      LABEL_107:
        if ((v71 & 1) != 0) {
          v72 = (char*)a4[2];
          v76 = *a4 & 0xFFFFFFFFFFFFFFFELL;
          v73 = v76 - 1;
          if (a4[1] == v76 - 1) {
            if (v73 >= 0x7FFFFFFFFFFFFFF3LL) {
              v74 = -9;
            }
            else {
              v77 = (2 * v73) | 7;
              if (v77 == 23) {
                v78 = 26;
              }
              else {
                v78 = v77 + 1;
              }
              if (v73 >= 0xC) {
                v74 = v78;
              }
              else {
                v74 = 23;
              }
            LABEL_119:
              v76 = v73 + 1;
            }
            v99 = SdkRoutine_85e050(v74);
            result = memmove_plt(v99, v72, v73);
            if (v76 != 23) {
              result = SdkRoutine_857220(v72, v76);
            }
            a4[2] = v99;
            *a4 = v74 | 1;
          }
          else {
            v99 = a4[2];
            v73 = a4[1];
          }
          a4[1] = v73 + 1;
        }
        else {
          if ((_DWORD)v71 == 44) {
            v72 = (char*)a4 + 1;
            v73 = 22;
            v74 = 48;
            goto LABEL_119;
          }
          v99 = (__int64)a4 + 1;
          v73 = v71 >> 1;
          *(_BYTE*)a4 = v71 + 2;
        }
        *(_WORD*)(v99 + v73) = 98;
        if (v319 == 120) {
          goto LABEL_220;
        }
        goto LABEL_7;
      }
    LABEL_174:
      if ((v71 & 1) == 0) {
        if ((_DWORD)v71 != 44) {
          v100 = (__int64)a4 + 1;
          v94 = v71 >> 1;
          *(_BYTE*)a4 = v71 + 2;
          goto LABEL_219;
        }
        v93 = (char*)a4 + 1;
        v94 = 22;
        v95 = 48;
      LABEL_185:
        v96 = v94 + 1;
        goto LABEL_215;
      }
      v93 = (char*)a4[2];
      v96 = *a4 & 0xFFFFFFFFFFFFFFFELL;
      v94 = v96 - 1;
      if (a4[1] == v96 - 1) {
        if (v94 < 0x7FFFFFFFFFFFFFF3LL) {
          v97 = (2 * v94) | 7;
          if (v97 == 23) {
            v98 = 26;
          }
          else {
            v98 = v97 + 1;
          }
          if (v94 >= 0xC) {
            v95 = v98;
          }
          else {
            v95 = 23;
          }
          goto LABEL_185;
        }
        v95 = -9;
      LABEL_215:
        v100 = SdkRoutine_85e050(v95);
        result = memmove_plt(v100, v93, v94);
        if (v96 != 23) {
          result = SdkRoutine_857220(v93, v96);
        }
        a4[2] = v100;
        *a4 = v95 | 1;
        goto LABEL_218;
      }
      v100 = a4[2];
      v94 = a4[1];
    LABEL_218:
      a4[1] = v94 + 1;
    LABEL_219:
      *(_WORD*)(v100 + v94) = 66;
      if (v319 == 120) {
      LABEL_220:
        v110 = &v325[8 * (v19 >> 3)];
        if ((*v110 & 1) != 0) {
          v111 = *((char**)v110 + 2);
        }
        else {
          v111 = (char*)(v110 + 1);
        }
        v112 = *v111;
        if ((v112 & 0x8000000000000000LL) == 0 &&
            (*(_WORD*)(a3[2] + 2 * v112) & 0x800) != 0) {
          v113 = *(unsigned __int8*)a4;
          v114 = (char*)a4[2];
          v115 = (v113 & 1) == 0;
          v116 = v113 >> 1;
          if (v115) {
            v114 = (char*)a4 + 1;
          }
          else {
            v116 = a4[1];
          }
          v114[v116 - 1] = 109;
        }
      }
    LABEL_7:
      v9 = v327;
    LABEL_8:;
    } while (v9 != v10);
  }
  {
    result;
    return;
  }
}

void __attribute__((noreturn)) locale_827538(__int64 a1)
{
  _QWORD* v1;

  if ((*(_BYTE*)v1 & 1) != 0) {
    SdkRoutine_857220(v1[2], *v1 & 0xFFFFFFFFFFFFFFFELL);
  }
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_829d34(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_829d38(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v10;
  __int64 v11;

  SdkRoutine_82dd20(&a9);
  v10 = _Unwind_Resume_plt(a1);
  SdkRoutine_82dd20(&a9);
  v11 = _Unwind_Resume_plt(v10);
  SdkRoutine_7cd620_alt1(v11);
}

void __attribute__((noreturn)) locale_829d64(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_829d68(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_829d6c(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

__int64 locale_829d70(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  SdkRoutine_82dd20_alt1(&a9);
  v10 = _Unwind_Resume_plt(a1);
  SdkRoutine_82dd20_alt1(&a9);
  v11 = _Unwind_Resume_plt(v10);
  SdkRoutine_82dd20_alt1(&a9);
  v12 = _Unwind_Resume_plt(v11);
  SdkRoutine_82dd20_alt1(&a9);
  v13 = _Unwind_Resume_plt(v12);
  return SdkRoutine_829dc0(v13);
}

void __attribute__((noreturn)) locale_829e6c(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) std___1___time_get_storage___time_get_storage(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8, __int64 a9, char a10)
{
  __int64 v10;

  std___1_ctype_byname_Destroy_ctype_byname((__int64)&a10);
  if ((*(_BYTE*)(v10 + 1040) & 1) != 0) {
    goto LABEL_46;
  }
  if ((*(_BYTE*)(v10 + 1016) & 1) != 0) {
    goto LABEL_47;
  }
LABEL_3:
  if ((*(_BYTE*)(v10 + 992) & 1) != 0) {
    while (1) {
      SdkRoutine_857220(*(_QWORD*)(v10 + 1008),
                        *(_QWORD*)(v10 + 992) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 968) & 1) == 0) {
        break;
      }
    LABEL_49:
      SdkRoutine_857220(*(_QWORD*)(v10 + 984),
                        *(_QWORD*)(v10 + 968) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 944) & 1) == 0) {
        goto LABEL_6;
      }
    LABEL_50:
      SdkRoutine_857220(*(_QWORD*)(v10 + 960),
                        *(_QWORD*)(v10 + 944) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 920) & 1) == 0) {
        goto LABEL_7;
      }
    LABEL_51:
      SdkRoutine_857220(*(_QWORD*)(v10 + 936),
                        *(_QWORD*)(v10 + 920) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 896) & 1) == 0) {
        goto LABEL_8;
      }
    LABEL_52:
      SdkRoutine_857220(*(_QWORD*)(v10 + 912),
                        *(_QWORD*)(v10 + 896) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 872) & 1) == 0) {
        goto LABEL_9;
      }
    LABEL_53:
      SdkRoutine_857220(*(_QWORD*)(v10 + 888),
                        *(_QWORD*)(v10 + 872) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 848) & 1) == 0) {
        goto LABEL_10;
      }
    LABEL_54:
      SdkRoutine_857220(*(_QWORD*)(v10 + 864),
                        *(_QWORD*)(v10 + 848) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 824) & 1) == 0) {
        goto LABEL_11;
      }
    LABEL_55:
      SdkRoutine_857220(*(_QWORD*)(v10 + 840),
                        *(_QWORD*)(v10 + 824) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 800) & 1) == 0) {
        goto LABEL_12;
      }
    LABEL_56:
      SdkRoutine_857220(*(_QWORD*)(v10 + 816),
                        *(_QWORD*)(v10 + 800) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 776) & 1) == 0) {
        goto LABEL_13;
      }
    LABEL_57:
      SdkRoutine_857220(*(_QWORD*)(v10 + 792),
                        *(_QWORD*)(v10 + 776) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 752) & 1) == 0) {
        goto LABEL_14;
      }
    LABEL_58:
      SdkRoutine_857220(*(_QWORD*)(v10 + 768),
                        *(_QWORD*)(v10 + 752) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 728) & 1) == 0) {
        goto LABEL_15;
      }
    LABEL_59:
      SdkRoutine_857220(*(_QWORD*)(v10 + 744),
                        *(_QWORD*)(v10 + 728) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 704) & 1) == 0) {
        goto LABEL_16;
      }
    LABEL_60:
      SdkRoutine_857220(*(_QWORD*)(v10 + 720),
                        *(_QWORD*)(v10 + 704) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 680) & 1) == 0) {
        goto LABEL_17;
      }
    LABEL_61:
      SdkRoutine_857220(*(_QWORD*)(v10 + 696),
                        *(_QWORD*)(v10 + 680) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 656) & 1) == 0) {
        goto LABEL_18;
      }
    LABEL_62:
      SdkRoutine_857220(*(_QWORD*)(v10 + 672),
                        *(_QWORD*)(v10 + 656) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 632) & 1) == 0) {
        goto LABEL_19;
      }
    LABEL_63:
      SdkRoutine_857220(*(_QWORD*)(v10 + 648),
                        *(_QWORD*)(v10 + 632) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 608) & 1) == 0) {
        goto LABEL_20;
      }
    LABEL_64:
      SdkRoutine_857220(*(_QWORD*)(v10 + 624),
                        *(_QWORD*)(v10 + 608) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 584) & 1) == 0) {
        goto LABEL_21;
      }
    LABEL_65:
      SdkRoutine_857220(*(_QWORD*)(v10 + 600),
                        *(_QWORD*)(v10 + 584) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 560) & 1) == 0) {
        goto LABEL_22;
      }
    LABEL_66:
      SdkRoutine_857220(*(_QWORD*)(v10 + 576),
                        *(_QWORD*)(v10 + 560) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 536) & 1) == 0) {
        goto LABEL_23;
      }
    LABEL_67:
      SdkRoutine_857220(*(_QWORD*)(v10 + 552),
                        *(_QWORD*)(v10 + 536) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 512) & 1) == 0) {
        goto LABEL_24;
      }
    LABEL_68:
      SdkRoutine_857220(*(_QWORD*)(v10 + 528),
                        *(_QWORD*)(v10 + 512) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 488) & 1) == 0) {
        goto LABEL_25;
      }
    LABEL_69:
      SdkRoutine_857220(*(_QWORD*)(v10 + 504),
                        *(_QWORD*)(v10 + 488) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 464) & 1) == 0) {
        goto LABEL_26;
      }
    LABEL_70:
      SdkRoutine_857220(*(_QWORD*)(v10 + 480),
                        *(_QWORD*)(v10 + 464) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 440) & 1) == 0) {
        goto LABEL_27;
      }
    LABEL_71:
      SdkRoutine_857220(*(_QWORD*)(v10 + 456),
                        *(_QWORD*)(v10 + 440) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 416) & 1) == 0) {
        goto LABEL_28;
      }
    LABEL_72:
      SdkRoutine_857220(*(_QWORD*)(v10 + 432),
                        *(_QWORD*)(v10 + 416) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 392) & 1) == 0) {
        goto LABEL_29;
      }
    LABEL_73:
      SdkRoutine_857220(*(_QWORD*)(v10 + 408),
                        *(_QWORD*)(v10 + 392) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 368) & 1) == 0) {
        goto LABEL_30;
      }
    LABEL_74:
      SdkRoutine_857220(*(_QWORD*)(v10 + 384),
                        *(_QWORD*)(v10 + 368) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 344) & 1) == 0) {
        goto LABEL_31;
      }
    LABEL_75:
      SdkRoutine_857220(*(_QWORD*)(v10 + 360),
                        *(_QWORD*)(v10 + 344) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 320) & 1) == 0) {
        goto LABEL_32;
      }
    LABEL_76:
      SdkRoutine_857220(*(_QWORD*)(v10 + 336),
                        *(_QWORD*)(v10 + 320) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 296) & 1) == 0) {
        goto LABEL_33;
      }
    LABEL_77:
      SdkRoutine_857220(*(_QWORD*)(v10 + 312),
                        *(_QWORD*)(v10 + 296) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 272) & 1) == 0) {
        goto LABEL_34;
      }
    LABEL_78:
      SdkRoutine_857220(*(_QWORD*)(v10 + 288),
                        *(_QWORD*)(v10 + 272) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 248) & 1) == 0) {
        goto LABEL_35;
      }
    LABEL_79:
      SdkRoutine_857220(*(_QWORD*)(v10 + 264),
                        *(_QWORD*)(v10 + 248) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 224) & 1) == 0) {
        goto LABEL_36;
      }
    LABEL_80:
      SdkRoutine_857220(*(_QWORD*)(v10 + 240),
                        *(_QWORD*)(v10 + 224) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 200) & 1) == 0) {
        goto LABEL_37;
      }
    LABEL_81:
      SdkRoutine_857220(*(_QWORD*)(v10 + 216),
                        *(_QWORD*)(v10 + 200) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 176) & 1) == 0) {
        goto LABEL_38;
      }
    LABEL_82:
      SdkRoutine_857220(*(_QWORD*)(v10 + 192),
                        *(_QWORD*)(v10 + 176) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 152) & 1) == 0) {
        goto LABEL_39;
      }
    LABEL_83:
      SdkRoutine_857220(*(_QWORD*)(v10 + 168),
                        *(_QWORD*)(v10 + 152) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 128) & 1) == 0) {
        goto LABEL_40;
      }
    LABEL_84:
      SdkRoutine_857220(*(_QWORD*)(v10 + 144),
                        *(_QWORD*)(v10 + 128) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 104) & 1) == 0) {
        goto LABEL_41;
      }
    LABEL_85:
      SdkRoutine_857220(*(_QWORD*)(v10 + 120),
                        *(_QWORD*)(v10 + 104) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 80) & 1) == 0) {
        goto LABEL_42;
      }
    LABEL_86:
      SdkRoutine_857220(*(_QWORD*)(v10 + 96),
                        *(_QWORD*)(v10 + 80) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 56) & 1) == 0) {
        goto LABEL_43;
      }
    LABEL_87:
      SdkRoutine_857220(*(_QWORD*)(v10 + 72),
                        *(_QWORD*)(v10 + 56) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 32) & 1) == 0) {
        goto LABEL_44;
      }
    LABEL_88:
      SdkRoutine_857220(*(_QWORD*)(v10 + 48),
                        *(_QWORD*)(v10 + 32) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 8) & 1) != 0) {
        goto LABEL_89;
      }
    LABEL_45:
      std___1___time_get_Destroy___time_get((_QWORD*)v10);
      _Unwind_Resume_plt(a1);
    LABEL_46:
      SdkRoutine_857220(*(_QWORD*)(v10 + 1056),
                        *(_QWORD*)(v10 + 1040) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 1016) & 1) == 0) {
        goto LABEL_3;
      }
    LABEL_47:
      SdkRoutine_857220(*(_QWORD*)(v10 + 1032),
                        *(_QWORD*)(v10 + 1016) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 992) & 1) == 0) {
        goto LABEL_4;
      }
    }
  }
  else {
  LABEL_4:
    if ((*(_BYTE*)(v10 + 968) & 1) != 0) {
      goto LABEL_49;
    }
  }
  if ((*(_BYTE*)(v10 + 944) & 1) != 0) {
    goto LABEL_50;
  }
LABEL_6:
  if ((*(_BYTE*)(v10 + 920) & 1) != 0) {
    goto LABEL_51;
  }
LABEL_7:
  if ((*(_BYTE*)(v10 + 896) & 1) != 0) {
    goto LABEL_52;
  }
LABEL_8:
  if ((*(_BYTE*)(v10 + 872) & 1) != 0) {
    goto LABEL_53;
  }
LABEL_9:
  if ((*(_BYTE*)(v10 + 848) & 1) != 0) {
    goto LABEL_54;
  }
LABEL_10:
  if ((*(_BYTE*)(v10 + 824) & 1) != 0) {
    goto LABEL_55;
  }
LABEL_11:
  if ((*(_BYTE*)(v10 + 800) & 1) != 0) {
    goto LABEL_56;
  }
LABEL_12:
  if ((*(_BYTE*)(v10 + 776) & 1) != 0) {
    goto LABEL_57;
  }
LABEL_13:
  if ((*(_BYTE*)(v10 + 752) & 1) != 0) {
    goto LABEL_58;
  }
LABEL_14:
  if ((*(_BYTE*)(v10 + 728) & 1) != 0) {
    goto LABEL_59;
  }
LABEL_15:
  if ((*(_BYTE*)(v10 + 704) & 1) != 0) {
    goto LABEL_60;
  }
LABEL_16:
  if ((*(_BYTE*)(v10 + 680) & 1) != 0) {
    goto LABEL_61;
  }
LABEL_17:
  if ((*(_BYTE*)(v10 + 656) & 1) != 0) {
    goto LABEL_62;
  }
LABEL_18:
  if ((*(_BYTE*)(v10 + 632) & 1) != 0) {
    goto LABEL_63;
  }
LABEL_19:
  if ((*(_BYTE*)(v10 + 608) & 1) != 0) {
    goto LABEL_64;
  }
LABEL_20:
  if ((*(_BYTE*)(v10 + 584) & 1) != 0) {
    goto LABEL_65;
  }
LABEL_21:
  if ((*(_BYTE*)(v10 + 560) & 1) != 0) {
    goto LABEL_66;
  }
LABEL_22:
  if ((*(_BYTE*)(v10 + 536) & 1) != 0) {
    goto LABEL_67;
  }
LABEL_23:
  if ((*(_BYTE*)(v10 + 512) & 1) != 0) {
    goto LABEL_68;
  }
LABEL_24:
  if ((*(_BYTE*)(v10 + 488) & 1) != 0) {
    goto LABEL_69;
  }
LABEL_25:
  if ((*(_BYTE*)(v10 + 464) & 1) != 0) {
    goto LABEL_70;
  }
LABEL_26:
  if ((*(_BYTE*)(v10 + 440) & 1) != 0) {
    goto LABEL_71;
  }
LABEL_27:
  if ((*(_BYTE*)(v10 + 416) & 1) != 0) {
    goto LABEL_72;
  }
LABEL_28:
  if ((*(_BYTE*)(v10 + 392) & 1) != 0) {
    goto LABEL_73;
  }
LABEL_29:
  if ((*(_BYTE*)(v10 + 368) & 1) != 0) {
    goto LABEL_74;
  }
LABEL_30:
  if ((*(_BYTE*)(v10 + 344) & 1) != 0) {
    goto LABEL_75;
  }
LABEL_31:
  if ((*(_BYTE*)(v10 + 320) & 1) != 0) {
    goto LABEL_76;
  }
LABEL_32:
  if ((*(_BYTE*)(v10 + 296) & 1) != 0) {
    goto LABEL_77;
  }
LABEL_33:
  if ((*(_BYTE*)(v10 + 272) & 1) != 0) {
    goto LABEL_78;
  }
LABEL_34:
  if ((*(_BYTE*)(v10 + 248) & 1) != 0) {
    goto LABEL_79;
  }
LABEL_35:
  if ((*(_BYTE*)(v10 + 224) & 1) != 0) {
    goto LABEL_80;
  }
LABEL_36:
  if ((*(_BYTE*)(v10 + 200) & 1) != 0) {
    goto LABEL_81;
  }
LABEL_37:
  if ((*(_BYTE*)(v10 + 176) & 1) != 0) {
    goto LABEL_82;
  }
LABEL_38:
  if ((*(_BYTE*)(v10 + 152) & 1) != 0) {
    goto LABEL_83;
  }
LABEL_39:
  if ((*(_BYTE*)(v10 + 128) & 1) != 0) {
    goto LABEL_84;
  }
LABEL_40:
  if ((*(_BYTE*)(v10 + 104) & 1) != 0) {
    goto LABEL_85;
  }
LABEL_41:
  if ((*(_BYTE*)(v10 + 80) & 1) != 0) {
    goto LABEL_86;
  }
LABEL_42:
  if ((*(_BYTE*)(v10 + 56) & 1) != 0) {
    goto LABEL_87;
  }
LABEL_43:
  if ((*(_BYTE*)(v10 + 32) & 1) != 0) {
    goto LABEL_88;
  }
LABEL_44:
  if ((*(_BYTE*)(v10 + 8) & 1) == 0) {
    goto LABEL_45;
  }
LABEL_89:
  SdkRoutine_857220(*(_QWORD*)(v10 + 24),
                    *(_QWORD*)(v10 + 8) & 0xFFFFFFFFFFFFFFFELL);
  std___1___time_get_Destroy___time_get((_QWORD*)v10);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 std___1_ctype_byname_Destroy_ctype_byname(__int64 a1)
{
  void* v2;
  void* v3;

  *(_QWORD*)a1 = SdkData_e89768 + 16;
  freelocale_plt(*(_QWORD*)(a1 + 32));
  v3 = *(void**)(a1 + 16);
  *(_QWORD*)a1 = SdkData_e89760 + 16;
  if (v3 != nullptr && (*(_BYTE*)(a1 + 24) & 1) != 0) {
    SdkRoutine_85c8b0(v3, v2);
  }
  return std___1___shared_count_Destroy___shared_count_plt(a1);
}

void __attribute__((noreturn)) locale_82a58c(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10)
{
  __int64 v10;

  std___1_ctype_byname_Destroy_ctype_byname((__int64)&a10);
  if ((*(_BYTE*)(v10 + 1040) & 1) != 0) {
    goto LABEL_47;
  }
  if ((*(_BYTE*)(v10 + 1016) & 1) != 0) {
    goto LABEL_48;
  }
LABEL_3:
  if ((*(_BYTE*)(v10 + 992) & 1) != 0) {
    while (1) {
      SdkRoutine_857220(*(_QWORD*)(v10 + 1008),
                        *(_QWORD*)(v10 + 992) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 968) & 1) == 0) {
        break;
      }
    LABEL_50:
      SdkRoutine_857220(*(_QWORD*)(v10 + 984),
                        *(_QWORD*)(v10 + 968) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 944) & 1) == 0) {
        goto LABEL_6;
      }
    LABEL_51:
      SdkRoutine_857220(*(_QWORD*)(v10 + 960),
                        *(_QWORD*)(v10 + 944) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 920) & 1) == 0) {
        goto LABEL_7;
      }
    LABEL_52:
      SdkRoutine_857220(*(_QWORD*)(v10 + 936),
                        *(_QWORD*)(v10 + 920) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 896) & 1) == 0) {
        goto LABEL_8;
      }
    LABEL_53:
      SdkRoutine_857220(*(_QWORD*)(v10 + 912),
                        *(_QWORD*)(v10 + 896) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 872) & 1) == 0) {
        goto LABEL_9;
      }
    LABEL_54:
      SdkRoutine_857220(*(_QWORD*)(v10 + 888),
                        *(_QWORD*)(v10 + 872) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 848) & 1) == 0) {
        goto LABEL_10;
      }
    LABEL_55:
      SdkRoutine_857220(*(_QWORD*)(v10 + 864),
                        *(_QWORD*)(v10 + 848) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 824) & 1) == 0) {
        goto LABEL_11;
      }
    LABEL_56:
      SdkRoutine_857220(*(_QWORD*)(v10 + 840),
                        *(_QWORD*)(v10 + 824) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 800) & 1) == 0) {
        goto LABEL_12;
      }
    LABEL_57:
      SdkRoutine_857220(*(_QWORD*)(v10 + 816),
                        *(_QWORD*)(v10 + 800) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 776) & 1) == 0) {
        goto LABEL_13;
      }
    LABEL_58:
      SdkRoutine_857220(*(_QWORD*)(v10 + 792),
                        *(_QWORD*)(v10 + 776) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 752) & 1) == 0) {
        goto LABEL_14;
      }
    LABEL_59:
      SdkRoutine_857220(*(_QWORD*)(v10 + 768),
                        *(_QWORD*)(v10 + 752) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 728) & 1) == 0) {
        goto LABEL_15;
      }
    LABEL_60:
      SdkRoutine_857220(*(_QWORD*)(v10 + 744),
                        *(_QWORD*)(v10 + 728) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 704) & 1) == 0) {
        goto LABEL_16;
      }
    LABEL_61:
      SdkRoutine_857220(*(_QWORD*)(v10 + 720),
                        *(_QWORD*)(v10 + 704) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 680) & 1) == 0) {
        goto LABEL_17;
      }
    LABEL_62:
      SdkRoutine_857220(*(_QWORD*)(v10 + 696),
                        *(_QWORD*)(v10 + 680) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 656) & 1) == 0) {
        goto LABEL_18;
      }
    LABEL_63:
      SdkRoutine_857220(*(_QWORD*)(v10 + 672),
                        *(_QWORD*)(v10 + 656) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 632) & 1) == 0) {
        goto LABEL_19;
      }
    LABEL_64:
      SdkRoutine_857220(*(_QWORD*)(v10 + 648),
                        *(_QWORD*)(v10 + 632) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 608) & 1) == 0) {
        goto LABEL_20;
      }
    LABEL_65:
      SdkRoutine_857220(*(_QWORD*)(v10 + 624),
                        *(_QWORD*)(v10 + 608) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 584) & 1) == 0) {
        goto LABEL_21;
      }
    LABEL_66:
      SdkRoutine_857220(*(_QWORD*)(v10 + 600),
                        *(_QWORD*)(v10 + 584) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 560) & 1) == 0) {
        goto LABEL_22;
      }
    LABEL_67:
      SdkRoutine_857220(*(_QWORD*)(v10 + 576),
                        *(_QWORD*)(v10 + 560) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 536) & 1) == 0) {
        goto LABEL_23;
      }
    LABEL_68:
      SdkRoutine_857220(*(_QWORD*)(v10 + 552),
                        *(_QWORD*)(v10 + 536) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 512) & 1) == 0) {
        goto LABEL_24;
      }
    LABEL_69:
      SdkRoutine_857220(*(_QWORD*)(v10 + 528),
                        *(_QWORD*)(v10 + 512) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 488) & 1) == 0) {
        goto LABEL_25;
      }
    LABEL_70:
      SdkRoutine_857220(*(_QWORD*)(v10 + 504),
                        *(_QWORD*)(v10 + 488) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 464) & 1) == 0) {
        goto LABEL_26;
      }
    LABEL_71:
      SdkRoutine_857220(*(_QWORD*)(v10 + 480),
                        *(_QWORD*)(v10 + 464) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 440) & 1) == 0) {
        goto LABEL_27;
      }
    LABEL_72:
      SdkRoutine_857220(*(_QWORD*)(v10 + 456),
                        *(_QWORD*)(v10 + 440) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 416) & 1) == 0) {
        goto LABEL_28;
      }
    LABEL_73:
      SdkRoutine_857220(*(_QWORD*)(v10 + 432),
                        *(_QWORD*)(v10 + 416) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 392) & 1) == 0) {
        goto LABEL_29;
      }
    LABEL_74:
      SdkRoutine_857220(*(_QWORD*)(v10 + 408),
                        *(_QWORD*)(v10 + 392) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 368) & 1) == 0) {
        goto LABEL_30;
      }
    LABEL_75:
      SdkRoutine_857220(*(_QWORD*)(v10 + 384),
                        *(_QWORD*)(v10 + 368) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 344) & 1) == 0) {
        goto LABEL_31;
      }
    LABEL_76:
      SdkRoutine_857220(*(_QWORD*)(v10 + 360),
                        *(_QWORD*)(v10 + 344) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 320) & 1) == 0) {
        goto LABEL_32;
      }
    LABEL_77:
      SdkRoutine_857220(*(_QWORD*)(v10 + 336),
                        *(_QWORD*)(v10 + 320) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 296) & 1) == 0) {
        goto LABEL_33;
      }
    LABEL_78:
      SdkRoutine_857220(*(_QWORD*)(v10 + 312),
                        *(_QWORD*)(v10 + 296) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 272) & 1) == 0) {
        goto LABEL_34;
      }
    LABEL_79:
      SdkRoutine_857220(*(_QWORD*)(v10 + 288),
                        *(_QWORD*)(v10 + 272) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 248) & 1) == 0) {
        goto LABEL_35;
      }
    LABEL_80:
      SdkRoutine_857220(*(_QWORD*)(v10 + 264),
                        *(_QWORD*)(v10 + 248) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 224) & 1) == 0) {
        goto LABEL_36;
      }
    LABEL_81:
      SdkRoutine_857220(*(_QWORD*)(v10 + 240),
                        *(_QWORD*)(v10 + 224) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 200) & 1) == 0) {
        goto LABEL_37;
      }
    LABEL_82:
      SdkRoutine_857220(*(_QWORD*)(v10 + 216),
                        *(_QWORD*)(v10 + 200) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 176) & 1) == 0) {
        goto LABEL_38;
      }
    LABEL_83:
      SdkRoutine_857220(*(_QWORD*)(v10 + 192),
                        *(_QWORD*)(v10 + 176) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 152) & 1) == 0) {
        goto LABEL_39;
      }
    LABEL_84:
      SdkRoutine_857220(*(_QWORD*)(v10 + 168),
                        *(_QWORD*)(v10 + 152) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 128) & 1) == 0) {
        goto LABEL_40;
      }
    LABEL_85:
      SdkRoutine_857220(*(_QWORD*)(v10 + 144),
                        *(_QWORD*)(v10 + 128) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 104) & 1) == 0) {
        goto LABEL_41;
      }
    LABEL_86:
      SdkRoutine_857220(*(_QWORD*)(v10 + 120),
                        *(_QWORD*)(v10 + 104) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 80) & 1) == 0) {
        goto LABEL_42;
      }
    LABEL_87:
      SdkRoutine_857220(*(_QWORD*)(v10 + 96),
                        *(_QWORD*)(v10 + 80) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 56) & 1) == 0) {
        goto LABEL_43;
      }
    LABEL_88:
      SdkRoutine_857220(*(_QWORD*)(v10 + 72),
                        *(_QWORD*)(v10 + 56) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 32) & 1) == 0) {
        goto LABEL_44;
      }
    LABEL_89:
      SdkRoutine_857220(*(_QWORD*)(v10 + 48),
                        *(_QWORD*)(v10 + 32) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 8) & 1) != 0) {
        goto LABEL_45;
      }
    LABEL_46:
      std___1___time_get_Destroy___time_get((_QWORD*)v10);
      _Unwind_Resume_plt(a1);
    LABEL_47:
      SdkRoutine_857220(*(_QWORD*)(v10 + 1056),
                        *(_QWORD*)(v10 + 1040) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 1016) & 1) == 0) {
        goto LABEL_3;
      }
    LABEL_48:
      SdkRoutine_857220(*(_QWORD*)(v10 + 1032),
                        *(_QWORD*)(v10 + 1016) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v10 + 992) & 1) == 0) {
        goto LABEL_4;
      }
    }
  }
  else {
  LABEL_4:
    if ((*(_BYTE*)(v10 + 968) & 1) != 0) {
      goto LABEL_50;
    }
  }
  if ((*(_BYTE*)(v10 + 944) & 1) != 0) {
    goto LABEL_51;
  }
LABEL_6:
  if ((*(_BYTE*)(v10 + 920) & 1) != 0) {
    goto LABEL_52;
  }
LABEL_7:
  if ((*(_BYTE*)(v10 + 896) & 1) != 0) {
    goto LABEL_53;
  }
LABEL_8:
  if ((*(_BYTE*)(v10 + 872) & 1) != 0) {
    goto LABEL_54;
  }
LABEL_9:
  if ((*(_BYTE*)(v10 + 848) & 1) != 0) {
    goto LABEL_55;
  }
LABEL_10:
  if ((*(_BYTE*)(v10 + 824) & 1) != 0) {
    goto LABEL_56;
  }
LABEL_11:
  if ((*(_BYTE*)(v10 + 800) & 1) != 0) {
    goto LABEL_57;
  }
LABEL_12:
  if ((*(_BYTE*)(v10 + 776) & 1) != 0) {
    goto LABEL_58;
  }
LABEL_13:
  if ((*(_BYTE*)(v10 + 752) & 1) != 0) {
    goto LABEL_59;
  }
LABEL_14:
  if ((*(_BYTE*)(v10 + 728) & 1) != 0) {
    goto LABEL_60;
  }
LABEL_15:
  if ((*(_BYTE*)(v10 + 704) & 1) != 0) {
    goto LABEL_61;
  }
LABEL_16:
  if ((*(_BYTE*)(v10 + 680) & 1) != 0) {
    goto LABEL_62;
  }
LABEL_17:
  if ((*(_BYTE*)(v10 + 656) & 1) != 0) {
    goto LABEL_63;
  }
LABEL_18:
  if ((*(_BYTE*)(v10 + 632) & 1) != 0) {
    goto LABEL_64;
  }
LABEL_19:
  if ((*(_BYTE*)(v10 + 608) & 1) != 0) {
    goto LABEL_65;
  }
LABEL_20:
  if ((*(_BYTE*)(v10 + 584) & 1) != 0) {
    goto LABEL_66;
  }
LABEL_21:
  if ((*(_BYTE*)(v10 + 560) & 1) != 0) {
    goto LABEL_67;
  }
LABEL_22:
  if ((*(_BYTE*)(v10 + 536) & 1) != 0) {
    goto LABEL_68;
  }
LABEL_23:
  if ((*(_BYTE*)(v10 + 512) & 1) != 0) {
    goto LABEL_69;
  }
LABEL_24:
  if ((*(_BYTE*)(v10 + 488) & 1) != 0) {
    goto LABEL_70;
  }
LABEL_25:
  if ((*(_BYTE*)(v10 + 464) & 1) != 0) {
    goto LABEL_71;
  }
LABEL_26:
  if ((*(_BYTE*)(v10 + 440) & 1) != 0) {
    goto LABEL_72;
  }
LABEL_27:
  if ((*(_BYTE*)(v10 + 416) & 1) != 0) {
    goto LABEL_73;
  }
LABEL_28:
  if ((*(_BYTE*)(v10 + 392) & 1) != 0) {
    goto LABEL_74;
  }
LABEL_29:
  if ((*(_BYTE*)(v10 + 368) & 1) != 0) {
    goto LABEL_75;
  }
LABEL_30:
  if ((*(_BYTE*)(v10 + 344) & 1) != 0) {
    goto LABEL_76;
  }
LABEL_31:
  if ((*(_BYTE*)(v10 + 320) & 1) != 0) {
    goto LABEL_77;
  }
LABEL_32:
  if ((*(_BYTE*)(v10 + 296) & 1) != 0) {
    goto LABEL_78;
  }
LABEL_33:
  if ((*(_BYTE*)(v10 + 272) & 1) != 0) {
    goto LABEL_79;
  }
LABEL_34:
  if ((*(_BYTE*)(v10 + 248) & 1) != 0) {
    goto LABEL_80;
  }
LABEL_35:
  if ((*(_BYTE*)(v10 + 224) & 1) != 0) {
    goto LABEL_81;
  }
LABEL_36:
  if ((*(_BYTE*)(v10 + 200) & 1) != 0) {
    goto LABEL_82;
  }
LABEL_37:
  if ((*(_BYTE*)(v10 + 176) & 1) != 0) {
    goto LABEL_83;
  }
LABEL_38:
  if ((*(_BYTE*)(v10 + 152) & 1) != 0) {
    goto LABEL_84;
  }
LABEL_39:
  if ((*(_BYTE*)(v10 + 128) & 1) != 0) {
    goto LABEL_85;
  }
LABEL_40:
  if ((*(_BYTE*)(v10 + 104) & 1) != 0) {
    goto LABEL_86;
  }
LABEL_41:
  if ((*(_BYTE*)(v10 + 80) & 1) != 0) {
    goto LABEL_87;
  }
LABEL_42:
  if ((*(_BYTE*)(v10 + 56) & 1) != 0) {
    goto LABEL_88;
  }
LABEL_43:
  if ((*(_BYTE*)(v10 + 32) & 1) != 0) {
    goto LABEL_89;
  }
LABEL_44:
  if ((*(_BYTE*)(v10 + 8) & 1) == 0) {
    goto LABEL_46;
  }
LABEL_45:
  SdkRoutine_857220(*(_QWORD*)(v10 + 24),
                    *(_QWORD*)(v10 + 8) & 0xFFFFFFFFFFFFFFFELL);
  goto LABEL_46;
}

void __attribute__((noreturn)) locale_82ab2c(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12)
{
  if ((a10 & 1) == 0) {
    _Unwind_Resume_plt(a1);
  }
  SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_82abe8(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

__int64 locale_82abec(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9, __int64 a10)
{
  _QWORD* v10;
  _QWORD* v12;

  SdkRoutine_82ad70(&a10);
  SdkRoutine_87cb10(v10 + 130);
  SdkRoutine_87cb10(v10 + 127);
  SdkRoutine_87cb10(v10 + 124);
  SdkRoutine_87cb10(v10 + 121);
  SdkRoutine_87cb10(v10 + 118);
  SdkRoutine_87cb10(v10 + 115);
  SdkRoutine_87cb10(v10 + 112);
  SdkRoutine_87cb10(v10 + 109);
  SdkRoutine_87cb10(v10 + 106);
  SdkRoutine_87cb10(v10 + 103);
  SdkRoutine_87cb10(v10 + 100);
  SdkRoutine_87cb10(v10 + 97);
  SdkRoutine_87cb10(v10 + 94);
  SdkRoutine_87cb10(v10 + 91);
  SdkRoutine_87cb10(v10 + 88);
  SdkRoutine_87cb10(v10 + 85);
  SdkRoutine_87cb10(v10 + 82);
  SdkRoutine_87cb10(v10 + 79);
  SdkRoutine_87cb10(v10 + 76);
  SdkRoutine_87cb10(v10 + 73);
  SdkRoutine_87cb10(v10 + 70);
  SdkRoutine_87cb10(v10 + 67);
  SdkRoutine_87cb10(v10 + 64);
  SdkRoutine_87cb10(v10 + 61);
  SdkRoutine_87cb10(v10 + 58);
  SdkRoutine_87cb10(v10 + 55);
  SdkRoutine_87cb10(v10 + 52);
  SdkRoutine_87cb10(v10 + 49);
  SdkRoutine_87cb10(v10 + 46);
  SdkRoutine_87cb10(v10 + 43);
  SdkRoutine_87cb10(v10 + 40);
  SdkRoutine_87cb10(v10 + 37);
  SdkRoutine_87cb10(v10 + 34);
  SdkRoutine_87cb10(v10 + 31);
  SdkRoutine_87cb10(v10 + 28);
  SdkRoutine_87cb10(v10 + 25);
  SdkRoutine_87cb10(v10 + 22);
  SdkRoutine_87cb10(v10 + 19);
  SdkRoutine_87cb10(v10 + 16);
  SdkRoutine_87cb10(v10 + 13);
  SdkRoutine_87cb10(v10 + 10);
  SdkRoutine_87cb10(v10 + 7);
  SdkRoutine_87cb10(v10 + 4);
  SdkRoutine_87cb10(v10 + 1);
  std___1___time_get_Destroy___time_get(v10);
  v12 = (_QWORD*)_Unwind_Resume_plt(a1);
  return SdkRoutine_82ad70(v12);
}

void __attribute__((noreturn)) locale_82ae98(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12)
{
  _QWORD* v12;
  __int64 v14;
  __int64 v15;

  SdkRoutine_82ad70(&a10);
  SdkRoutine_87cb10(v12 + 130);
  SdkRoutine_87cb10(v12 + 127);
  SdkRoutine_87cb10(v12 + 124);
  SdkRoutine_87cb10(v12 + 121);
  SdkRoutine_87cb10(v12 + 118);
  SdkRoutine_87cb10(v12 + 115);
  SdkRoutine_87cb10(v12 + 112);
  SdkRoutine_87cb10(v12 + 109);
  SdkRoutine_87cb10(v12 + 106);
  SdkRoutine_87cb10(v12 + 103);
  SdkRoutine_87cb10(v12 + 100);
  SdkRoutine_87cb10(v12 + 97);
  SdkRoutine_87cb10(v12 + 94);
  SdkRoutine_87cb10(v12 + 91);
  SdkRoutine_87cb10(v12 + 88);
  SdkRoutine_87cb10(v12 + 85);
  SdkRoutine_87cb10(v12 + 82);
  SdkRoutine_87cb10(v12 + 79);
  SdkRoutine_87cb10(v12 + 76);
  SdkRoutine_87cb10(v12 + 73);
  SdkRoutine_87cb10(v12 + 70);
  SdkRoutine_87cb10(v12 + 67);
  SdkRoutine_87cb10(v12 + 64);
  SdkRoutine_87cb10(v12 + 61);
  SdkRoutine_87cb10(v12 + 58);
  SdkRoutine_87cb10(v12 + 55);
  SdkRoutine_87cb10(v12 + 52);
  SdkRoutine_87cb10(v12 + 49);
  SdkRoutine_87cb10(v12 + 46);
  SdkRoutine_87cb10(v12 + 43);
  SdkRoutine_87cb10(v12 + 40);
  SdkRoutine_87cb10(v12 + 37);
  SdkRoutine_87cb10(v12 + 34);
  SdkRoutine_87cb10(v12 + 31);
  SdkRoutine_87cb10(v12 + 28);
  SdkRoutine_87cb10(v12 + 25);
  SdkRoutine_87cb10(v12 + 22);
  SdkRoutine_87cb10(v12 + 19);
  SdkRoutine_87cb10(v12 + 16);
  SdkRoutine_87cb10(v12 + 13);
  SdkRoutine_87cb10(v12 + 10);
  SdkRoutine_87cb10(v12 + 7);
  SdkRoutine_87cb10(v12 + 4);
  SdkRoutine_87cb10(v12 + 1);
  std___1___time_get_Destroy___time_get(v12);
  v14 = _Unwind_Resume_plt(a1);
  v15 = v14;
  if ((a10 & 1) == 0) {
    _Unwind_Resume_plt(v14);
  }
  SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  _Unwind_Resume_plt(v15);
  __udf(0);
}

void __attribute__((noreturn)) locale_82b7d8(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_1060b80);
  SdkRoutine_7cd620_alt1(a1);
}

void __attribute__((noreturn)) locale_82d320(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_1060b80);
  SdkRoutine_7cd620_alt1(a1);
}

__int64 locale_82e000()
{
  __int64 result;

  if ((SdkData_10611f8 & 1) != 0) {
    result = SdkRoutine_857220(SdkData_1061208,
                               (4 * SdkData_10611f8) & 0xFFFFFFFFFFFFFFF8LL);
    if ((SdkData_10611e0 & 1) == 0) {
    LABEL_3:
      if ((SdkData_10611c8 & 1) == 0) {
        goto LABEL_4;
      }
      goto LABEL_18;
    }
  }
  else if ((SdkData_10611e0 & 1) == 0) {
    goto LABEL_3;
  }
  result = SdkRoutine_857220(SdkData_10611f0,
                             (4 * SdkData_10611e0) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_10611c8 & 1) == 0) {
  LABEL_4:
    if ((SdkData_10611b0 & 1) == 0) {
      goto LABEL_5;
    }
    goto LABEL_19;
  }
LABEL_18:
  result = SdkRoutine_857220(SdkData_10611d8,
                             (4 * SdkData_10611c8) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_10611b0 & 1) == 0) {
  LABEL_5:
    if ((SdkData_1061198 & 1) == 0) {
      goto LABEL_6;
    }
    goto LABEL_20;
  }
LABEL_19:
  result = SdkRoutine_857220(SdkData_10611c0,
                             (4 * SdkData_10611b0) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061198 & 1) == 0) {
  LABEL_6:
    if ((SdkData_1061180 & 1) == 0) {
      goto LABEL_7;
    }
    goto LABEL_21;
  }
LABEL_20:
  result = SdkRoutine_857220(SdkData_10611a8,
                             (4 * SdkData_1061198) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061180 & 1) == 0) {
  LABEL_7:
    if ((SdkData_1061168 & 1) == 0) {
      goto LABEL_8;
    }
    goto LABEL_22;
  }
LABEL_21:
  result = SdkRoutine_857220(SdkData_1061190,
                             (4 * SdkData_1061180) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061168 & 1) == 0) {
  LABEL_8:
    if ((SdkData_1061150 & 1) == 0) {
      goto LABEL_9;
    }
    goto LABEL_23;
  }
LABEL_22:
  result = SdkRoutine_857220(SdkData_1061178,
                             (4 * SdkData_1061168) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061150 & 1) == 0) {
  LABEL_9:
    if ((SdkData_1061138 & 1) == 0) {
      goto LABEL_10;
    }
    goto LABEL_24;
  }
LABEL_23:
  result = SdkRoutine_857220(SdkData_1061160,
                             (4 * SdkData_1061150) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061138 & 1) == 0) {
  LABEL_10:
    if ((SdkData_1061120 & 1) == 0) {
      goto LABEL_11;
    }
    goto LABEL_25;
  }
LABEL_24:
  result = SdkRoutine_857220(SdkData_1061148,
                             (4 * SdkData_1061138) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061120 & 1) == 0) {
  LABEL_11:
    if ((SdkData_1061108 & 1) == 0) {
      goto LABEL_12;
    }
    goto LABEL_26;
  }
LABEL_25:
  result = SdkRoutine_857220(SdkData_1061130,
                             (4 * SdkData_1061120) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061108 & 1) == 0) {
  LABEL_12:
    if ((SdkData_10610f0 & 1) == 0) {
      goto LABEL_13;
    }
    goto LABEL_27;
  }
LABEL_26:
  result = SdkRoutine_857220(SdkData_1061118,
                             (4 * SdkData_1061108) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_10610f0 & 1) == 0) {
  LABEL_13:
    if ((SdkData_10610d8 & 1) == 0) {
      goto LABEL_14;
    }
    goto LABEL_28;
  }
LABEL_27:
  result = SdkRoutine_857220(SdkData_1061100,
                             (4 * SdkData_10610f0) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_10610d8 & 1) == 0) {
  LABEL_14:
    if ((SdkData_10610c0 & 1) == 0) {
      return result;
    }
    return SdkRoutine_857220(SdkData_10610d0,
                             (4 * SdkData_10610c0) & 0xFFFFFFFFFFFFFFF8LL);
  }
LABEL_28:
  result = SdkRoutine_857220(SdkData_10610e8,
                             (4 * SdkData_10610d8) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_10610c0 & 1) != 0) {
    return SdkRoutine_857220(SdkData_10610d0,
                             (4 * SdkData_10610c0) & 0xFFFFFFFFFFFFFFF8LL);
  }
  return result;
}

__int64 locale_82e2f0()
{
  __int64 result;

  if ((SdkData_1061438 & 1) != 0) {
    result = SdkRoutine_857220(SdkData_1061448,
                               SdkData_1061438 & 0xFFFFFFFFFFFFFFFELL);
    if ((SdkData_1061420 & 1) == 0) {
    LABEL_3:
      if ((SdkData_1061408 & 1) == 0) {
        goto LABEL_4;
      }
      goto LABEL_28;
    }
  }
  else if ((SdkData_1061420 & 1) == 0) {
    goto LABEL_3;
  }
  result = SdkRoutine_857220(SdkData_1061430,
                             SdkData_1061420 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_1061408 & 1) == 0) {
  LABEL_4:
    if ((SdkData_10613f0 & 1) == 0) {
      goto LABEL_5;
    }
    goto LABEL_29;
  }
LABEL_28:
  result = SdkRoutine_857220(SdkData_1061418,
                             SdkData_1061408 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_10613f0 & 1) == 0) {
  LABEL_5:
    if ((SdkData_10613d8 & 1) == 0) {
      goto LABEL_6;
    }
    goto LABEL_30;
  }
LABEL_29:
  result = SdkRoutine_857220(SdkData_1061400,
                             SdkData_10613f0 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_10613d8 & 1) == 0) {
  LABEL_6:
    if ((SdkData_10613c0 & 1) == 0) {
      goto LABEL_7;
    }
    goto LABEL_31;
  }
LABEL_30:
  result = SdkRoutine_857220(SdkData_10613e8,
                             SdkData_10613d8 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_10613c0 & 1) == 0) {
  LABEL_7:
    if ((SdkData_10613a8 & 1) == 0) {
      goto LABEL_8;
    }
    goto LABEL_32;
  }
LABEL_31:
  result = SdkRoutine_857220(SdkData_10613d0,
                             SdkData_10613c0 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_10613a8 & 1) == 0) {
  LABEL_8:
    if ((SdkData_1061390 & 1) == 0) {
      goto LABEL_9;
    }
    goto LABEL_33;
  }
LABEL_32:
  result = SdkRoutine_857220(SdkData_10613b8,
                             SdkData_10613a8 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_1061390 & 1) == 0) {
  LABEL_9:
    if ((SdkData_1061378 & 1) == 0) {
      goto LABEL_10;
    }
    goto LABEL_34;
  }
LABEL_33:
  result = SdkRoutine_857220(SdkData_10613a0,
                             SdkData_1061390 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_1061378 & 1) == 0) {
  LABEL_10:
    if ((SdkData_1061360 & 1) == 0) {
      goto LABEL_11;
    }
    goto LABEL_35;
  }
LABEL_34:
  result = SdkRoutine_857220(SdkData_1061388,
                             SdkData_1061378 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_1061360 & 1) == 0) {
  LABEL_11:
    if ((SdkData_1061348 & 1) == 0) {
      goto LABEL_12;
    }
    goto LABEL_36;
  }
LABEL_35:
  result = SdkRoutine_857220(SdkData_1061370,
                             SdkData_1061360 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_1061348 & 1) == 0) {
  LABEL_12:
    if ((SdkData_1061330 & 1) == 0) {
      goto LABEL_13;
    }
    goto LABEL_37;
  }
LABEL_36:
  result = SdkRoutine_857220(SdkData_1061358,
                             SdkData_1061348 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_1061330 & 1) == 0) {
  LABEL_13:
    if ((SdkData_1061318 & 1) == 0) {
      goto LABEL_14;
    }
    goto LABEL_38;
  }
LABEL_37:
  result = SdkRoutine_857220(SdkData_1061340,
                             SdkData_1061330 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_1061318 & 1) == 0) {
  LABEL_14:
    if ((SdkData_1061300 & 1) == 0) {
      goto LABEL_15;
    }
    goto LABEL_39;
  }
LABEL_38:
  result = SdkRoutine_857220(SdkData_1061328,
                             SdkData_1061318 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_1061300 & 1) == 0) {
  LABEL_15:
    if ((SdkData_10612e8 & 1) == 0) {
      goto LABEL_16;
    }
    goto LABEL_40;
  }
LABEL_39:
  result = SdkRoutine_857220(SdkData_1061310,
                             SdkData_1061300 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_10612e8 & 1) == 0) {
  LABEL_16:
    if ((SdkData_10612d0 & 1) == 0) {
      goto LABEL_17;
    }
    goto LABEL_41;
  }
LABEL_40:
  result = SdkRoutine_857220(SdkData_10612f8,
                             SdkData_10612e8 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_10612d0 & 1) == 0) {
  LABEL_17:
    if ((SdkData_10612b8 & 1) == 0) {
      goto LABEL_18;
    }
    goto LABEL_42;
  }
LABEL_41:
  result = SdkRoutine_857220(SdkData_10612e0,
                             SdkData_10612d0 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_10612b8 & 1) == 0) {
  LABEL_18:
    if ((SdkData_10612a0 & 1) == 0) {
      goto LABEL_19;
    }
    goto LABEL_43;
  }
LABEL_42:
  result = SdkRoutine_857220(SdkData_10612c8,
                             SdkData_10612b8 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_10612a0 & 1) == 0) {
  LABEL_19:
    if ((SdkData_1061288 & 1) == 0) {
      goto LABEL_20;
    }
    goto LABEL_44;
  }
LABEL_43:
  result = SdkRoutine_857220(SdkData_10612b0,
                             SdkData_10612a0 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_1061288 & 1) == 0) {
  LABEL_20:
    if ((SdkData_1061270 & 1) == 0) {
      goto LABEL_21;
    }
    goto LABEL_45;
  }
LABEL_44:
  result = SdkRoutine_857220(SdkData_1061298,
                             SdkData_1061288 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_1061270 & 1) == 0) {
  LABEL_21:
    if ((SdkData_1061258 & 1) == 0) {
      goto LABEL_22;
    }
    goto LABEL_46;
  }
LABEL_45:
  result = SdkRoutine_857220(SdkData_1061280,
                             SdkData_1061270 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_1061258 & 1) == 0) {
  LABEL_22:
    if ((SdkData_1061240 & 1) == 0) {
      goto LABEL_23;
    }
    goto LABEL_47;
  }
LABEL_46:
  result = SdkRoutine_857220(SdkData_1061268,
                             SdkData_1061258 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_1061240 & 1) == 0) {
  LABEL_23:
    if ((SdkData_1061228 & 1) == 0) {
      goto LABEL_24;
    }
    goto LABEL_48;
  }
LABEL_47:
  result = SdkRoutine_857220(SdkData_1061250,
                             SdkData_1061240 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_1061228 & 1) == 0) {
  LABEL_24:
    if ((SdkData_1061210 & 1) == 0) {
      return result;
    }
    return SdkRoutine_857220(SdkData_1061220,
                             SdkData_1061210 & 0xFFFFFFFFFFFFFFFELL);
  }
LABEL_48:
  result = SdkRoutine_857220(SdkData_1061238,
                             SdkData_1061228 & 0xFFFFFFFFFFFFFFFELL);
  if ((SdkData_1061210 & 1) != 0) {
    return SdkRoutine_857220(SdkData_1061220,
                             SdkData_1061210 & 0xFFFFFFFFFFFFFFFELL);
  }
  return result;
}

__int64 locale_82e780()
{
  __int64 result;

  if ((SdkData_1061678 & 1) != 0) {
    result = SdkRoutine_857220(SdkData_1061688,
                               (4 * SdkData_1061678) & 0xFFFFFFFFFFFFFFF8LL);
    if ((SdkData_1061660 & 1) == 0) {
    LABEL_3:
      if ((SdkData_1061648 & 1) == 0) {
        goto LABEL_4;
      }
      goto LABEL_28;
    }
  }
  else if ((SdkData_1061660 & 1) == 0) {
    goto LABEL_3;
  }
  result = SdkRoutine_857220(SdkData_1061670,
                             (4 * SdkData_1061660) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061648 & 1) == 0) {
  LABEL_4:
    if ((SdkData_1061630 & 1) == 0) {
      goto LABEL_5;
    }
    goto LABEL_29;
  }
LABEL_28:
  result = SdkRoutine_857220(SdkData_1061658,
                             (4 * SdkData_1061648) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061630 & 1) == 0) {
  LABEL_5:
    if ((SdkData_1061618 & 1) == 0) {
      goto LABEL_6;
    }
    goto LABEL_30;
  }
LABEL_29:
  result = SdkRoutine_857220(SdkData_1061640,
                             (4 * SdkData_1061630) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061618 & 1) == 0) {
  LABEL_6:
    if ((SdkData_1061600 & 1) == 0) {
      goto LABEL_7;
    }
    goto LABEL_31;
  }
LABEL_30:
  result = SdkRoutine_857220(SdkData_1061628,
                             (4 * SdkData_1061618) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061600 & 1) == 0) {
  LABEL_7:
    if ((SdkData_10615e8 & 1) == 0) {
      goto LABEL_8;
    }
    goto LABEL_32;
  }
LABEL_31:
  result = SdkRoutine_857220(SdkData_1061610,
                             (4 * SdkData_1061600) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_10615e8 & 1) == 0) {
  LABEL_8:
    if ((SdkData_10615d0 & 1) == 0) {
      goto LABEL_9;
    }
    goto LABEL_33;
  }
LABEL_32:
  result = SdkRoutine_857220(SdkData_10615f8,
                             (4 * SdkData_10615e8) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_10615d0 & 1) == 0) {
  LABEL_9:
    if ((SdkData_10615b8 & 1) == 0) {
      goto LABEL_10;
    }
    goto LABEL_34;
  }
LABEL_33:
  result = SdkRoutine_857220(SdkData_10615e0,
                             (4 * SdkData_10615d0) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_10615b8 & 1) == 0) {
  LABEL_10:
    if ((SdkData_10615a0 & 1) == 0) {
      goto LABEL_11;
    }
    goto LABEL_35;
  }
LABEL_34:
  result = SdkRoutine_857220(SdkData_10615c8,
                             (4 * SdkData_10615b8) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_10615a0 & 1) == 0) {
  LABEL_11:
    if ((SdkData_1061588 & 1) == 0) {
      goto LABEL_12;
    }
    goto LABEL_36;
  }
LABEL_35:
  result = SdkRoutine_857220(SdkData_10615b0,
                             (4 * SdkData_10615a0) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061588 & 1) == 0) {
  LABEL_12:
    if ((SdkData_1061570 & 1) == 0) {
      goto LABEL_13;
    }
    goto LABEL_37;
  }
LABEL_36:
  result = SdkRoutine_857220(SdkData_1061598,
                             (4 * SdkData_1061588) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061570 & 1) == 0) {
  LABEL_13:
    if ((SdkData_1061558 & 1) == 0) {
      goto LABEL_14;
    }
    goto LABEL_38;
  }
LABEL_37:
  result = SdkRoutine_857220(SdkData_1061580,
                             (4 * SdkData_1061570) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061558 & 1) == 0) {
  LABEL_14:
    if ((SdkData_1061540 & 1) == 0) {
      goto LABEL_15;
    }
    goto LABEL_39;
  }
LABEL_38:
  result = SdkRoutine_857220(SdkData_1061568,
                             (4 * SdkData_1061558) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061540 & 1) == 0) {
  LABEL_15:
    if ((SdkData_1061528 & 1) == 0) {
      goto LABEL_16;
    }
    goto LABEL_40;
  }
LABEL_39:
  result = SdkRoutine_857220(SdkData_1061550,
                             (4 * SdkData_1061540) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061528 & 1) == 0) {
  LABEL_16:
    if ((SdkData_1061510 & 1) == 0) {
      goto LABEL_17;
    }
    goto LABEL_41;
  }
LABEL_40:
  result = SdkRoutine_857220(SdkData_1061538,
                             (4 * SdkData_1061528) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061510 & 1) == 0) {
  LABEL_17:
    if ((SdkData_10614f8 & 1) == 0) {
      goto LABEL_18;
    }
    goto LABEL_42;
  }
LABEL_41:
  result = SdkRoutine_857220(SdkData_1061520,
                             (4 * SdkData_1061510) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_10614f8 & 1) == 0) {
  LABEL_18:
    if ((SdkData_10614e0 & 1) == 0) {
      goto LABEL_19;
    }
    goto LABEL_43;
  }
LABEL_42:
  result = SdkRoutine_857220(SdkData_1061508,
                             (4 * SdkData_10614f8) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_10614e0 & 1) == 0) {
  LABEL_19:
    if ((SdkData_10614c8 & 1) == 0) {
      goto LABEL_20;
    }
    goto LABEL_44;
  }
LABEL_43:
  result = SdkRoutine_857220(SdkData_10614f0,
                             (4 * SdkData_10614e0) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_10614c8 & 1) == 0) {
  LABEL_20:
    if ((SdkData_10614b0 & 1) == 0) {
      goto LABEL_21;
    }
    goto LABEL_45;
  }
LABEL_44:
  result = SdkRoutine_857220(SdkData_10614d8,
                             (4 * SdkData_10614c8) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_10614b0 & 1) == 0) {
  LABEL_21:
    if ((SdkData_1061498 & 1) == 0) {
      goto LABEL_22;
    }
    goto LABEL_46;
  }
LABEL_45:
  result = SdkRoutine_857220(SdkData_10614c0,
                             (4 * SdkData_10614b0) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061498 & 1) == 0) {
  LABEL_22:
    if ((SdkData_1061480 & 1) == 0) {
      goto LABEL_23;
    }
    goto LABEL_47;
  }
LABEL_46:
  result = SdkRoutine_857220(SdkData_10614a8,
                             (4 * SdkData_1061498) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061480 & 1) == 0) {
  LABEL_23:
    if ((SdkData_1061468 & 1) == 0) {
      goto LABEL_24;
    }
    goto LABEL_48;
  }
LABEL_47:
  result = SdkRoutine_857220(SdkData_1061490,
                             (4 * SdkData_1061480) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061468 & 1) == 0) {
  LABEL_24:
    if ((SdkData_1061450 & 1) == 0) {
      return result;
    }
    return SdkRoutine_857220(SdkData_1061460,
                             (4 * SdkData_1061450) & 0xFFFFFFFFFFFFFFF8LL);
  }
LABEL_48:
  result = SdkRoutine_857220(SdkData_1061478,
                             (4 * SdkData_1061468) & 0xFFFFFFFFFFFFFFF8LL);
  if ((SdkData_1061450 & 1) != 0) {
    return SdkRoutine_857220(SdkData_1061460,
                             (4 * SdkData_1061450) & 0xFFFFFFFFFFFFFFF8LL);
  }
  return result;
}

__int64 locale_82ec70()
{
  __int64 result;

  if ((SdkData_1060ec8 & 1) != 0) {
    result = SdkRoutine_857220(SdkData_1060ed8,
                               SdkData_1060ec8 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ((SdkData_1060eb0 & 1) != 0) {
    return SdkRoutine_857220(SdkData_1060ec0,
                             SdkData_1060eb0 & 0xFFFFFFFFFFFFFFFELL);
  }
  return result;
}

__int64 locale_82ecd0()
{
  __int64 result;

  if ((SdkData_1060ef8 & 1) != 0) {
    result = SdkRoutine_857220(SdkData_1060f08,
                               (4 * SdkData_1060ef8) & 0xFFFFFFFFFFFFFFF8LL);
  }
  if ((SdkData_1060ee0 & 1) != 0) {
    return SdkRoutine_857220(SdkData_1060ef0,
                             (4 * SdkData_1060ee0) & 0xFFFFFFFFFFFFFFF8LL);
  }
  return result;
}

void __attribute__((noreturn)) locale_82f1ac(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

__int64 locale_82f410(__int64 a1, _BYTE* a2)
{
  __int64 v3;
  void(__attribute__((noreturn)) * v4)();
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  char v8;
  __int64 v9;
  __int64 v11;
  void(__attribute__((noreturn)) * v12)();
  void(__attribute__((noreturn)) * **v13)();
  void(__attribute__((noreturn)) * *v14)();

  std___1_ios_base_getloc_plt((void*)(&v11), a1);
  v3 = v11;
  v4 = SdkData_e89540[0];
  v12 = SdkData_e89540[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89540[0],
                           memory_order_acquire) != -1) {
    v14 = &v12;
    v13 = &v14;
    std___1___call_once_plt(SdkData_e89540[0], &v13, SdkRoutine_82f0b0);
  }
  v5 = *(_QWORD*)(v3 + 16);
  v6 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v4 + 4) - 1LL;
  if (v6 >= (*(_QWORD*)(v3 + 24) - v5) >> 3 ||
      (v7 = *(__int64**)(v5 + 8 * v6)) == nullptr) {
    locale_7f6090();
  }
  v8 = (*(__int64 (**)(__int64*))(*v7 + 32))(v7);
  v9 = *v7;
  *a2 = v8;
  (*(void (**)(__int64*))(v9 + 40))(v7);
  return std___1_locale_Destroy_locale_plt(&v11);
}

void __attribute__((noreturn)) locale_82f4e4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9)
{
  std___1_locale_Destroy_locale_plt(&a9);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 locale_82f608(__int64 a1)
{
  __int64 v2;

  __cxa_guard_abort_plt(&SdkData_1060b80);
  v2 = _Unwind_Resume_plt(a1);
  return SdkRoutine_82f620(v2);
}

__int64 locale_82f728(__int64 a1)
{
  __int64 v2;

  __cxa_guard_abort_plt(&SdkData_1060b80);
  v2 = _Unwind_Resume_plt(a1);
  return locale_82f740_alt1(v2);
}

unsigned __int64 locale_82f740(unsigned __int8* a1, unsigned __int8* a2,
                               _DWORD* a3, unsigned int a4)
{
  int v5;
  unsigned __int8* v8;
  _DWORD* v9;
  int v10;
  _DWORD* v11;
  unsigned __int64 result;
  unsigned __int8* v13;
  unsigned __int8* v14;

  if (a1 == a2) {
    goto LABEL_13;
  }
  v5 = *a1;
  v8 = a1;
  if (v5 == 45) {
    v8 = a1 + 1;
    if (a1 + 1 == a2) {
      goto LABEL_13;
    }
  }
  v9 = (_DWORD*)__errno_location_plt(a1, a2);
  v10 = *v9;
  *v9 = 0;
  v11 = v9;
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1060b80,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_1060b80) != 0) {
    SdkData_1060b78 = newlocale_plt(0x7FFFFFFF, "C", 0);
    __cxa_guard_release_plt(&SdkData_1060b80);
  }
  result = strtoull_plt(v8, &v14, a4);
  if (*v11 != 0) {
    if (v14 == a2) {
      if (result >> 16 == 0 && *v11 != 34) {
        goto LABEL_9;
      }
      goto LABEL_17;
    }
  LABEL_13:
    result = 0;
  LABEL_14:
    *a3 = 4;
    return result;
  }
  v13 = v14;
  *v11 = v10;
  if (v13 != a2) {
    goto LABEL_13;
  }
  if (result >= 0x10000) {
  LABEL_17:
    result = 0xFFFF;
    goto LABEL_14;
  }
LABEL_9:
  if (v5 == 45) {
    return (unsigned int)-(int)result;
  }
  else {
    return (unsigned int)result;
  }
}

void __attribute__((noreturn)) locale_82f870(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

unsigned __int64 locale_82f890(unsigned __int8* a1, unsigned __int8* a2,
                               _DWORD* a3, unsigned int a4)
{
  int v5;
  unsigned __int8* v8;
  _DWORD* v9;
  int v10;
  _DWORD* v11;
  unsigned __int64 result;
  unsigned __int8* v13;
  unsigned __int8* v14;

  if (a1 == a2) {
    goto LABEL_13;
  }
  v5 = *a1;
  v8 = a1;
  if (v5 == 45) {
    v8 = a1 + 1;
    if (a1 + 1 == a2) {
      goto LABEL_13;
    }
  }
  v9 = (_DWORD*)__errno_location_plt(a1, a2);
  v10 = *v9;
  *v9 = 0;
  v11 = v9;
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1060b80,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_1060b80) != 0) {
    SdkData_1060b78 = newlocale_plt(0x7FFFFFFF, "C", 0);
    __cxa_guard_release_plt(&SdkData_1060b80);
  }
  result = strtoull_plt(v8, &v14, a4);
  if (*v11 != 0) {
    if (v14 == a2) {
      if (HIDWORD(result) == 0 && *v11 != 34) {
        goto LABEL_9;
      }
      goto LABEL_17;
    }
  LABEL_13:
    result = 0;
  LABEL_14:
    *a3 = 4;
    return result;
  }
  v13 = v14;
  *v11 = v10;
  if (v13 != a2) {
    goto LABEL_13;
  }
  if (HIDWORD(result) != 0) {
  LABEL_17:
    result = 0xFFFFFFFFLL;
    goto LABEL_14;
  }
LABEL_9:
  if (v5 == 45) {
    return (unsigned int)-(int)result;
  }
  else {
    return (unsigned int)result;
  }
}

void __attribute__((noreturn)) locale_82f9c0(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_82fb00(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_82fc40(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_82fd74(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_82fea4(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) locale_82ffe4(__int64 a1)
{
  __cxa_guard_abort_plt(&SdkData_1060b80);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 locale_8300c0(__int64 a1, _DWORD* a2)
{
  __int64 v3;
  void(__attribute__((noreturn)) * v4)();
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  int v8;
  __int64 v9;
  __int64 v11;
  void(__attribute__((noreturn)) * v12)();
  void(__attribute__((noreturn)) * **v13)();
  void(__attribute__((noreturn)) * *v14)();

  std___1_ios_base_getloc_plt((void*)(&v11), a1);
  v3 = v11;
  v4 = SdkData_e89550[0];
  v12 = SdkData_e89550[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89550[0],
                           memory_order_acquire) != -1) {
    v14 = &v12;
    v13 = &v14;
    std___1___call_once_plt(SdkData_e89550[0], &v13, SdkRoutine_82f0b0);
  }
  v5 = *(_QWORD*)(v3 + 16);
  v6 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v4 + 4) - 1LL;
  if (v6 >= (*(_QWORD*)(v3 + 24) - v5) >> 3 ||
      (v7 = *(__int64**)(v5 + 8 * v6)) == nullptr) {
    locale_7f6090();
  }
  v8 = (*(__int64 (**)(__int64*))(*v7 + 32))(v7);
  v9 = *v7;
  *a2 = v8;
  (*(void (**)(__int64*))(v9 + 40))(v7);
  return std___1_locale_Destroy_locale_plt(&v11);
}

void __attribute__((noreturn)) locale_830194(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9)
{
  std___1_locale_Destroy_locale_plt(&a9);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 locale_8301b0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v10;
  void(__attribute__((noreturn)) * v11)();
  void(__attribute__((noreturn)) * **v12)();
  void(__attribute__((noreturn)) * *v13)();

  std___1_ios_base_getloc_plt((void*)(&v10), a2);
  v4 = v10;
  v5 = SdkData_e89480[0];
  v11 = SdkData_e89480[0];
  if (atomic_load_explicit((atomic_ullong* volatile)SdkData_e89480[0],
                           memory_order_acquire) != -1) {
    v13 = &v11;
    v12 = &v13;
    std___1___call_once_plt(SdkData_e89480[0], &v12, SdkRoutine_82f0b0);
  }
  v6 = *(_QWORD*)(v4 + 16);
  v7 = *(int*)((char*)((__int64*)0x4LL) + (_QWORD)v5 + 4) - 1LL;
  if (v7 >= (*(_QWORD*)(v4 + 24) - v6) >> 3 ||
      (v8 = *(_QWORD*)(v6 + 8 * v7)) == 0) {
    locale_7f6090();
  }
  (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v8 + 96LL))(
      v8, SdkData_e89548, SdkData_e89548 + 26, a3);
  std___1_locale_Destroy_locale_plt(&v10);
  return a3;
}

__int64 locale_83027c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9, char a10)
{
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  std___1_locale_Destroy_locale_plt(&a10);
  v11 = _Unwind_Resume_plt(a1);
  return locale_830290_alt1(v11, v12, v13, v14);
}

char* locale_830290(char* a1, char* a2, unsigned __int64 a3, signed int a4)
{
  char* v4;
  int v5;
  unsigned __int64 v6;
  unsigned int v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned int v10;
  char* v13;
  __int64 v14;
  int v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  bool v20;
  unsigned __int64 v21;

  v4 = a2;
  HIDWORD(v6) = a4 - 2;
  LODWORD(v6) = a4 - 2;
  v5 = v6 >> 1;
  if (v5 != 4) {
    if (v5 == 0) {
      return (char*)locale_830500((__int64)a1, (__int64)a2, a3);
    }
    if (v5 == 3) {
      return (char*)locale_8305c0((__int64)a1, (__int64)a2, a3);
    }
    if (v5 != 7) {
      v13 = a1;
      v14 = a2 - a1;
      v21 = a3;
      v16 = locale_830760(a3, a4);
      if (v14 < v16) {
        return a2;
      }
      v17 = a4;
      v18 = v21;
      v4 = &v13[v16];
      v19 = v4 - 1;
      do {
        *v19-- = SdkData_bc6c59[(unsigned int)(v18 % v17)];
        v20 = v18 >= v17;
        v18 /= v17;
      } while (v20);
      return v4;
    }
    return (char*)locale_8306a0((__int64)a1, (__int64)a2, a3);
  }
  if (a2 - a1 > 19 || (v7 = (1233 * (64 - (unsigned int)__clz(a3 | 1))) >> 12,
                       a2 - a1 >= v7 - (a3 < SdkData_cff750[v7]) + 1)) {
    if (HIDWORD(a3) != 0) {
      if (a3 > 0x2540BE3FFLL) {
        v8 = a3;
        v9 = a3 / 0x2540BE400LL;
        a1 = (char*)((__int64 (*)(void))SdkRoutine_7cdb80)();
        a3 = v8 - 10000000000LL * v9;
      }
      *(_WORD*)a1 = *(_WORD*)&SdkData_cdee2d[2 * (a3 / 0x5F5E100)];
      *((_WORD*)a1 + 1) =
          *(_WORD*)&SdkData_cdee2d[2 * (a3 % 0x5F5E100 / 0xF4240)];
      v10 = a3 % 0x5F5E100 % 0xF4240;
      *((_WORD*)a1 + 2) = *(_WORD*)&SdkData_cdee2d[2 * (v10 / 0x2710uLL)];
      v10 %= 0x2710u;
      *((_WORD*)a1 + 3) =
          *(_WORD*)&SdkData_cdee2d[2 * ((unsigned __int16)v10 / 0x64u)];
      *((_WORD*)a1 + 4) =
          *(_WORD*)&SdkData_cdee2d[2 * ((unsigned __int16)v10 % 0x64u)];
      return a1 + 10;
    }
    else {
      return (char*)((__int64 (*)(void))SdkRoutine_7cdb80)();
    }
  }
  return v4;
}

__int64 locale_830500(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  signed __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  _BYTE* v9;

  v3 = 64 - __clz(a3 | 1);
  if (a2 - a1 < v3) {
    return a2;
  }
  v5 = a1 + v3;
  if (a3 < 0x11) {
    v7 = a3;
    v6 = v5;
  }
  else {
    v6 = a1 + v3;
    do {
      v7 = a3 >> 4;
      *(_DWORD*)(v6 - 4) = SdkData_d00eb0[a3 & 0xF];
      v6 -= 4;
      v8 = a3 > 0x10F;
      a3 >>= 4;
    } while (v8);
  }
  v9 = (_BYTE*)(v6 - 1);
  do {
    *v9-- = SdkData_bba743[v7 & 1];
    v8 = v7 > 1;
    v7 >>= 1;
  } while (v8);
  return v5;
}

__int64 locale_8305c0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int16 v8;
  _BYTE* v9;
  bool v10;

  v3 = (86 * (66 - (unsigned int)__clz(a3 | 1))) >> 8;
  if (a2 - a1 < v3) {
    return a2;
  }
  v5 = a1 + v3;
  if (a3 < 0x41) {
    v7 = a3;
    v6 = v5;
  }
  else {
    v6 = a1 + v3;
    do {
      v7 = a3 >> 6;
      v8 = SdkData_d00ef0[a3 & 0x3F];
      a3 = v7;
      *(_WORD*)(v6 - 2) = v8;
      v6 -= 2;
    } while (v7 > 0x40);
  }
  v9 = (_BYTE*)(v6 - 1);
  do {
    *v9-- = SdkData_bbf545[v7 & 7];
    v10 = v7 > 7;
    v7 >>= 3;
  } while (v10);
  return v5;
}

__int64 locale_8306a0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  signed __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int16 v8;
  _BYTE* v9;
  bool v10;

  v3 = (67 - __clz(a3 | 1)) >> 2;
  if (a2 - a1 < v3) {
    return a2;
  }
  v5 = a1 + v3;
  if (a3 < 0x101) {
    v7 = a3;
    v6 = v5;
  }
  else {
    v6 = a1 + v3;
    do {
      v7 = a3 >> 8;
      v8 = SdkData_d00f70[(unsigned __int8)a3];
      a3 = v7;
      *(_WORD*)(v6 - 2) = v8;
      v6 -= 2;
    } while (v7 > 0x100);
  }
  v9 = (_BYTE*)(v6 - 1);
  do {
    *v9-- = SdkData_bc86e9[v7 & 0xF];
    v10 = v7 > 0xF;
    v7 >>= 4;
  } while (v10);
  return v5;
}

__int64 locale_830760(unsigned __int64 a1, unsigned int a2)
{
  __int64 result;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;

  if (a1 < a2) {
    return 1;
  }
  v3 = a2 * a2;
  v4 = a1;
  result = 4;
  v5 = (unsigned int)(v3 * v3);
  while (1) {
    if (v4 < v3) {
      return (unsigned int)(result - 2);
    }
    if (v4 < (unsigned int)v3 * a2) {
      break;
    }
    if (v4 < v5) {
      return result;
    }
    v4 /= v5;
    result = (unsigned int)(result + 4);
    if (v4 < a2) {
      return (unsigned int)(result - 3);
    }
  }
  return (unsigned int)(result - 1);
}

void __attribute__((noreturn)) locale_830958(__int64 a1)
{
  SdkRoutine_7cd620_alt1(a1);
}

__int64 locale_83095c(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  SdkRoutine_82dd20(v1 - 40);
  v3 = _Unwind_Resume_plt(a1);
  return SdkRoutine_830970(v3);
}

#pragma GCC visibility pop
