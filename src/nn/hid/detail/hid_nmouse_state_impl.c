#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_hid_detail_AppletResourceHolder_Activate_plt(_QWORD);
__int64 nn_hid_detail_AppletResourceHolder_SetAppletResourceUserId_plt(_QWORD,
                                                                       _QWORD);
__int64 nn_hid_detail_GetAppletResourceHolder_plt(_QWORD);
__int64 nn_hid_detail_NmouseTransferMemoryAccessor_InitializeTransferMemory_plt(
    _QWORD, _QWORD);
__int64 nn_hid_server_CreateHidSystemServerProxy_plt(_QWORD);
__int64 nn_hid_utility_GetAppletResourceUserId_plt(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_CreateTransferMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroyTransferMemory_plt(_QWORD);
__int64 nn_os_DetachTransferMemory_plt(_QWORD);
extern _UNKNOWN SdkData_1046fc0;
__int64 nn_hid_system_detail_InitializeOverlayNmouse(void* this_, void* a2,
                                                     unsigned int a3,
                                                     unsigned int a4);

__int64 nn_hid_system_detail_InitializeOverlayNmouse(void* this_, void* a2,
                                                     unsigned int a3,
                                                     unsigned int a4)
{
  __int64 result;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  struct {
    unsigned int v19;
    char v20;
  } v19_;
  _QWORD* v21;
  _QWORD v22[8];

  memset(v22, 0, sizeof(v22));
  result = nn_os_CreateTransferMemory_plt(v22, this_, a2, 1);
  if ((_DWORD)result == 0) {
    v9 = nn_os_DetachTransferMemory_plt(v22);
    v10 = nn_os_DestroyTransferMemory_plt(v22);
    v11 = nn_hid_detail_GetAppletResourceHolder_plt(v10);
    v12 = nn_hid_utility_GetAppletResourceUserId_plt(v11);
    result = nn_hid_detail_AppletResourceHolder_SetAppletResourceUserId_plt(
        v11, v12);
    if ((_DWORD)result == 0) {
      v13 = nn_hid_detail_GetAppletResourceHolder_plt(result);
      result = nn_hid_detail_AppletResourceHolder_Activate_plt(v13);
      if ((_DWORD)result == 0) {
        v21 = nullptr;
        v14 = nn_hid_server_CreateHidSystemServerProxy_plt(&v21);
        v15 = v21;
        v16 = nn_hid_utility_GetAppletResourceUserId_plt(v14);
        v19_.v19 = v9;
        v19_.v20 = 1;
        result = (*(__int64 (**)(_QWORD*, __int64, unsigned int*, void*, _QWORD,
                                 _QWORD, __int64))(*v15 + 2304LL))(
            v15, v16, &v19_.v19, a2, a3, a4, 1);
        if (v19_.v20 == 1) {
          v17 = result;
          nn_os_CloseNativeHandle_plt(v19_.v19);
          result = v17;
        }
        if ((_DWORD)result == 0) {
          result =
              nn_hid_detail_NmouseTransferMemoryAccessor_InitializeTransferMemory_plt(
                  &SdkData_1046fc0, this_);
        }
        if (v21 != nullptr) {
          v18 = result;
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
              *v21 + 8LL))((void*)(v21), v21);
          return v18;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
