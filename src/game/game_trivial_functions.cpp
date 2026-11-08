#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern U8 GameData_1f909e0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f94cd8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f95958[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f97890[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f97910[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f97b10[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f97b90[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f97c10[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f98af8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f98f48[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f98fc8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f99048[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f99148[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f99748[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f9b7a8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f9c968[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f9f930[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fa13e8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fa1468[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fac2a0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1faca60[];
[[gnu::visibility("hidden")]] extern U8 GameData_1facf80[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fbd098[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fc2718[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fc2798[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fc2818[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd0ad0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd20c0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fdd3d0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fe1f70[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fe1ff0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fe2070[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fe81c8[];
[[gnu::visibility("hidden")]] extern U8 GameData_2005218[];
[[gnu::visibility("hidden")]] extern U8 GameData_207b338[];
[[gnu::visibility("hidden")]] extern U8 GameData_207b428[];
[[gnu::visibility("hidden")]] extern U8 GameData_207baf0[];
[[gnu::visibility("hidden")]] extern U8 GameData_2088c70[];
[[gnu::visibility("hidden")]] extern U8 GameData_2109938[];

[[gnu::visibility("hidden")]] void GameStub_689550(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f909e0);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_689750(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_742f40(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f94cd8);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_743150(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_75ccc0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f95958);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_75ced0(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_77f500(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f97890);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_77f710(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_77fd10(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f97910);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_77ff30(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_780e40(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f97b10);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_781070(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_781380(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f97b90);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_7815a0(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_781750(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f97c10);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_781970(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_7a6f50(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f98af8);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x50);
  if (function == object + 0x30) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_7a7170(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x50);
  if (function == object + 0x30) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_7ab2a0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f98f48);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_7ab4b0(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_7ab590(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f98fc8);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_7ab7a0(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_7ab910(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f99048);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_7abb20(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_7ac3e0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f99148);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_7ac5f0(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_7b8e20(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f99748);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_7b9030(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_7d43f0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f9b7a8);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_7d45f0(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_7f6b40(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f9c968);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_7f6d40(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_835f70(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f9f930);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_836180(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_8587c0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fa13e8);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_8589c0(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_858a90(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fa1468);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_858c90(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_8f3630(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fac2a0);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_8f3840(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_8f8680(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1faca60);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_8f8880(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_900840(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1facf80);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_900a40(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_a0f8c0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fbd098);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_a72050(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_adb9f0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fc2718);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_adbc00(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_adbca0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fc2798);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_adbeb0(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_adbf50(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fc2818);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_adc160(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_bc87a0(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_bec870(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fd0ad0);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_beca80(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_c49390(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fd20c0);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_c49590(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_d70a40(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fdd3d0);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_d70c50(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_dfe430(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe1f70);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_dfe630(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_dfe7c0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe1ff0);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_dfe9c0(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_dfea60(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe2070);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_dfec60(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_e7eea0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe81c8);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_e7f0b0(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_1052d10(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2005218);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_1052f10(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_166aea0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_207b338);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x50);
  if (function == object + 0x30) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_166b0c0(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x50);
  if (function == object + 0x30) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_166b440(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_207b428);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_166b640(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_166bb80(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_207baf0);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_166bda0(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_16a8d10(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2088c70);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_16a8f10(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_18d6020(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2109938);
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}

[[gnu::visibility("hidden")]] void GameStub_18d6230(U64 object) {
  using Method = void (*)(U64);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }
}
