#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/applet/applet_types.hpp"
#include "nn/ec/ec_shop_api.hpp"
#include "nn/result.hpp"

namespace nn::ec::detail {

enum ShopExitReason : int32_t {
  ShopExitReason_Unknown = 20,
};

enum ShopBackgroundKind : int32_t {};

class ShopPageReturnValue {
 public:
  ShopPageReturnValue();

  ShopExitReason GetShopExitReason() const;
  const char* GetLastUrl() const;
  size_t GetLastUrlSize() const;

 private:
  uint64_t m_ExitReason;
  char m_LastUrl[4096];
  uint64_t m_LastUrlSize;
};

class ShowShopPageArg {
 public:
  explicit ShowShopPageArg(const char* requestRelativeUrl);

  void SetUid(const account::Uid& uid);
  void SetCallbackUrl(const char* url);
  void SetCallbackableUrl(const char* url);
  void SetBackgroundKind(ShopBackgroundKind kind);
  char* GetRequestRelativeUrlBuffer();
  void PushToInChannel(applet::LibraryAppletHandle handle) const;

 private:
  alignas(8) uint8_t m_Data[0x2000];
};

Result ShowShopPage(ShopPageReturnValue* pOutValue,
  const ShowShopPageArg& arg);
size_t NsUidToString(char* buffer, size_t size, NsUid nsUid);

}
