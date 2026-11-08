#include <stdint.h>

#include "snd/api.hpp"
#include "snd/fade.hpp"

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern bool GameData_22628f0;

[[gnu::visibility("hidden")]] void GameStub_a0a040(U64) {
  snd::play("SE_SYS_Cursor_H_ModeSelect", "SE_SYS_Cursor_H_ModeSelect",
    snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Cursor_Medium",
      "VIB_Cursor_Medium", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_a0a110(U64) {
  snd::play("SE_SYS_Cursor_H_ModeSelect", "SE_SYS_Cursor_H_ModeSelect",
    snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Cursor_Medium",
      "VIB_Cursor_Medium", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_a0ac50(U64) {
  snd::play("SE_SYS_Cursor_H_ModeSelect", "SE_SYS_Cursor_H_ModeSelect",
    snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Cursor_Medium",
      "VIB_Cursor_Medium", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_a0ad20(U64) {
  snd::play("SE_SYS_Cursor_H_ModeSelect", "SE_SYS_Cursor_H_ModeSelect",
    snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Cursor_Medium",
      "VIB_Cursor_Medium", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_161a840(U64) {
  snd::play("SE_SYS_Cursor_CmdBtlUnit", "SE_SYS_Cursor_CmdBtlUnit",
    snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Cursor_Chara",
      "VIB_Cursor_Chara", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_161a910(U64) {
  snd::play("SE_SYS_Cursor_CmdBtlUnit", "SE_SYS_Cursor_CmdBtlUnit",
    snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Cursor_Chara",
      "VIB_Cursor_Chara", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_161a9e0(U64) {
  snd::play("SE_SYS_Cursor_CmdBtlUnit", "SE_SYS_Cursor_CmdBtlUnit",
    snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Cursor_Chara",
      "VIB_Cursor_Chara", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_161aab0(U64) {
  snd::play("SE_SYS_Cursor_CmdBtlUnit", "SE_SYS_Cursor_CmdBtlUnit",
    snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Cursor_Chara",
      "VIB_Cursor_Chara", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_1669a10(U64) {
  snd::play("SE_SYS_Cursor_Left_EX", "SE_SYS_Cursor_Left_EX", snd::Fade(0.0f),
    0, 0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Page_Back",
      "VIB_Page_Back", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_1669ae0(U64) {
  snd::play("SE_SYS_Cursor_Left_EX", "SE_SYS_Cursor_Left_EX", snd::Fade(0.0f),
    0, 0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Page_Back",
      "VIB_Page_Back", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_1669bb0(U64) {
  snd::play("SE_SYS_Cursor_Right_EX", "SE_SYS_Cursor_Right_EX",
    snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Page_Send",
      "VIB_Page_Send", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_1669c80(U64) {
  snd::play("SE_SYS_Cursor_Right_EX", "SE_SYS_Cursor_Right_EX",
    snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Page_Send",
      "VIB_Page_Send", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_1691220(U64) {
  snd::play("SE_SYS_Cursor_H_EX", "SE_SYS_Cursor_H_EX", snd::Fade(0.0f), 0,
    0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Cursor_Medium",
      "VIB_Cursor_Medium", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_16912f0(U64) {
  snd::play("SE_SYS_Cursor_H_EX", "SE_SYS_Cursor_H_EX", snd::Fade(0.0f), 0,
    0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Cursor_Medium",
      "VIB_Cursor_Medium", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_16a0880(U64) {
  snd::play("SE_SYS_Cursor_Title", "SE_SYS_Cursor_Title", snd::Fade(0.0f), 0,
    0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Cursor_Large",
      "VIB_Cursor_Large", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_16a0950(U64) {
  snd::play("SE_SYS_Cursor_Title", "SE_SYS_Cursor_Title", snd::Fade(0.0f), 0,
    0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Cursor_Large",
      "VIB_Cursor_Large", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_1753cd0(U64) {
  snd::play("SE_SYS_Cursor_Result", "SE_SYS_Cursor_Result", snd::Fade(0.0f),
    0, 0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Cursor_Medium",
      "VIB_Cursor_Medium", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_1753da0(U64) {
  snd::play("SE_SYS_Cursor_Result", "SE_SYS_Cursor_Result", snd::Fade(0.0f),
    0, 0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Cursor_Medium",
      "VIB_Cursor_Medium", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_179cdc0(U64) {
  snd::play("SE_SYS_Cursor_H_CharaMake", "SE_SYS_Cursor_H_CharaMake",
    snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Cursor_Medium",
      "VIB_Cursor_Medium", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_179ce90(U64) {
  snd::play("SE_SYS_Cursor_H_CharaMake", "SE_SYS_Cursor_H_CharaMake",
    snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Cursor_Medium",
      "VIB_Cursor_Medium", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_179d830(U64) {
  snd::play("SE_SYS_CharaChange_CharaMake", "SE_SYS_CharaChange_CharaMake",
    snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Cursor_Left",
      "VIB_Cursor_Left", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}

[[gnu::visibility("hidden")]] void GameStub_179d900(U64) {
  snd::play("SE_SYS_CharaChange_CharaMake", "SE_SYS_CharaChange_CharaMake",
    snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
  snd::fnd::WeakHandle vibration;
  if (GameData_22628f0) {
    const snd::fnd::WeakHandle cue = snd::play("VIB_Cursor_Left",
      "VIB_Cursor_Left", snd::Fade(0.0f), 0, 0x10001, 0, 0.0f, 1.0f);
    vibration = cue;
  }
}
