#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern U8 GameData_1f8f570[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f902c0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1faf3d8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1faf458[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1843070(U64, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_1fbf688[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fbfad0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda848[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ff1de8[];
[[gnu::visibility("hidden")]] extern U8 GameData_2007178[];
[[gnu::visibility("hidden")]] extern U8 GameData_20167d0[];
[[gnu::visibility("hidden")]] extern U8 GameData_20184e8[];
[[gnu::visibility("hidden")]] extern U8 GameData_2018948[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1842ee0(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1843470(U64, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_2088c00[];
[[gnu::visibility("hidden")]] extern U8 GameData_2088e80[];
[[gnu::visibility("hidden")]] extern U8 GameData_2088ef0[];
[[gnu::visibility("hidden")]] U64 GameRoutine_18431d0(U64, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_20a34c0[];
[[gnu::visibility("hidden")]] extern U8 GameData_20b60d8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20b6158[];
[[gnu::visibility("hidden")]] extern U8 GameData_20c9238[];
[[gnu::visibility("hidden")]] extern U8 GameData_20c92b8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20da560[];
[[gnu::visibility("hidden")]] extern U8 GameData_20e5fe0[];
[[gnu::visibility("hidden")]] extern U8 GameData_20e8ba8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20e8c28[];
[[gnu::visibility("hidden")]] extern U8 GameData_20e9028[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1843310(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_18435a0(U64, U32);

[[gnu::visibility("hidden")]] void GameStub_123c90(U64 self, U64* argument) {
  using Method = void (*)(U64, float);
  const U64 target = *argument;
  At<Method>(At<U64>(target, 0), 0x48)(target, At<float>(self, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_123d70(U64 self, U64* argument) {
  using Method = void (*)(U64, float);
  const U64 target = *argument;
  At<Method>(At<U64>(target, 0), 0x48)(target, At<float>(self, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_123e50(U64 self, U64* argument) {
  using Method = void (*)(U64, float);
  const U64 target = *argument;
  At<Method>(At<U64>(target, 0), 0x48)(target, At<float>(self, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_123f30(U64 self, U64* argument) {
  using Method = void (*)(U64, float);
  const U64 target = *argument;
  At<Method>(At<U64>(target, 0), 0x48)(target, At<float>(self, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_124010(U64 self, U64* argument) {
  using Method = void (*)(U64, float);
  const U64 target = *argument;
  At<Method>(At<U64>(target, 0), 0x48)(target, At<float>(self, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_1240f0(U64 self, U64* argument) {
  using Method = void (*)(U64, float);
  const U64 target = *argument;
  At<Method>(At<U64>(target, 0), 0x48)(target, At<float>(self, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_1241d0(U64 self, U64* argument) {
  using Method = void (*)(U64, float);
  const U64 target = *argument;
  At<Method>(At<U64>(target, 0), 0x48)(target, At<float>(self, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_1242b0(U64 self, U64* argument) {
  using Method = void (*)(U64, float);
  const U64 target = *argument;
  At<Method>(At<U64>(target, 0), 0x48)(target, At<float>(self, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_124390(U64 self, U64* argument) {
  using Method = void (*)(U64, float);
  const U64 target = *argument;
  At<Method>(At<U64>(target, 0), 0x48)(target, At<float>(self, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_124470(U64 self, U64* argument) {
  using Method = void (*)(U64, float);
  const U64 target = *argument;
  At<Method>(At<U64>(target, 0), 0x48)(target, At<float>(self, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_124550(U64 self, U64* argument) {
  using Method = void (*)(U64, float);
  const U64 target = *argument;
  At<Method>(At<U64>(target, 0), 0x48)(target, At<float>(self, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_124630(U64 self, U64* argument) {
  using Method = void (*)(U64, float);
  const U64 target = *argument;
  At<Method>(At<U64>(target, 0), 0x48)(target, At<float>(self, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_124710(U64 self, U64* argument) {
  using Method = void (*)(U64, float);
  const U64 target = *argument;
  At<Method>(At<U64>(target, 0), 0x48)(target, At<float>(self, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_138160(U64 self, U64* argument) {
  using Method = void (*)(U64, float);
  const U64 target = *argument;
  At<Method>(At<U64>(target, 0), 0x50)(target, At<float>(self, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_138240(U64 self, U64* argument) {
  using Method = void (*)(U64, float);
  const U64 target = *argument;
  At<Method>(At<U64>(target, 0), 0x50)(target, At<float>(self, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_138320(U64 self, U64* argument) {
  using Method = void (*)(U64, float);
  const U64 target = *argument;
  At<Method>(At<U64>(target, 0), 0x50)(target, At<float>(self, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_654a10(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_1f8f570);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
  At<U64>(out, 0x10) = At<U64>(self, 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_66ce00(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_1f902c0);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
  At<U64>(out, 0x10) = At<U64>(self, 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_94e4c0(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_1faf3d8);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_94e6f0(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_1faf458);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_9c0060(U64, U64* first,
    U32* second) {
  return GameRoutine_1843070(*first, *second);
}

[[gnu::visibility("hidden")]] void GameStub_a49ee0(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_1fbf688);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_a52e10(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_1fbfad0);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
  At<U64>(out, 0x10) = At<U64>(self, 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_d0b9b0(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_1fda848);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_f0e850(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_1ff1de8);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
  At<U64>(out, 0x10) = At<U64>(self, 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_1089230(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_2007178);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_11c36d0(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_20167d0);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
  At<U64>(out, 0x10) = At<U64>(self, 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_11f75c0(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_20184e8);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
  At<U64>(out, 0x10) = At<U64>(self, 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_11ffdf0(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_2018948);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_15cf210(U64, U64* first,
    U32* second) {
  return GameRoutine_1842ee0(*first, *second);
}

[[gnu::visibility("hidden")]] U64 GameStub_1645960(U64, U64* first,
    U32* second) {
  return GameRoutine_1843470(*first, *second);
}

[[gnu::visibility("hidden")]] void GameStub_16a8990(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_2088c00);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_16a93a0(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_2088e80);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_16a9500(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_2088ef0);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_16bfb70(U64, U64* first,
    U32* second) {
  return GameRoutine_1843470(*first, *second);
}

[[gnu::visibility("hidden")]] U64 GameStub_16f31f0(U64, U64* first,
    U32* second) {
  return GameRoutine_18431d0(*first, *second);
}

[[gnu::visibility("hidden")]] U64 GameStub_16f8b20(U64, U64* first,
    U32* second) {
  return GameRoutine_18431d0(*first, *second);
}

[[gnu::visibility("hidden")]] void GameStub_16fc840(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_20a34c0);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_1709220(U64, U64* first,
    U32* second) {
  return GameRoutine_1843070(*first, *second);
}

[[gnu::visibility("hidden")]] U64 GameStub_170bcd0(U64, U64* first,
    U32* second) {
  return GameRoutine_1842ee0(*first, *second);
}

[[gnu::visibility("hidden")]] void GameStub_17338d0(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_20b60d8);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
  At<U64>(out, 0x10) = At<U64>(self, 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_1734220(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_20b6158);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
  At<U64>(out, 0x10) = At<U64>(self, 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_1793090(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_20c9238);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
  At<U64>(out, 0x10) = At<U64>(self, 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_1794480(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_20c92b8);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
  At<U64>(out, 0x10) = At<U64>(self, 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_17a1db0(U64, U64* first,
    U32* second) {
  return GameRoutine_1843070(*first, *second);
}

[[gnu::visibility("hidden")]] void GameStub_17e1ba0(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_20da560);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
  At<U64>(out, 0x10) = At<U64>(self, 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_17e2290(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e23a0(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e24b0(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e25c0(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e26d0(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e27e0(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e28f0(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e2a00(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e2b10(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e2c20(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e2d30(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e3150(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e3260(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e3370(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e3480(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e3590(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e36a0(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e37b0(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e38c0(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e39d0(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_17e3ae0(U64 self) {
  const int64_t adjust = At<int64_t>(self, 0x10);
  const U64 target = At<U64>(self, 0x18) + (adjust >> 1);
  U64 method = At<U64>(self, 0x8);
  if ((adjust & 1) != 0) {
    method = At<U64>(At<U64>(target, 0), method);
  }

  reinterpret_cast<void (*)(U64)>(method)(target);
}

[[gnu::visibility("hidden")]] void GameStub_1849f90(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_20e5fe0);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_1852510(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_20e8ba8);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_1852610(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_20e8c28);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_1853fc0(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(GameData_20e9028);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_185fd80(U64, U64* first,
    U32* second) {
  return GameRoutine_18431d0(*first, *second);
}

[[gnu::visibility("hidden")]] U64 GameStub_1865260(U64, U64* first,
    U32* second) {
  return GameRoutine_1843310(*first, *second);
}

[[gnu::visibility("hidden")]] U64 GameStub_1882df0(U64, U64* first,
    U32* second) {
  return GameRoutine_18431d0(*first, *second);
}

[[gnu::visibility("hidden")]] U64 GameStub_19320d0(U64, U64* first,
    U32* second) {
  return GameRoutine_18435a0(*first, *second);
}

[[gnu::visibility("hidden")]] U64 GameStub_199b780(U64, U64* first,
    U32* second) {
  return GameRoutine_18431d0(*first, *second);
}
