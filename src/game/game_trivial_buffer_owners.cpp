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

[[gnu::visibility("hidden")]] extern U8 GameData_1f93a10[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f9d2b0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fa1068[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fa10e8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fa9000[];
[[gnu::visibility("hidden")]] extern U8 GameData_1faf2d8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fc4f00[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fdf380[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fe3568[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fe4578[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fe6130[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ff6278[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ffc858[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ffd300[];
[[gnu::visibility("hidden")]] extern U8 GameData_2003680[];
[[gnu::visibility("hidden")]] extern U8 GameData_2005ce0[];
[[gnu::visibility("hidden")]] extern U8 GameData_2043608[];
[[gnu::visibility("hidden")]] extern U8 GameData_20aede0[];
[[gnu::visibility("hidden")]] extern U8 GameData_20c2320[];
[[gnu::visibility("hidden")]] extern U8 GameData_20c2420[];
[[gnu::visibility("hidden")]] extern U8 GameData_20f37c8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20f38c8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20fd598[];
[[gnu::visibility("hidden")]] extern U8 GameData_2110448[];

[[gnu::visibility("hidden")]] void GameStub_72b410(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f93a10);
  const U64 begin = At<U64>(object, 0x408);
  if (begin != 0) {
    At<U64>(object, 0x410) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_803e00(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f9d2b0);
  const U64 begin = At<U64>(object, 0x8);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_857b40(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fa1068);
  const U64 begin = At<U64>(object, 0x8);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_857e20(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fa10e8);
  const U64 begin = At<U64>(object, 0x8);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_8b2f30(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fa9000);
  const U64 begin = At<U64>(object, 0x8);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_943e10(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1faf2d8);
  const U64 begin = At<U64>(object, 0x10);
  if (begin != 0) {
    At<U64>(object, 0x18) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_b33020(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fc4f00);
  if ((At<U8>(object, 0x8) & 1) != 0) {
    const U64 data = At<U64>(object, 0x18);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_da79b0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fdf380);
  const U64 begin = At<U64>(object, 0x8);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e202f0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe3568);
  const U64 begin = At<U64>(object, 0x8);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e37a10(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe4578);
  if ((At<U8>(object, 0x10) & 1) != 0) {
    const U64 data = At<U64>(object, 0x20);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e52aa0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe6130);
  if ((At<U8>(object, 0x18) & 1) != 0) {
    const U64 data = At<U64>(object, 0x28);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e52b80(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe6130);
  if ((At<U8>(object, 0x18) & 1) != 0) {
    const U64 data = At<U64>(object, 0x28);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e53050(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe6130);
  if ((At<U8>(object, 0x18) & 1) != 0) {
    const U64 data = At<U64>(object, 0x28);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e53900(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe6130);
  if ((At<U8>(object, 0x18) & 1) != 0) {
    const U64 data = At<U64>(object, 0x28);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e54040(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe6130);
  if ((At<U8>(object, 0x18) & 1) != 0) {
    const U64 data = At<U64>(object, 0x28);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e54130(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe6130);
  if ((At<U8>(object, 0x18) & 1) != 0) {
    const U64 data = At<U64>(object, 0x28);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e54220(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe6130);
  if ((At<U8>(object, 0x18) & 1) != 0) {
    const U64 data = At<U64>(object, 0x28);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e549f0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe6130);
  if ((At<U8>(object, 0x18) & 1) != 0) {
    const U64 data = At<U64>(object, 0x28);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_f5d7e0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1ff6278);
  const U64 begin = At<U64>(object, 0x8);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_fb81a0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1ffc858);
  const U64 begin = At<U64>(object, 0x38);
  if (begin != 0) {
    At<U64>(object, 0x40) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_fc6d60(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1ffd300);
  const U64 begin = At<U64>(object, 0x30);
  if (begin != 0) {
    At<U64>(object, 0x38) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_103dae0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2003680);
  const U64 begin = At<U64>(object, 0x28);
  if (begin != 0) {
    At<U64>(object, 0x30) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_1063fd0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2005ce0);
  const U64 begin = At<U64>(object, 0x58);
  if (begin != 0) {
    At<U64>(object, 0x60) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_14908a0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2043608);
  if ((At<U8>(object, 0x8) & 1) != 0) {
    const U64 data = At<U64>(object, 0x18);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_171a960(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_20aede0);
  if ((At<U8>(object, 0x18) & 1) != 0) {
    const U64 data = At<U64>(object, 0x28);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_177fa30(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_20c2320);
  const U64 begin = At<U64>(object, 0x10);
  if (begin != 0) {
    At<U64>(object, 0x18) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_1780420(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_20c2420);
  const U64 begin = At<U64>(object, 0x10);
  if (begin != 0) {
    At<U64>(object, 0x18) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_186f530(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_20f37c8);
  const U64 begin = At<U64>(object, 0x18);
  if (begin != 0) {
    At<U64>(object, 0x20) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_186fa60(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_20f38c8);
  const U64 begin = At<U64>(object, 0x18);
  if (begin != 0) {
    At<U64>(object, 0x20) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_1881ba0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_20fd598);
  const U64 begin = At<U64>(object, 0x8);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_191c170(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2110448);
  if ((At<U8>(object, 0x38) & 1) != 0) {
    const U64 data = At<U64>(object, 0x48);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_191c2a0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2110448);
  if ((At<U8>(object, 0x38) & 1) != 0) {
    const U64 data = At<U64>(object, 0x48);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_191c330(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2110448);
  if ((At<U8>(object, 0x38) & 1) != 0) {
    const U64 data = At<U64>(object, 0x48);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_191c6c0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2110448);
  if ((At<U8>(object, 0x38) & 1) != 0) {
    const U64 data = At<U64>(object, 0x48);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}
