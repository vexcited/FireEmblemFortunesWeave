#include <string.h>

#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/ec/ec_shop_api.hpp"

namespace nn::ec::detail {

class ShopPageReturnValue {
 public:
  int GetShopExitReason() const;
  size_t GetLastUrlSize() const;
  const char* GetLastUrl() const;

 private:
  uint8_t m_Storage[0x1010];
};

Result GetShopPageReturnValueFromStorage(ShopPageReturnValue* pOutValue,
  const applet::StorageHandle& storage);

[[gnu::visibility("hidden")]] extern ShopPageReturnValue
  g_ShopPageReturnValue;

namespace {

constexpr Result ResultShopNotSucceeded = {0xcaa4};
constexpr int ShopExitReason_LastUrlReached = 3;
constexpr char SuccessUrl[] = "eshop://success";

}

// The original reaches this one through its exported symbol.
[[gnu::noinline]] Result GetShopPageReturnValueFromStorage(
  ShopPageReturnValue* pOutValue, const applet::StorageHandle& storage) {
  NN_ABORT_UNLESS(applet::GetStorageSize(storage) ==
    static_cast<int64_t>(sizeof(*pOutValue)));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::ReadFromStorage(storage, 0, pOutValue, sizeof(*pOutValue)));
  // The caller rechecks this always successful result.
  Result result = {0};
  asm("" : "+r"(result.value));
  return result;
}

// The shop succeeded when it left through the success url.
Result GetShopResultFromStorageImpl(const applet::StorageHandle& storage) {
  NN_RESULT_DO(GetShopPageReturnValueFromStorage(&g_ShopPageReturnValue,
    storage));
  if (g_ShopPageReturnValue.GetShopExitReason() !=
      ShopExitReason_LastUrlReached ||
      g_ShopPageReturnValue.GetLastUrlSize() != sizeof(SuccessUrl)) {
    return ResultShopNotSucceeded;
  }
  if (strncmp(g_ShopPageReturnValue.GetLastUrl(), SuccessUrl,
      sizeof(SuccessUrl)) != 0) {
    return ResultShopNotSucceeded;
  }
  return Result{0};
}

}
