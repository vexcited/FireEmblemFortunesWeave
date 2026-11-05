#include "nn/diag/diag_abort.hpp"
#include "nn/streamplay/detail/streamplay_hid_application_resource_holder.hpp"
#include "nn/streamplay/detail/streamplay_hid_util.hpp"
#include "nn/streamplay/streamplay_hid.hpp"

// Every failed requirement keeps its own abort call in the original.
#define NN_STREAMPLAY_REQUIRES(condition) \
  do { \
    if (!(condition)) { \
      [[clang::nomerge]] ::nn::diag::detail::AbortImpl(); \
    } \
  } while (false)

#define NN_STREAMPLAY_REQUIRES_NOT_NULL(pointer) \
  NN_STREAMPLAY_REQUIRES(::nn::diag::detail::NotNullImpl( \
    reinterpret_cast<uintptr_t>(pointer)))

namespace nn::streamplay {

namespace {

constexpr Result ResultControllerColorNotAvailable = {0x651f};

inline const detail::HidSharedMemoryAccessor& GetAccessor() {
  return detail::g_HidApplicationResourceHolder->GetSharedMemoryAccessorRef();
}

inline bool IsSingleStyle(hid::NpadStyleSet style) {
  const uint32_t bits = style._storage[0];
  return bits != 0 && (bits & (bits - 1)) == 0;
}

}

template <size_t N>
int GetGuestTouchScreenStates(GuestTouchScreenState<N>* pOutStates,
  int count, GuestId id) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutStates);
  NN_STREAMPLAY_REQUIRES(count >= 0);
  NN_STREAMPLAY_REQUIRES(detail::IsGuestIdValid(id));
  if (detail::GetHidApplicationResourceHolder() == nullptr) {
    return detail::GetDefaultStates(pOutStates, count);
  }
  return GetAccessor().GetGuestTouchScreenStates(pOutStates, count, id);
}

template int GetGuestTouchScreenStates<1>(GuestTouchScreenState<1>*, int,
  GuestId);
template int GetGuestTouchScreenStates<2>(GuestTouchScreenState<2>*, int,
  GuestId);
template int GetGuestTouchScreenStates<3>(GuestTouchScreenState<3>*, int,
  GuestId);
template int GetGuestTouchScreenStates<4>(GuestTouchScreenState<4>*, int,
  GuestId);
template int GetGuestTouchScreenStates<5>(GuestTouchScreenState<5>*, int,
  GuestId);
template int GetGuestTouchScreenStates<6>(GuestTouchScreenState<6>*, int,
  GuestId);
template int GetGuestTouchScreenStates<7>(GuestTouchScreenState<7>*, int,
  GuestId);
template int GetGuestTouchScreenStates<8>(GuestTouchScreenState<8>*, int,
  GuestId);
template int GetGuestTouchScreenStates<9>(GuestTouchScreenState<9>*, int,
  GuestId);
template int GetGuestTouchScreenStates<10>(GuestTouchScreenState<10>*, int,
  GuestId);
template int GetGuestTouchScreenStates<11>(GuestTouchScreenState<11>*, int,
  GuestId);
template int GetGuestTouchScreenStates<12>(GuestTouchScreenState<12>*, int,
  GuestId);
template int GetGuestTouchScreenStates<13>(GuestTouchScreenState<13>*, int,
  GuestId);
template int GetGuestTouchScreenStates<14>(GuestTouchScreenState<14>*, int,
  GuestId);
template int GetGuestTouchScreenStates<15>(GuestTouchScreenState<15>*, int,
  GuestId);
template int GetGuestTouchScreenStates<16>(GuestTouchScreenState<16>*, int,
  GuestId);

namespace {

template <typename T>
inline int GetGuestPadStatesImpl(GuestPadState<T>* pOutStates, int count,
  const GuestPadId& id) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutStates);
  NN_STREAMPLAY_REQUIRES(count >= 0);
  NN_STREAMPLAY_REQUIRES(detail::IsNpadIdTypeValid(id.npadId));
  NN_STREAMPLAY_REQUIRES(detail::IsGuestIdValid(id.guestId));
  if (detail::GetHidApplicationResourceHolder() == nullptr) {
    return detail::GetDefaultStates(pOutStates, count);
  }
  return GetAccessor().GetGuestPadStates(pOutStates, count, id);
}

}

