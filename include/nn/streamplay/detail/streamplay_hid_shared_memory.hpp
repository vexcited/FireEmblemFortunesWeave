#pragma once

#include <algorithm>
#include <atomic>
#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"
#include "nn/span.hpp"
#include "nn/streamplay/detail/streamplay_ring_lifo.hpp"
#include "nn/streamplay/streamplay_hid.hpp"

namespace nn::streamplay {

template <size_t N, size_t M>
void ConvertState(GuestTouchScreenState<N>* pOutState,
  const GuestTouchScreenState<M>& state) {
  pOutState->state.samplingNumber = state.state.samplingNumber;
  pOutState->state.count =
    std::min(state.state.count, static_cast<int32_t>(N));
  for (size_t i = 0; i < N; ++i) {
    pOutState->state.touches[i] = state.state.touches[i];
  }
  pOutState->state.reserved = state.state.reserved;
  pOutState->reserved = state.reserved;
}

template <size_t N>
void ConvertState(GuestTouchScreenState<N>* pOutState,
  const GuestTouchScreenState<N>& state) {
  ConvertState<N, N>(pOutState, state);
}

}

namespace nn::streamplay::detail {

enum ControllerColorStatus : uint32_t {
  ControllerColorStatus_None,
  ControllerColorStatus_Valid,
};

struct ControllerColorState {
  ControllerColorStatus status;
  hid::NpadControllerColor color;
  int64_t samplingNumber;
};

struct DualControllerColorState {
  ControllerColorStatus status;
  hid::NpadControllerColor left;
  hid::NpadControllerColor right;
  int64_t samplingNumber;
};

inline int64_t GetSamplingNumber(const ControllerColorState& value) {
  return value.samplingNumber;
}

inline int64_t GetSamplingNumber(const DualControllerColorState& value) {
  return value.samplingNumber;
}

struct GuestNmouseInfoState {
  bool isValid;
  uint8_t reserved0;
  GuestId guestId;
  uint8_t reserved1[5];
  GuestNmouseHandle handle;
  GuestNmouseTypeSet types;
  hid::NpadIdType npadId;
  uint8_t reserved2[0x100];
  int64_t samplingNumber;
};

inline int64_t GetSamplingNumber(const GuestNmouseInfoState& value) {
  return value.samplingNumber;
}

struct GuestNmouseStateOnSharedMemory {
  int64_t reserved;
  hid::NmouseState state;
  uint8_t extension[0x40];
};

inline void ConvertState(GuestNmouseState* pOutState,
  const GuestNmouseStateOnSharedMemory& state) {
  pOutState->state.timestamp = state.state.timestamp;
  pOutState->state.samplingNumber = state.state.samplingNumber;
  pOutState->state.x = state.state.x;
  pOutState->state.y = state.state.y;
  pOutState->state.deltaX = state.state.deltaX;
  pOutState->state.deltaY = state.state.deltaY;
  pOutState->state.wheelDeltaX = state.state.wheelDeltaX;
  pOutState->state.wheelDeltaY = state.state.wheelDeltaY;
  pOutState->state.buttons = state.state.buttons;
  pOutState->state.attributes = state.state.attributes;
  pOutState->reserved = state.reserved;
}

constexpr int NmouseStateLifoCapacity = 33;
constexpr int NmouseInfoLifoCapacity = 2;

class NmouseSharedMemoryStorage {
 public:
  void CleanUp();
  bool ReadHandle(GuestNmouseHandle* pOutHandle) const;
  bool CompareHandleAndReadInfo(GuestNmouseInfoState* pOutInfo,
    GuestNmouseHandle handle) const;
  bool CompareHandleAndReadStates(int* pOutCount,
    Span<GuestNmouseState> states, GuestNmouseHandle handle) const;
  void AppendStateAndInfo(const GuestNmouseStateOnSharedMemory& state,
    const GuestNmouseInfoState& info);
  void AppendInfoAndClearState(const GuestNmouseInfoState& info);
  void AppendInfo(const GuestNmouseInfoState& info);
  void AppendState(const GuestNmouseStateOnSharedMemory& state);

