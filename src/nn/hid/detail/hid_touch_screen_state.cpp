#include "nn/hid/detail/hid_touch_screen_accessor.hpp"

namespace nn::hid::detail {

template <size_t N>
Result GetTouchScreenState(TouchScreenState<N>* pOutState) {
  if (pOutState == nullptr) {
    return ResultTouchScreenNullStateBuffer;
  }
  const TouchScreenLifo* pLifo =
    GetTouchScreenSharedMemoryAccessor().GetLifo();
  if (pLifo == nullptr) {
    return ResultTouchScreenNotInitialized;
  }
  pLifo->Read(pOutState, 1);
  return Result{};
}

template Result GetTouchScreenState<1>(TouchScreenState<1>*);
template Result GetTouchScreenState<2>(TouchScreenState<2>*);
template Result GetTouchScreenState<3>(TouchScreenState<3>*);
template Result GetTouchScreenState<4>(TouchScreenState<4>*);
template Result GetTouchScreenState<5>(TouchScreenState<5>*);
template Result GetTouchScreenState<6>(TouchScreenState<6>*);
template Result GetTouchScreenState<7>(TouchScreenState<7>*);
template Result GetTouchScreenState<8>(TouchScreenState<8>*);
template Result GetTouchScreenState<9>(TouchScreenState<9>*);
template Result GetTouchScreenState<10>(TouchScreenState<10>*);
template Result GetTouchScreenState<11>(TouchScreenState<11>*);
template Result GetTouchScreenState<12>(TouchScreenState<12>*);
template Result GetTouchScreenState<13>(TouchScreenState<13>*);
template Result GetTouchScreenState<14>(TouchScreenState<14>*);
template Result GetTouchScreenState<15>(TouchScreenState<15>*);
template Result GetTouchScreenState<16>(TouchScreenState<16>*);

template <size_t N>
Result GetTouchScreenStates(int* pOutCount, TouchScreenState<N>* pOutStates,
  int count) {
  if (pOutStates == nullptr) {
    return ResultTouchScreenNullStateBuffer;
  }
  if (count < 0) {
    return ResultTouchScreenInvalidStateCount;
  }
  *pOutCount = GetTouchScreenSharedMemoryAccessor().GetLifo()->Read(
    pOutStates, count);
  return Result{};
}

template Result GetTouchScreenStates<1>(int*, TouchScreenState<1>*, int);
template Result GetTouchScreenStates<2>(int*, TouchScreenState<2>*, int);
template Result GetTouchScreenStates<3>(int*, TouchScreenState<3>*, int);
template Result GetTouchScreenStates<4>(int*, TouchScreenState<4>*, int);
template Result GetTouchScreenStates<5>(int*, TouchScreenState<5>*, int);
template Result GetTouchScreenStates<6>(int*, TouchScreenState<6>*, int);
template Result GetTouchScreenStates<7>(int*, TouchScreenState<7>*, int);
template Result GetTouchScreenStates<8>(int*, TouchScreenState<8>*, int);
template Result GetTouchScreenStates<9>(int*, TouchScreenState<9>*, int);
template Result GetTouchScreenStates<10>(int*, TouchScreenState<10>*, int);
template Result GetTouchScreenStates<11>(int*, TouchScreenState<11>*, int);
template Result GetTouchScreenStates<12>(int*, TouchScreenState<12>*, int);
template Result GetTouchScreenStates<13>(int*, TouchScreenState<13>*, int);
template Result GetTouchScreenStates<14>(int*, TouchScreenState<14>*, int);
template Result GetTouchScreenStates<15>(int*, TouchScreenState<15>*, int);
template Result GetTouchScreenStates<16>(int*, TouchScreenState<16>*, int);

}
