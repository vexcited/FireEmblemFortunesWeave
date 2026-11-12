#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_8365b0(_QWORD);
__int64 SdkRoutine_837c80(unsigned __int8**, char, __int64, __int64, __int64,
                          __int64, __int64, __int64);
__int64 SdkRoutine_8387c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8393e0(_QWORD);
__int64 SdkRoutine_83d850(_QWORD);
__int64 SdkRoutine_83db20(__int64, __int64, unsigned __int8, char);
__int64 SdkRoutine_842ba0(__int64, __int64);
__int64 SdkRoutine_8445e0(_QWORD);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_8364d0_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("anonymous_itanium_demangle_AbstractManglingParser_make_"
                    "8364d0");
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83f2c0_alt1(
    _QWORD, _QWORD) __asm__("anonymous_itanium_demangle_AbstractManglingParser_"
                            "make_83f2c0");
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_848050_alt1(
    _QWORD) __asm__("anonymous_itanium_demangle_AbstractManglingParser_make_"
                    "848050");
__int64
    anonymous_itanium_demangle_AbstractManglingParser_parseBaseUnresolvedName_alt1(
        _QWORD) __asm__("anonymous_itanium_demangle_AbstractManglingParser_"
                        "parseBaseUnresolvedName");
__int64
anonymous_itanium_demangle_AbstractManglingParser_parseName(unsigned __int8**,
                                                            __int64, __int64);
__int64
    anonymous_itanium_demangle_AbstractManglingParser_parseOperatorName_alt1(
        _QWORD, _QWORD) __asm__("anonymous_itanium_demangle_"
                                "AbstractManglingParser_parseOperatorName");
__int64 anonymous_itanium_demangle_AbstractManglingParser_parseSimpleId_alt1(
    _QWORD) __asm__("anonymous_itanium_demangle_AbstractManglingParser_"
                    "parseSimpleId");
__int64 anonymous_itanium_demangle_AbstractManglingParser_parseType(_QWORD);
__int64 anonymous_itanium_demangle_AbstractManglingParser_parseUnqualifiedName(
    _QWORD, _QWORD, _QWORD, _QWORD);
