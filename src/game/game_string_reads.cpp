#include <stdint.h>
#include <string.h>

#include <string>

using U64 = uint64_t;

[[gnu::visibility("hidden")]] void GameRoutine_2020(U64 reader,
  int16_t* pSize);
[[gnu::visibility("hidden")]] void GameRoutine_2500(U64 reader,
  char* buffer, int64_t size);

namespace {

// Reads a sized string from the reader at offset 0 and compares it with the
// expected one, an empty expected string always matches.
[[gnu::always_inline]] inline bool MatchesRead(const U64* reader,
  const std::string& expected) {
  if (std::string(expected).empty()) {
    return true;
  }

  std::string read;
  {
    int16_t size = 0;
    GameRoutine_2020(reader[0], &size);

    char* buffer = new char[size];
    memset(buffer, 0, size);
    GameRoutine_2500(reader[0], buffer, size);
    read.assign(buffer, size);
    delete[] buffer;
  }

  return std::string(expected).compare(read) == 0;
}

}

#define GAME_STRING_READ(address) \
  [[gnu::visibility("hidden")]] bool GameStringRead_##address( \
    const U64* reader, const std::string& expected) { \
    return MatchesRead(reader, expected); \
  }

GAME_STRING_READ(c05690)
GAME_STRING_READ(c05d90)
GAME_STRING_READ(c05fb0)
GAME_STRING_READ(c3b3f0)
GAME_STRING_READ(c3d0b0)
GAME_STRING_READ(c3d2d0)
GAME_STRING_READ(c3d510)
GAME_STRING_READ(c3da20)
GAME_STRING_READ(c3dd90)
GAME_STRING_READ(c3e190)
GAME_STRING_READ(c3e540)
GAME_STRING_READ(c3ea50)
GAME_STRING_READ(c3ee60)
GAME_STRING_READ(c49640)
