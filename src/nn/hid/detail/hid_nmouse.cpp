#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::detail {

Result StartJcms(const JcmsHandle& jcmsHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(utility::VerifyValidJcmsHandle(jcmsHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->StartJcms(utility::GetAppletResourceUserId(), jcmsHandle);
}

Result StopJcms(const JcmsHandle& jcmsHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(utility::VerifyValidJcmsHandle(jcmsHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->StopJcms(utility::GetAppletResourceUserId(), jcmsHandle);
}

Result SetNmousePointerRanges(int count, int count2) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetNmousePointerRanges(
    utility::GetAppletResourceUserId(), count, count2);
}

Result GetNmousePointerRanges(int* pOutInt, int* pOutInt2) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  int value = {};
  int value1 = {};
  const Result result = proxy->GetNmousePointerRanges(
    utility::GetAppletResourceUserId(), &value, &value1);
  if (result.IsSuccess()) {
    *pOutInt = value;
    *pOutInt2 = value1;
  }
  return result;
}

Result SetNmousePointerMovementArea(
  int count, int count2, int count3, int count4) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetNmousePointerMovementArea(
    utility::GetAppletResourceUserId(), count, count2, count3, count4);
}

Result EnableShowingCursor(bool isEnabled) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->EnableShowingCursor(
    utility::GetAppletResourceUserId(), isEnabled);
}

}

namespace nn::hid::detail {

Result SetNmouseButtonConfigJoyLeftJcms(const NmouseButtonConfigJoyLeftJcms& nmouseButtonConfigJoyLeftJcms) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetNmouseButtonConfigJoyLeftJcms(utility::GetAppletResourceUserId(), nmouseButtonConfigJoyLeftJcms);
}

Result SetNmouseButtonConfigJoyRightJcms(const NmouseButtonConfigJoyRightJcms& nmouseButtonConfigJoyRightJcms) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetNmouseButtonConfigJoyRightJcms(utility::GetAppletResourceUserId(), nmouseButtonConfigJoyRightJcms);
}

Result RestrictNmousePointer(float value, float value2, float value3, float value4) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->RestrictNmousePointer(utility::GetAppletResourceUserId(), value, value2, value3, value4);
}

}