__int64 free_plt(_QWORD);
__int64 malloc_plt(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 realloc_plt(_QWORD, _QWORD);
__int64 snprintf_plt(_QWORD, _QWORD, const char*, ...);
__int64 std_terminate_plt(_QWORD);
__int64 strlen_plt(_QWORD);
extern __int64 (*SdkData_e829e8[])();
extern __int64 (*SdkData_e82a70[])();
extern __int64 (*SdkData_e82ae8[])();
extern __int64 (*SdkData_e83040[])();
extern __int64 (*SdkData_e830b8[])();
extern __int64 (*SdkData_e83130[])();
extern __int64 (*SdkData_e831a8[])();
extern __int64 (*SdkData_e83220[])();
extern __int64 (*SdkData_e83298[])();
extern __int64 (*SdkData_e83388[])();
extern __int64 (*SdkData_e83400[])();
extern __int64 (*SdkData_e83478[])();
extern __int64 (*SdkData_e834f0[])();
extern __int64 (*SdkData_e83568[])();
extern __int64 (*SdkData_e835e0[])();
extern __int64 (*SdkData_e83658[])();
extern __int64 (*SdkData_e83838[])();
extern __int64 (*SdkData_e83b80[])();
extern __int64 (*SdkData_e83bf8[])();
extern __int64 (*SdkData_e83c70[])();
extern __int64 (*SdkData_e83ce8[])();
extern __int64 (*SdkData_e83d60[])();
extern __int64 (*SdkData_e83e50[])();
extern __int64 (*SdkData_e83ec8[])();
extern __int64 (*SdkData_e83f40[])();
extern __int64 (*SdkData_e83fb8[])();
extern __int64 (*SdkData_e84030[])();
extern __int64 (*SdkData_e84300[])();
extern __int64 (*SdkData_e84378[])();
extern __int64 (*SdkData_e843f0[])();
extern __int64 (*SdkData_e84468[])();
extern __int64 (*SdkData_e844e0[])();
extern __int64 (*SdkData_e84648[])();
extern __int64 (*SdkData_e84750[])();
extern __int64 (*SdkData_e847b0[])();
extern __int64 (*SdkData_e848a0[])();
extern __int64 (*SdkData_e84a80[])();
extern __int64 (*SdkData_e84be8[])();
extern __int64 (*SdkData_e84d50[])();
extern __int64 (*SdkData_e84e40[])();
extern __int64 (*SdkData_e85200[])();
extern __int64 (*SdkData_e85278[])();
extern __int64 (*SdkData_e852f0[])();
extern __int64 (*SdkData_e85368[])();
extern __int64 (*SdkData_e853e0[])();
extern __int64 (*SdkData_e85458[])();
extern __int64 (*SdkData_e854d0[])();
extern __int64 (*SdkData_e85548[])();
extern __int64 (*SdkData_e855c0[])();
extern __int64 (*SdkData_e85638[])();
extern __int64 (*SdkData_e856b0[])();
extern int SdkData_d02ac0[];
void __attribute__((noreturn)) SdkRoutine_84c1f0(const char*, ...);
void __attribute__((noreturn)) abort_plt(_QWORD);
void __attribute__((noreturn))
std_terminate_plt_alt1(_QWORD) __asm__("std_terminate_plt");
__int64 cxa_demangle_833200(__int64 a1, __int64 a2);
__int64 cxa_demangle_833220(__int64 a1, __int64 a2);
char* anonymous_itanium_demangle_AbstractManglingParser_make_833dc0(__int64 a1,
                                                                    __int64 a2,
                                                                    __int64 a3);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_anonymous_itanium_demangle_EnableIfAttr_anonymous_itanium_demangle_NodeArray(
    __int64 a1, __int64 a2, __int64 a3);
__int64 anonymous_itanium_demangle_AbstractManglingParser_popTrailingNodeArray(
    _QWORD* a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5,
    __int64 a6, __int64 a7, __int64 a8, __int64 a9);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_8364d0(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, int* a8, char* a9);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_8367d0(__int64 a1,
                                                              __int64 a2);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_836880(__int64 a1,
                                                              __int64 a2);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_836930(__int64 a1,
                                                              __int64 a2);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_8369e0(__int64 a1,
                                                              __int64 a2);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_836a90(__int64 a1,
                                                              __int64 a2);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_836d50(__int64 a1,
                                                              __int64 a2);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_836e00(
    __int64 a1, __int64 a2, __int64 a3);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_836ea0(__int64 a1,
                                                              __int64 a2);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_836f50(__int64 a1,
                                                              __int64 a2);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_837000(__int64 a1,
                                                              __int64 a2);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_8370b0(__int64 a1,
                                                              __int64 a2);
__int64 anonymous_itanium_demangle_AbstractManglingParser_parseSourceName(
    unsigned __int8** a1);
char* anonymous_itanium_demangle_AbstractManglingParser_make_8377c0(__int64 a1,
                                                                    __int64 a2);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_837870(__int64 a1,
                                                              _QWORD* a2);
__int64 anonymous_itanium_demangle_AbstractManglingParser_parseUnscopedName(
    __int64 a1, __int64 a2, _BYTE* a3, __int64 a4);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_838200(
    __int64 a1, __int64 a2, __int64 a3);
__int64 anonymous_itanium_demangle_AbstractManglingParser_parseDecltype(
    unsigned __int8** a1);
bool anonymous_itanium_demangle_ForwardTemplateReference_hasRHSComponentSlow(
    __int64 a1);
bool anonymous_itanium_demangle_ForwardTemplateReference_hasArraySlow(
    __int64 a1);
bool anonymous_itanium_demangle_ForwardTemplateReference_hasFunctionSlow(
    __int64 a1);
__int64 anonymous_itanium_demangle_ForwardTemplateReference_getSyntaxNode(
    __int64 result, __int64* a2);
__int64
anonymous_itanium_demangle_ForwardTemplateReference_printRight(__int64 result,
                                                               __int64* a2);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83a7f0(
    __int64 a1, __int64 a2, __int64* a3, char a4);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83a8b0(
    __int64 a1, __int64 a2, __int64 a3, char a4);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83a960(
    __int64 a1, __int64 a2, __int64* a3, __int64 a4, char a5);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83aa20(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    char a7, char a8, char a9);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83ab10(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83abe0(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83aca0(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83ad60(
    __int64 a1, __int64* a2, __int64 a3, __int64 a4, char a5);
__int64 anonymous_itanium_demangle_AbstractManglingParser_parseFunctionParam(
    __int64* a1);
__int64
anonymous_itanium_demangle_AbstractManglingParser_parseBracedExpr(__int64 a1);
__int64
anonymous_itanium_demangle_AbstractManglingParser_parsePointerToMemberConversionExpr(
    __int64 a1, __int64 a2, __int64 a3);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83c430(
    __int64 a1, __int64 a2, char a3);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_83cdb0(__int64 a1,
                                                              __int64 a2);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_83ce50(__int64 a1,
                                                              __int64 a2);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_83cef0(__int64 a1,
                                                              __int64 a2);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_anonymous_itanium_demangle_NodeArrayNode_anonymous_itanium_demangle_NodeArray(
    __int64 a1, __int64 a2, __int64 a3);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83d040(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_83d0f0(__int64 a1,
                                                              __int64 a2);
__int64 anonymous_itanium_demangle_AbstractManglingParser_parseUnresolvedName(
    __int64 a1, char a2);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83d790(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83dca0(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5);
__int64 anonymous_itanium_demangle_AbstractManglingParser_parseIntegerLiteral(
    __int64 a1, __int64 a2, __int64 a3);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_anonymous_itanium_demangle_BoolExpr_int(
    __int64 a1, int a2);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_83f2c0(__int64 a1,
                                                              __int64 a2);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_83faf0(__int64 a1,
                                                              __int64 a2);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83fb90(
    __int64 a1, __int64 a2, __int64* a3);
__int64 anonymous_itanium_demangle_BoolExpr_printLeft(__int64 a1, _QWORD* a2);
__int64
anonymous_itanium_demangle_FloatLiteralImpl_printLeft_840030(__int64 result,
                                                             _QWORD* a2);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_841040(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8, __int64 a9);
_QWORD*
anonymous_itanium_demangle_AbstractManglingParser_ScopedTemplateParamList_Destroy_ScopedTemplateParamList(
    _QWORD* result);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_841430(__int64 a1,
                                                              __int64 a2);
__int64 anonymous_itanium_demangle_TypeTemplateParamDecl_printRight(__int64 a1,
                                                                    __int64 a2);
__int64 anonymous_itanium_demangle_ConstrainedTypeTemplateParamDecl_printRight(
    __int64 a1, __int64 a2);
__int64
anonymous_itanium_demangle_NonTypeTemplateParamDecl_printRight(__int64 a1,
                                                               __int64 a2);
__int64 anonymous_itanium_demangle_TemplateParamPackDecl_printRight(__int64 a1,
                                                                    __int64 a2);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_842610(
    __int64 a1, __int64 a2, __int64 a3);
__int64 anonymous_itanium_demangle_FoldExpr_printLeft_8427a0(__int64 a1,
                                                             __int64 a2);
__int64
anonymous_itanium_demangle_AbstractManglingParser_parseSimpleId(__int64 a1);
__int64
anonymous_itanium_demangle_AbstractManglingParser_parseBaseUnresolvedName(
    __int64 a1);
__int64 anonymous_itanium_demangle_QualifiedName_getBaseName(__int64 a1);
__int64 anonymous_itanium_demangle_GlobalQualifiedName_getBaseName(__int64 a1);
char* anonymous_itanium_demangle_AbstractManglingParser_parseAbiTags(__int64 a1,
                                                                     char* a2);
const char*
anonymous_itanium_demangle_SpecialSubstitution_getBaseName(__int64 a1);
char* anonymous_itanium_demangle_ExpandedSpecialSubstitution_getBaseName(
    __int64 a1);
__int64 anonymous_itanium_demangle_ExpandedSpecialSubstitution_printLeft_845670(
    _DWORD* a1, _QWORD* a2);
char* anonymous_itanium_demangle_AbstractManglingParser_make_845b20(__int64 a1,
                                                                    __int64 a2);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_845bc0(
    __int64 a1, __int64 a2, char a3, int a4);
__int64 anonymous_itanium_demangle_MemberLikeFriendName_printLeft(__int64 a1,
                                                                  _QWORD* a2);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_846080(
    __int64 a1, __int64 a2, __int64 a3);
__int64
anonymous_itanium_demangle_ParameterPack_hasRHSComponentSlow(__int64 a1,
                                                             __int64 a2);
__int64 anonymous_itanium_demangle_ParameterPack_getSyntaxNode(__int64 result,
                                                               __int64 a2);
__int64 anonymous_itanium_demangle_ParameterPack_printLeft(__int64 result,
                                                           unsigned int* a2);
__int64 anonymous_itanium_demangle_ParameterPack_printRight(__int64 result,
                                                            unsigned int* a2);
__int64 anonymous_itanium_demangle_NameWithTemplateArgs_printLeft(__int64 a1,
                                                                  __int64 a2);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_8477d0(
    __int64 a1, __int64* a2, __int64 a3);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_847880(__int64 a1,
                                                              __int64 a2);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_847920(
    __int64 a1, __int64 a2, char a3);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_8479d0(
    __int64 a1, __int64 a2, __int64* a3);
__int64 anonymous_itanium_demangle_AbstractManglingParser_parseClassEnumType(
    __int64 a1, __int64 a2, __int64 a3);
char* anonymous_itanium_demangle_AbstractManglingParser_make_847ef0(__int64 a1,
                                                                    __int64 a2);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_847fa0(
    __int64 a1, __int64 a2, int a3);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_848050(__int64 a1,
                                                              __int64 a2);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_848100(__int64 a1,
                                                              __int64 a2);
__int64
anonymous_itanium_demangle_AbstractManglingParser_make_8492a0(__int64 a1,
                                                              __int64 a2);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_849340(
    __int64 a1, __int64 a2, __int64 a3);
__int64 anonymous_itanium_demangle_AbstractManglingParser_make_849660(
    __int64 a1, __int64 a2, __int64 a3);
__int64 anonymous_itanium_demangle_ArrayType_printLeft(__int64 a1, __int64 a2);
char* anonymous_itanium_demangle_AbstractManglingParser_make_84a0d0(__int64 a1,
                                                                    __int64 a2,
                                                                    __int64 a3);
__int64 SdkRoutine_8332c0(__int64);
__int64 SdkRoutine_837c80_alt1(_QWORD, _QWORD) __asm__("SdkRoutine_837c80");
__int64 _Unwind_Resume_plt(_QWORD);
__int64 anonymous_itanium_demangle_AbstractManglingParser_parseType_alt1(
    unsigned __int8**) __asm__("anonymous_itanium_demangle_"
                               "AbstractManglingParser_parseType");
__int64 malloc_plt_alt1(unsigned __int64) __asm__("malloc_plt");
__int64 memmove_plt_alt1(__int64, __int64,
                         unsigned __int64) __asm__("memmove_plt");
__int64 realloc_plt_alt1(__int64, unsigned __int64) __asm__("realloc_plt");
char* anonymous_itanium_demangle_AbstractManglingParser_make_833dc0_alt1(
    __int64, const char*,
    __int64) __asm__("anonymous_itanium_demangle_AbstractManglingParser_make_"
                     "833dc0");
extern _UNKNOWN SdkData_e82c40;
extern __int64 (*SdkData_e82998[])();
extern __int64 (*SdkData_e84558[])();
extern __int64 (*SdkData_e845d0[])();
extern __int64 (*SdkData_e84eb8[])();
extern __int64 (*SdkData_e85098[])();
extern __int64 (*SdkData_e85110[])();
extern __int64 (*SdkData_e85188[])();
unsigned __int64 strlen_plt_alt1(const char*) __asm__("strlen_plt");
void __attribute__((noreturn))
SdkRoutine_84c1f0_alt1(__int64, ...) __asm__("SdkRoutine_84c1f0");
void abort_plt_alt1() __asm__("abort_plt");
void free_plt_alt1(__int64) __asm__("free_plt");
__int64 __cxa_demangle(__int64 a1, __int64 a2, unsigned __int64* a3, int* a4);
__int64
anonymous_itanium_demangle_AbstractManglingParser_parseOperatorName(__int64 a1,
                                                                    _BYTE* a2);
__int64 anonymous_itanium_demangle_AbstractManglingParser_parseQualifiedType(
    __int64 a1);
__int64 anonymous_itanium_demangle_ReferenceType_collapse(__int64 a1,
                                                          signed int a2,
                                                          __int64 a3);

__int64 __cxa_demangle(__int64 a1, __int64 a2, unsigned __int64* a3, int* a4)
{
  __int64 v7;
  unsigned __int64 v9;
  bool v10;
  __int64 v12;
  int v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64** i;
  __int64* v22;
  unsigned __int8* v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int8* v33;
  unsigned __int8* v35;
  int v36;
  unsigned __int8* v37;
  unsigned __int8* v38;
  int v39;
  __int64* v40;
  __int64 v41;
  struct {
    __int64 (**v42)();
    __int64 v43;
    unsigned __int64 v44;
    unsigned __int64 v45;
    __int64 v46;
    int v47;
  } v42_;
  struct {
    unsigned __int8* v48;
    unsigned __int8* v49;
    _QWORD* v50;
    _QWORD* v51;
    __int64* v52;
  } v48_;
  _QWORD v53[32];
  __int64 v54[3];
  _QWORD v55[32];
  __int64 v56[3];
  _QWORD v57[8];
  __int64 v58[3];
  _QWORD v59[4];
  struct {
    _QWORD* v60;
    _QWORD* v61;
    __int16* v62;
  } v60_;
  _QWORD v63[4];
  struct {
    __int16 v64;
    char v65;
    char gap859_[5];
    __int64 v66;
    __int64 v67;
    int v68;
  } v64_;
  struct {
    __int64 v69;
    __int64 v70;
    char gap912_[4080];
    __int64* v71;
  } v69_;

  if (a1 == 0 || a2 != 0 && a3 == nullptr) {
    v7 = 0;
    if (a4 != nullptr) {
      *a4 = -3;
    }
    return v7;
  }
  v9 = strlen_plt_alt1((const char*)a1);
  v48_.v48 = (unsigned __int8*)a1;
  v48_.v49 = (unsigned __int8*)(a1 + v9);
  v48_.v52 = v54;
  memset(v53, 0, sizeof(v53));
  v48_.v50 = v53;
  v48_.v51 = v53;
  v54[0] = (__int64)v55;
  memset(v55, 0, sizeof(v55));
  v54[1] = (__int64)v55;
  v54[2] = (__int64)v56;
  v56[2] = (__int64)v58;
  v56[0] = (__int64)v57;
  v58[2] = (__int64)&v60_.v60;
  v56[1] = (__int64)v57;
  memset(v57, 0, sizeof(v57));
  v58[0] = (__int64)v59;
  v60_.v62 = &v64_.v64;
  v58[1] = (__int64)v59;
  memset(v59, 0, sizeof(v59));
  v60_.v60 = v63;
  v60_.v61 = v63;
  v64_.v64 = 1;
  memset(v63, 0, sizeof(v63));
  v64_.v65 = 0;
  v64_.v67 = 0;
  v64_.v68 = 0;
  v69_.v69 = 0;
  v69_.v70 = 0;
  v69_.v71 = &v69_.v69;
  v64_.v66 = -1;
  if (v9 >= 2) {
    if (*(_WORD*)a1 == 23135) {
      v16 = 2;
    }
    else {
      if (v9 == 2) {
        goto LABEL_20;
      }
      v10 = *(_WORD*)a1 == 24415 && *(_BYTE*)(a1 + 2) == 90;
      if (!v10) {
        if (v9 < 4) {
          goto LABEL_20;
        }
        if (*(_DWORD*)a1 == 1516199775) {
          v31 = 4;
        }
        else {
          if (v9 == 4) {
            goto LABEL_20;
          }
          if (*(_DWORD*)a1 != 1600085855 || *(_BYTE*)(a1 + 4) != 90) {
            goto LABEL_20;
          }
          v31 = 5;
        }
        v48_.v48 = (unsigned __int8*)(a1 + v31);
        v32 = SdkRoutine_8332c0((__int64)&v48_.v48);
        if (v32 != 0) {
          v33 = v48_.v48;
          if ((unsigned __int64)(v48_.v49 - v48_.v48) >= 0xD &&
              *(_QWORD*)v48_.v48 == 0x695F6B636F6C625FLL &&
              *(_QWORD*)(v48_.v48 + 5) == 0x656B6F766E695F6BLL) {
            v35 = v48_.v48 + 13;
            v48_.v48 += 13;
            if (v33 + 13 == v48_.v49 || *v35 != 95) {
              v36 = 0;
            }
            else {
              v35 = v33 + 14;
              v36 = 1;
              v48_.v48 = v35;
            }
            if (v48_.v49 == v35 || (unsigned int)*v35 - 48 > 9) {
              v39 = 1;
            }
            else {
              v37 = v35;
              while ((unsigned int)*v37 - 48 <= 9) {
                v48_.v48 = ++v37;
                if (v37 == v48_.v49) {
                  v38 = v48_.v49;
                  goto LABEL_86;
                }
              }
              v38 = v37;
            LABEL_86:
              v10 = v38 == v35;
              v35 = v37;
              v39 = v10;
            }
            if ((v36 & v39 & 1) == 0) {
              if (v48_.v49 == v35) {
              LABEL_93:
                v14 = (__int64)
                    anonymous_itanium_demangle_AbstractManglingParser_make_833dc0_alt1(
                        (__int64)&v48_.v48, "invocation function for block in ",
                        v32);
                goto LABEL_22;
              }
              if (*v35 == 46) {
                v48_.v48 = v48_.v49;
                goto LABEL_93;
              }
            }
          }
        }
      LABEL_94:
        v7 = 0;
        v13 = -2;
        if (a4 == nullptr) {
          goto LABEL_41;
        }
        goto LABEL_40;
      }
      v16 = 3;
    }
    v48_.v48 = (unsigned __int8*)(a1 + v16);
    v14 = SdkRoutine_8332c0((__int64)&v48_.v48);
    if (v14 != 0) {
      v24 = v48_.v48;
      v25 = v48_.v49 - v48_.v48;
      if (v48_.v49 == v48_.v48) {
        goto LABEL_22;
      }
      if (*v48_.v48 == 46) {
        v26 = v69_.v71;
        v27 = v69_.v71[1];
        if ((unsigned __int64)(v27 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
          v40 = v69_.v71;
          v41 = v48_.v49 - v48_.v48;
          v28 = (__int64*)malloc_plt_alt1(0x1000u);
          if (v28 == nullptr) {
            std_terminate_plt_alt1(0);
          }
          v25 = v41;
          v27 = 0;
          v26 = v28;
          v69_.v71 = v28;
          *v28 = (__int64)v40;
          v28[1] = 0;
        }
        v29 = v27 + 48;
        v30 = (__int64)v26 + v27;
        v26[1] = v29;
        *(_QWORD*)(v30 + 16) = SdkData_e84eb8;
        v30 += 16;
        *(_BYTE*)(v30 + 8) = 1;
        LOWORD(v29) = *(_WORD*)(v30 + 9);
        *(_QWORD*)(v30 + 16) = v14;
        *(_QWORD*)(v30 + 24) = v24;
        *(_QWORD*)(v30 + 32) = v25;
        v14 = v30;
        *(_WORD*)(v30 + 9) = v29 & 0xF000 | 0x540;
        v48_.v48 = v48_.v49;
      LABEL_22:
        if (a2 != 0) {
          v15 = *a3;
        }
        else {
          v15 = 0;
        }
        v42_.v44 = 0;
        v42_.v45 = v15;
        v42_.v46 = -1;
        v42_.v42 = SdkData_e82998;
        v42_.v43 = a2;
        v42_.v47 = 1;
        if (v60_.v60 != v60_.v61) {
          SdkRoutine_84c1f0_alt1((__int64)"libc++abi: ");
        }
        (*(void (**)(__int64, __int64 (***)(void)))(*(_QWORD*)v14 + 64LL))(
            v14, &v42_.v42);
        if ((*(_WORD*)(v14 + 9) & 0xC0) != 0x40) {
          ((void (*)(__int64 (***)(void), __int64))v42_.v42[3])(&v42_.v42, v14);
        }
        v17 = v42_.v44;
        if (v42_.v44 + 1 <= v42_.v45) {
          ++v42_.v44;
          *(_BYTE*)(v42_.v43 + v17) = 0;
          if (a3 == nullptr) {
          LABEL_38:
            v7 = v42_.v43;
            v13 = 0;
            goto LABEL_39;
          }
        }
        else {
          if (2 * v42_.v45 <= v42_.v44 + 993) {
            v18 = v42_.v44 + 993;
          }
          else {
            v18 = 2 * v42_.v45;
          }
          v42_.v45 = v18;
          v19 = realloc_plt_alt1(v42_.v43, v18);
          v42_.v43 = v19;
          if (v19 == 0) {
            abort_plt_alt1();
          }
          v20 = v42_.v44++;
          *(_BYTE*)(v19 + v20) = 0;
          if (a3 == nullptr) {
            goto LABEL_38;
          }
        }
        *a3 = v42_.v44;
        goto LABEL_38;
      }
    }
    goto LABEL_94;
  }
LABEL_20:
  v12 = anonymous_itanium_demangle_AbstractManglingParser_parseType_alt1(
      &v48_.v48);
  v13 = -2;
  v14 = v12;
  v7 = 0;
  if (v12 != 0 && v48_.v49 == v48_.v48) {
    goto LABEL_22;
  }
LABEL_39:
  if (a4 != nullptr) {
  LABEL_40:
    *a4 = v13;
  }
LABEL_41:
  for (i = (__int64**)v69_.v71; v69_.v71 != nullptr; i = (__int64**)v69_.v71) {
    while (1) {
      v22 = *i;
      v69_.v71 = *i;
      if (i != (__int64**)&v69_.v69) {
        break;
      }
      i = (__int64**)v22;
      if (v22 == nullptr) {
        goto LABEL_46;
      }
    }
    free_plt_alt1((__int64)i);
  }
LABEL_46:
  v69_.v69 = 0;
  v69_.v70 = 0;
  v69_.v71 = &v69_.v69;
  if (v60_.v60 != v63) {
    free_plt_alt1((__int64)v60_.v60);
  }
  if ((_QWORD*)v58[0] != v59) {
    free_plt_alt1(v58[0]);
  }
  if ((_QWORD*)v56[0] != v57) {
    free_plt_alt1(v56[0]);
  }
  if ((_QWORD*)v54[0] != v55) {
    free_plt_alt1(v54[0]);
  }
  if (v48_.v50 != v53) {
    free_plt_alt1((__int64)v48_.v50);
  }
  return v7;
}

__int64 cxa_demangle_833200(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 64LL))(a2, a1);
}

__int64 cxa_demangle_833220(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 72LL))(a2, a1);
}

char* anonymous_itanium_demangle_AbstractManglingParser_make_833dc0(__int64 a1,
                                                                    __int64 a2,
                                                                    __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  char* v9;
  __int64 v10;
  __int16 v11;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)malloc_plt(4096);
    if (v8 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v9 = (char*)v3 + v6;
  v3[1] = v6 + 48;
  v10 = strlen_plt(a2);
  *((_QWORD*)v9 + 2) = SdkData_e829e8;
  v9 += 16;
  v9[8] = 21;
  v11 = *(_WORD*)(v9 + 9);
  *((_QWORD*)v9 + 2) = a2;
  *((_QWORD*)v9 + 3) = v10;
  *((_QWORD*)v9 + 4) = a3;
  *(_WORD*)(v9 + 9) = v11 & 0xF000 | 0x540;
  return v9;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_anonymous_itanium_demangle_EnableIfAttr_anonymous_itanium_demangle_NodeArray(
    __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)malloc_plt(4096);
    if (v8 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 32;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e84d50;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 10;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_popTrailingNodeArray(
    _QWORD* a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5,
    __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  v9 = a1[2];
  v10 = a1[3];
  v11 = (v10 - v9) >> 3;
  if (a2 > v11) {
    SdkRoutine_84c1f0("libc++abi: ");
  }
  v12 = (_QWORD*)a1[614];
  v13 = v9 + 8 * a2;
  v16 = ((_DWORD)v10 - (_DWORD)v13 + 15) & 0xFFFFFFF0;
  v17 = v12[1];
  if (v17 + v16 >= 0xFF0) {
    if (v16 >= 0xFF1) {
      v18 = (_QWORD*)malloc_plt(v16 + 16);
      if (v18 != nullptr) {
        *v18 = *v12;
        v18[1] = 0;
        *v12 = v18;
        v19 = (__int64)(v18 + 2);
        if (v10 == v13) {
          goto LABEL_11;
        }
        goto LABEL_10;
      }
    LABEL_15:
      v21 = std_terminate_plt(v18);
      return anonymous_itanium_demangle_AbstractManglingParser_make_8364d0_alt1(
          v21, v22, v23, v24, v25, v26, v27, v28, a9);
    }
    v18 = (_QWORD*)malloc_plt(4096);
    if (v18 == nullptr) {
      goto LABEL_15;
    }
    v17 = 0;
    *v18 = v12;
    v18[1] = 0;
    v12 = v18;
    a1[614] = v18;
  }
  v12[1] = v17 + v16;
  v19 = (__int64)v12 + v17 + 16;
  if (v10 != v13) {
  LABEL_10:
    memmove_plt(v19, v13, v10 - v13);
    v9 = a1[2];
    v11 = (a1[3] - v9) >> 3;
  }
LABEL_11:
  if (a2 > v11) {
    SdkRoutine_84c1f0("libc++abi: shrinkToSize() can't expand!");
  }
  a1[3] = v9 + 8 * a2;
  return v19;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_8364d0(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, int* a8, char* a9)
{
  _QWORD* v9;
  __int64 v17;
  _QWORD* v19;
  __int64 result;
  int v21;
  char v22;
  __int16 v23;
  __int64 v24;

  v9 = *(_QWORD**)(a1 + 4912);
  v17 = v9[1];
  if ((unsigned __int64)(v17 - 4000) > 0xFFFFFFFFFFFFF00FLL) {
    goto LABEL_4;
  }
  v19 = (_QWORD*)malloc_plt(4096);
  if (v19 != nullptr) {
    v17 = 0;
    *v19 = v9;
    v19[1] = 0;
    v9 = v19;
    *(_QWORD*)(a1 + 4912) = v19;
  LABEL_4:
    v9[1] = v17 + 80;
    *(_QWORD*)((char*)v9 + v17 + 16) = SdkData_e84e40;
    result = (__int64)v9 + v17 + 16;
    v21 = *a8;
    v22 = *a9;
    *(_BYTE*)(result + 8) = 19;
    v23 = *(_WORD*)(result + 9);
    *(_QWORD*)(result + 16) = a2;
    *(_QWORD*)(result + 24) = a3;
    *(_QWORD*)(result + 32) = a4;
    *(_QWORD*)(result + 40) = a5;
    *(_QWORD*)(result + 48) = a6;
    *(_QWORD*)(result + 56) = a7;
    *(_DWORD*)(result + 64) = v21;
    *(_BYTE*)(result + 68) = v22;
    *(_WORD*)(result + 9) = v23 & 0xF000 | 0x100;
    return result;
  }
  v24 = std_terminate_plt(0);
  return SdkRoutine_8365b0(v24);
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_8367d0(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 21;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "template parameter object for ";
  *(_QWORD*)(result + 24) = 30;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_836880(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 21;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "vtable for ";
  *(_QWORD*)(result + 24) = 11;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_836930(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 21;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "VTT for ";
  *(_QWORD*)(result + 24) = 8;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_8369e0(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 21;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "typeinfo for ";
  *(_QWORD*)(result + 24) = 13;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_836a90(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 21;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "typeinfo name for ";
  *(_QWORD*)(result + 24) = 18;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_836d50(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 21;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "covariant return thunk to ";
  *(_QWORD*)(result + 24) = 26;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_836e00(
    __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)malloc_plt(4096);
    if (v8 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 32;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e82a70;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 22;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_836ea0(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 21;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "thread-local initialization routine for ";
  *(_QWORD*)(result + 24) = 40;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_836f50(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 21;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "virtual thunk to ";
  *(_QWORD*)(result + 24) = 17;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_837000(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt_alt1(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_BYTE*)(result + 8) = 21;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "non-virtual thunk to ";
  *(_QWORD*)(result + 24) = 21;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_8370b0(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e829e8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 21;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "reference temporary for ";
  *(_QWORD*)(result + 24) = 24;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_parseSourceName(
    unsigned __int8** a1)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  const char* v3;
  unsigned __int64 v4;
  unsigned __int8* v5;
  const char* v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  bool v12;
  unsigned __int8* v13;
  __int64 v14;
  unsigned __int8** v15;
  unsigned __int8* v16;
  __int64 result;
  __int16 v18;

  v2 = *a1;
  v1 = a1[1];
  if (v1 != *a1 && (unsigned int)*v2 - 58 >= 0xFFFFFFF6) {
    v3 = (const char*)(v2 + 1);
    v4 = 0;
    v5 = v2 + 1;
    do {
      *a1 = v5;
      v6 = v3;
      v7 = v4;
      v8 = v5;
      v9 = *(v5 - 1);
      v4 = v9 + 10 * v4 - 48;
      if (v5 == v1) {
        break;
      }
      ++v5;
      ++v3;
    } while ((unsigned int)*v8 - 48 <= 9);
    if (v4 - 1 < v1 - (unsigned __int8*)v6) {
      *a1 = &v8[10 * v7 - 48 + v9];
      if (v4 >= 0xA && ((v10 = *(_QWORD*)v8, v11 = *((unsigned __int16*)v8 + 4),
                         v10 == 0x5F4C41424F4C475FLL)
                            ? (v12 = v11 == 20063)
                            : (v12 = false),
                        v12)) {
        v13 = a1[614];
        v14 = *((_QWORD*)v13 + 1);
        if ((unsigned __int64)(v14 - 4048) > 0xFFFFFFFFFFFFF00FLL) {
          v6 = "(anonymous namespace)";
          v4 = 21;
          goto LABEL_16;
        }
        v15 = a1;
        v16 = (unsigned __int8*)malloc_plt(4096);
        if (v16 != nullptr) {
          v14 = 0;
          *(_QWORD*)v16 = v13;
          *((_QWORD*)v16 + 1) = 0;
          v4 = 21;
          v13 = v16;
          v6 = "(anonymous namespace)";
          goto LABEL_15;
        }
      }
      else {
        v13 = a1[614];
        v14 = *((_QWORD*)v13 + 1);
        if ((unsigned __int64)(v14 - 4048) > 0xFFFFFFFFFFFFF00FLL) {
        LABEL_16:
          *((_QWORD*)v13 + 1) = v14 + 32;
          *(_QWORD*)&v13[v14 + 16] = SdkData_e82ae8;
          result = (__int64)&v13[v14 + 16];
          *(_BYTE*)(result + 8) = 8;
          v18 = *(_WORD*)&v13[v14 + 25];
          *(_QWORD*)(result + 16) = v6;
          *(_QWORD*)(result + 24) = v4;
          *(_WORD*)(result + 9) = v18 & 0xF000 | 0x540;
          return result;
        }
        v15 = a1;
        v16 = (unsigned __int8*)malloc_plt(4096);
        if (v16 != nullptr) {
          v14 = 0;
          *(_QWORD*)v16 = v13;
          *((_QWORD*)v16 + 1) = 0;
          v13 = v16;
        LABEL_15:
          v15[614] = v16;
          goto LABEL_16;
        }
      }
      std_terminate_plt(v16);
      __udf(0);
    }
  }
  return 0;
}

char* anonymous_itanium_demangle_AbstractManglingParser_make_8377c0(__int64 a1,
                                                                    __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  char* v7;
  __int64 v8;
  __int16 v9;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v7 = (char*)v2 + v4;
  v2[1] = v4 + 32;
  v8 = strlen_plt(a2);
  *((_QWORD*)v7 + 2) = SdkData_e82ae8;
  v7 += 16;
  v7[8] = 8;
  v9 = *(_WORD*)(v7 + 9);
  *((_QWORD*)v7 + 2) = a2;
  *((_QWORD*)v7 + 3) = v8;
  *(_WORD*)(v7 + 9) = v9 & 0xF000 | 0x540;
  return v7;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_837870(__int64 a1,
                                                              _QWORD* a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int64 v8;
  __int16 v9;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 32;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e82ae8;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 8;
  v8 = a2[1];
  v9 = *(_WORD*)((_BYTE*)v2 + v4 + 25) & 0xF000;
  *(_QWORD*)(result + 16) = *a2;
  *(_QWORD*)(result + 24) = v8;
  *(_WORD*)(result + 9) = v9 | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_parseUnscopedName(
    __int64 a1, __int64 a2, _BYTE* a3, __int64 a4)
{
  _WORD* v4;
  _WORD* v5;
  char* v6;
  _BYTE* v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  char* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _BYTE* v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  char* v20;

  v4 = *(_WORD**)a1;
  v5 = *(_WORD**)(a1 + 8);
  if ((unsigned __int64)v5 - *(_QWORD*)a1 >= 2 && *v4 == 29779) {
    v13 = *(_QWORD**)(a1 + 4912);
    *(_QWORD*)a1 = v4 + 1;
    v14 = v13[1];
    if ((unsigned __int64)(v14 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
      v15 = a1;
      v16 = a3;
      v17 = a2;
      v18 = (_QWORD*)malloc_plt(4096);
      if (v18 == nullptr) {
        std_terminate_plt(0);
        __udf(0);
      }
      v19 = v18;
      v14 = 0;
      *v18 = v13;
      v18[1] = 0;
      v13 = v18;
      a1 = v15;
      *(_QWORD*)(v15 + 4912) = v19;
      a2 = v17;
      a3 = v16;
    }
    v13[1] = v14 + 32;
    v20 = (char*)v13 + v14;
    *((_QWORD*)v20 + 2) = SdkData_e82ae8;
    v6 = v20 + 16;
    v6[8] = 8;
    *(_WORD*)(v6 + 9) = *(_WORD*)(v6 + 9) & 0xF000 | 0x540;
    *((_QWORD*)v6 + 2) = "std";
    *((_QWORD*)v6 + 3) = 3;
    v4 = *(_WORD**)a1;
    if (*(_QWORD*)(a1 + 8) == *(_QWORD*)a1) {
      goto LABEL_13;
    }
  }
  else {
    v6 = nullptr;
    if (v5 == v4) {
    LABEL_13:
      v11 = 0;
      v12 = v6;
      return anonymous_itanium_demangle_AbstractManglingParser_parseUnqualifiedName(
          a1, a2, v12, v11);
    }
  }
  if (*(_BYTE*)v4 != 83) {
    goto LABEL_13;
  }
  v7 = a3;
  v8 = a2;
  v9 = a1;
  result = SdkRoutine_8387c0(a1, a2, a3, a4);
  v11 = result;
  if (result == 0) {
    return v11;
  }
  if (*(_BYTE*)(result + 8) == 27) {
    a2 = v8;
    a1 = v9;
    v12 = v6;
    return anonymous_itanium_demangle_AbstractManglingParser_parseUnqualifiedName(
        a1, a2, v12, v11);
  }
  if (v6 != nullptr) {
    return 0;
  }
  *v7 = 1;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_838200(
    __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)malloc_plt(4096);
    if (v8 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 32;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e84be8;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 45;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_parseDecltype(
    unsigned __int8** a1)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  _BYTE* v3;
  __int64 result;
  unsigned __int8* v6;
  unsigned __int8* v7;
  int v8;
  unsigned __int8* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  __int64 v13;
  __int64 v14;

  v1 = *a1;
  v2 = a1[1];
  if (*a1 != v2 && *v1 == 68) {
    v3 = v1 + 1;
    *a1 = v1 + 1;
    if (v1 + 1 != v2 && (*v3 == 116 || *v3 == 84)) {
      *a1 = v1 + 2;
      result = SdkRoutine_8393e0(a1);
      if (result == 0) {
        return result;
      }
      v6 = *a1;
      if (*a1 != a1[1]) {
        v8 = *v6;
        v7 = v6 + 1;
        if (v8 == 69) {
          v9 = a1[614];
          *a1 = v7;
          v10 = *((_QWORD*)v9 + 1);
          if ((unsigned __int64)(v10 - 4016) <= 0xFFFFFFFFFFFFF00FLL) {
            v11 = result;
            v12 = (unsigned __int8*)malloc_plt(4096);
            if (v12 == nullptr) {
              std_terminate_plt(0);
              __udf(0);
            }
            v10 = 0;
            *(_QWORD*)v12 = v9;
            *((_QWORD*)v12 + 1) = 0;
            v9 = v12;
            a1[614] = v12;
            result = v11;
          }
          v13 = v10 + 64;
          v14 = (__int64)&v9[v10];
          *((_QWORD*)v9 + 1) = v13;
          *(_QWORD*)(v14 + 16) = SdkData_e83568;
          v14 += 16;
          *(_BYTE*)(v14 + 8) = 60;
          LOWORD(v13) = *(_WORD*)(v14 + 9);
          *(_QWORD*)(v14 + 32) = result;
          *(_QWORD*)(v14 + 40) = 0;
          result = v14;
          *(_QWORD*)(v14 + 48) = 0;
          *(_WORD*)(v14 + 9) = v13 & 0xF000 | 0x540;
          *(_QWORD*)(v14 + 16) = "decltype";
          *(_QWORD*)(v14 + 24) = 8;
          return result;
        }
      }
    }
  }
  return 0;
}

bool anonymous_itanium_demangle_ForwardTemplateReference_hasRHSComponentSlow(
    __int64 a1)
{
  __int64 v2;
  __int16 v3;
  char v5;

  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    return false;
  }
  *(_BYTE*)(a1 + 32) = 1;
  v2 = *(_QWORD*)(a1 + 24);
  v3 = *(_WORD*)(v2 + 9);
  if ((char)v3 >= -64) {
    *(_BYTE*)(a1 + 32) = 0;
    return (v3 & 0xC0) == 0;
  }
  else {
    v5 = (**(__int64 (***)(_QWORD))v2)(*(_QWORD*)(a1 + 24));
    *(_BYTE*)(a1 + 32) = 0;
    return v5 & 1;
  }
}

bool anonymous_itanium_demangle_ForwardTemplateReference_hasArraySlow(
    __int64 a1)
{
  _BYTE* v2;
  int v3;
  char v5;

  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    return false;
  }
  *(_BYTE*)(a1 + 32) = 1;
  v2 = *(_BYTE**)(a1 + 24);
  v3 = v2[10] & 3;
  if (v3 == 2) {
    v5 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v2 + 8LL))(*(_QWORD*)(a1 + 24));
    *(_BYTE*)(a1 + 32) = 0;
    return v5 & 1;
  }
  else {
    *(_BYTE*)(a1 + 32) = 0;
    return v3 == 0;
  }
}

bool anonymous_itanium_demangle_ForwardTemplateReference_hasFunctionSlow(
    __int64 a1)
{
  __int64 v2;
  int v3;
  char v5;

  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    return false;
  }
  *(_BYTE*)(a1 + 32) = 1;
  v2 = *(_QWORD*)(a1 + 24);
  v3 = (*(unsigned __int16*)(v2 + 9) >> 10) & 3;
  if (v3 == 2) {
    v5 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v2 + 16LL))(*(_QWORD*)(a1 + 24));
    *(_BYTE*)(a1 + 32) = 0;
    return v5 & 1;
  }
  else {
    *(_BYTE*)(a1 + 32) = 0;
    return v3 == 0;
  }
}

__int64 anonymous_itanium_demangle_ForwardTemplateReference_getSyntaxNode(
    __int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)(result + 32) & 1) == 0) {
    v2 = *a2;
    v3 = result;
    *(_BYTE*)(result + 32) = 1;
    result = (*(__int64 (**)(__int64*, _QWORD))(v2 + 16))(
        a2, *(_QWORD*)(result + 24));
    *(_BYTE*)(v3 + 32) = 0;
  }
  return result;
}

__int64

anonymous_itanium_demangle_ForwardTemplateReference_printRight(__int64 result,
                                                               __int64* a2)
{
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)(result + 32) & 1) == 0) {
    v2 = *a2;
    v3 = result;
    *(_BYTE*)(result + 32) = 1;
    result = (*(__int64 (**)(__int64*, _QWORD))(v2 + 24))(
        a2, *(_QWORD*)(result + 24));
    *(_BYTE*)(v3 + 32) = 0;
  }
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83a7f0(
    __int64 a1, __int64 a2, __int64* a3, char a4)
{
  _QWORD* v4;
  __int64 v8;
  _QWORD* v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int16 v14;

  v4 = *(_QWORD**)(a1 + 4912);
  v8 = v4[1];
  if ((unsigned __int64)(v8 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v10 = (_QWORD*)malloc_plt(4096);
    if (v10 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v8 = 0;
    *v10 = v4;
    v10[1] = 0;
    v4 = v10;
    *(_QWORD*)(a1 + 4912) = v10;
  }
  v4[1] = v8 + 48;
  *(_QWORD*)((char*)v4 + v8 + 16) = SdkData_e83130;
  result = (__int64)v4 + v8 + 16;
  *(_BYTE*)(result + 8) = 56;
  v12 = *a3;
  v13 = a3[1];
  v14 = *(_WORD*)(result + 9) & 0xF000;
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = v12;
  *(_QWORD*)(result + 32) = v13;
  *(_WORD*)(result + 9) = v14 & 0xFFC0 | a4 & 0x3F | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83a8b0(
    __int64 a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD* v4;
  __int64 v8;
  _QWORD* v10;
  __int64 result;
  __int16 v12;

  v4 = *(_QWORD**)(a1 + 4912);
  v8 = v4[1];
  if ((unsigned __int64)(v8 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v10 = (_QWORD*)malloc_plt(4096);
    if (v10 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v8 = 0;
    *v10 = v4;
    v10[1] = 0;
    v4 = v10;
    *(_QWORD*)(a1 + 4912) = v10;
  }
  v4[1] = v8 + 32;
  *(_QWORD*)((char*)v4 + v8 + 16) = SdkData_e831a8;
  result = (__int64)v4 + v8 + 16;
  *(_BYTE*)(result + 8) = 55;
  v12 = *(_WORD*)((char*)v4 + v8 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_WORD*)(result + 9) = v12 & 0xF000 | a4 & 0x3F | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83a960(
    __int64 a1, __int64 a2, __int64* a3, __int64 a4, char a5)
{
  _QWORD* v5;
  __int64 v10;
  _QWORD* v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int16 v16;

  v5 = *(_QWORD**)(a1 + 4912);
  v10 = v5[1];
  if ((unsigned __int64)(v10 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v12 = (_QWORD*)malloc_plt(4096);
    if (v12 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v10 = 0;
    *v12 = v5;
    v12[1] = 0;
    v5 = v12;
    *(_QWORD*)(a1 + 4912) = v12;
  }
  v5[1] = v10 + 48;
  *(_QWORD*)((char*)v5 + v10 + 16) = SdkData_e83220;
  result = (__int64)v5 + v10 + 16;
  *(_BYTE*)(result + 8) = 58;
  v14 = *a3;
  v15 = a3[1];
  v16 = *(_WORD*)(result + 9) & 0xF000;
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = v14;
  *(_QWORD*)(result + 32) = v15;
  *(_QWORD*)(result + 40) = a4;
  *(_WORD*)(result + 9) = v16 & 0xFFC0 | a5 & 0x3F | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83aa20(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    char a7, char a8, char a9)
{
  _QWORD* v9;
  __int64 v17;
  _QWORD* v19;
  __int64 result;
  __int16 v21;

  v9 = *(_QWORD**)(a1 + 4912);
  v17 = v9[1];
  if ((unsigned __int64)(v17 - 4016) <= 0xFFFFFFFFFFFFF00FLL) {
    v19 = (_QWORD*)malloc_plt(4096);
    if (v19 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v17 = 0;
    *v19 = v9;
    v19[1] = 0;
    v9 = v19;
    *(_QWORD*)(a1 + 4912) = v19;
  }
  v9[1] = v17 + 64;
  *(_QWORD*)((char*)v9 + v17 + 16) = SdkData_e83298;
  result = (__int64)v9 + v17 + 16;
  *(_BYTE*)(result + 8) = 64;
  v21 = *(_WORD*)((char*)v9 + v17 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_QWORD*)(result + 32) = a4;
  *(_QWORD*)(result + 40) = a5;
  *(_QWORD*)(result + 48) = a6;
  *(_WORD*)(result + 9) = v21 & 0xF000 | a9 & 0x3F | 0x540;
  *(_BYTE*)(result + 56) = a7 & 1;
  *(_BYTE*)(result + 57) = a8 & 1;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83ab10(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  _QWORD* v6;
  __int64 v12;
  _QWORD* v14;
  __int64 result;
  __int16 v16;

  v6 = *(_QWORD**)(a1 + 4912);
  v12 = v6[1];
  if ((unsigned __int64)(v12 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v14 = (_QWORD*)malloc_plt(4096);
    if (v14 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v12 = 0;
    *v14 = v6;
    v14[1] = 0;
    v6 = v14;
    *(_QWORD*)(a1 + 4912) = v14;
  }
  v6[1] = v12 + 48;
  *(_QWORD*)((char*)v6 + v12 + 16) = SdkData_e83388;
  result = (__int64)v6 + v12 + 16;
  *(_BYTE*)(result + 8) = 63;
  v16 = *(_WORD*)((char*)v6 + v12 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_QWORD*)(result + 32) = a4;
  *(_WORD*)(result + 9) = v16 & 0xF000 | a6 & 0x3F | 0x540;
  *(_BYTE*)(result + 40) = a5 & 1;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83abe0(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD* v5;
  __int64 v10;
  _QWORD* v12;
  __int64 result;
  __int16 v14;

  v5 = *(_QWORD**)(a1 + 4912);
  v10 = v5[1];
  if ((unsigned __int64)(v10 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v12 = (_QWORD*)malloc_plt(4096);
    if (v12 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v10 = 0;
    *v12 = v5;
    v12[1] = 0;
    v5 = v12;
    *(_QWORD*)(a1 + 4912) = v12;
  }
  v5[1] = v10 + 48;
  *(_QWORD*)((char*)v5 + v10 + 16) = SdkData_e83400;
  result = (__int64)v5 + v10 + 16;
  *(_BYTE*)(result + 8) = 68;
  v14 = *(_WORD*)((char*)v5 + v10 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_QWORD*)(result + 32) = a4;
  *(_WORD*)(result + 9) = v14 & 0xF000 | a5 & 0x3F | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83aca0(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD* v5;
  __int64 v10;
  _QWORD* v12;
  __int64 result;
  __int16 v14;

  v5 = *(_QWORD**)(a1 + 4912);
  v10 = v5[1];
  if ((unsigned __int64)(v10 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v12 = (_QWORD*)malloc_plt(4096);
    if (v12 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v10 = 0;
    *v12 = v5;
    v12[1] = 0;
    v5 = v12;
    *(_QWORD*)(a1 + 4912) = v12;
  }
  v5[1] = v10 + 48;
  *(_QWORD*)((char*)v5 + v10 + 16) = SdkData_e83478;
  result = (__int64)v5 + v10 + 16;
  *(_BYTE*)(result + 8) = 57;
  v14 = *(_WORD*)((char*)v5 + v10 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_QWORD*)(result + 32) = a4;
  *(_WORD*)(result + 9) = v14 & 0xF000 | a5 & 0x3F | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83ad60(
    __int64 a1, __int64* a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD* v5;
  __int64 v10;
  _QWORD* v12;
  __int64 result;
  __int16 v14;
  __int64 v15;
  __int64 v16;

  v5 = *(_QWORD**)(a1 + 4912);
  v10 = v5[1];
  if ((unsigned __int64)(v10 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v12 = (_QWORD*)malloc_plt(4096);
    if (v12 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v10 = 0;
    *v12 = v5;
    v12[1] = 0;
    v5 = v12;
    *(_QWORD*)(a1 + 4912) = v12;
  }
  v5[1] = v10 + 48;
  *(_QWORD*)((char*)v5 + v10 + 16) = SdkData_e834f0;
  result = (__int64)v5 + v10 + 16;
  *(_BYTE*)(result + 8) = 61;
  v14 = *(_WORD*)((char*)v5 + v10 + 25);
  v15 = *a2;
  v16 = a2[1];
  *(_QWORD*)(result + 32) = a3;
  *(_QWORD*)(result + 40) = a4;
  *(_QWORD*)(result + 16) = v15;
  *(_QWORD*)(result + 24) = v16;
  *(_WORD*)(result + 9) = v14 & 0xF000 | a5 & 0x3F | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_parseFunctionParam(
    __int64* a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int8* v5;
  unsigned __int8* v6;
  unsigned __int8* v7;
  unsigned __int8* v8;
  _BYTE* v9;
  unsigned __int8* v10;
  __int64 v11;
  unsigned __int8* v12;
  __int64 v13;
  __int64 v14;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v26;
  __int64 v27;
  unsigned __int8* v28;
  _BYTE* v29;
  unsigned __int8* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;

  v2 = *a1;
  v1 = a1[1];
  v3 = v1 - *a1;
  if (v3 >= 3) {
    if (*(_WORD*)v2 == 28774 && *(_BYTE*)(v2 + 2) == 84) {
      v13 = a1[614];
      *a1 = v2 + 3;
      v14 = *(_QWORD*)(v13 + 8);
      if ((unsigned __int64)(v14 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
        v16 = (__int64*)malloc_plt(4096);
        if (v16 == nullptr) {
          goto LABEL_69;
        }
        v14 = 0;
        *v16 = v13;
        v16[1] = 0;
        v13 = (__int64)v16;
        a1[614] = (__int64)v16;
      }
      v17 = v14 + 32;
      v18 = v13 + v14;
      *(_QWORD*)(v13 + 8) = v17;
      *(_QWORD*)(v18 + 16) = SdkData_e82ae8;
      v19 = v18 + 16;
      *(_BYTE*)(v19 + 8) = 8;
      *(_WORD*)(v19 + 9) = *(_WORD*)(v19 + 9) & 0xF000 | 0x540;
      *(_QWORD*)(v19 + 16) = "this";
      *(_QWORD*)(v19 + 24) = 4;
      return v19;
    }
  }
  else if (v3 != 2) {
    return 0;
  }
  if (*(_WORD*)v2 == 28774) {
    v8 = (unsigned __int8*)(v2 + 2);
    *a1 = v2 + 2;
    if (v2 + 2 != v1 && *v8 == 114) {
      v8 = (unsigned __int8*)(v2 + 3);
      *a1 = v2 + 3;
    }
    if (v8 != (unsigned __int8*)v1 && *v8 == 86) {
      *a1 = (__int64)++v8;
    }
    if (v8 != (unsigned __int8*)v1 && *v8 == 75) {
      *a1 = (__int64)++v8;
    }
    if ((unsigned __int8*)v1 == v8 || (unsigned int)*v8 - 48 > 9) {
      v12 = nullptr;
      v11 = 0;
      if (v8 == (unsigned __int8*)v1) {
        return 0;
      }
    }
    else {
      v9 = v8;
      v10 = v8;
      while ((unsigned int)*v10 - 48 <= 9) {
        ++v10;
        ++v9;
        *a1 = (__int64)v10;
        if (v10 == (unsigned __int8*)v1) {
          v9 = (_BYTE*)v1;
          break;
        }
      }
      v11 = v9 - v8;
      v12 = v8;
      v8 = v10;
      if (v10 == (unsigned __int8*)v1) {
        return 0;
      }
    }
    v22 = *v8;
    v21 = (__int64)(v8 + 1);
    if (v22 != 95) {
      return 0;
    }
    v23 = a1[614];
    *a1 = v21;
    v24 = *(_QWORD*)(v23 + 8);
    if ((unsigned __int64)(v24 - 4048) > 0xFFFFFFFFFFFFF00FLL) {
    LABEL_43:
      v26 = v24 + 32;
      v27 = v23 + v24;
      *(_QWORD*)(v23 + 8) = v26;
      *(_QWORD*)(v27 + 16) = SdkData_e83d60;
      v27 += 16;
      *(_BYTE*)(v27 + 8) = 67;
      LOWORD(v26) = *(_WORD*)(v27 + 9);
      *(_QWORD*)(v27 + 16) = v12;
      *(_QWORD*)(v27 + 24) = v11;
      *(_WORD*)(v27 + 9) = v26 & 0xF000 | 0x540;
      return v27;
    }
    v16 = (__int64*)malloc_plt(4096);
    if (v16 != nullptr) {
      v24 = 0;
      *v16 = v23;
      v16[1] = 0;
      v23 = (__int64)v16;
      a1[614] = (__int64)v16;
      goto LABEL_43;
    }
  LABEL_69:
    std_terminate_plt_alt1(v16);
  }
  if (*(_WORD*)v2 != 19558) {
    return 0;
  }
  v5 = (unsigned __int8*)(v2 + 2);
  *a1 = v2 + 2;
  if (v1 == v2 + 2 || (unsigned int)*v5 - 48 > 9) {
    return 0;
  }
  v6 = (unsigned __int8*)(v2 + 2);
  while ((unsigned int)*v6 - 48 <= 9) {
    *a1 = (__int64)++v6;
    if (v6 == (unsigned __int8*)v1) {
      v7 = (unsigned __int8*)v1;
      goto LABEL_45;
    }
  }
  v7 = v6;
LABEL_45:
  v19 = 0;
  if (v7 == v5 || v6 == (unsigned __int8*)v1) {
    return v19;
  }
  if (*v6 == 112) {
    v28 = v6 + 1;
    *a1 = (__int64)(v6 + 1);
    if (v6 + 1 != (unsigned __int8*)v1 && *v28 == 114) {
      v28 = v6 + 2;
      *a1 = (__int64)(v6 + 2);
    }
    if (v28 != (unsigned __int8*)v1 && *v28 == 86) {
      *a1 = (__int64)++v28;
    }
    if (v28 != (unsigned __int8*)v1 && *v28 == 75) {
      *a1 = (__int64)++v28;
    }
    if ((unsigned __int8*)v1 == v28 || (unsigned int)*v28 - 48 > 9) {
      v32 = 0;
      v31 = 0;
    }
    else {
      v29 = v28;
      v30 = v28;
      while ((unsigned int)*v30 - 48 <= 9) {
        ++v30;
        ++v29;
        *a1 = (__int64)v30;
        if (v30 == (unsigned __int8*)v1) {
          v29 = (_BYTE*)v1;
          break;
        }
      }
      v31 = v29 - v28;
      v32 = (__int64)v28;
      v28 = v30;
    }
    if (v28 != (unsigned __int8*)v1) {
      v34 = *v28;
      v33 = (__int64)(v28 + 1);
      if (v34 == 95) {
        *a1 = v33;
        return anonymous_itanium_demangle_AbstractManglingParser_make_842610(
            (__int64)a1, v32, v31);
      }
    }
  }
  return 0;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_parseBracedExpr(__int64 a1)
{
  unsigned __int8* v1;
  int v2;
  __int64 result;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int16 v10;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int16 v16;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int16 v23;

  v1 = *(unsigned __int8**)a1;
  if (*(_QWORD*)(a1 + 8) - *(_QWORD*)a1 < 2u || *v1 != 100) {
    return SdkRoutine_8393e0(a1);
  }
  v2 = v1[1];
  if (v2 != 88) {
    if (v2 == 120) {
      *(_QWORD*)a1 = v1 + 2;
      result = SdkRoutine_8393e0(a1);
      if (result != 0) {
        v12 = result;
        result =
            anonymous_itanium_demangle_AbstractManglingParser_parseBracedExpr(
                a1);
        if (result != 0) {
          v13 = *(_QWORD**)(a1 + 4912);
          v14 = result;
          v15 = v13[1];
          if ((unsigned __int64)(v15 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
            v9 = (_QWORD*)malloc_plt(4096);
            if (v9 == nullptr) {
              goto LABEL_27;
            }
            v15 = 0;
            *v9 = v13;
            v9[1] = 0;
            v13 = v9;
            *(_QWORD*)(a1 + 4912) = v9;
          }
          v13[1] = v15 + 48;
          *(_QWORD*)((char*)v13 + v15 + 16) = SdkData_e83ec8;
          result = (__int64)v13 + v15 + 16;
          *(_BYTE*)(result + 8) = 81;
          v16 = *(_WORD*)((char*)v13 + v15 + 25);
          *(_QWORD*)(result + 16) = v12;
          *(_QWORD*)(result + 24) = v14;
          *(_WORD*)(result + 9) = v16 & 0xF000 | 0x540;
          *(_BYTE*)(result + 32) = 1;
          return result;
        }
      }
      return result;
    }
    if (v2 == 105) {
      *(_QWORD*)a1 = v1 + 2;
      result =
          anonymous_itanium_demangle_AbstractManglingParser_parseSourceName(
              (unsigned __int8**)a1);
      if (result != 0) {
        v5 = result;
        result =
            anonymous_itanium_demangle_AbstractManglingParser_parseBracedExpr(
                a1);
        if (result != 0) {
          v6 = *(_QWORD**)(a1 + 4912);
          v7 = result;
          v8 = v6[1];
          if ((unsigned __int64)(v8 - 4032) > 0xFFFFFFFFFFFFF00FLL) {
          LABEL_11:
            v6[1] = v8 + 48;
            *(_QWORD*)((char*)v6 + v8 + 16) = SdkData_e83ec8;
            result = (__int64)v6 + v8 + 16;
            *(_BYTE*)(result + 8) = 81;
            v10 = *(_WORD*)((char*)v6 + v8 + 25);
            *(_QWORD*)(result + 16) = v5;
            *(_QWORD*)(result + 24) = v7;
            *(_BYTE*)(result + 32) = 0;
            *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
            return result;
          }
          v9 = (_QWORD*)malloc_plt(4096);
          if (v9 != nullptr) {
            v8 = 0;
            *v9 = v6;
            v9[1] = 0;
            v6 = v9;
            *(_QWORD*)(a1 + 4912) = v9;
            goto LABEL_11;
          }
        LABEL_27:
          std_terminate_plt(v9);
          __udf(0);
        }
      }
      return result;
    }
    return SdkRoutine_8393e0(a1);
  }
  *(_QWORD*)a1 = v1 + 2;
  result = SdkRoutine_8393e0(a1);
  if (result != 0) {
    v18 = result;
    result = SdkRoutine_8393e0(a1);
    if (result != 0) {
      v19 = result;
      result =
          anonymous_itanium_demangle_AbstractManglingParser_parseBracedExpr(a1);
      if (result != 0) {
        v20 = *(_QWORD**)(a1 + 4912);
        v21 = result;
        v22 = v20[1];
        if ((unsigned __int64)(v22 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
          v9 = (_QWORD*)malloc_plt(4096);
          if (v9 == nullptr) {
            goto LABEL_27;
          }
          v22 = 0;
          *v9 = v20;
          v9[1] = 0;
          v20 = v9;
          *(_QWORD*)(a1 + 4912) = v9;
        }
        v20[1] = v22 + 48;
        *(_QWORD*)((char*)v20 + v22 + 16) = SdkData_e83f40;
        result = (__int64)v20 + v22 + 16;
        *(_BYTE*)(result + 8) = 82;
        v23 = *(_WORD*)((char*)v20 + v22 + 25);
        *(_QWORD*)(result + 16) = v18;
        *(_QWORD*)(result + 24) = v19;
        *(_QWORD*)(result + 32) = v21;
        *(_WORD*)(result + 9) = v23 & 0xF000 | 0x540;
      }
    }
  }
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_parsePointerToMemberConversionExpr(
    __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  _BYTE* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int16 v22;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4032) > 0xFFFFFFFFFFFFF00FLL) {
    goto LABEL_4;
  }
  v8 = (_QWORD*)malloc_plt(4096);
  if (v8 != nullptr) {
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  LABEL_4:
    v3[1] = v6 + 48;
    *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e83fb8;
    result = (__int64)v3 + v6 + 16;
    *(_BYTE*)(result + 8) = 70;
    v10 = *(_WORD*)((char*)v3 + v6 + 25);
    *(_QWORD*)(result + 16) = 0;
    *(_QWORD*)(result + 24) = a2;
    *(_QWORD*)(result + 32) = a3;
    *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
    return result;
  }
  v11 = std_terminate_plt(0);
  result = anonymous_itanium_demangle_AbstractManglingParser_parseType(v11);
  if (result != 0) {
    v12 = result;
    result = SdkRoutine_8393e0(v11);
    if (result != 0) {
      v14 = *(_BYTE**)v11;
      v13 = *(_BYTE**)(v11 + 8);
      if (*(_BYTE**)v11 == v13) {
        v15 = *(_BYTE**)v11;
      }
      else {
        v15 = *(_BYTE**)v11;
        if (*v14 == 110) {
          v15 = v14 + 1;
          *(_QWORD*)v11 = v14 + 1;
        }
        if (v13 != v15 && (unsigned int)(unsigned __int8)*v15 - 48 <= 9) {
          while ((unsigned int)(unsigned __int8)*v15 - 48 <= 9) {
            *(_QWORD*)v11 = ++v15;
            if (v15 == v13) {
              return 0;
            }
          }
          v16 = v15 - v14;
          if (v15 == v13) {
            return 0;
          }
        LABEL_18:
          if (*v15 == 69) {
            v17 = *(_QWORD**)(v11 + 4912);
            *(_QWORD*)v11 = v15 + 1;
            v18 = v17[1];
            if ((unsigned __int64)(v18 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
              v19 = result;
              v20 = (_QWORD*)malloc_plt(4096);
              if (v20 == nullptr) {
                std_terminate_plt(0);
                __udf(0);
              }
              v18 = 0;
              *v20 = v17;
              v20[1] = 0;
              v17 = v20;
              *(_QWORD*)(v11 + 4912) = v20;
              result = v19;
            }
            v17[1] = v18 + 48;
            *(_QWORD*)((char*)v17 + v18 + 16) = SdkData_e84030;
            v21 = (__int64)v17 + v18 + 16;
            *(_BYTE*)(v21 + 8) = 69;
            v22 = *(_WORD*)((char*)v17 + v18 + 25);
            *(_QWORD*)(v21 + 16) = v12;
            *(_QWORD*)(v21 + 24) = result;
            result = v21;
            *(_QWORD*)(v21 + 32) = v14;
            *(_QWORD*)(v21 + 40) = v16;
            *(_WORD*)(v21 + 9) = v22 & 0xF000 | 0x542;
            return result;
          }
          return 0;
        }
      }
      v14 = nullptr;
      v16 = 0;
      if (v15 == v13) {
        return 0;
      }
      goto LABEL_18;
    }
  }
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83c430(
    __int64 a1, __int64 a2, char a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4016) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)malloc_plt(4096);
    if (v8 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 64;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e83568;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 60;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_WORD*)(result + 9) = v10 & 0xF000 | a3 & 0x3F | 0x540;
  *(_QWORD*)(result + 16) = "noexcept ";
  *(_QWORD*)(result + 24) = 9;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_83cdb0(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 32;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e83e50;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 42;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_83ce50(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 32;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e84300;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 62;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_83cef0(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4016) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 64;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e83568;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 60;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 32) = a2;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = "sizeof... ";
  *(_QWORD*)(result + 24) = 10;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_anonymous_itanium_demangle_NodeArrayNode_anonymous_itanium_demangle_NodeArray(
    __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)malloc_plt(4096);
    if (v8 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 32;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e84378;
  result = (__int64)v3 + v6 + 16;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_BYTE*)(result + 8) = 0;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83d040(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD* v4;
  __int64 v8;
  _QWORD* v10;
  __int64 result;
  __int16 v12;

  v4 = *(_QWORD**)(a1 + 4912);
  v8 = v4[1];
  if ((unsigned __int64)(v8 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v10 = (_QWORD*)malloc_plt(4096);
    if (v10 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v8 = 0;
    *v10 = v4;
    v10[1] = 0;
    v4 = v10;
    *(_QWORD*)(a1 + 4912) = v10;
  }
  v4[1] = v8 + 48;
  *(_QWORD*)((char*)v4 + v8 + 16) = SdkData_e83fb8;
  result = (__int64)v4 + v8 + 16;
  *(_BYTE*)(result + 8) = 70;
  v12 = *(_WORD*)((char*)v4 + v8 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_QWORD*)(result + 32) = a4;
  *(_WORD*)(result + 9) = v12 & 0xF000 | 0x540;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_83d0f0(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 32;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e843f0;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 72;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_parseUnresolvedName(
    __int64 a1, char a2)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  unsigned __int64 v6;
  unsigned __int8* v8;
  int v9;
  __int64 result;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int8* v23;
  __int16 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int8* v38;
  unsigned __int8* v39;
  int v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  __int64 v56;
  __int64 v57;
  _QWORD* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _QWORD* v62;
  __int64 v63;

  v2 = *(unsigned __int8**)a1;
  v3 = *(unsigned __int8**)(a1 + 8);
  v6 = (unsigned __int64)&v3[-*(_QWORD*)a1];
  if (v6 >= 3) {
    if (*(_WORD*)v2 == 29299 && v2[2] == 78) {
      *(_QWORD*)a1 = v2 + 3;
      result = SdkRoutine_8445e0(a1);
      if (result == 0) {
        return result;
      }
      v18 = result;
      if (*(_QWORD*)(a1 + 8) != *(_QWORD*)a1 && **(_BYTE**)a1 == 73) {
        result = SdkRoutine_837c80((unsigned __int8**)a1, 0, v25, v26, v27, v28,
                                   v29, v30);
        if (result != 0) {
          v31 = *(_QWORD**)(a1 + 4912);
          v32 = v31[1];
          if ((unsigned __int64)(v32 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
            v33 = result;
            v14 = (_QWORD*)malloc_plt(4096);
            if (v14 == nullptr) {
              goto LABEL_80;
            }
            v32 = 0;
            *v14 = v31;
            v14[1] = 0;
            v31 = v14;
            *(_QWORD*)(a1 + 4912) = v14;
            result = v33;
          }
          v34 = v32 + 32;
          v35 = (__int64)v31 + v32;
          v31[1] = v34;
          *(_QWORD*)(v35 + 16) = SdkData_e84be8;
          v35 += 16;
          *(_BYTE*)(v35 + 8) = 45;
          LOWORD(v34) = *(_WORD*)(v35 + 9);
          *(_QWORD*)(v35 + 16) = v18;
          *(_QWORD*)(v35 + 24) = result;
          v18 = v35;
          *(_WORD*)(v35 + 9) = v34 & 0xF000 | 0x540;
          goto LABEL_43;
        }
        return result;
      }
    LABEL_43:
      while (1) {
        v38 = *(unsigned __int8**)a1;
        if (*(_QWORD*)a1 != *(_QWORD*)(a1 + 8)) {
          v40 = *v38;
          v39 = v38 + 1;
          if (v40 == 69) {
            break;
          }
        }
        result =
            anonymous_itanium_demangle_AbstractManglingParser_parseSimpleId_alt1(
                a1);
        if (result == 0) {
          return result;
        }
        v41 = *(_QWORD**)(a1 + 4912);
        v42 = result;
        v43 = v41[1];
        if ((unsigned __int64)(v43 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
          v14 = (_QWORD*)malloc_plt(4096);
          if (v14 == nullptr) {
            goto LABEL_80;
          }
          v43 = 0;
          *v14 = v41;
          v14[1] = 0;
          v41 = v14;
          *(_QWORD*)(a1 + 4912) = v14;
        }
        v36 = v43 + 32;
        v37 = (__int64)v41 + v43;
        v41[1] = v36;
        *(_QWORD*)(v37 + 16) = SdkData_e84468;
        v37 += 16;
        LOWORD(v36) = *(_WORD*)(v37 + 9);
        *(_BYTE*)(v37 + 8) = 23;
        *(_QWORD*)(v37 + 16) = v18;
        *(_QWORD*)(v37 + 24) = v42;
        v18 = v37;
        *(_WORD*)(v37 + 9) = v36 & 0xF000 | 0x540;
      }
      *(_QWORD*)a1 = v39;
      result =
          anonymous_itanium_demangle_AbstractManglingParser_parseBaseUnresolvedName_alt1(
              a1);
      if (result == 0) {
        return result;
      }
      v55 = *(_QWORD**)(a1 + 4912);
      v56 = result;
      v57 = v55[1];
      if ((unsigned __int64)(v57 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
        v14 = (_QWORD*)malloc_plt(4096);
        if (v14 == nullptr) {
          goto LABEL_80;
        }
        v57 = 0;
        *v14 = v55;
        v14[1] = 0;
        v55 = v14;
        *(_QWORD*)(a1 + 4912) = v14;
      }
      v55[1] = v57 + 32;
      *(_QWORD*)((char*)v55 + v57 + 16) = SdkData_e84468;
      result = (__int64)v55 + v57 + 16;
      goto LABEL_78;
    }
  }
  else if (v6 != 2) {
    goto LABEL_9;
  }
  v9 = *(unsigned __int16*)v2;
  v8 = v2 + 2;
  if (v9 == 29299) {
    *(_QWORD*)a1 = v8;
    if (v3 != v8 && (unsigned int)*v8 - 48 <= 9) {
      result =
          anonymous_itanium_demangle_AbstractManglingParser_parseSimpleId_alt1(
              a1);
      if (result == 0) {
        return result;
      }
      v17 = result;
      if ((a2 & 1) != 0) {
        v18 = 0;
        while (1) {
          v19 = *(_QWORD**)(a1 + 4912);
          v20 = v19[1];
          if (v18 != 0) {
            if ((unsigned __int64)(v20 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
              v14 = (_QWORD*)malloc_plt(4096);
              if (v14 == nullptr) {
                goto LABEL_80;
              }
              v20 = 0;
              *v14 = v19;
              v14[1] = 0;
              v19 = v14;
              *(_QWORD*)(a1 + 4912) = v14;
            }
            v21 = v20 + 32;
            v22 = (__int64)v19 + v20;
            v19[1] = v21;
            *(_QWORD*)(v22 + 16) = SdkData_e84468;
            v22 += 16;
            LOWORD(v21) = *(_WORD*)(v22 + 9);
            *(_BYTE*)(v22 + 8) = 23;
            *(_QWORD*)(v22 + 16) = v18;
            *(_QWORD*)(v22 + 24) = v17;
            v18 = v22;
            *(_WORD*)(v22 + 9) = v21 & 0xF000 | 0x540;
            v23 = *(unsigned __int8**)a1;
            if (*(_QWORD*)a1 == *(_QWORD*)(a1 + 8)) {
              goto LABEL_20;
            }
          }
          else {
            if ((unsigned __int64)(v20 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
              v14 = (_QWORD*)malloc_plt(4096);
              if (v14 == nullptr) {
                goto LABEL_80;
              }
              v20 = 0;
              *v14 = v19;
              v14[1] = 0;
              v19 = v14;
              *(_QWORD*)(a1 + 4912) = v14;
            }
            v19[1] = v20 + 32;
            *(_QWORD*)((char*)v19 + v20 + 16) = SdkData_e84648;
            v18 = (__int64)v19 + v20 + 16;
            v24 = *(_WORD*)((char*)v19 + v20 + 25);
            *(_BYTE*)(v18 + 8) = 46;
            *(_QWORD*)(v18 + 16) = v17;
            *(_WORD*)(v18 + 9) = v24 & 0xF000 | 0x540;
            v23 = *(unsigned __int8**)a1;
            if (*(_QWORD*)a1 == *(_QWORD*)(a1 + 8)) {
              goto LABEL_20;
            }
          }
          if (*v23 == 69) {
            goto LABEL_72;
          }
        LABEL_20:
          v17 =
              anonymous_itanium_demangle_AbstractManglingParser_parseSimpleId_alt1(
                  a1);
          result = 0;
          if (v17 == 0) {
            return result;
          }
        }
      }
      v18 = 0;
      while (1) {
        if (v18 != 0) {
          v58 = *(_QWORD**)(a1 + 4912);
          v59 = v58[1];
          if ((unsigned __int64)(v59 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
            v14 = (_QWORD*)malloc_plt(4096);
            if (v14 == nullptr) {
              goto LABEL_80;
            }
            v59 = 0;
            *v14 = v58;
            v14[1] = 0;
            v58 = v14;
            *(_QWORD*)(a1 + 4912) = v14;
          }
          v60 = v59 + 32;
          v61 = (__int64)v58 + v59;
          v58[1] = v60;
          *(_QWORD*)(v61 + 16) = SdkData_e84468;
          v61 += 16;
          LOWORD(v60) = *(_WORD*)(v61 + 9);
          *(_BYTE*)(v61 + 8) = 23;
          *(_QWORD*)(v61 + 16) = v18;
          *(_QWORD*)(v61 + 24) = v17;
          v18 = v61;
          *(_WORD*)(v61 + 9) = v60 & 0xF000 | 0x540;
          v23 = *(unsigned __int8**)a1;
          if (*(_QWORD*)a1 == *(_QWORD*)(a1 + 8)) {
            goto LABEL_63;
          }
        }
        else {
          v18 = v17;
          v23 = *(unsigned __int8**)a1;
          if (*(_QWORD*)a1 == *(_QWORD*)(a1 + 8)) {
            goto LABEL_63;
          }
        }
        if (*v23 == 69) {
        LABEL_72:
          *(_QWORD*)a1 = v23 + 1;
          goto LABEL_73;
        }
      LABEL_63:
        v17 =
            anonymous_itanium_demangle_AbstractManglingParser_parseSimpleId_alt1(
                a1);
        result = 0;
        if (v17 == 0) {
          return result;
        }
      }
    }
    result = SdkRoutine_8445e0(a1);
    if (result == 0) {
      return result;
    }
    v18 = result;
    if (*(_QWORD*)(a1 + 8) != *(_QWORD*)a1 && **(_BYTE**)a1 == 73) {
      result = SdkRoutine_837c80((unsigned __int8**)a1, 0, v44, v45, v46, v47,
                                 v48, v49);
      if (result != 0) {
        v50 = *(_QWORD**)(a1 + 4912);
        v51 = v50[1];
        if ((unsigned __int64)(v51 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
          v52 = result;
          v14 = (_QWORD*)malloc_plt(4096);
          if (v14 == nullptr) {
            goto LABEL_80;
          }
          v51 = 0;
          *v14 = v50;
          v14[1] = 0;
          v50 = v14;
          *(_QWORD*)(a1 + 4912) = v14;
          result = v52;
        }
        v53 = v51 + 32;
        v54 = (__int64)v50 + v51;
        v50[1] = v53;
        *(_QWORD*)(v54 + 16) = SdkData_e84be8;
        v54 += 16;
        *(_BYTE*)(v54 + 8) = 45;
        LOWORD(v53) = *(_WORD*)(v54 + 9);
        *(_QWORD*)(v54 + 16) = v18;
        *(_QWORD*)(v54 + 24) = result;
        v18 = v54;
        *(_WORD*)(v54 + 9) = v53 & 0xF000 | 0x540;
        goto LABEL_73;
      }
      return result;
    }
  LABEL_73:
    result =
        anonymous_itanium_demangle_AbstractManglingParser_parseBaseUnresolvedName_alt1(
            a1);
    if (result == 0) {
      return result;
    }
    v62 = *(_QWORD**)(a1 + 4912);
    v56 = result;
    v63 = v62[1];
    if ((unsigned __int64)(v63 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
      v14 = (_QWORD*)malloc_plt(4096);
      if (v14 == nullptr) {
        goto LABEL_80;
      }
      v63 = 0;
      *v14 = v62;
      v14[1] = 0;
      v62 = v14;
      *(_QWORD*)(a1 + 4912) = v14;
    }
    v62[1] = v63 + 32;
    *(_QWORD*)((char*)v62 + v63 + 16) = SdkData_e84468;
    result = (__int64)v62 + v63 + 16;
  LABEL_78:
    *(_QWORD*)(result + 16) = v18;
    *(_QWORD*)(result + 24) = v56;
    *(_BYTE*)(result + 8) = 23;
    *(_WORD*)(result + 9) = *(_WORD*)(result + 9) & 0xF000 | 0x540;
    return result;
  }
LABEL_9:
  result =
      anonymous_itanium_demangle_AbstractManglingParser_parseBaseUnresolvedName_alt1(
          a1);
  if ((a2 & 1) != 0 && result != 0) {
    v11 = *(_QWORD**)(a1 + 4912);
    v12 = v11[1];
    if ((unsigned __int64)(v12 - 4048) > 0xFFFFFFFFFFFFF00FLL) {
    LABEL_14:
      v15 = v12 + 32;
      v16 = (char*)v11 + v12;
      v11[1] = v15;
      *((_QWORD*)v16 + 2) = SdkData_e84648;
      v16 += 16;
      v16[8] = 46;
      LOWORD(v15) = *(_WORD*)(v16 + 9);
      *((_QWORD*)v16 + 2) = result;
      *(_WORD*)(v16 + 9) = v15 & 0xF000 | 0x540;
      return (__int64)v16;
    }
    v13 = result;
    v14 = (_QWORD*)malloc_plt(4096);
    if (v14 != nullptr) {
      v12 = 0;
      *v14 = v11;
      v14[1] = 0;
      v11 = v14;
      *(_QWORD*)(a1 + 4912) = v14;
      result = v13;
      goto LABEL_14;
    }
  LABEL_80:
    std_terminate_plt(v14);
    __udf(0);
  }
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83d790(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  _QWORD* v6;
  __int64 v12;
  _QWORD* v14;
  __int64 result;
  __int16 v16;
  __int64 v17;

  v6 = *(_QWORD**)(a1 + 4912);
  v12 = v6[1];
  if ((unsigned __int64)(v12 - 4032) > 0xFFFFFFFFFFFFF00FLL) {
    goto LABEL_4;
  }
  v14 = (_QWORD*)malloc_plt(4096);
  if (v14 != nullptr) {
    v12 = 0;
    *v14 = v6;
    v14[1] = 0;
    v6 = v14;
    *(_QWORD*)(a1 + 4912) = v14;
  LABEL_4:
    v6[1] = v12 + 48;
    *(_QWORD*)((char*)v6 + v12 + 16) = SdkData_e83040;
    result = (__int64)v6 + v12 + 16;
    *(_BYTE*)(result + 8) = 54;
    v16 = *(_WORD*)((char*)v6 + v12 + 25);
    *(_QWORD*)(result + 16) = a2;
    *(_QWORD*)(result + 24) = a3;
    *(_QWORD*)(result + 32) = a4;
    *(_QWORD*)(result + 40) = a5;
    *(_WORD*)(result + 9) = v16 & 0xF000 | a6 & 0x3F | 0x540;
    return result;
  }
  v17 = std_terminate_plt(0);
  return SdkRoutine_83d850(v17);
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83dca0(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD* v5;
  __int64 v10;
  _QWORD* v12;
  __int64 result;
  __int16 v14;

  v5 = *(_QWORD**)(a1 + 4912);
  v10 = v5[1];
  if ((unsigned __int64)(v10 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v12 = (_QWORD*)malloc_plt(4096);
    if (v12 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v10 = 0;
    *v12 = v5;
    v12[1] = 0;
    v5 = v12;
    *(_QWORD*)(a1 + 4912) = v12;
  }
  v5[1] = v10 + 48;
  *(_QWORD*)((char*)v5 + v10 + 16) = SdkData_e830b8;
  result = (__int64)v5 + v10 + 16;
  *(_BYTE*)(result + 8) = 66;
  v14 = *(_WORD*)((char*)v5 + v10 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_QWORD*)(result + 32) = a4;
  *(_WORD*)(result + 9) = v14 & 0xF000 | a5 & 0x3F | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_parseIntegerLiteral(
    __int64 a1, __int64 a2, __int64 a3)
{
  _BYTE* v3;
  _BYTE* v4;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int16 v14;

  v4 = *(_BYTE**)a1;
  v3 = *(_BYTE**)(a1 + 8);
  v5 = *(_BYTE**)a1;
  if (*(_BYTE**)a1 != v3) {
    v5 = *(_BYTE**)a1;
    if (*v4 == 110) {
      v5 = v4 + 1;
      *(_QWORD*)a1 = v4 + 1;
    }
  }
  if (v3 == v5 || (unsigned int)(unsigned __int8)*v5 - 48 > 9) {
    return 0;
  }
  while ((unsigned int)(unsigned __int8)*v5 - 48 <= 9) {
    *(_QWORD*)a1 = ++v5;
    if (v5 == v3) {
      v6 = v3 - v4;
      v7 = 0;
      if (v3 == v4) {
        return v7;
      }
      goto LABEL_11;
    }
  }
  v6 = v5 - v4;
  v7 = 0;
  if (v5 == v4) {
    return v7;
  }
LABEL_11:
  if (v5 != v3) {
    if (*v5 == 69) {
      v8 = *(_QWORD**)(a1 + 4912);
      *(_QWORD*)a1 = v5 + 1;
      v9 = v8[1];
      if ((unsigned __int64)(v9 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
        v11 = a2;
        v12 = a3;
        v13 = (_QWORD*)malloc_plt(4096);
        if (v13 == nullptr) {
          std_terminate_plt(0);
          __udf(0);
        }
        v9 = 0;
        *v13 = v8;
        v13[1] = 0;
        v8 = v13;
        *(_QWORD*)(a1 + 4912) = v13;
        a3 = v12;
        a2 = v11;
      }
      v8[1] = v9 + 48;
      *(_QWORD*)((char*)v8 + v9 + 16) = SdkData_e835e0;
      v7 = (__int64)v8 + v9 + 16;
      *(_BYTE*)(v7 + 8) = 77;
      v14 = *(_WORD*)((char*)v8 + v9 + 25);
      *(_QWORD*)(v7 + 16) = a2;
      *(_QWORD*)(v7 + 24) = a3;
      *(_QWORD*)(v7 + 32) = v4;
      *(_QWORD*)(v7 + 40) = v6;
      *(_WORD*)(v7 + 9) = v14 & 0xF000 | 0x540;
      return v7;
    }
    return 0;
  }
  return v7;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_anonymous_itanium_demangle_BoolExpr_int(
    __int64 a1, int a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  __int64 result;
  __int16 v9;
  __int64 v10;
  __int64 v11;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4064) > 0xFFFFFFFFFFFFF00FLL) {
    goto LABEL_4;
  }
  v6 = (_QWORD*)malloc_plt(4096);
  if (v6 != nullptr) {
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  LABEL_4:
    v7 = v4 + 16;
    v2[1] = v7;
    result = (__int64)v2 + v7;
    *(_BYTE*)(result + 8) = 73;
    v9 = *(_WORD*)((char*)v2 + v7 + 9);
    *(_BYTE*)(result + 11) = a2 != 0;
    *(_WORD*)(result + 9) = v9 & 0xF000 | 0x540;
    *(_QWORD*)result = SdkData_e83658;
    return result;
  }
  v10 = std_terminate_plt(0);
  return anonymous_itanium_demangle_AbstractManglingParser_make_83f2c0_alt1(
      v10, v11);
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_83f2c0(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 32;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e83838;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 74;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_83faf0(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 32;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e83c70;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 75;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_83fb90(
    __int64 a1, __int64 a2, __int64* a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int16 v12;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)malloc_plt(4096);
    if (v8 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 48;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e83ce8;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 76;
  v10 = *a3;
  v11 = a3[1];
  v12 = *(_WORD*)(result + 9);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = v10;
  *(_QWORD*)(result + 32) = v11;
  *(_WORD*)(result + 9) = v12 & 0xF000 | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_BoolExpr_printLeft(__int64 a1, _QWORD* a2)
{
  int v2;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  const char* v13;
  __int64 result;

  v2 = *(unsigned __int8*)(a1 + 11);
  if (*(_BYTE*)(a1 + 11) != 0) {
    v4 = 4;
  }
  else {
    v4 = 5;
  }
  v5 = a2[2];
  v6 = a2[3];
  v7 = v4 + v5;
  if (v4 + v5 <= v6) {
    v11 = a2[1];
  }
  else {
    v8 = a2[1];
    v9 = 2 * v6;
    if (v9 <= v7 + 992) {
      v10 = v7 + 992;
    }
    else {
      v10 = v9;
    }
    a2[3] = v10;
    v11 = realloc_plt(v8, v10);
    a2[1] = v11;
    if (v11 == 0) {
      abort_plt(0);
    }
    v5 = a2[2];
  }
  v12 = v11 + v5;
  if (v2 != 0) {
    v13 = "true";
  }
  else {
    v13 = "false";
  }
  result = memcpy_plt(v12, v13, v4);
  a2[2] += v4;
  return result;
}

__int64

anonymous_itanium_demangle_FloatLiteralImpl_printLeft_840030(__int64 result,
                                                             _QWORD* a2)
{
  unsigned __int8* v2;
  int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  char v13;
  int v14;
  unsigned int v15;
  char v16;
  int v17;
  int v18;
  unsigned int v19;
  char v20;
  int v21;
  unsigned int v22;
  char v23;
  unsigned int v24;
  int v25;
  int v26;
  unsigned int v27;
  char v28;
  unsigned int v29;
  char v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  _QWORD v39[3];

  if (*(_QWORD*)(result + 24) >= 8u) {
    v2 = *(unsigned __int8**)(result + 16);
    memset(v39, 0, sizeof(v39));
    v4 = v2[1];
    v5 = v4 - 48;
    v6 = v4 - 87;
    if (v5 < 0xA) {
      v6 = v5;
    }
    v7 = *v2;
    v8 = v7 - 48;
    v9 = 16 * v7;
    if (v8 >= 0xA) {
      v9 -= 112;
    }
    v10 = v6 + v9;
    v11 = v2[7];
    v12 = v11 - 48;
    v13 = v11 - 87;
    if (v12 < 0xA) {
      v13 = v12;
    }
    v14 = v2[6];
    v15 = v14 - 48;
    v16 = 16 * v14;
    if (v15 >= 0xA) {
      v16 -= 112;
    }
    v17 = (unsigned __int8)(v13 + v16) | (v10 << 24);
    v18 = v2[5];
    v19 = v18 - 48;
    v20 = v18 - 87;
    if (v19 < 0xA) {
      v20 = v19;
    }
    v21 = v2[4];
    v22 = v21 - 48;
    v23 = 16 * v21;
    if (v22 >= 0xA) {
      v23 -= 112;
    }
    v24 = v17 & 0xFFFF00FF | ((unsigned __int8)(v20 + v23) << 8);
    v25 = v2[3];
    v26 = v2[2];
    v27 = v25 - 48;
    v28 = v25 - 87;
    if (v27 < 0xA) {
      v28 = v27;
    }
    v29 = v26 - 48;
    v30 = 16 * v26;
    if (v29 >= 0xA) {
      v30 -= 112;
    }
    result = snprintf_plt(
        v39, 24, "%af",
        COERCE_FLOAT(v24 & 0xFF00FFFF | ((unsigned __int8)(v28 + v30) << 16)));
    if ((_DWORD)result != 0) {
      v31 = a2[2];
      v32 = a2[3];
      v33 = (int)result;
      v34 = v31 + (int)result;
      if (v34 <= v32) {
        v38 = a2[1];
      }
      else {
        v35 = a2[1];
        v36 = 2 * v32;
        if (v36 <= v34 + 992) {
          v37 = v34 + 992;
        }
        else {
          v37 = v36;
        }
        a2[3] = v37;
        v38 = realloc_plt(v35, v37);
        a2[1] = v38;
        if (v38 == 0) {
          abort_plt(0);
        }
        v31 = a2[2];
      }
      result = memcpy_plt(v38 + v31, v39, v33);
      a2[2] += v33;
    }
  }
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_841040(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8, __int64 a9)
{
  _QWORD* v9;
  __int64 v17;
  _QWORD* v19;
  __int64 result;
  __int16 v21;

  v9 = *(_QWORD**)(a1 + 4912);
  v17 = v9[1];
  if ((unsigned __int64)(v17 - 4000) <= 0xFFFFFFFFFFFFF00FLL) {
    v19 = (_QWORD*)malloc_plt(4096);
    if (v19 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v17 = 0;
    *v19 = v9;
    v19[1] = 0;
    v9 = v19;
    *(_QWORD*)(a1 + 4912) = v19;
  }
  v9[1] = v17 + 80;
  *(_QWORD*)((char*)v9 + v17 + 16) = SdkData_e83bf8;
  result = (__int64)v9 + v17 + 16;
  *(_BYTE*)(result + 8) = 52;
  v21 = *(_WORD*)((char*)v9 + v17 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_QWORD*)(result + 32) = a4;
  *(_QWORD*)(result + 40) = a5;
  *(_QWORD*)(result + 48) = a6;
  *(_QWORD*)(result + 56) = a7;
  *(_WORD*)(result + 9) = v21 & 0xF000 | 0x540;
  *(_QWORD*)(result + 64) = a8;
  *(_QWORD*)(result + 72) = a9;
  return result;
}

_QWORD*

anonymous_itanium_demangle_AbstractManglingParser_ScopedTemplateParamList_Destroy_ScopedTemplateParamList(
    _QWORD* result)
{
  unsigned __int64 v1;
  __int64 v2;

  v1 = result[1];
  v2 = *(_QWORD*)(*result + 664LL);
  if (v1 > (*(_QWORD*)(*result + 672LL) - v2) >> 3) {
    SdkRoutine_84c1f0("libc++abi: ");
  }
  *(_QWORD*)(*result + 672LL) = v2 + 8 * v1;
  if ((_QWORD*)result[2] != result + 5) {
    return (_QWORD*)free_plt(result[2]);
  }
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_841430(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 32;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e83b80;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 39;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x500;
  return result;
}

__int64 anonymous_itanium_demangle_TypeTemplateParamDecl_printRight(__int64 a1,
                                                                    __int64 a2)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 16);
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v2);
  if ((*(_WORD*)(v2 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v2);
  }
  return result;
}

__int64 anonymous_itanium_demangle_ConstrainedTypeTemplateParamDecl_printRight(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 24);
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v2);
  if ((*(_WORD*)(v2 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v2);
  }
  return result;
}

__int64

anonymous_itanium_demangle_NonTypeTemplateParamDecl_printRight(__int64 a1,
                                                               __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 16);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v2);
  if ((*(_WORD*)(v2 + 9) & 0xC0) != 0x40) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v2);
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(
      a2, *(_QWORD*)(a1 + 24));
}

__int64 anonymous_itanium_demangle_TemplateParamPackDecl_printRight(__int64 a1,
                                                                    __int64 a2)
{
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(
      a2, *(_QWORD*)(a1 + 16));
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_842610(
    __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)malloc_plt(4096);
    if (v8 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 32;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e83d60;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 67;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_FoldExpr_printLeft_8427a0(__int64 a1,
                                                             __int64 a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  char v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;

  ++*(_DWORD*)(a2 + 40);
  v4 = *(_QWORD*)(a2 + 16);
  v5 = *(_QWORD*)(a2 + 24);
  v6 = v4 + 1;
  if (v4 + 1 <= v5) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v7 = *(_QWORD*)(a2 + 8);
    v8 = v4 + 993;
    if (2 * v5 <= v8) {
      v9 = v8;
    }
    else {
      v9 = 2 * v5;
    }
    *(_QWORD*)(a2 + 24) = v9;
    result = realloc_plt(v7, v9);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_81;
    }
    v4 = *(_QWORD*)(a2 + 16);
    v6 = v4 + 1;
  }
  *(_QWORD*)(a2 + 16) = v6;
  *(_BYTE*)(result + v4) = 40;
  v11 = *(_QWORD*)(a1 + 24);
  if (*(_BYTE*)(a1 + 48) != 1 || v11 != 0) {
    if (*(_BYTE*)(a1 + 48) != 0) {
      SdkRoutine_83db20(v11, a2, 3u, 1);
      v13 = *(_QWORD*)(a2 + 16);
      v14 = *(_QWORD*)(a2 + 24);
      if (v13 + 1 <= v14) {
      LABEL_14:
        result = *(_QWORD*)(a2 + 8);
        goto LABEL_27;
      }
    }
    else {
      SdkRoutine_842ba0(a2, a1);
      v13 = *(_QWORD*)(a2 + 16);
      v14 = *(_QWORD*)(a2 + 24);
      if (v13 + 1 <= v14) {
        goto LABEL_14;
      }
    }
    v21 = *(_QWORD*)(a2 + 8);
    v22 = v13 + 993;
    v23 = 2 * v14;
    if (v23 <= v22) {
      v24 = v22;
    }
    else {
      v24 = v23;
    }
    *(_QWORD*)(a2 + 24) = v24;
    result = realloc_plt(v21, v24);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_81;
    }
    v13 = *(_QWORD*)(a2 + 16);
  LABEL_27:
    *(_BYTE*)(result + v13) = 32;
    v25 = *(_QWORD*)(a2 + 16) + 1LL;
    *(_QWORD*)(a2 + 16) = v25;
    v26 = *(_QWORD*)(a1 + 40);
    if (v26 != 0) {
      v27 = *(_QWORD*)(a1 + 32);
      v28 = *(_QWORD*)(a2 + 24);
      v29 = v25 + v26;
      if (v25 + v26 <= v28) {
        result = *(_QWORD*)(a2 + 8);
      }
      else {
        v30 = *(_QWORD*)(a2 + 8);
        if (2 * v28 <= v29 + 992) {
          v31 = v29 + 992;
        }
        else {
          v31 = 2 * v28;
        }
        *(_QWORD*)(a2 + 24) = v31;
        result = realloc_plt(v30, v31);
        *(_QWORD*)(a2 + 8) = result;
        if (result == 0) {
          goto LABEL_81;
        }
        v25 = *(_QWORD*)(a2 + 16);
      }
      memcpy_plt(result + v25, v27, v26);
      v25 = *(_QWORD*)(a2 + 16) + v26;
      *(_QWORD*)(a2 + 16) = v25;
    }
    v32 = *(_QWORD*)(a2 + 24);
    if (v25 + 1 <= v32) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v33 = *(_QWORD*)(a2 + 8);
      v34 = v25 + 993;
      v35 = 2 * v32;
      if (v35 <= v34) {
        v36 = v34;
      }
      else {
        v36 = v35;
      }
      *(_QWORD*)(a2 + 24) = v36;
      result = realloc_plt(v33, v36);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_81;
      }
      v25 = *(_QWORD*)(a2 + 16);
    }
    *(_BYTE*)(result + v25) = 32;
    v16 = *(_QWORD*)(a2 + 24);
    v15 = *(_QWORD*)(a2 + 16) + 1LL;
    *(_QWORD*)(a2 + 16) = v15;
    if (v15 + 3 <= v16) {
      goto LABEL_44;
    }
    goto LABEL_16;
  }
  v15 = *(_QWORD*)(a2 + 16);
  v16 = *(_QWORD*)(a2 + 24);
  if (v15 + 3 <= v16) {
  LABEL_44:
    result = *(_QWORD*)(a2 + 8);
    goto LABEL_45;
  }
LABEL_16:
  v17 = *(_QWORD*)(a2 + 8);
  v18 = v15 + 995;
  v19 = 2 * v16;
  if (v19 <= v18) {
    v20 = v18;
  }
  else {
    v20 = v19;
  }
  *(_QWORD*)(a2 + 24) = v20;
  result = realloc_plt(v17, v20);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
    goto LABEL_81;
  }
  v15 = *(_QWORD*)(a2 + 16);
LABEL_45:
  v37 = result + v15;
  *(_BYTE*)(v37 + 2) = 46;
  *(_WORD*)v37 = 11822;
  v38 = *(_QWORD*)(a2 + 16);
  v39 = *(_BYTE*)(a1 + 48);
  v40 = v38 + 3;
  *(_QWORD*)(a2 + 16) = v38 + 3;
  if ((v39 & 1) != 0 || *(_QWORD*)(a1 + 24) != 0) {
    v41 = *(_QWORD*)(a2 + 24);
    if (v38 + 4 <= v41) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v42 = *(_QWORD*)(a2 + 8);
      if (2 * v41 <= v38 + 996) {
        v43 = v38 + 996;
      }
      else {
        v43 = 2 * v41;
      }
      *(_QWORD*)(a2 + 24) = v43;
      result = realloc_plt(v42, v43);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_81;
      }
      v40 = *(_QWORD*)(a2 + 16);
    }
    *(_BYTE*)(result + v40) = 32;
    v44 = *(_QWORD*)(a2 + 16) + 1LL;
    *(_QWORD*)(a2 + 16) = v44;
    v45 = *(_QWORD*)(a1 + 40);
    if (v45 != 0) {
      v46 = *(_QWORD*)(a1 + 32);
      v47 = *(_QWORD*)(a2 + 24);
      v48 = v44 + v45;
      if (v44 + v45 <= v47) {
        result = *(_QWORD*)(a2 + 8);
      }
      else {
        v49 = *(_QWORD*)(a2 + 8);
        if (2 * v47 <= v48 + 992) {
          v50 = v48 + 992;
        }
        else {
          v50 = 2 * v47;
        }
        *(_QWORD*)(a2 + 24) = v50;
        result = realloc_plt(v49, v50);
        *(_QWORD*)(a2 + 8) = result;
        if (result == 0) {
          goto LABEL_81;
        }
        v44 = *(_QWORD*)(a2 + 16);
      }
      memcpy_plt(result + v44, v46, v45);
      v44 = *(_QWORD*)(a2 + 16) + v45;
      *(_QWORD*)(a2 + 16) = v44;
    }
    v51 = *(_QWORD*)(a2 + 24);
    if (v44 + 1 <= v51) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v52 = *(_QWORD*)(a2 + 8);
      v53 = v44 + 993;
      v54 = 2 * v51;
      if (v54 <= v53) {
        v55 = v53;
      }
      else {
        v55 = v54;
      }
      *(_QWORD*)(a2 + 24) = v55;
      result = realloc_plt(v52, v55);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_81;
      }
      v44 = *(_QWORD*)(a2 + 16);
    }
    *(_BYTE*)(result + v44) = 32;
    ++*(_QWORD*)(a2 + 16);
    if (*(_BYTE*)(a1 + 48) == 1) {
      SdkRoutine_842ba0(a2, a1);
    }
    else {
      SdkRoutine_83db20(*(_QWORD*)(a1 + 24), a2, 3u, 1);
    }
  }
  --*(_DWORD*)(a2 + 40);
  v56 = *(_QWORD*)(a2 + 16);
  v57 = *(_QWORD*)(a2 + 24);
  v58 = v56 + 1;
  if (v56 + 1 <= v57) {
    result = *(_QWORD*)(a2 + 8);
    goto LABEL_80;
  }
  v59 = *(_QWORD*)(a2 + 8);
  v60 = v56 + 993;
  if (2 * v57 <= v60) {
    v61 = v60;
  }
  else {
    v61 = 2 * v57;
  }
  *(_QWORD*)(a2 + 24) = v61;
  result = realloc_plt(v59, v61);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
  LABEL_81:
    abort_plt(result);
  }
  v56 = *(_QWORD*)(a2 + 16);
  v58 = v56 + 1;
LABEL_80:
  *(_QWORD*)(a2 + 16) = v58;
  *(_BYTE*)(result + v56) = 41;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_parseSimpleId(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;

  result = anonymous_itanium_demangle_AbstractManglingParser_parseSourceName(
      (unsigned __int8**)a1);
  if (result != 0 && *(_QWORD*)(a1 + 8) != *(_QWORD*)a1 &&
      **(_BYTE**)a1 == 73) {
    v9 = result;
    result =
        SdkRoutine_837c80((unsigned __int8**)a1, 0, v3, v4, v5, v6, v7, v8);
    if (result != 0) {
      v10 = *(_QWORD**)(a1 + 4912);
      v11 = v10[1];
      if ((unsigned __int64)(v11 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
        v12 = result;
        v13 = (_QWORD*)malloc_plt(4096);
        if (v13 == nullptr) {
          std_terminate_plt(0);
          __udf(0);
        }
        v11 = 0;
        *v13 = v10;
        v13[1] = 0;
        v10 = v13;
        *(_QWORD*)(a1 + 4912) = v13;
        result = v12;
      }
      v14 = v11 + 32;
      v15 = (__int64)v10 + v11;
      v10[1] = v14;
      *(_QWORD*)(v15 + 16) = SdkData_e84be8;
      v15 += 16;
      *(_BYTE*)(v15 + 8) = 45;
      LOWORD(v14) = *(_WORD*)(v15 + 9);
      *(_QWORD*)(v15 + 16) = v9;
      *(_QWORD*)(v15 + 24) = result;
      result = v15;
      *(_WORD*)(v15 + 9) = v14 & 0xF000 | 0x540;
    }
  }
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_parseBaseUnresolvedName(
    __int64 a1)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  __int64 result;
  unsigned __int8* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int8* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int16 v26;

  v1 = *(unsigned __int8**)a1;
  v2 = *(unsigned __int8**)(a1 + 8);
  if (v2 != *(unsigned __int8**)a1) {
    if ((unsigned int)*v1 - 48 <= 9) {
      return anonymous_itanium_demangle_AbstractManglingParser_parseSimpleId(
          a1);
    }
    if ((unsigned __int64)&v2[-*(_QWORD*)a1] >= 2) {
      if (*(_WORD*)v1 == 28260) {
        v20 = v1 + 2;
        *(_QWORD*)a1 = v20;
        if (v2 == v20 || (unsigned int)*v20 - 48 > 9) {
          v21 = SdkRoutine_8445e0(a1);
        }
        else {
          v21 = anonymous_itanium_demangle_AbstractManglingParser_parseSimpleId(
              a1);
        }
        v22 = v21;
        if (v21 == 0) {
          return 0;
        }
        v23 = *(_QWORD**)(a1 + 4912);
        v24 = v23[1];
        if ((unsigned __int64)(v24 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
          v25 = v21;
          v17 = (_QWORD*)malloc_plt(4096);
          if (v17 == nullptr) {
            goto LABEL_27;
          }
          v24 = 0;
          *v17 = v23;
          v17[1] = 0;
          v23 = v17;
          *(_QWORD*)(a1 + 4912) = v17;
          v22 = v25;
        }
        v23[1] = v24 + 32;
        *(_QWORD*)((char*)v23 + v24 + 16) = SdkData_e844e0;
        result = (__int64)v23 + v24 + 16;
        *(_BYTE*)(result + 8) = 50;
        v26 = *(_WORD*)((char*)v23 + v24 + 25);
        *(_QWORD*)(result + 16) = v22;
        *(_WORD*)(result + 9) = v26 & 0xF000 | 0x540;
        return result;
      }
      v6 = *(unsigned __int16*)v1;
      v5 = v1 + 2;
      if (v6 == 28271) {
        *(_QWORD*)a1 = v5;
      }
    }
  }
  result =
      anonymous_itanium_demangle_AbstractManglingParser_parseOperatorName_alt1(
          a1, 0);
  if (result != 0 && *(_QWORD*)(a1 + 8) != *(_QWORD*)a1 &&
      **(_BYTE**)a1 == 73) {
    v13 = result;
    result =
        SdkRoutine_837c80((unsigned __int8**)a1, 0, v7, v8, v9, v10, v11, v12);
    if (result != 0) {
      v14 = *(_QWORD**)(a1 + 4912);
      v15 = v14[1];
      if ((unsigned __int64)(v15 - 4048) > 0xFFFFFFFFFFFFF00FLL) {
      LABEL_15:
        v18 = v15 + 32;
        v19 = (__int64)v14 + v15;
        v14[1] = v18;
        *(_QWORD*)(v19 + 16) = SdkData_e84be8;
        v19 += 16;
        *(_BYTE*)(v19 + 8) = 45;
        LOWORD(v18) = *(_WORD*)(v19 + 9);
        *(_QWORD*)(v19 + 16) = v13;
        *(_QWORD*)(v19 + 24) = result;
        result = v19;
        *(_WORD*)(v19 + 9) = v18 & 0xF000 | 0x540;
        return result;
      }
      v16 = result;
      v17 = (_QWORD*)malloc_plt(4096);
      if (v17 != nullptr) {
        v15 = 0;
        *v17 = v14;
        v17[1] = 0;
        v14 = v17;
        *(_QWORD*)(a1 + 4912) = v17;
        result = v16;
        goto LABEL_15;
      }
    LABEL_27:
      std_terminate_plt(v17);
      __udf(0);
    }
  }
  return result;
}

__int64 anonymous_itanium_demangle_QualifiedName_getBaseName(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 24) + 40LL))(
      *(_QWORD*)(a1 + 24));
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_parseOperatorName(__int64 a1,
                                                                    _BYTE* a2)
{
  __int64 v2;
  unsigned __int8* v3;
  unsigned __int8* v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned int v10;
  unsigned __int8* v11;
  unsigned int v12;
  _QWORD* v13;
  __int64 v14;
  char v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 result;
  __int16 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int16 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  v3 = *(unsigned __int8**)a1;
  v4 = *(unsigned __int8**)(a1 + 8);
  if ((unsigned __int64)&v4[-*(_QWORD*)a1] < 2) {
    goto LABEL_23;
  }
  v5 = *v3;
  v6 = 62;
  v7 = 0;
  do {
    v8 = (unsigned __int64)(v7 + v6) >> 1;
    v9 = (unsigned __int8*)&SdkData_e82c40 + 16 * v8;
    v10 = *v9;
    if (v10 < v5 || v10 == v5 && v9[1] < (unsigned int)v3[1]) {
      v7 = v8 + 1;
      v8 = v6;
    }
    v6 = v8;
  } while (v8 != v7);
  v11 = (unsigned __int8*)&SdkData_e82c40 + 16 * v7;
  if (*v11 == v5 && v11[1] == v3[1]) {
    *(_QWORD*)a1 = v3 + 2;
    v12 = v11[2];
    if (v12 == 8) {
      LOBYTE(v13) = *(_BYTE*)(a1 + 777);
      LOBYTE(v14) = *(_BYTE*)(a1 + 776);
      *(_BYTE*)(a1 + 776) = 0;
      if (a2 != nullptr) {
        v16 = 1;
      }
      else {
        v16 = (char)v13;
      }
      *(_BYTE*)(a1 + 777) = v16;
      v2 = a1;
      v17 = anonymous_itanium_demangle_AbstractManglingParser_parseType(a1);
      if (v17 == 0) {
        result = 0;
        v18 = v2;
        goto LABEL_50;
      }
      v18 = v2;
      if (a2 != nullptr) {
        *a2 = 1;
      }
      v19 = *(_QWORD**)(v2 + 4912);
      v20 = v19[1];
      if ((unsigned __int64)(v20 - 4048) > 0xFFFFFFFFFFFFF00FLL) {
      LABEL_21:
        v19[1] = v20 + 32;
        *(_QWORD*)((char*)v19 + v20 + 16) = SdkData_e84558;
        result = (__int64)v19 + v20 + 16;
        *(_BYTE*)(result + 8) = 4;
        v23 = *(_WORD*)((char*)v19 + v20 + 25);
        *(_QWORD*)(result + 16) = v17;
        *(_WORD*)(result + 9) = v23 & 0xF000 | 0x540;
      LABEL_50:
        *(_BYTE*)(v18 + 777) = (_BYTE)v13;
        *(_BYTE*)(v18 + 776) = v14;
        return result;
      }
      v21 = (_QWORD*)malloc_plt(4096);
      if (v21 != nullptr) {
        v20 = 0;
        *v21 = v19;
        v21[1] = 0;
        v19 = v21;
        v18 = v2;
        *(_QWORD*)(v2 + 4912) = v21;
        goto LABEL_21;
      }
    LABEL_51:
      v32 = std_terminate_plt(v21);
      *(_BYTE*)(v2 + 777) = (_BYTE)v13;
      *(_BYTE*)(v2 + 776) = v14;
      _Unwind_Resume_plt(v32);
      __udf(0);
    }
    if (v12 <= 0xA && (v12 != 4 || (v11[3] & 1) != 0)) {
      v29 = *((_QWORD*)v11 + 1);
      v2 = a1;
      v30 = strlen_plt(v29);
      v13 = *(_QWORD**)(v2 + 4912);
      v14 = v30;
      v31 = v13[1];
      if ((unsigned __int64)(v31 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
        v21 = (_QWORD*)malloc_plt(4096);
        if (v21 == nullptr) {
          goto LABEL_51;
        }
        v31 = 0;
        *v21 = v13;
        v21[1] = 0;
        v13 = v21;
        *(_QWORD*)(v2 + 4912) = v21;
      }
      v13[1] = v31 + 32;
      *(_QWORD*)((char*)v13 + v31 + 16) = SdkData_e82ae8;
      result = (__int64)v13 + v31 + 16;
      *(_BYTE*)(result + 8) = 8;
      v28 = *(_WORD*)((char*)v13 + v31 + 25);
      *(_QWORD*)(result + 16) = v29;
      *(_QWORD*)(result + 24) = v14;
    LABEL_40:
      *(_WORD*)(result + 9) = v28 & 0xF000 | 0x540;
      return result;
    }
    return 0;
  }
  if (*(_WORD*)v3 == 26988) {
    v14 = a1;
    *(_QWORD*)a1 = v3 + 2;
    result = anonymous_itanium_demangle_AbstractManglingParser_parseSourceName(
        (unsigned __int8**)a1);
    if (result != 0) {
      v13 = *(_QWORD**)(v14 + 4912);
      v24 = result;
      v27 = v13[1];
      if ((unsigned __int64)(v27 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
        v21 = (_QWORD*)malloc_plt(4096);
        if (v21 == nullptr) {
          goto LABEL_51;
        }
        v27 = 0;
        *v21 = v13;
        v21[1] = 0;
        v13 = v21;
        *(_QWORD*)(v14 + 4912) = v21;
      }
      v13[1] = v27 + 32;
      *(_QWORD*)((char*)v13 + v27 + 16) = SdkData_e845d0;
      result = (__int64)v13 + v27 + 16;
      v26 = 20;
      goto LABEL_39;
    }
  }
  else {
  LABEL_23:
    if (v3 == v4) {
      return 0;
    }
    else {
      if (*v3 != 118) {
        return 0;
      }
      *(_QWORD*)a1 = v3 + 1;
      if (v4 == v3 + 1 || (unsigned int)v3[1] - 48 > 9) {
        return 0;
      }
      v14 = a1;
      *(_QWORD*)a1 = v3 + 2;
      result =
          anonymous_itanium_demangle_AbstractManglingParser_parseSourceName(
              (unsigned __int8**)a1);
      if (result != 0) {
        v13 = *(_QWORD**)(v14 + 4912);
        v24 = result;
        v25 = v13[1];
        if ((unsigned __int64)(v25 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
          v21 = (_QWORD*)malloc_plt(4096);
          if (v21 == nullptr) {
            goto LABEL_51;
          }
          v25 = 0;
          *v21 = v13;
          v21[1] = 0;
          v13 = v21;
          *(_QWORD*)(v14 + 4912) = v21;
        }
        v13[1] = v25 + 32;
        *(_QWORD*)((char*)v13 + v25 + 16) = SdkData_e84558;
        result = (__int64)v13 + v25 + 16;
        v26 = 4;
      LABEL_39:
        *(_BYTE*)(result + 8) = v26;
        v28 = *(_WORD*)(result + 9);
        *(_QWORD*)(result + 16) = v24;
        goto LABEL_40;
      }
    }
  }
  return result;
}

__int64 anonymous_itanium_demangle_GlobalQualifiedName_getBaseName(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 16) + 40LL))(
      *(_QWORD*)(a1 + 16));
}

char* anonymous_itanium_demangle_AbstractManglingParser_parseAbiTags(__int64 a1,
                                                                     char* a2)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  char* v6;
  __int16 v7;
  char* result;
  __int16 v9;
  _BYTE* v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  _BYTE* v13;
  unsigned __int64 v14;
  unsigned __int8* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;

  v3 = *(unsigned __int8**)a1;
  v2 = *(unsigned __int8**)(a1 + 8);
  if (*(unsigned __int8**)a1 != v2) {
    while (*v3 == 66) {
      *(_QWORD*)a1 = v3 + 1;
      if (v2 == v3 + 1 || (unsigned int)v3[1] - 58 < 0xFFFFFFF6) {
        return nullptr;
      }
      v10 = v3 + 2;
      v11 = 0;
      v12 = v3 + 2;
      do {
        *(_QWORD*)a1 = v12;
        v13 = v10;
        v14 = v11;
        v15 = v12;
        v16 = *(v12 - 1);
        v11 = v16 + 10 * v11 - 48;
        if (v12 == v2) {
          break;
        }
        ++v12;
        ++v10;
      } while ((unsigned int)*v15 - 48 <= 9);
      if (v2 - v13 < v11) {
        return nullptr;
      }
      *(_QWORD*)a1 = &v15[10 * v14 - 48 + v16];
      if (v11 == 0) {
        return nullptr;
      }
      v17 = *(_QWORD**)(a1 + 4912);
      v18 = v17[1];
      if ((unsigned __int64)(v18 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
        v19 = (_QWORD*)malloc_plt(4096);
        if (v19 == nullptr) {
          std_terminate_plt(0);
          __udf(0);
        }
        v18 = 0;
        *v19 = v17;
        v19[1] = 0;
        v17 = v19;
        *(_QWORD*)(a1 + 4912) = v19;
      }
      v6 = (char*)v17 + v18;
      v17[1] = v18 + 48;
      v7 = *(_WORD*)(a2 + 9);
      *((_QWORD*)v6 + 2) = SdkData_e847b0;
      result = v6 + 16;
      v9 = *(_WORD*)(result + 9);
      *((_QWORD*)result + 2) = a2;
      *((_QWORD*)result + 3) = v13;
      result[8] = 9;
      *((_QWORD*)result + 4) = v11;
      a2 = result;
      *(_WORD*)(result + 9) = v9 & 0xF000 | v7 & 0xFC0;
      v3 = *(unsigned __int8**)a1;
      v2 = *(unsigned __int8**)(a1 + 8);
      if (*(unsigned __int8**)a1 == v2) {
        return result;
      }
    }
  }
  return a2;
}

const char*

anonymous_itanium_demangle_SpecialSubstitution_getBaseName(__int64 a1)
{
  int v1;
  const char* result;
  __int64 v3;

  v1 = *(_DWORD*)(a1 + 12);
  if (v1 > 2) {
    if (v1 == 3) {
      result = "basic_istream";
    }
    else {
      if (v1 == 5) {
        result = "basic_iostream";
        v3 = 8;
        goto LABEL_13;
      }
      result = "basic_ostream";
    }
    v3 = 7;
    goto LABEL_13;
  }
  if ((unsigned int)(v1 - 1) >= 2) {
    return "allocator";
  }
  result = "basic_string";
  if ((unsigned int)v1 >= 2) {
    v3 = 6;
  LABEL_13:
    if (*(_DWORD*)result != 1769169250 || *((_WORD*)result + 2) != 24419) {
      SdkRoutine_84c1f0("libc++abi: ", v3);
    }
    result += 6;
  }
  return result;
}

char* anonymous_itanium_demangle_ExpandedSpecialSubstitution_getBaseName(
    __int64 a1)
{
  return (char*)SdkData_d02ac0 + SdkData_d02ac0[*(unsigned int*)(a1 + 12)];
}

__int64 anonymous_itanium_demangle_ExpandedSpecialSubstitution_printLeft_845670(
    _DWORD* a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 5 <= v3) {
    result = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v2 + 997;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    result = realloc_plt(v6, v9),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    a2[1] = result;
    if (result == 0) {
      goto LABEL_43;
    }
    v2 = a2[2];
  }
  v11 = result + v2;
  *(_BYTE*)(v11 + 4) = 58;
  *(_DWORD*)v11 = 979661939;
  a2[2] += 5LL;
  result = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 40LL))(a1),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v12 != 0) {
    v13 = a2[2];
    v14 = a2[3];
    v15 = result;
    v16 = v12;
    v17 = v13 + v12;
    if (v13 + v12 <= v14) {
      result = a2[1];
    }
    else {
      v18 = a2[1];
      v19 = 2 * v14;
      if (v19 <= v17 + 992) {
        v20 = v17 + 992;
      }
      else {
        v20 = v19;
      }
      a2[3] = v20;
      result = realloc_plt(v18, v20),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      a2[1] = result;
      if (result == 0) {
        goto LABEL_43;
      }
      v13 = a2[2];
    }
    result = memcpy_plt(result + v13, v15, v16),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    a2[2] += v16;
  }
  if (a1[3] < 2u) {
    return result;
  }
  v21 = a2[2];
  v22 = a2[3];
  if (v21 + 29 <= v22) {
    result = a2[1];
  }
  else {
    v23 = a2[1];
    v24 = v21 + 1021;
    v25 = 2 * v22;
    if (v25 <= v24) {
      v26 = v24;
    }
    else {
      v26 = v25;
    }
    a2[3] = v26;
    result = realloc_plt(v23, v26),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    a2[1] = result;
    if (result == 0) {
      goto LABEL_43;
    }
    v21 = a2[2];
  }
  qmemcpy((void*)(result + v21), "<char, std::char_traits<char>", 29);
  v27 = a2[2];
  v28 = a1[3];
  v29 = v27 + 29;
  a2[2] = v27 + 29;
  if (v28 == 2) {
    v30 = a2[3];
    if (v27 + 51 <= v30) {
      result = a2[1];
    }
    else {
      v31 = a2[1];
      if (2 * v30 <= v27 + 1043) {
        v32 = v27 + 1043;
      }
      else {
        v32 = 2 * v30;
      }
      a2[3] = v32;
      result = realloc_plt(v31, v32),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      a2[1] = result;
      if (result == 0) {
        goto LABEL_43;
      }
      v29 = a2[2];
    }
    qmemcpy((void*)(result + v29), ", std::allocator<char>", 22);
    v29 = a2[2] + 22LL;
    a2[2] = v29;
  }
  v33 = a2[3];
  if (v29 + 1 <= v33) {
    result = a2[1];
    goto LABEL_41;
  }
  v34 = a2[1];
  v35 = v29 + 993;
  v36 = 2 * v33;
  if (v36 <= v35) {
    v37 = v35;
  }
  else {
    v37 = v36;
  }
  a2[3] = v37;
  result = realloc_plt(v34, v37),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  a2[1] = result;
  if (result == 0) {
  LABEL_43:
    abort_plt(result),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v29 = a2[2];
LABEL_41:
  *(_BYTE*)(result + v29) = 62;
  ++a2[2];
  return result;
}

char* anonymous_itanium_demangle_AbstractManglingParser_make_845b20(__int64 a1,
                                                                    __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  char* result;
  __int16 v9;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4064) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v7 = v4 + 16;
  v2[1] = v7;
  result = (char*)v2 + v7;
  LODWORD(v7) = *(_DWORD*)(a2 + 12);
  result[8] = 47;
  v9 = *(_WORD*)(result + 9);
  *((_DWORD*)result + 3) = v7;
  *(_WORD*)(result + 9) = v9 & 0xF000 | 0x540;
  *(_QWORD*)result = SdkData_e84750;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_845bc0(
    __int64 a1, __int64 a2, char a3, int a4)
{
  _QWORD* v4;
  __int64 v8;
  _QWORD* v10;
  __int64 result;
  __int16 v12;

  v4 = *(_QWORD**)(a1 + 4912);
  v8 = v4[1];
  if ((unsigned __int64)(v8 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v10 = (_QWORD*)malloc_plt(4096);
    if (v10 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v8 = 0;
    *v10 = v4;
    v10[1] = 0;
    v4 = v10;
    *(_QWORD*)(a1 + 4912) = v10;
  }
  v4[1] = v8 + 32;
  *(_QWORD*)((char*)v4 + v8 + 16) = SdkData_e848a0;
  result = (__int64)v4 + v8 + 16;
  *(_BYTE*)(result + 8) = 49;
  v12 = *(_WORD*)((char*)v4 + v8 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_DWORD*)(result + 28) = a4;
  *(_BYTE*)(result + 24) = a3 & 1;
  *(_WORD*)(result + 9) = v12 & 0xF000 | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_MemberLikeFriendName_printLeft(__int64 a1,
                                                                  _QWORD* a2)
{
  __int64 v2;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 16);
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v2);
  if ((*(_WORD*)(v2 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v2);
  }
  v5 = a2[2];
  v6 = a2[3];
  if (v5 + 9 <= v6) {
    v11 = a2[1];
  }
  else {
    v7 = a2[1];
    v8 = v5 + 1001;
    v9 = 2 * v6;
    if (v9 <= v8) {
      v10 = v8;
    }
    else {
      v10 = v9;
    }
    a2[3] = v10;
    v11 = realloc_plt(v7, v10);
    a2[1] = v11;
    if (v11 == 0) {
      abort_plt(0);
    }
    v5 = a2[2];
  }
  v12 = v11 + v5;
  *(_QWORD*)v12 = *(_QWORD*)"::friend ";
  *(_BYTE*)(v12 + 8) = 32;
  v13 = *(_QWORD*)(a1 + 24);
  a2[2] += 9LL;
  result = (*(__int64 (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v13);
  if ((*(_WORD*)(v13 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v13);
  }
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_846080(
    __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)malloc_plt(4096);
    if (v8 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 32;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e84a80;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 26;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_ParameterPack_hasRHSComponentSlow(__int64 a1,
                                                                     __int64 a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int16 v4;
  __int64 v6;

  if (*(_DWORD*)(a2 + 36) != -1) {
    v2 = *(unsigned int*)(a2 + 32);
    if (*(_QWORD*)(a1 + 24) > v2) {
      goto LABEL_3;
    }
    return 0;
  }
  v6 = *(_QWORD*)(a1 + 24);
  v2 = 0;
  *(_DWORD*)(a2 + 32) = 0;
  *(_DWORD*)(a2 + 36) = v6;
  if (v6 == 0) {
    return 0;
  }
LABEL_3:
  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v2);
  v4 = *(_WORD*)(v3 + 9);
  if ((char)v4 >= -64) {
    return (v4 & 0xC0) == 0;
  }
  else {
    return (**(__int64 (***)(__int64))v3)(v3);
  }
}

__int64 anonymous_itanium_demangle_ParameterPack_getSyntaxNode(__int64 result,
                                                               __int64 a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;

  if (*(_DWORD*)(a2 + 36) != -1) {
    v2 = *(unsigned int*)(a2 + 32);
    if (*(_QWORD*)(result + 24) <= v2) {
      return result;
    }
    goto LABEL_3;
  }
  v4 = *(_QWORD*)(result + 24);
  v2 = 0;
  *(_DWORD*)(a2 + 32) = 0;
  *(_DWORD*)(a2 + 36) = v4;
  if (v4 != 0) {
  LABEL_3:
    v3 = *(_QWORD*)(*(_QWORD*)(result + 16) + 8 * v2);
    return (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3);
  }
  return result;
}

__int64 anonymous_itanium_demangle_ParameterPack_printLeft(__int64 result,
                                                           unsigned int* a2)
{
  unsigned __int64 v2;
  __int64 v3;

  if (a2[9] != -1) {
    v2 = a2[8];
    if (*(_QWORD*)(result + 24) <= v2) {
      return result;
    }
    return (*(__int64 (**)(unsigned int*, _QWORD))(*(_QWORD*)a2 + 16LL))(
        a2, *(_QWORD*)(*(_QWORD*)(result + 16) + 8 * v2));
  }
  v3 = *(_QWORD*)(result + 24);
  v2 = 0;
  a2[8] = 0;
  a2[9] = v3;
  if (v3 != 0) {
    return (*(__int64 (**)(unsigned int*, _QWORD))(*(_QWORD*)a2 + 16LL))(
        a2, *(_QWORD*)(*(_QWORD*)(result + 16) + 8 * v2));
  }
  return result;
}

__int64 anonymous_itanium_demangle_ParameterPack_printRight(__int64 result,
                                                            unsigned int* a2)
{
  unsigned __int64 v2;
  __int64 v3;

  if (a2[9] != -1) {
    v2 = a2[8];
    if (*(_QWORD*)(result + 24) <= v2) {
      return result;
    }
    return (*(__int64 (**)(unsigned int*, _QWORD))(*(_QWORD*)a2 + 24LL))(
        a2, *(_QWORD*)(*(_QWORD*)(result + 16) + 8 * v2));
  }
  v3 = *(_QWORD*)(result + 24);
  v2 = 0;
  a2[8] = 0;
  a2[9] = v3;
  if (v3 != 0) {
    return (*(__int64 (**)(unsigned int*, _QWORD))(*(_QWORD*)a2 + 24LL))(
        a2, *(_QWORD*)(*(_QWORD*)(result + 16) + 8 * v2));
  }
  return result;
}

__int64 anonymous_itanium_demangle_NameWithTemplateArgs_printLeft(__int64 a1,
                                                                  __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 16);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v2);
  if ((*(_WORD*)(v2 + 9) & 0xC0) != 0x40) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v2);
  }
  v5 = *(_QWORD*)(a1 + 24);
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v5);
  if ((*(_WORD*)(v5 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v5);
  }
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_parseQualifiedType(__int64 a1)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  __int64 result;
  int v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  char* v11;
  __int16 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int8* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int8* v18;
  __int64 v19;
  unsigned __int8* v20;
  bool v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int16 v26;
  unsigned __int8* v27;
  __int64 v28;
  unsigned __int8* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int8* v33;
  unsigned int v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;

  v2 = *(unsigned __int8**)a1;
  v1 = *(unsigned __int8**)(a1 + 8);
  if (*(unsigned __int8**)a1 == v1) {
    goto LABEL_9;
  }
  if (*v2 != 85) {
    if (*v2 == 114) {
      ++v2;
      v5 = 4;
      *(_QWORD*)a1 = v2;
      if (v2 != v1) {
      LABEL_10:
        if (*v2 == 86) {
          ++v2;
          v5 |= 2u;
          *(_QWORD*)a1 = v2;
        }
      }
    LABEL_12:
      if (v2 != v1 && *v2 == 75) {
        v5 |= 1u;
        *(_QWORD*)a1 = v2 + 1;
      }
      result = anonymous_itanium_demangle_AbstractManglingParser_parseType_alt1(
          (unsigned __int8**)a1);
      if (result != 0 && v5 != 0) {
        v6 = *(_QWORD**)(a1 + 4912);
        v7 = v6[1];
        if ((unsigned __int64)(v7 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
          v8 = result;
          v9 = (_QWORD*)malloc_plt(4096);
          if (v9 == nullptr) {
            goto LABEL_58;
          }
          v7 = 0;
          *v9 = v6;
          v9[1] = 0;
          v6 = v9;
          *(_QWORD*)(a1 + 4912) = v9;
          result = v8;
        }
        v10 = v7 + 32;
        v11 = (char*)v6 + v7;
        v6[1] = v10;
        LOWORD(v10) = *(_WORD*)(result + 9);
        *((_QWORD*)v11 + 2) = SdkData_e85188;
        v11 += 16;
        v11[8] = 3;
        v12 = *(_WORD*)(v11 + 9);
        *((_DWORD*)v11 + 3) = v5;
        *((_QWORD*)v11 + 2) = result;
        *(_WORD*)(v11 + 9) = v12 & 0xF000 | v10 & 0xFC0;
        return (__int64)v11;
      }
      return result;
    }
  LABEL_9:
    v5 = 0;
    if (v2 == v1) {
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  *(_QWORD*)a1 = v2 + 1;
  if (v1 != v2 + 1) {
    if ((unsigned int)v2[1] - 58 < 0xFFFFFFF6) {
      return 0;
    }
    v13 = 0;
    v14 = 0;
    do {
      v15 = &v2[v13];
      v16 = v13;
      v17 = v14;
      v18 = &v2[v13 + 2];
      *(_QWORD*)a1 = v18;
      v19 = v2[v13 + 1];
      v14 = v19 + 10 * v14 - 48;
      if (v18 == v1) {
        break;
      }
      ++v13;
    } while ((unsigned int)*v18 - 48 <= 9);
    if (v1 - v2 - v16 - 2 >= v14) {
      v20 = &v2[10 * v17 - 46 + v16 + v19];
      *(_QWORD*)a1 = v20;
      if (v14 != 0) {
        if (v14 < 9 || (*(_QWORD*)(v15 + 2) == 0x746F7270636A626FLL
                            ? (v21 = v15[10] == 111)
                            : (v21 = false),
                        !v21)) {
          if (v20 == v1 || *v20 != 73) {
            v22 = 0;
          }
          else {
            result = SdkRoutine_837c80_alt1(a1, 0);
            v22 = result;
            if (result == 0) {
              return result;
            }
          }
          result =
              anonymous_itanium_demangle_AbstractManglingParser_parseQualifiedType(
                  a1);
          if (result != 0) {
            v23 = *(_QWORD**)(a1 + 4912);
            v24 = result;
            v25 = v23[1];
            if ((unsigned __int64)(v25 - 4032) > 0xFFFFFFFFFFFFF00FLL) {
            LABEL_40:
              v23[1] = v25 + 48;
              *(_QWORD*)((char*)v23 + v25 + 16) = SdkData_e85110;
              result = (__int64)v23 + v25 + 16;
              *(_BYTE*)(result + 8) = 2;
              v26 = *(_WORD*)((char*)v23 + v25 + 25);
              *(_QWORD*)(result + 16) = v24;
              *(_QWORD*)(result + 24) = v18;
              *(_QWORD*)(result + 32) = v14;
              *(_QWORD*)(result + 40) = v22;
            LABEL_41:
              *(_WORD*)(result + 9) = v26 & 0xF000 | 0x540;
              return result;
            }
            v9 = (_QWORD*)malloc_plt(4096);
            if (v9 != nullptr) {
              v25 = 0;
              *v9 = v23;
              v9[1] = 0;
              v23 = v9;
              *(_QWORD*)(a1 + 4912) = v9;
              goto LABEL_40;
            }
          LABEL_58:
            std_terminate_plt(v9);
            __udf(0);
          }
          return result;
        }
        v27 = &v2[v16 + 11];
        v28 = (__int64)&v2[10 * v17 - 46 + v16 + v19];
        *(_QWORD*)a1 = v27;
        *(_QWORD*)(a1 + 8) = v28;
        if (v14 == 9 || (unsigned int)*v27 - 58 < 0xFFFFFFF6) {
          goto LABEL_49;
        }
        v29 = v15 + 12;
        v30 = 0;
        v31 = 10 * v17;
        v32 = v19 + v31 - 58;
        while (1) {
          *(_QWORD*)a1 = v29;
          v30 = *(v29 - 1) + 10 * v30 - 48;
          if (v32 == 0) {
            break;
          }
          v33 = v29 + 1;
          --v32;
          v34 = *v29++ - 48;
          if (v34 > 9) {
            v28 = (__int64)(v33 - 1);
            break;
          }
        }
        if ((unsigned __int64)&v2[v16 - 46 + v31 - v28 + v19] < v30) {
        LABEL_49:
          *(_QWORD*)a1 = v20;
          *(_QWORD*)(a1 + 8) = v1;
          return 0;
        }
        *(_QWORD*)a1 = v20;
        *(_QWORD*)(a1 + 8) = v1;
        if (v30 != 0) {
          result =
              anonymous_itanium_demangle_AbstractManglingParser_parseQualifiedType(
                  a1);
          if (result != 0) {
            v35 = *(_QWORD**)(a1 + 4912);
            v36 = result;
            v37 = v35[1];
            if ((unsigned __int64)(v37 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
              v9 = (_QWORD*)malloc_plt(4096);
              if (v9 == nullptr) {
                goto LABEL_58;
              }
              v37 = 0;
              *v9 = v35;
              v9[1] = 0;
              v35 = v9;
              *(_QWORD*)(a1 + 4912) = v9;
            }
            v35[1] = v37 + 48;
            *(_QWORD*)((char*)v35 + v37 + 16) = SdkData_e85098;
            result = (__int64)v35 + v37 + 16;
            *(_BYTE*)(result + 8) = 11;
            v26 = *(_WORD*)((char*)v35 + v37 + 25);
            *(_QWORD*)(result + 16) = v36;
            *(_QWORD*)(result + 24) = v28;
            *(_QWORD*)(result + 32) = v30;
            goto LABEL_41;
          }
          return result;
        }
      }
    }
  }
  return 0;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_8477d0(
    __int64 a1, __int64* a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;
  __int64 v11;
  __int64 v12;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)malloc_plt(4096);
    if (v8 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 48;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e85200;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 7;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  v11 = *a2;
  v12 = a2[1];
  *(_QWORD*)(result + 32) = a3;
  *(_QWORD*)(result + 16) = v11;
  *(_QWORD*)(result + 24) = v12;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_847880(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 32;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e85278;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 31;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_847920(
    __int64 a1, __int64 a2, char a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)malloc_plt(4096);
    if (v8 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 32;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e852f0;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 32;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_BYTE*)(result + 24) = a3 & 1;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_8479d0(
    __int64 a1, __int64 a2, __int64* a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int16 v12;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)malloc_plt(4096);
    if (v8 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 48;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e85368;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 5;
  v10 = *a3;
  v11 = a3[1];
  v12 = *(_WORD*)(result + 9);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = v10;
  *(_QWORD*)(result + 32) = v11;
  *(_WORD*)(result + 9) = v12 & 0xF000 | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_parseClassEnumType(
    __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8* v3;
  __int64 result;
  unsigned __int8* v5;
  int v6;
  const char* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  char* v15;

  v3 = *(unsigned __int8**)a1;
  if (*(_QWORD*)(a1 + 8) - *(_QWORD*)a1 < 2u) {
    return anonymous_itanium_demangle_AbstractManglingParser_parseName(
        (unsigned __int8**)a1, 0, a3);
  }
  if (*(_WORD*)v3 == 29524) {
    v7 = "struct";
    v8 = 6;
    v9 = a1;
    *(_QWORD*)a1 = v3 + 2;
    result = anonymous_itanium_demangle_AbstractManglingParser_parseName(
        (unsigned __int8**)a1, 0, a3);
    if (result == 0) {
      return result;
    }
    goto LABEL_11;
  }
  if (*(_WORD*)v3 == 30036) {
    v7 = "union";
    v8 = 5;
    v9 = a1;
    *(_QWORD*)a1 = v3 + 2;
    result = anonymous_itanium_demangle_AbstractManglingParser_parseName(
        (unsigned __int8**)a1, 0, a3);
    if (result == 0) {
      return result;
    }
    goto LABEL_11;
  }
  v6 = *(unsigned __int16*)v3;
  v5 = v3 + 2;
  if (v6 != 25940) {
    return anonymous_itanium_demangle_AbstractManglingParser_parseName(
        (unsigned __int8**)a1, 0, a3);
  }
  v7 = "enum";
  v8 = 4;
  v9 = a1;
  *(_QWORD*)a1 = v5;
  result = anonymous_itanium_demangle_AbstractManglingParser_parseName(
      (unsigned __int8**)a1, 0, a3);
  if (result != 0) {
  LABEL_11:
    v10 = *(_QWORD**)(v9 + 4912);
    v11 = v10[1];
    if ((unsigned __int64)(v11 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
      v12 = result;
      v13 = (_QWORD*)malloc_plt(4096);
      if (v13 == nullptr) {
        std_terminate_plt(0);
        __udf(0);
      }
      v11 = 0;
      *v13 = v10;
      v13[1] = 0;
      v10 = v13;
      *(_QWORD*)(v9 + 4912) = v13;
      result = v12;
    }
    v14 = v11 + 48;
    v15 = (char*)v10 + v11;
    v10[1] = v14;
    *((_QWORD*)v15 + 2) = SdkData_e855c0;
    v15 += 16;
    v15[8] = 6;
    LOWORD(v14) = *(_WORD*)(v15 + 9);
    *((_QWORD*)v15 + 2) = v7;
    *((_QWORD*)v15 + 3) = v8;
    *((_QWORD*)v15 + 4) = result;
    *(_WORD*)(v15 + 9) = v14 & 0xF000 | 0x540;
    return (__int64)v15;
  }
  return result;
}

char* anonymous_itanium_demangle_AbstractManglingParser_make_847ef0(__int64 a1,
                                                                    __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  char* v7;
  char v8;
  char* result;
  __int16 v10;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v7 = (char*)v2 + v4;
  v2[1] = v4 + 32;
  v8 = *(_WORD*)(a2 + 9);
  *((_QWORD*)v7 + 2) = SdkData_e85638;
  result = v7 + 16;
  result[8] = 12;
  v10 = *(_WORD*)(result + 9);
  *((_QWORD*)result + 2) = a2;
  *(_WORD*)(result + 9) = v8 & 0xC0 | 0x500 | v10 & 0xF000;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_847fa0(
    __int64 a1, __int64 a2, int a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  char* v9;
  char v10;
  __int64 result;
  __int16 v12;
  __int64 v13;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) > 0xFFFFFFFFFFFFF00FLL) {
    goto LABEL_4;
  }
  v8 = (_QWORD*)malloc_plt(4096);
  if (v8 != nullptr) {
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  LABEL_4:
    v9 = (char*)v3 + v6;
    v3[1] = v6 + 32;
    v10 = *(_WORD*)(a2 + 9);
    *((_QWORD*)v9 + 2) = SdkData_e856b0;
    result = (__int64)(v9 + 16);
    *(_BYTE*)(result + 8) = 13;
    v12 = *(_WORD*)(result + 9);
    *(_QWORD*)(result + 16) = a2;
    *(_DWORD*)(result + 24) = a3;
    *(_BYTE*)(result + 28) = 0;
    *(_WORD*)(result + 9) = v10 & 0xC0 | 0x500 | v12 & 0xF000;
    return result;
  }
  v13 = std_terminate_plt(0);
  return anonymous_itanium_demangle_AbstractManglingParser_make_848050_alt1(
      v13);
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_848050(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e85368;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 5;
  *(_WORD*)(result + 9) = *(_WORD*)(result + 9) & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = " complex";
  *(_QWORD*)(result + 32) = 8;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_848100(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 48;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e85368;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 5;
  *(_WORD*)(result + 9) = *(_WORD*)(result + 9) & 0xF000 | 0x540;
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = " imaginary";
  *(_QWORD*)(result + 32) = 10;
  return result;
}

__int64

anonymous_itanium_demangle_AbstractManglingParser_make_8492a0(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  __int64 result;
  __int16 v8;

  v2 = *(_QWORD**)(a1 + 4912);
  v4 = v2[1];
  if ((unsigned __int64)(v4 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v6 = (_QWORD*)malloc_plt(4096);
    if (v6 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v4 = 0;
    *v6 = v2;
    v6[1] = 0;
    v2 = v6;
    *(_QWORD*)(a1 + 4912) = v6;
  }
  v2[1] = v4 + 32;
  *(_QWORD*)((char*)v2 + v4 + 16) = SdkData_e853e0;
  result = (__int64)v2 + v4 + 16;
  *(_BYTE*)(result + 8) = 30;
  v8 = *(_WORD*)((char*)v2 + v4 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_WORD*)(result + 9) = v8 & 0xF000 | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_849340(
    __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)malloc_plt(4096);
    if (v8 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 32;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e85458;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 29;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x540;
  return result;
}

__int64 anonymous_itanium_demangle_AbstractManglingParser_make_849660(
    __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  __int64 result;
  __int16 v10;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)malloc_plt(4096);
    if (v8 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v3[1] = v6 + 32;
  *(_QWORD*)((char*)v3 + v6 + 16) = SdkData_e854d0;
  result = (__int64)v3 + v6 + 16;
  *(_BYTE*)(result + 8) = 15;
  v10 = *(_WORD*)((char*)v3 + v6 + 25);
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_WORD*)(result + 9) = v10 & 0xF000 | 0x400;
  return result;
}

__int64 anonymous_itanium_demangle_ArrayType_printLeft(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 16LL))(
      a2, *(_QWORD*)(a1 + 16));
}

char* anonymous_itanium_demangle_AbstractManglingParser_make_84a0d0(__int64 a1,
                                                                    __int64 a2,
                                                                    __int64 a3)
{
  _QWORD* v3;
  __int64 v6;
  _QWORD* v8;
  char* v9;
  char v10;
  char* result;
  __int16 v12;

  v3 = *(_QWORD**)(a1 + 4912);
  v6 = v3[1];
  if ((unsigned __int64)(v6 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v8 = (_QWORD*)malloc_plt(4096);
    if (v8 == nullptr) {
      std_terminate_plt(0);
      __udf(0);
    }
    v6 = 0;
    *v8 = v3;
    v8[1] = 0;
    v3 = v8;
    *(_QWORD*)(a1 + 4912) = v8;
  }
  v9 = (char*)v3 + v6;
  v3[1] = v6 + 32;
  v10 = *(_WORD*)(a3 + 9);
  *((_QWORD*)v9 + 2) = SdkData_e85548;
  result = v9 + 16;
  result[8] = 14;
  v12 = *(_WORD*)(result + 9);
  *((_QWORD*)result + 2) = a2;
  *((_QWORD*)result + 3) = a3;
  *(_WORD*)(result + 9) = v10 & 0xC0 | 0x500 | v12 & 0xF000;
  return result;
}

__int64 anonymous_itanium_demangle_ReferenceType_collapse(__int64 a1,
                                                          signed int a2,
                                                          __int64 a3)
{
  __int64 v6;
  _QWORD* v7;
  char* v8;
  unsigned __int64 v9;
  signed __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _QWORD* v15;
  char* v16;
  char* v17;
  _QWORD v18[8];
  __int64 v19;

  v15 = v18;
  v16 = (char*)v18;
  v17 = (char*)&v19;
  memset(v18, 0, sizeof(v18));
  while (1) {
    v6 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 24LL))(a1, a3);
    v7 = v15;
    if (*(_BYTE*)(v6 + 8) != 13) {
      break;
    }
    a1 = *(_QWORD*)(v6 + 16);
    if ((signed __int32)*(_DWORD*)(v6 + 24) < a2) {
      a2 = *(_DWORD*)(v6 + 24);
    }
    v8 = v16;
    if (v16 == v17) {
      v10 = v16 - (char*)v15;
      if (v15 == v18) {
        v11 = malloc_plt_alt1(2 * (v16 - (char*)v15));
        if (v11 == 0) {
        LABEL_22:
          abort_plt_alt1();
        }
        if (v16 != (char*)v18) {
          v12 = v11;
          memmove_plt_alt1(v11, (__int64)v15, v10);
          v11 = v12;
        }
        v15 = (_QWORD*)v11;
      }
      else {
        v11 = realloc_plt_alt1((__int64)v15, 2 * (v16 - (char*)v15));
        v15 = (_QWORD*)v11;
        if (v11 == 0) {
          goto LABEL_22;
        }
      }
      v7 = (_QWORD*)v11;
      v17 = (char*)(v11 + 8 * (v10 >> 2));
      *(_QWORD*)(v11 + v10) = a1;
      v16 = (char*)(v11 + v10 + 8);
      v9 = (v10 + 8) >> 3;
      if (v9 >= 2) {
        goto LABEL_16;
      }
    }
    else {
      *(_QWORD*)v16 = a1;
      v16 += 8;
      v9 = (v8 + 8 - (char*)v15) >> 3;
      if (v9 >= 2) {
      LABEL_16:
        v13 = (v9 - 1) >> 1;
        if (v13 >= v9) {
          SdkRoutine_84c1f0_alt1((__int64)"libc++abi: Invalid access!");
        }
        if (a1 == v7[v13]) {
          break;
        }
      }
    }
  }
  if (v7 != v18) {
    free_plt_alt1((__int64)v7);
  }
  return (unsigned int)a2;
}

#pragma GCC visibility pop
