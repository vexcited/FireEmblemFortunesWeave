#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/account/detail/account_i_async_context.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::account {

// Caches the BaaS access tokens of the users for the application.
class IBaasAccessTokenAccessor : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result EnsureCacheAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext,
    const Uid& uid) = 0;
  virtual Result LoadCache(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& buffer, const Uid& uid) = 0;
  virtual Result GetDeviceAccountId(sf::Out<uint64_t> pOutId,
    const Uid& uid) = 0;
};

Result GetBaasDeviceAccountId(uint64_t* pOutId, const Uid& uid);
Result LoadBaasAccessTokenCache(size_t* pOutSize, char* buffer, size_t size,
  const Uid& uid);

}