int GetGuestPadStates(GuestPadState<hid::NpadFullKeyState>* pOutStates,
  int count, const GuestPadId& id) {
  return GetGuestPadStatesImpl(pOutStates, count, id);
}

int GetGuestPadStates(GuestPadState<hid::NpadHandheldState>* pOutStates,
  int count, const GuestPadId& id) {
  return GetGuestPadStatesImpl(pOutStates, count, id);
}

int GetGuestPadStates(GuestPadState<hid::NpadJoyDualState>* pOutStates,
  int count, const GuestPadId& id) {
  return GetGuestPadStatesImpl(pOutStates, count, id);
}

int GetGuestPadStates(GuestPadState<hid::NpadJoyRightState>* pOutStates,
  int count, const GuestPadId& id) {
  return GetGuestPadStatesImpl(pOutStates, count, id);
}

int GetGuestPadStates(GuestPadState<hid::NpadJoyLeftState>* pOutStates,
  int count, const GuestPadId& id) {
  return GetGuestPadStatesImpl(pOutStates, count, id);
}

hid::NpadStyleSet GetGuestPadStyleSet(const GuestPadId& id) {
  NN_STREAMPLAY_REQUIRES(detail::IsNpadIdTypeValid(id.npadId));
  NN_STREAMPLAY_REQUIRES(detail::IsGuestIdValid(id.guestId));
  if (detail::GetHidApplicationResourceHolder() == nullptr) {
    return {};
  }
  return GetAccessor().GetGuestPadStyleSet(id);
}

Result GetGuestPadControllerColor(hid::NpadControllerColor* pOutColor,
  const GuestPadId& id) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutColor);
  NN_STREAMPLAY_REQUIRES(detail::IsNpadIdTypeValid(id.npadId));
  NN_STREAMPLAY_REQUIRES(detail::IsGuestIdValid(id.guestId));
  if (detail::GetHidApplicationResourceHolder() == nullptr) {
    return ResultControllerColorNotAvailable;
  }
  return GetAccessor().GetGuestPadControllerColor(pOutColor, id);
}

Result GetGuestPadControllerColor(hid::NpadControllerColor* pOutLeftColor,
  hid::NpadControllerColor* pOutRightColor, const GuestPadId& id) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutLeftColor);
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutRightColor);
  NN_STREAMPLAY_REQUIRES(detail::IsNpadIdTypeValid(id.npadId));
  NN_STREAMPLAY_REQUIRES(detail::IsGuestIdValid(id.guestId));
  if (detail::GetHidApplicationResourceHolder() == nullptr) {
    return ResultControllerColorNotAvailable;
  }
  return GetAccessor().GetGuestPadControllerColor(pOutLeftColor,
    pOutRightColor, id);
}

int GetGuestSixAxisSensorHandles(GuestSixAxisSensorHandle* pOutHandles,
  int count, const GuestPadId& id, hid::NpadStyleSet style) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutHandles);
  NN_STREAMPLAY_REQUIRES(count > 0);
  NN_STREAMPLAY_REQUIRES(count <= 8);
  NN_STREAMPLAY_REQUIRES(detail::IsNpadIdTypeValid(id.npadId));
  NN_STREAMPLAY_REQUIRES(detail::IsGuestIdValid(id.guestId));
  NN_STREAMPLAY_REQUIRES(style._storage[0] != 0);
  NN_STREAMPLAY_REQUIRES(IsSingleStyle(style));
  return detail::GetSixAxisSensorHandle(pOutHandles, count, id, style);
}

int GetGuestSixAxisSensorStates(GuestSixAxisSensorState* pOutStates,
  int count, const GuestSixAxisSensorHandle& handle) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutStates);
  NN_STREAMPLAY_REQUIRES(count >= 0);
  NN_STREAMPLAY_REQUIRES(detail::IsSixAxisSensorHandleValid(handle));
  if (detail::GetHidApplicationResourceHolder() == nullptr) {
    return detail::GetDefaultStates(pOutStates, count);
  }
  return GetAccessor().GetGuestSixAxisSensorStates(pOutStates, count, handle);
}