 private:
  RingLifo<GuestNmouseStateOnSharedMemory, NmouseStateLifoCapacity> m_States;
  RingLifo<GuestNmouseInfoState, NmouseInfoLifoCapacity> m_Info;
  uint8_t m_Reserved[0x110];
};

static_assert(sizeof(NmouseSharedMemoryStorage) == 0x1400);

constexpr int GuestCountMax = 3;
constexpr int LifoCapacity = 33;
constexpr int ControllerColorLifoCapacity = 2;
constexpr int SixAxisSensorCountMax = 6;
constexpr int JcmsCountMax = 4;
constexpr int NmouseStorageCountMax = 6;

struct HidSharedMemoryFormat {
  struct NpadEntry {
    std::atomic<uint32_t> styleSet;
    uint8_t reserved0[0x24];
    RingLifo<GuestPadState<hid::NpadFullKeyState>, LifoCapacity> fullKey;
    RingLifo<GuestPadState<hid::NpadHandheldState>, LifoCapacity> handheld;
    RingLifo<GuestPadState<hid::NpadJoyDualState>, LifoCapacity> joyDual;
    RingLifo<GuestPadState<hid::NpadJoyLeftState>, LifoCapacity> joyLeft;
    RingLifo<GuestPadState<hid::NpadJoyRightState>, LifoCapacity> joyRight;
    RingLifo<GuestSixAxisSensorState, LifoCapacity>
      sixAxisSensor[SixAxisSensorCountMax];
    RingLifo<ControllerColorState, ControllerColorLifoCapacity> color;
    RingLifo<DualControllerColorState, ControllerColorLifoCapacity> dualColor;
    uint8_t reserved1[0x43c0];
  };

  struct TouchScreenEntry {
    RingLifo<GuestTouchScreenState<hid::TouchStateCountMax>, LifoCapacity>
      lifo;
    uint8_t reserved[0x950];
  };

  struct JcmsEntry {
    RingLifo<GuestJcmsState, LifoCapacity> lifo;
    uint8_t reserved[0x1c0];
  };

  NpadEntry npad[3][GuestCountMax];
  TouchScreenEntry touchScreen[GuestCountMax];
  JcmsEntry jcms[JcmsCountMax][GuestCountMax];
  NmouseSharedMemoryStorage nmouse[NmouseStorageCountMax][GuestCountMax];
};

static_assert(sizeof(HidSharedMemoryFormat::NpadEntry) == 0xc000);
static_assert(offsetof(HidSharedMemoryFormat, touchScreen) == 0x6c000);
static_assert(offsetof(HidSharedMemoryFormat, jcms) == 0x7e000);
static_assert(offsetof(HidSharedMemoryFormat, nmouse) == 0x84000);

class HidSharedMemoryAccessor {
 public:
  explicit HidSharedMemoryAccessor(const HidSharedMemoryFormat* pFormat);

  template <size_t N>
  int GetGuestTouchScreenStates(GuestTouchScreenState<N>* pOutStates,
    int count, GuestId id) const;
  hid::NpadStyleSet GetGuestPadStyleSet(const GuestPadId& id) const;
  Result GetGuestPadControllerColor(hid::NpadControllerColor* pOutColor,
    const GuestPadId& id) const;
  Result GetGuestPadControllerColor(hid::NpadControllerColor* pOutLeftColor,
    hid::NpadControllerColor* pOutRightColor, const GuestPadId& id) const;
  int GetGuestPadStates(GuestPadState<hid::NpadFullKeyState>* pOutStates,
    int count, const GuestPadId& id) const;
  int GetGuestPadStates(GuestPadState<hid::NpadHandheldState>* pOutStates,
    int count, const GuestPadId& id) const;
  int GetGuestPadStates(GuestPadState<hid::NpadJoyDualState>* pOutStates,
    int count, const GuestPadId& id) const;
  int GetGuestPadStates(GuestPadState<hid::NpadJoyLeftState>* pOutStates,
    int count, const GuestPadId& id) const;
  int GetGuestPadStates(GuestPadState<hid::NpadJoyRightState>* pOutStates,
    int count, const GuestPadId& id) const;
  int GetGuestSixAxisSensorStates(GuestSixAxisSensorState* pOutStates,
    int count, const GuestSixAxisSensorHandle& handle) const;
  int GetGuestJcmsStates(GuestJcmsState* pOutStates, int count,
    const GuestJcmsHandle& handle) const;
  bool GetGuestMergedNmouseHandle(GuestNmouseHandle* pOutHandle,
    GuestId id) const;
  int GetGuestNmouseHandles(GuestNmouseHandle* pOutHandles, int count,
    const GuestPadId& id) const;
  bool GetNmouseTypeSet(GuestNmouseTypeSet* pOutTypes,
    const GuestNmouseHandle& handle) const;
  bool GetGuestPadId(GuestPadId* pOutId,
    const GuestNmouseHandle& handle) const;
  bool GetGuestId(GuestId* pOutId, const GuestNmouseHandle& handle) const;
  bool GetGuestNmouseStates(int* pOutCount, GuestNmouseState* pOutStates,
    int count, const GuestNmouseHandle& handle) const;

 private:
  const HidSharedMemoryFormat* m_pFormat;
};

// Readers fill this many empty states when the guest has no shared memory.
constexpr int DefaultStateCount = 2;

template <typename T>
inline int GetDefaultStates(T* pOutStates, int count) {
  const int fillCount = static_cast<int>(
    std::min(static_cast<size_t>(count),
      static_cast<size_t>(DefaultStateCount)));
  for (int i = 0; i < fillCount; ++i) {
    pOutStates[i] = T{};
    pOutStates[i].state.samplingNumber = DefaultStateCount - 1 - i;
  }
  return fillCount;
}

}
