#include "nn/diag/diag_abort.hpp"
#include "nn/mii/char_info_accessor.hpp"
#include "nn/mii/core_data.hpp"
#include "nn/mii/mii_applet.hpp"
#include "nn/mii/mii_color.hpp"

namespace nn::mii {

namespace {

constexpr Result ResultCanceled = {0xe7e};
constexpr Result ResultInvalidCharInfo = {0xd67e};
constexpr Result ResultSpecialMiiNotEditable = {0x19a7e};
constexpr uint8_t ShowMiiEditOption = 1;
constexpr uint8_t AppendMiiOption = 2;
constexpr uint8_t CreateMiiOption = 7;
constexpr uint8_t EditMiiOption = 8;
constexpr size_t SpecialMiiFlagOffset = 0x2b;

}

Result AppendMii(int* pOutIndex) {
  AppletOutput output = {};
  AppletInput input = {};
  input.Initialize(AppletMode(1), GetSpecialMiiKeyCode());
  NN_RESULT_DO(StartApplet(&output, input, AppendMiiOption));
  NN_RESULT_DO(output.GetResult());
  *pOutIndex = output.GetAppendMiiIndex();
  return Result{0};
}

// Leaving the editor is not an error here.
Result ShowMiiEdit() {
  AppletOutput output = {};
  AppletInput input = {};
  input.Initialize(AppletMode(0), GetSpecialMiiKeyCode());
  Result result = StartApplet(&output, input, ShowMiiEditOption);
  if (result.IsSuccess()) {
    result = output.GetResult();
  }
  if (result.GetInnerValueForDebug() == ResultCanceled.value) {
    return Result{0};
  }
  return result;
}

Result CreateMii(CharInfo* pOutInfo) {
  AppletOutputForCharInfoEditing output = {};
  AppletInput input = {};
  input.Initialize(AppletMode(4), GetSpecialMiiKeyCode());
  NN_RESULT_DO(StartAppletForCharInfoEditing(&output, input,
    CreateMiiOption));
  NN_RESULT_DO(output.GetResult());
  *pOutInfo = *output.GetCharInfo();
  return Result{0};
}

Result EditMii(CharInfo* pOutInfo, const CharInfo& info) {
  if (!reinterpret_cast<const detail::CharInfoRaw&>(info).IsValid()) {
    return ResultInvalidCharInfo;
  }
  if (reinterpret_cast<const uint8_t*>(&info)[SpecialMiiFlagOffset] == 1) {
    return ResultSpecialMiiNotEditable;
  }
  AppletOutputForCharInfoEditing output = {};
  AppletInput input = {};
  input.InitializeForEditCharInfo(info, GetSpecialMiiKeyCode());
  NN_RESULT_DO(StartAppletForCharInfoEditing(&output, input, EditMiiOption));
  NN_RESULT_DO(output.GetResult());
  *pOutInfo = *output.GetCharInfo();
  return Result{0};
}

}
