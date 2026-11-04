#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/hid_touch_screen.hpp"

namespace nn::hid {

namespace detail {

template <size_t N>
Result GetTouchScreenState(TouchScreenState<N>* pOutState);
template <size_t N>
Result GetTouchScreenStates(int* pOutCount, TouchScreenState<N>* pOutStates,
  int count);

}

template <size_t N>
void GetTouchScreenState(TouchScreenState<N>* pOutState) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTouchScreenState(pOutState));
}

template <size_t N>
int GetTouchScreenStates(TouchScreenState<N>* pOutStates, int count) {
  int readCount = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetTouchScreenStates(&readCount, pOutStates, count));
  return readCount;
}

template void GetTouchScreenState<1>(TouchScreenState<1>*);
template void GetTouchScreenState<2>(TouchScreenState<2>*);
template void GetTouchScreenState<3>(TouchScreenState<3>*);
template void GetTouchScreenState<4>(TouchScreenState<4>*);
template void GetTouchScreenState<5>(TouchScreenState<5>*);
template void GetTouchScreenState<6>(TouchScreenState<6>*);
template void GetTouchScreenState<7>(TouchScreenState<7>*);
template void GetTouchScreenState<8>(TouchScreenState<8>*);
template void GetTouchScreenState<9>(TouchScreenState<9>*);
template void GetTouchScreenState<10>(TouchScreenState<10>*);
template void GetTouchScreenState<11>(TouchScreenState<11>*);
template void GetTouchScreenState<12>(TouchScreenState<12>*);
template void GetTouchScreenState<13>(TouchScreenState<13>*);
template void GetTouchScreenState<14>(TouchScreenState<14>*);
template void GetTouchScreenState<15>(TouchScreenState<15>*);
template void GetTouchScreenState<16>(TouchScreenState<16>*);
template int GetTouchScreenStates<1>(TouchScreenState<1>*, int);
template int GetTouchScreenStates<2>(TouchScreenState<2>*, int);
template int GetTouchScreenStates<3>(TouchScreenState<3>*, int);
template int GetTouchScreenStates<4>(TouchScreenState<4>*, int);
template int GetTouchScreenStates<5>(TouchScreenState<5>*, int);
template int GetTouchScreenStates<6>(TouchScreenState<6>*, int);
template int GetTouchScreenStates<7>(TouchScreenState<7>*, int);
template int GetTouchScreenStates<8>(TouchScreenState<8>*, int);
template int GetTouchScreenStates<9>(TouchScreenState<9>*, int);
template int GetTouchScreenStates<10>(TouchScreenState<10>*, int);
template int GetTouchScreenStates<11>(TouchScreenState<11>*, int);
template int GetTouchScreenStates<12>(TouchScreenState<12>*, int);
template int GetTouchScreenStates<13>(TouchScreenState<13>*, int);
template int GetTouchScreenStates<14>(TouchScreenState<14>*, int);
template int GetTouchScreenStates<15>(TouchScreenState<15>*, int);
template int GetTouchScreenStates<16>(TouchScreenState<16>*, int);

namespace system {

namespace detail {

template <size_t N>
Result GetTouchScreenStateForSystemProcess(TouchScreenState<N>* pOutState);
template <size_t N>
Result GetTouchScreenStatesForSystemProcess(int* pOutCount,
  TouchScreenState<N>* pOutStates, int count);

}

template <size_t N>
void GetTouchScreenStateForSystemProcess(TouchScreenState<N>* pOutState) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetTouchScreenStateForSystemProcess(pOutState));
}

template <size_t N>
int GetTouchScreenStatesForSystemProcess(TouchScreenState<N>* pOutStates,
  int count) {
  int readCount = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTouchScreenStatesForSystemProcess(
    &readCount, pOutStates, count));
  return readCount;
}

template void GetTouchScreenStateForSystemProcess<1>(
  TouchScreenState<1>*);
template void GetTouchScreenStateForSystemProcess<2>(
  TouchScreenState<2>*);
template void GetTouchScreenStateForSystemProcess<3>(
  TouchScreenState<3>*);
template void GetTouchScreenStateForSystemProcess<4>(
  TouchScreenState<4>*);
template void GetTouchScreenStateForSystemProcess<5>(
  TouchScreenState<5>*);
template void GetTouchScreenStateForSystemProcess<6>(
  TouchScreenState<6>*);
template void GetTouchScreenStateForSystemProcess<7>(
  TouchScreenState<7>*);
template void GetTouchScreenStateForSystemProcess<8>(
  TouchScreenState<8>*);
template void GetTouchScreenStateForSystemProcess<9>(
  TouchScreenState<9>*);
template void GetTouchScreenStateForSystemProcess<10>(
  TouchScreenState<10>*);
template void GetTouchScreenStateForSystemProcess<11>(
  TouchScreenState<11>*);
template void GetTouchScreenStateForSystemProcess<12>(
  TouchScreenState<12>*);
template void GetTouchScreenStateForSystemProcess<13>(
  TouchScreenState<13>*);
template void GetTouchScreenStateForSystemProcess<14>(
  TouchScreenState<14>*);
template void GetTouchScreenStateForSystemProcess<15>(
  TouchScreenState<15>*);
template void GetTouchScreenStateForSystemProcess<16>(
  TouchScreenState<16>*);
template int GetTouchScreenStatesForSystemProcess<1>(
  TouchScreenState<1>*, int);
template int GetTouchScreenStatesForSystemProcess<2>(
  TouchScreenState<2>*, int);
template int GetTouchScreenStatesForSystemProcess<3>(
  TouchScreenState<3>*, int);
template int GetTouchScreenStatesForSystemProcess<4>(
  TouchScreenState<4>*, int);
template int GetTouchScreenStatesForSystemProcess<5>(
  TouchScreenState<5>*, int);
template int GetTouchScreenStatesForSystemProcess<6>(
  TouchScreenState<6>*, int);
template int GetTouchScreenStatesForSystemProcess<7>(
  TouchScreenState<7>*, int);
template int GetTouchScreenStatesForSystemProcess<8>(
  TouchScreenState<8>*, int);
template int GetTouchScreenStatesForSystemProcess<9>(
  TouchScreenState<9>*, int);
template int GetTouchScreenStatesForSystemProcess<10>(
  TouchScreenState<10>*, int);
template int GetTouchScreenStatesForSystemProcess<11>(
  TouchScreenState<11>*, int);
template int GetTouchScreenStatesForSystemProcess<12>(
  TouchScreenState<12>*, int);
template int GetTouchScreenStatesForSystemProcess<13>(
  TouchScreenState<13>*, int);
template int GetTouchScreenStatesForSystemProcess<14>(
  TouchScreenState<14>*, int);
template int GetTouchScreenStatesForSystemProcess<15>(
  TouchScreenState<15>*, int);
template int GetTouchScreenStatesForSystemProcess<16>(
  TouchScreenState<16>*, int);

}

}
