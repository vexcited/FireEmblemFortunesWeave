#include <stddef.h>

#include "nn/account/account_types.hpp"
#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/la/la_common_arguments.hpp"
#include "nn/ncm/ncm_ids.hpp"

namespace nn::la {

void PushToInChannel(applet::LibraryAppletHandle handle, const void* pData,
  size_t size);
Result StartLibraryApplet(applet::LibraryAppletHandle handle,
  bool isExtremity);

namespace svdb {

namespace {

constexpr applet::AppletId AppletId_SaveDataBackup =
  applet::AppletId{0x01010025};
constexpr applet::AppletId AppletId_SaveDataBackupForApplication =
  applet::AppletId{0x01020025};

struct ShowArgument {
  account::Uid uid;
  ncm::ApplicationId applicationId;
};

void Show(applet::AppletId appletId, const void* pArgument, size_t size) {
  applet::LibraryAppletHandle handle = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateLibraryApplet(&handle,
    appletId, applet::LibraryAppletMode{0}));
  {
    const CommonArgumentsWriter writer(0);
    writer.PushToInChannel(handle);
    PushToInChannel(handle, pArgument, size);
    StartLibraryApplet(handle, false);
  }
  applet::CloseLibraryApplet(handle);
}

}

void ShowSaveDataBackup(const account::Uid& uid) {
  const account::Uid argument = uid;
  Show(AppletId_SaveDataBackup, &argument, sizeof(argument));
}

void ShowSaveDataBackup(const account::Uid& uid,
  ncm::ApplicationId applicationId) {
  const ShowArgument argument = {uid, applicationId};
  Show(AppletId_SaveDataBackupForApplication, &argument, sizeof(argument));
}

}

}
