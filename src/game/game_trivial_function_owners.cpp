#include <stdint.h>

#include "memory/heap_manager.hpp"

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

[[gnu::visibility("hidden")]] void GameStub_689590(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f909e0);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_742f80(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f94cd8);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_75cd00(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f95958);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_77f540(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f97890);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_77fd50(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f97910);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_780e80(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f97b10);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_7813c0(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f97b90);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_781790(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f97c10);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_7a6f90(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f98af8);
  const U64 function = At<U64>(object, 0x50);
  if (function == object + 0x30) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_7ab2e0(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f98f48);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_7ab5d0(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f98fc8);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_7ab950(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f99048);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_7ac420(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f99148);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_7b8e60(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f99748);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_7d4430(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f9b7a8);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_7f6b80(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f9c968);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_835fb0(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f9f930);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_858800(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fa13e8);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_858ad0(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fa1468);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_8f3670(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fac2a0);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_8f86c0(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1faca60);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_900880(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1facf80);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_a0f900(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fbd098);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_adba30(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fc2718);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_adbce0(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fc2798);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_adbf90(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fc2818);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_bec8b0(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fd0ad0);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_c493d0(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fd20c0);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_d70a80(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fdd3d0);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_dfe470(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe1f70);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_dfe800(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe1ff0);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_dfeaa0(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe2070);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e7eee0(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe81c8);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_1052d50(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2005218);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_166aee0(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_207b338);
  const U64 function = At<U64>(object, 0x50);
  if (function == object + 0x30) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_166b480(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_207b428);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_166bbc0(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_207baf0);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_16a8d50(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2088c70);
  const U64 function = At<U64>(object, 0x30);
  if (function == object + 0x10) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_18d6060(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2109938);
  const U64 function = At<U64>(object, 0x40);
  if (function == object + 0x20) {
    At<Method>(At<U64>(function, 0), 0x20)(function);
  }
  else if (function != 0) {
    At<Method>(At<U64>(function, 0), 0x28)(function);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}
