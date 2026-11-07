#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/la/la_common_arguments.hpp"
#include "nn/mii/mii_applet.hpp"

namespace nn::la {

void PushToInChannel(applet::LibraryAppletHandle handle, const void* pData,
  size_t size);

}

namespace nn::mii {

namespace {

constexpr Result ResultCanceled = {0xe7e};
constexpr int AppletIdMiiEdit = 0x12;
constexpr int AppletIdFlags = 0x01000000;
constexpr int AppletIdOptionShift = 16;

// The applet writes its whole output back through the out channel.
template <typename Output>
[[gnu::always_inline]] Result StartAppletImpl(Output* pOutput,
  const AppletInput& input, uint8_t option) {
  applet::LibraryAppletHandle handle = {};
  NN_RESULT_DO(applet::CreateLibraryApplet(&handle,
    applet::AppletId(AppletIdFlags | (option << AppletIdOptionShift) |
      AppletIdMiiEdit),
    applet::LibraryAppletMode(0)));
  la::CommonArgumentsWriter writer(0);
  writer.PushToInChannel(handle);
  la::PushToInChannel(handle, &input, sizeof(input));
  uint8_t userArgument = 0;
  Result result = applet::StartLibraryApplet(handle, &userArgument);
  if (result.IsSuccess()) {
    applet::JoinLibraryApplet(handle);
    switch (applet::GetLibraryAppletExitReason(handle)) {
      case applet::LibraryAppletExitReason_Normal: {
        applet::StorageHandle storage = {};
        NN_ABORT_UNLESS(applet::TryPopFromOutChannel(&storage, handle));
        NN_ABORT_UNLESS_RESULT_SUCCESS(applet::ReadFromStorage(storage, 0,
          pOutput, sizeof(*pOutput)));
        applet::ReleaseStorage(storage);
        result = Result{0};
        break;
      }
      case applet::LibraryAppletExitReason_Canceled:
        result = ResultCanceled;
        break;
      case applet::LibraryAppletExitReason_Abnormal:
        NN_ABORT_UNLESS(false);
      case applet::LibraryAppletExitReason_Unexpected:
        NN_ABORT_UNLESS(false);
      default:
        nn::detail::UnexpectedDefaultImpl();
    }
  }
  applet::CloseLibraryApplet(handle);
  return result;
}

[[gnu::always_inline]] AppletOutput ReadOutput(
  applet::StorageHandle storage) {
  AppletOutput output = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::ReadFromStorage(storage, 0, &output,
    sizeof(output)));
  return output;
}

}

Result GetShowMiiEditResult(applet::StorageHandle storage) {
  const AppletOutput output = ReadOutput(storage);
  const Result result = output.GetResult();
  if (result.GetInnerValueForDebug() == ResultCanceled.value) {
    return Result{0};
  }
  return result;
}

Result GetAppendMiiResult(int* pOutIndex, applet::StorageHandle storage) {
  const AppletOutput output = ReadOutput(storage);
  NN_RESULT_DO(output.GetResult());
  *pOutIndex = output.GetAppendMiiIndex();
  return Result{0};
}

Result GetAppendMiiImageResult(int* pOutIndex,
  applet::StorageHandle storage) {
  const AppletOutput output = ReadOutput(storage);
  NN_RESULT_DO(output.GetResult());
  *pOutIndex = output.GetAppendMiiImageIndex();
  return Result{0};
}

Result GetUpdateMiiImageResult(int* pOutIndex,
  applet::StorageHandle storage) {
  const AppletOutput output = ReadOutput(storage);
  NN_RESULT_DO(output.GetResult());
  *pOutIndex = output.GetUpdateMiiImageIndex();
  return Result{0};
}

namespace detail {

Result StartImpl(AppletOutput* output, const AppletInput& input,
  uint8_t option) {
  return StartAppletImpl(output, input, option);
}

Result StartImpl(AppletOutputForCharInfoEditing* output,
  const AppletInput& input, uint8_t option) {
  return StartAppletImpl(output, input, option);
}

}

}
