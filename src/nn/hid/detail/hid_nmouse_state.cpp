#include <new>

#include "nn/hid/detail/hid_applet_resource_holder.hpp"
#include "nn/hid/detail/hid_nmouse_accessor.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"

namespace nn::hid::detail {

namespace {

NmouseTransferMemoryAccessor& GetNmouseTransferMemoryAccessor() {
  return utility::StaticObject<NmouseTransferMemoryAccessor>::Get();
}

}

Result GetMergedNmouseHandle(NmouseHandle* pOutHandle) {
  return GetNmouseTransferMemoryAccessor().GetMergedHandle(pOutHandle);
}

Result GetStandardMouseNmouseHandle(NmouseHandle* pOutHandle) {
  return GetNmouseTransferMemoryAccessor().GetStandardMouseNmouseHandle(
    pOutHandle);
}

Result GetNmouseTypeSet(util::BitFlagSet<32, NmouseType>* pOutTypes,
  NmouseHandle handle) {
  return GetNmouseTransferMemoryAccessor().GetNmouseTypeSet(pOutTypes,
    handle);
}

Result GetNpadIdType(NpadIdType* pOutId, NmouseHandle handle) {
  return GetNmouseTransferMemoryAccessor().GetNpadIdType(pOutId, handle);
}

Result GetNmouseState(NmouseState* pOutState, NmouseHandle handle) {
  int count = 0;
  return GetNmouseTransferMemoryAccessor().GetNmouseStates(&count, pOutState,
    1, handle);
}

Result GetNmouseStates(int* pOutCount, NmouseState* pOutStates, int count,
  NmouseHandle handle) {
  return GetNmouseTransferMemoryAccessor().GetNmouseStates(pOutCount,
    pOutStates, count, handle);
}

}

namespace nn::hid::system::detail {

namespace {

hid::detail::NmouseTransferMemoryAccessor g_OverlayNmouseAccessor;

hid::detail::NmouseTransferMemoryAccessor& GetNmouseTransferMemoryAccessor() {
  return utility::StaticObject<hid::detail::NmouseTransferMemoryAccessor>::
    Get();
}

}

Result GetNmouseStateWithDelta(NmouseStateWithDelta* pOutState,
  NmouseHandle handle) {
  int count = 0;
  return GetNmouseTransferMemoryAccessor().GetNmouseStatesWithDelta(&count,
    pOutState, 1, handle);
}

Result GetNmouseStatesWithDelta(int* pOutCount,
  NmouseStateWithDelta* pOutStates, int count, NmouseHandle handle) {
  return GetNmouseTransferMemoryAccessor().GetNmouseStatesWithDelta(
    pOutCount, pOutStates, count, handle);
}

// The overlay is released in the server first, then the local memory and the
// applet resource.
Result FinalizeOverlayNmouse() {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  Result result =
    proxy->FinalizeOverlayNmouse(utility::GetAppletResourceUserId());
  if (result.IsSuccess()) {
    result = g_OverlayNmouseAccessor.FinalizeTransferMemory();
    if (result.IsSuccess()) {
      result = hid::detail::GetAppletResourceHolder().Deactivate();
    }
  }
  return result;
}

Result ListOverlayNmouseHandles(int* pOutCount, NmouseHandle* pOutHandles,
  int count) {
  return g_OverlayNmouseAccessor.ListNmouseHandles(pOutCount, pOutHandles,
    count);
}

Result GetMergedOverlayNmouseHandle(NmouseHandle* pOutHandle) {
  return g_OverlayNmouseAccessor.GetMergedHandle(pOutHandle);
}

Result IsEnabledShowingCursor(bool* pOutIsEnabled) {
  return g_OverlayNmouseAccessor.IsEnabledShowingCursor(pOutIsEnabled);
}

Result GetOverlayNmouseState(NmouseState* pOutState,
  const NmouseHandle& handle) {
  int count = 0;
  return g_OverlayNmouseAccessor.GetNmouseStates(&count, pOutState, 1,
    handle);
}

Result GetOverlayNmouseStates(int* pOutCount, NmouseState* pOutStates,
  int count, const NmouseHandle& handle) {
  return g_OverlayNmouseAccessor.GetNmouseStates(pOutCount, pOutStates, count,
    handle);
}

}
