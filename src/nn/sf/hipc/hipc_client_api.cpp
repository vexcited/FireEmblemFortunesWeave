#include "nn/diag/diag_abort.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/svc/svc_handle.hpp"

namespace nn::sf::cmif {

struct CmifDomainObjectId;

}

namespace nn::sf::hipc::client {

namespace detail {

[[gnu::visibility("hidden")]] Result CallQueryPointerBufferSize(
  svc::Handle session, uint16_t* pOutSize);
[[gnu::visibility("hidden")]] Result CallConvertCurrentObjectToDomain(
  svc::Handle session, cmif::CmifDomainObjectId* pOutId);
[[gnu::visibility("hidden")]] Result CallDuplicateSession(svc::Handle session,
  NativeHandle* pOutHandle);
[[gnu::visibility("hidden")]] Result CallDuplicateSessionEx(
  svc::Handle session, NativeHandle* pOutHandle, uint32_t tag, int count);

}

Result QueryPointerBufferSize(uint16_t* pOutSize, svc::Handle session) {
  return detail::CallQueryPointerBufferSize(session, pOutSize);
}

Result ConvertSessionToDomain(cmif::CmifDomainObjectId* pOutId,
  svc::Handle session) {
  return detail::CallConvertCurrentObjectToDomain(session, pOutId);
}

Result DuplicateSession(svc::Handle* pOutHandle, svc::Handle session) {
  NativeHandle handle;
  const Result result = detail::CallDuplicateSession(session, &handle);
  if (result.IsFailure()) {
    return result;
  }

  NN_ABORT_UNLESS(handle.IsManaged());
  *pOutHandle = svc::Handle{handle.GetOsHandle()};
  handle.Detach();
  return {};
}

Result DuplicateSessionEx(svc::Handle* pOutHandle, svc::Handle session,
  uint32_t tag) {
  NativeHandle handle;
  const Result result = detail::CallDuplicateSessionEx(session, &handle, tag,
    4);
  if (result.IsFailure()) {
    return result;
  }

  NN_ABORT_UNLESS(handle.IsManaged());
  *pOutHandle = svc::Handle{handle.GetOsHandle()};
  handle.Detach();
  return {};
}

}
