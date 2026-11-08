#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] U64 GameRoutine_8450e0(U64, int32_t, int32_t);
[[gnu::visibility("hidden")]] U64 GameRoutine_844950(U64, U64);

[[gnu::visibility("hidden")]] U64 GameStub_7473f0(U64 object, U64 request) {
  const U64 target = At<U64>(object, 0x8);
  At<U32>(target, 0x3178) |= At<U32>(request, 0x8);
  const U64 state = GameRoutine_8450e0(target + 0x148,
    At<int8_t>(request, 0x1), At<int8_t>(request, 0x2));
  return GameRoutine_844950(state, request);
}

[[gnu::visibility("hidden")]] U64 GameStub_747540(U64 object, U64 request) {
  const U64 target = At<U64>(object, 0x8);
  At<U32>(target, 0x3178) |= At<U32>(request, 0x8);
  const U64 state = GameRoutine_8450e0(target + 0x148,
    At<int8_t>(request, 0x1), At<int8_t>(request, 0x2));
  return GameRoutine_844950(state, request);
}

[[gnu::visibility("hidden")]] U64 GameStub_782330(U64 object, U64 request) {
  const U64 target = At<U64>(object, 0x8);
  At<U32>(target, 0x3068) |= At<U32>(request, 0x8);
  const U64 state = GameRoutine_8450e0(target + 0x38,
    At<int8_t>(request, 0x1), At<int8_t>(request, 0x2));
  return GameRoutine_844950(state, request);
}

[[gnu::visibility("hidden")]] U64 GameStub_900680(U64 object, U64 request) {
  const U64 target = At<U64>(object, 0x8);
  At<U32>(target, 0x3070) |= At<U32>(request, 0x8);
  const U64 state = GameRoutine_8450e0(target + 0x40,
    At<int8_t>(request, 0x1), At<int8_t>(request, 0x2));
  return GameRoutine_844950(state, request);
}

[[gnu::visibility("hidden")]] U64 GameStub_9007c0(U64 object, U64 request) {
  const U64 target = At<U64>(object, 0x8);
  At<U32>(target, 0x3070) |= At<U32>(request, 0x8);
  const U64 state = GameRoutine_8450e0(target + 0x40,
    At<int8_t>(request, 0x1), At<int8_t>(request, 0x2));
  return GameRoutine_844950(state, request);
}

[[gnu::visibility("hidden")]] U64 GameStub_104abb0(U64 object, U64 request) {
  const U64 target = At<U64>(object, 0x8);
  At<U32>(target, 0x3060) |= At<U32>(request, 0x8);
  const U64 state = GameRoutine_8450e0(target + 0x30,
    At<int8_t>(request, 0x1), At<int8_t>(request, 0x2));
  return GameRoutine_844950(state, request);
}

[[gnu::visibility("hidden")]] U64 GameStub_104aec0(U64 object, U64 request) {
  const U64 target = At<U64>(object, 0x8);
  At<U32>(target, 0x3060) |= At<U32>(request, 0x8);
  const U64 state = GameRoutine_8450e0(target + 0x30,
    At<int8_t>(request, 0x1), At<int8_t>(request, 0x2));
  return GameRoutine_844950(state, request);
}

[[gnu::visibility("hidden")]] U64 GameStub_1276aa0(U64 object, U64 request) {
  const U64 target = At<U64>(object, 0x8);
  At<U32>(target, 0x3070) |= At<U32>(request, 0x8);
  const U64 state = GameRoutine_8450e0(target + 0x40,
    At<int8_t>(request, 0x1), At<int8_t>(request, 0x2));
  return GameRoutine_844950(state, request);
}

[[gnu::visibility("hidden")]] U64 GameStub_1276d30(U64 object, U64 request) {
  const U64 target = At<U64>(object, 0x8);
  At<U32>(target, 0x3070) |= At<U32>(request, 0x8);
  const U64 state = GameRoutine_8450e0(target + 0x40,
    At<int8_t>(request, 0x1), At<int8_t>(request, 0x2));
  return GameRoutine_844950(state, request);
}

[[gnu::visibility("hidden")]] U64 GameStub_1276e70(U64 object, U64 request) {
  const U64 target = At<U64>(object, 0x8);
  At<U32>(target, 0x3070) |= At<U32>(request, 0x8);
  const U64 state = GameRoutine_8450e0(target + 0x40,
    At<int8_t>(request, 0x1), At<int8_t>(request, 0x2));
  return GameRoutine_844950(state, request);
}

[[gnu::visibility("hidden")]] U64 GameStub_1276fb0(U64 object, U64 request) {
  const U64 target = At<U64>(object, 0x8);
  At<U32>(target, 0x3070) |= At<U32>(request, 0x8);
  const U64 state = GameRoutine_8450e0(target + 0x40,
    At<int8_t>(request, 0x1), At<int8_t>(request, 0x2));
  return GameRoutine_844950(state, request);
}