int GetGuestVibrationDeviceHandles(GuestVibrationDeviceHandle* pOutHandles,
  int count, const GuestPadId& id, hid::NpadStyleSet style) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutHandles);
  NN_STREAMPLAY_REQUIRES(count > 0);
  NN_STREAMPLAY_REQUIRES(detail::IsNpadIdTypeValid(id.npadId));
  NN_STREAMPLAY_REQUIRES(detail::IsGuestIdValid(id.guestId));
  NN_STREAMPLAY_REQUIRES(style._storage[0] != 0);
  NN_STREAMPLAY_REQUIRES(IsSingleStyle(style));
  return detail::GetVibrationDeviceHandle(pOutHandles, count, id, style);
}

void GetGuestVibrationDeviceInfo(hid::VibrationDeviceInfo* pOutInfo,
  const GuestVibrationDeviceHandle& handle) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutInfo);
  NN_STREAMPLAY_REQUIRES(detail::IsVibrationDeviceHandleValid(handle));
  detail::GetVibrationDeviceInfo(pOutInfo, handle);
}

GuestJcmsHandle GetGuestJcmsHandle(const GuestPadId& id,
  const hid::JcmsType& type) {
  NN_STREAMPLAY_REQUIRES(detail::IsNpadIdTypeValid(id.npadId));
  NN_STREAMPLAY_REQUIRES(detail::IsGuestIdValid(id.guestId));
  NN_STREAMPLAY_REQUIRES(detail::IsJcmsTypeValid(type));
  return detail::GetGuestJcmsHandle(id, type);
}

int GetGuestJcmsStates(GuestJcmsState* pOutStates, int count,
  const GuestJcmsHandle& handle) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutStates);
  NN_STREAMPLAY_REQUIRES(count > 0);
  NN_STREAMPLAY_REQUIRES(count <= 32);
  NN_STREAMPLAY_REQUIRES(detail::IsJcmsHandleValid(handle));
  if (detail::GetHidApplicationResourceHolder() == nullptr) {
    return detail::GetDefaultStates(pOutStates, count);
  }
  return GetAccessor().GetGuestJcmsStates(pOutStates, count, handle);
}

bool GetGuestMergedNmouseHandle(GuestNmouseHandle* pOutHandle, GuestId id) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutHandle);
  NN_STREAMPLAY_REQUIRES(detail::IsGuestIdValid(id));
  if (detail::GetHidApplicationResourceHolder() == nullptr) {
    return false;
  }
  return GetAccessor().GetGuestMergedNmouseHandle(pOutHandle, id);
}

int GetGuestNmouseHandles(GuestNmouseHandle* pOutHandles, int count,
  const GuestPadId& id) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutHandles);
  NN_STREAMPLAY_REQUIRES(count > 0);
  NN_STREAMPLAY_REQUIRES(count <= 2);
  NN_STREAMPLAY_REQUIRES(detail::IsNpadIdTypeValid(id.npadId));
  NN_STREAMPLAY_REQUIRES(detail::IsGuestIdValid(id.guestId));
  if (detail::GetHidApplicationResourceHolder() == nullptr) {
    return 0;
  }
  return GetAccessor().GetGuestNmouseHandles(pOutHandles, count, id);
}

bool GetGuestNmouseTypeSet(GuestNmouseTypeSet* pOutTypes,
  const GuestNmouseHandle& handle) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutTypes);
  if (detail::GetHidApplicationResourceHolder() == nullptr) {
    return false;
  }
  return GetAccessor().GetNmouseTypeSet(pOutTypes, handle);
}

bool GetGuestPadId(GuestPadId* pOutId, const GuestNmouseHandle& handle) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutId);
  if (detail::GetHidApplicationResourceHolder() == nullptr) {
    return false;
  }
  return GetAccessor().GetGuestPadId(pOutId, handle);
}

bool GetGuestId(GuestId* pOutId, const GuestNmouseHandle& handle) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutId);
  if (detail::GetHidApplicationResourceHolder() == nullptr) {
    return false;
  }
  return GetAccessor().GetGuestId(pOutId, handle);
}

bool GetGuestNmouseStates(int* pOutCount, GuestNmouseState* pOutStates,
  int count, const GuestNmouseHandle& handle) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutCount);
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutStates);
  NN_STREAMPLAY_REQUIRES(count > 0);
  NN_STREAMPLAY_REQUIRES(count <= 32);
  if (detail::GetHidApplicationResourceHolder() == nullptr) {
    return false;
  }
  return GetAccessor().GetGuestNmouseStates(pOutCount, pOutStates, count,
    handle);
}

}
